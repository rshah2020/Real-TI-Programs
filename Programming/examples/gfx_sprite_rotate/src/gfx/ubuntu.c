// convpng
#include <stdint.h>
#include "logo_gfx.h"

// 8 bpp image
uint8_t ubuntu_data[1026] = {
 32,32,  // width,height
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0B,0x45,0x27,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x13,0x07,0x07,0x01,0x20,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x5B,0x41,0x4E,0x0E,0x90,0x14,0xA5,0x07,0x07,0x07,0x07,0x28,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x84,0x10,0x09,0x09,0x09,0x09,0x09,0xA8,0xA0,0x07,0x07,0x07,0x07,0x43,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x85,0x00,0x8B,0x15,0x09,0x09,0x09,0x09,0x09,0xA4,0x04,0xA2,0x07,0x07,0x95,0x58,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x83,0x0F,0x00,0x8A,0x09,0x09,0x09,0x09,0x09,0x15,0xA6,0xA3,0x9B,0x9F,0x96,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x03,0x08,0x0D,0x00,0x7F,0x86,0x6B,0x8E,0x92,0x1A,0x09,0x9C,0xA7,0x9E,0x94,0x11,0x5E,0x04,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5F,0x55,0x08,0x08,0x02,0x17,0x00,0x62,0x5C,0x05,0x00,0x93,0xA1,0x9D,0x09,0x09,0x8F,0x09,0x09,0x3E,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x9A,0x08,0x08,0x08,0x08,0x87,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x91,0x8C,0x09,0x09,0x09,0x53,0x4A,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xAF,0x03,0x08,0x08,0x08,0x7E,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5A,0x09,0x09,0x09,0x09,0x0E,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xB7,0x08,0x08,0x08,0x02,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x51,0x09,0x09,0x09,0x10,0x04,0x00,0x00,
 0x00,0x00,0x00,0x8D,0xAB,0xAD,0xBD,0x05,0x16,0x08,0x08,0x99,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x61,0x09,0x09,0x09,0x09,0x14,0x00,0x00,
 0x00,0x00,0x0C,0xAA,0x09,0x09,0xB0,0x19,0xBC,0xB9,0x08,0xAC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x75,0x71,0x6C,0x69,0x64,0x73,0x00,0x00,
 0x00,0x00,0x81,0x09,0x09,0x09,0x09,0xBA,0x00,0xB6,0x08,0xB3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x11,0x09,0x09,0x09,0x09,0xB4,0x00,0xBB,0x08,0xA9,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5D,0x67,0x6D,0x74,0x60,0x56,0x00,0x00,
 0x00,0x00,0x04,0x89,0x09,0x09,0x1A,0xB5,0xB1,0xB2,0x08,0x98,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4C,0x07,0x07,0x07,0x07,0x50,0x00,0x00,
 0x00,0x00,0x00,0x0C,0x19,0x97,0xAE,0x18,0xB8,0x08,0x08,0x82,0x48,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x42,0x07,0x07,0x07,0x4D,0x0B,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x17,0x08,0x08,0x08,0x08,0x37,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x06,0x07,0x07,0x07,0x47,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x88,0x08,0x08,0x08,0x08,0x2E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x76,0x4F,0x07,0x07,0x07,0x29,0x24,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4B,0x08,0x08,0x08,0x08,0x35,0x00,0x36,0x04,0x00,0x00,0x00,0x12,0x7D,0x01,0x07,0x07,0x07,0x07,0x22,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x3A,0x08,0x08,0x2F,0x04,0x3B,0x30,0x46,0x49,0x59,0x6F,0x6E,0x07,0x07,0x06,0x01,0x07,0x40,0x21,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x39,0x0D,0x0A,0x31,0x00,0x34,0x07,0x07,0x07,0x07,0x07,0x07,0x78,0x7C,0x12,0x79,0x7A,0x3D,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x33,0x00,0x38,0x32,0x07,0x07,0x07,0x07,0x07,0x68,0x77,0x65,0x72,0x63,0x52,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2D,0x06,0x07,0x07,0x07,0x07,0x07,0x7B,0x04,0x66,0x08,0x08,0x03,0x2B,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2C,0x26,0x2A,0x3F,0x44,0x13,0x57,0x6A,0x08,0x08,0x08,0x08,0x23,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x02,0x08,0x08,0x08,0x1B,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x16,0x08,0x08,0x0A,0x1E,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x25,0x1D,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};