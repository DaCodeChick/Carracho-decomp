#pragma once

#ifdef _WIN32
#include "typedefs.h"

class SRegion
{
public:
	SRegion();
	SRegion(RECT &inRect);
	virtual ~SRegion();
private:
	HRGN mRegionH;
};
#endif // _WIN32
