#include "UClientUtils.h"

#include <cstring>

void UClientUtils::EncryptDecryptPassword(char *inText)
{
    if (!inText) return;

    size_t length = strlen(inText);
    for (size_t i = 0; i < length; ++i)
        switch (i % 3)
		{
            case 0:
                inText[i] ^= 0x80;
                inText[i] ^= 0x08;
                break;
            case 1:
                inText[i] ^= 0x04;
                inText[i] ^= 0x40;
                break;
            case 2:
                inText[i] ^= 0x10;
                inText[i] ^= 0x02;
                break;
        }
}
