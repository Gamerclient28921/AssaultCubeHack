#pragma once
#include "Vector3.h"
#include <cstdint>


class Player
{
public:
	char pad_0000[4]; //0x0000
	Vector3 HeadPos; //0x0004
	char pad_0010[24]; //0x0010
	Vector3 NewPos; //0x0028
	Vector3 BodyPos; //0x0034
	Vector3 LookVector; //0x0040
	char pad_004C[172]; //0x004C
	int32_t Health; //0x00F8
	int32_t Armor; //0x00FC
	char pad_0100[932]; //0x0100
};