#include <avm2/DataTypes.h>

u8 u8_read(byte** buf)
{
	return *((*buf)++);
}

u16 u16_read(byte** buf)
{
	u8 bL = u8_read(buf),
	   bH = u8_read(buf);

	return (bH << 8) | bL;
}

s24 s24_read(byte** buf)
{
	u16 sL = u16_read(buf);
	u8 bH = u8_read(buf);

	int ret = (bH << 16) | sL;
	
	if (bH & 0x80)
		ret = -1 - (ret ^ 0xFFFFFF);

	return ret;
}

u30 u30_read(byte** buf)
{
	byte* s = (*buf) + 1;
	u30 ret = 0;
	u8 c = 0;
	
	do {
		c = u8_read(buf);
		ret |= (c & 0x7F) << (((*buf)-s) * 7);
	} while ((c & 0x80) && ((*buf) - s) < 5);

	printf("read %d bytes", (*buf) - s);

	return ret;
}

u32 u32_read(byte** buf)
{
	return u30_read(buf);
}

s32 s32_read(byte** buf)
{
	return (s32)(u30_read(buf));
}

d64 d64_read(byte** buf)
{
	union {
		d64 ret;
		char data[8];
	} conv;
	
	for (int i = 0; i < 8; i++)
		conv.data[i] = u8_read(buf);

	return conv.ret;
}