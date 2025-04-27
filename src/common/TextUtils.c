#include "TextUtils.h"

#include <string.h>

void c2pstrcpy(uchar *dst, const char *src)
{
	int length = strlen(src);

	if (length > 255) length = 255;
	dst[0] = length;
	for (int i = 0; i < length; i++)
		dst[i + 1] = src[i];
}

void p2cstrcpy(char *dst, ConstStr255Param src)
{
	int length = src[0];

	if (length > 255) length = 255;
	for (int i = 0; i < length; i++)
		dst[i] = src[i + 1];
	dst[length] = 0;
}
