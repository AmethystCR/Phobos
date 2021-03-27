#pragma once

class GeneralUtils
{
public:
    static bool IsValidString(const char* str);
    static const wchar_t* LoadStringOrDefault(char* key, const wchar_t* defaultValue);
    static const wchar_t* LoadStringUnlessMissing(char* key, const wchar_t* defaultValue);
};