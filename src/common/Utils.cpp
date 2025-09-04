#include "Utils.h"

#include <cstring>

void EncryptDecryptPassword(char *ioText)
{
	if (!ioText)
		return;

	auto length = std::strlen(ioText);
	for (auto i = 0; i < length; ++i)
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
