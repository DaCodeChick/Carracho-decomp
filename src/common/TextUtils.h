#pragma once

#include "typedefs.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

void c2pstrcpy(uchar *dst, const char *src);
void p2cstrcpy(char *dst, ConstStr255Param src);

#ifdef __cplusplus
}
#endif // __cplusplus
