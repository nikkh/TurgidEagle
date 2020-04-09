// MathLibrary.h - Contains declarations of math functions
#pragma once


#define TURGIDEAGLE_API __declspec(dllexport)
#include <comdef.h>

extern "C" TURGIDEAGLE_API unsigned calculate_square(unsigned num);

// Nicks Test string Function
extern "C" TURGIDEAGLE_API BSTR get_library_name();