#pragma once

#include <png.h>

#include "cfg.h"

class CAAPI SPNGImage
{
public:
	virtual ~SPNGImage();

	bool IsPNGImage() const
	{
		return png_check_sig(mData, 8);
	}

private:
	png_bytep mData;
	bool mIsValid;
};
