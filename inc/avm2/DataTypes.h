#ifndef __AVM2_DATA_TYPES__
#define __AVM2_DATA_TYPES__

typedef unsigned char byte, u8;
typedef unsigned short u16;
typedef int s24;
typedef unsigned int u30, u32;
typedef signed int s32;
typedef double d64;

u8 u8_read(byte** buf);
u16 u16_read(byte** buf);
s24 s24_read(byte** buf);
u30 u30_read(byte** buf);
u32 u32_read(byte** buf);
s32 s32_read(byte** buf);
d64 d64_read(byte** buf);


#if defined(__linux__) || defined(linux) || defined(__linux)
#define AVM_LINUX
#elif defined(macintosh) || defined(Macintosh) || (defined(__APPLE__) && defined(__MACH__))
#define AVM_MACOS
#elif defined(_WIN16) || defined(_WIN32) || defined(_WIN64) || defined(__WIN32__) || defined(__TOS_WIN__) || defined(__WINDOWS__)
#define AVM_WINDOWS	
#endif

// TODO: implement checking & BIG_ENDIAN
#define AVM_LITTLE_ENDIAN

#endif //__AVM2_DATA_TYPES__