#include "URegions.h"

SRegion::SRegion() : mRegionH(CreateRectRgn(0, 0, 0, 0))
{
}

SRegion::SRegion(RECT &inRect)
    : mRegionH(CreateRectRgn(inRect.left, inRect.top, inRect.right, inRect.bottom))
{
}

SRegion::~SRegion()
{
	if (mRegionH)
		DeleteObject(mRegionH);
}
