using System;
using System.Collections.Generic;
using System.Reflection;
using System.Text;

public static class ObjectToStringExtension
{
    public static string ToStringFormat(this object obj)
    {
        var visitedObjects = new HashSet<object>();

        return ToStringFormatInternal(obj, visitedObjects, 0);
    }

    private static string ToStringFormatInternal(object obj, HashSet<object> visitedObjects, int indent)
    {
        if (obj == null || visitedObjects.Contains(obj))
        {
            return "";
        }

        visitedObjects.Add(obj);

        var type = obj.GetType();
        var properties = type.GetProperties(BindingFlags.Public | BindingFlags.Instance);
        var fields = type.GetFields(BindingFlags.Public | BindingFlags.Instance);
        var spaces = GetIndentation(indent);

        var result = new StringBuilder();

        result.AppendLine($"{spaces}{{");

        foreach (var property in properties)
        {
            var value = property.GetValue(obj);

            if (IsSimpleType(property.PropertyType))
            {
                result.AppendLine($"{spaces}    \"{property.Name}\": \"{value}\"");
            }
            else
            {
                var childResult = ToStringFormatInternal(value, visitedObjects, indent + 1);
                result.AppendLine($"{spaces}    \"{property.Name}\": {childResult}");
            }
        }

        foreach (var field in fields)
        {
            var value = field.GetValue(obj);

            if (IsSimpleType(field.FieldType))
            {
                result.AppendLine($"{spaces}    \"{field.Name}\": \"{value}\"");
            }
            else
            {
                var childResult = ToStringFormatInternal(value, visitedObjects, indent + 1);
                result.AppendLine($"{spaces}    \"{field.Name}\": {childResult}");
            }
        }

        result.AppendLine($"{spaces}}}");

        visitedObjects.Remove(obj);

        return result.ToString();
    }

    private static bool IsSimpleType(Type type)
    {
        return type.IsPrimitive || type == typeof(string) || type == typeof(decimal);
    }

    private static string GetIndentation(int indent)
    {
        const int spacesPerIndent = 4;
        var spaces = new string(' ', indent * spacesPerIndent);
        return spaces;
    }
}
