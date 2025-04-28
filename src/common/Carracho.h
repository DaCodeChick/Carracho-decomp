#pragma once

#include <cstdint>

struct ca_packet_header
{
};

struct hl_header
{
	uint8_t flag;
	bool isReply;
	uint16_t type;
	uint32_t id;
	uint32_t error;
	uint32_t totalSize;
	uint32_t dataSize;
	uint16_t fieldCount;
};
