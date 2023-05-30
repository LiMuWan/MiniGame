using System;
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEngine;

public static class CSharpExtension 
{
    public static bool IsFirstDecimalZero(this float value)
    {
        string str = value.ToString("0.0#######");
        var match = Regex.Match(str, @"(?<=\.)0");
        if (match.Success)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public static float RoundToOneDecimal(this float value)
    {
        return (float)Math.Round(value, 1);
    }
}
