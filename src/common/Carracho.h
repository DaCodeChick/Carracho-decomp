#pragma once

#include "typedefs.h"

struct ca_packet_header
{
};

struct hl_header
{
	byte flag;
	bool isReply;
	ushort type;
	uint id;
	uint error;
	uint totalSize;
	uint dataSize;
	ushort fieldCount;
};
