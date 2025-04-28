#include "URegions.h"

SRegion::SRegion() :
#ifdef _WIN32
	mRegionH(CreateRectRgn(0, 0, 0, 0))
#elif defined(__APPLE__)
	mRegionH(CGPathCreateMutable())
#else
	mRegionH(nullptr)
#endif // _WIN32
{
}

SRegion::SRegion(RectT &inRect) :
#ifdef _WIN32
	mRegionH(CreateRectRgn(inRect.left, inRect.top, inRect.right, inRect.bottom))
#endif // _WIN32
{
#if defined(__APPLE__)
	mRegionH = CGPathCreateMutable();
	CGPathAddRect(mRegionH, nullptr, CGRectMake(inRect.left, inRect.top, inRect.right - inRect.left, inRect.bottom - inRect.top));
#endif // __APPLE__
}

SRegion::~SRegion()
{
	if (mRegionH)
#ifdef _WIN32
		DeleteObject(mRegionH);
#elif defined(__APPLE__)
		CGPathRelease(mRegionH);
#else
#endif // _WIN32
}
