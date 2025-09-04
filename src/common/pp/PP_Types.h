#pragma once

#ifdef _WIN32
#include <windows.h>

typedef RECT RectT; ///< Represents a rectangle.
typedef HRGN RegionT; ///< Represents a region.
typedef WCHAR CharT; ///< Represents a character.
#elif defined(__APPLE__)
#include <CoreGraphics/CoreGraphics.h>

typedef CGRect RectT; ///< Represents a rectangle.
typedef CGMutablePathRef RegionT; ///< Represents a region.
#else
#endif // _WIN32

#ifndef _WIN32
typedef char CharT; ///< Represents a character.
#endif // _WIN32
