#include "UClientUtils.h"

#include <cstring>

void UClientUtils::EncryptDecryptPassword(char *ioText)
{
	if (!ioText)
		return;

	size_t length = strlen(ioText);
	for (size_t i = 0; i < length; ++i)
		switch (i % 3)
		{
			case 0:
				ioText[i] ^= 0x88;
				break;
			case 1:
				ioText[i] ^= 0x44;
				break;
			case 2:
				ioText[i] ^= 0x12;
				break;
		}
}
