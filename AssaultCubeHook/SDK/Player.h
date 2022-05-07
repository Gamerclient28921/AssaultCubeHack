#pragma once
#include "../Math/Math.hpp"
#include <cstdint>


class Player
{
private:
	char pad_0000[4]; //0x0000
public:
	Vector3<float> HeadPos; //0x0004
private:
	char pad_0010[24]; //0x0010
public:
	Vector3<float> NewPos; //0x0028
	Vector3<float> BodyPos; //0x0034
	Vector3<float> LookVector; //0x0040
private:
	char pad_004C[172]; //0x004C
public:
	int32_t Health; //0x00F8
	int32_t Armor; //0x00FC
private:
	char pad_0100[60]; //0x0100
public:
	int32_t pistolAmmo; //0x013C
private:
	char pad_0140[16]; //0x0140
public:
	int32_t assaultRifleAmmo; //0x0150
private:
	char pad_0154[12]; //0x0154
public:
	int64_t knifedelay; //0x0160
private:
	char pad_0168[3836]; //0x0168
};