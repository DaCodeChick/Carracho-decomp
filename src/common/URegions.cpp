#include "URegions.h"

SRegion::SRegion(RECT &inRect):
	mRegionH(CreateRectRgn(inRect.left, inRect.top, inRect.right, inRect.bottom))
{
}

SRegion::~SRegion()
{
	if (mRegionH) DeleteObject(mRegionH);
}
