#pragma once

#include <png.h>

class SPNGImage
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
