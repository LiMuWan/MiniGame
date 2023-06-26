using System;
using System.Collections;
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
            else if (property.PropertyType.IsArray) // 判断是否为数组类型
            {
                var childResult = new StringBuilder();
                var array = (Array)value;

                childResult.AppendLine($"{spaces}    \"{property.Name}\": ["); // 在对象外面加[]

                foreach (var item in array)
                {
                    if (IsSimpleType(item.GetType())) // 如果数组成员为简单类型，则直接添加到结果字符串中
                    {
                        childResult.AppendLine($"{spaces}        \"{item}\",");
                    }
                    else // 如果为复杂类型，则递归调用 ToStringFormatInternal 方法
                    {
                        childResult.AppendLine($"{ToStringFormatInternal(item, visitedObjects, indent + 2)},");
                    }
                }

                childResult.Remove(childResult.Length - 3, 1); // 删除最后一个逗号
                childResult.AppendLine($"{spaces}    ]");

                result.AppendLine(childResult.ToString());
            }
            else if (value is IList list) // 判断是否为 List<T> 类型
            {
                var childResult = new StringBuilder();

                childResult.AppendLine($"{spaces}    \"{property.Name}\": ["); // 在对象外面加[]

                foreach (var item in list)
                {
                    if (IsSimpleType(item.GetType())) // 如果 List 成员为简单类型，则直接添加到结果字符串中
                    {
                        childResult.AppendLine($"{spaces}        \"{item}\",");
                    }
                    else // 如果为复杂类型，则递归调用 ToStringFormatInternal 方法
                    {
                        childResult.AppendLine($"{ToStringFormatInternal(item, visitedObjects, indent + 2)},");
                    }
                }

                childResult.Remove(childResult.Length - 3, 1); // 删除最后一个逗号
                childResult.AppendLine($"{spaces}    ]");

                result.AppendLine(childResult.ToString());
            }
            else // 如果不是数组或 List 成员，同原代码处理方式
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
            else if (field.FieldType.IsArray) // 判断是否为数组类型
            {
                var childResult = new StringBuilder();
                var array = (Array)value;

                childResult.AppendLine($"{spaces}    \"{field.Name}\": ["); // 在对象外面加[]

                foreach (var item in array)
                {
                    if (IsSimpleType(item.GetType())) // 如果数组成员为简单类型，则直接添加到结果字符串中
                    {
                        childResult.AppendLine($"{spaces}        \"{item}\",");
                    }
                    else // 如果为复杂类型，则递归调用 ToStringFormatInternal 方法
                    {
                        childResult.AppendLine($"{ToStringFormatInternal(item, visitedObjects, indent + 2)},");
                    }
                }

                childResult.Remove(childResult.Length - 3, 1); // 删除最后一个逗号
                childResult.AppendLine($"{spaces}    ]");

                result.AppendLine(childResult.ToString());
            }
            else if (value is IList list) // 判断是否为 List<T> 类型
            {
                var childResult = new StringBuilder();

                childResult.AppendLine($"{spaces}    \"{field.Name}\": ["); // 在对象外面加[]

                foreach (var item in list)
                {
                    if (IsSimpleType(item.GetType())) // 如果 List 成员为简单类型，则直接添加到结果字符串中
                    {
                        childResult.AppendLine($"{spaces}        \"{item}\",");
                    }
                    else // 如果为复杂类型，则递归调用 ToStringFormatInternal 方法
                    {
                        childResult.AppendLine($"{ToStringFormatInternal(item, visitedObjects, indent + 2)},");
                    }
                }

                childResult.Remove(childResult.Length - 3, 1); // 删除最后一个逗号
                childResult.AppendLine($"{spaces}    ]");

                result.AppendLine(childResult.ToString());
            }
            else // 如果不是数组或 List 成员，同原代码处理方式
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
