#pragma once

#ifdef _WIN32
#include <windows.h>

typedef RECT RectT;
typedef HRGN RegionT;
#elif defined(__APPLE__)
#include <CoreGraphics/CoreGraphics.h>

typedef CGRect RectT;
typedef CGMutablePathRef RegionT;
#else
#endif
