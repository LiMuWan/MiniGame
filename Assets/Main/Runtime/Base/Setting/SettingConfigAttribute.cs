using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[AttributeUsage(AttributeTargets.Class, AllowMultiple = true)]
public class SettingConfigAttribute : Attribute
{
    public string Group { set; get; } = string.Empty;
    public string Key { set; get; }
    public string Value { set; get; }
    public string Label { set; get; }
    public SettingConfigAttribute() { }
}
