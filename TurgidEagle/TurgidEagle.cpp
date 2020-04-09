// MathLibrary.cpp : Defines the exported functions for the DLL.
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include <utility>
#include <limits.h>
#include "TurgidEagle.h"
#include <string>

unsigned TURGIDEAGLE_API calculate_square(unsigned num)
{
    return num * num;
}

BSTR TURGIDEAGLE_API get_library_name()
{
    return SysAllocString(L"Library Name is TurgidEagle");
}


