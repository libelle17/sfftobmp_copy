// MH markup codes
//
// This file is part of sfftobmp, a program to convert
// structured fax files (sff) to windows bitmap files (bmp),
// portable bitmap graphics (pbm), tagged image file format (tiff)
// or JPEG (jpg).
//
// Copyright (C) 1998-2008 Peter Schaefer-Hutter and contributors ("THE AUTHORS")
//
// Permission to use, copy, modify, distribute, and sell this software and
// its documentation for any purpose is hereby granted without fee.
//
// THE SOFTWARE IS PROVIDED "AS-IS" AND WITHOUT WARRANTY OF ANY KIND,
// EXPRESS, IMPLIED OR OTHERWISE, INCLUDING WITHOUT LIMITATION, ANY
// WARRANTY OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE.
//
// IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY SPECIAL,
// INCIDENTAL, INDIRECT OR CONSEQUENTIAL DAMAGES OF ANY KIND, OR ANY
// DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,
// WHETHER OR NOT ADVISED OF THE POSSIBILITY OF DAMAGE, AND ON ANY
// THEORY OF LIABILITY, ARISING OUT OF OR IN CONNECTION WITH THE USE
// OR PERFORMANCE OF THIS SOFTWARE.
//
// Contributor(s):
//   None
//
// You can contact the original author by email at peter.schaefer@gmx.de.
//
// I'm always pleased to hear that somebody is actually using my software.
// If you can manage it, e-mail me a quick notice. Thanks!
//
/*-RCS-Info----------------------------------------------------

 $Id: codes.cpp,v 1.3 2008/09/13 13:06:26 pschaefer Exp $

---RCS-Info--------------------------------------------------*/

#include "sfftypes.h"
#include "codes.h"

#define EXT_CODES

TABENTRY aMarkUpWhite[] = {
  { 0x0080,RL_EOL, 8 },
  { 0x0800,RL_EOL,12 },
  { 0x001b,   64,  5 },
  { 0x0009,  128,  5 },
  { 0x003a,  192,  6 },
  { 0x0076,  256,  7 },
  { 0x006c,  320,  8 },
  { 0x00ec,  384,  8 },
  { 0x0026,  448,  8 },
  { 0x00a6,  512,  8 },
  { 0x0016,  576,  8 },
  { 0x00e6,  640,  8 },
  { 0x0066,  704,  9 },
  { 0x0166,  768,  9 },
  { 0x0096,  832,  9 },
  { 0x0196,  896,  9 },
  { 0x0056,  960,  9 },
  { 0x0156, 1024,  9 },
  { 0x00d6, 1088,  9 },
  { 0x01d6, 1152,  9 },
  { 0x0036, 1216,  9 },
  { 0x0136, 1280,  9 },
  { 0x00b6, 1344,  9 },
  { 0x01b6, 1408,  9 },
  { 0x0032, 1472,  9 },
  { 0x0132, 1536,  9 },
  { 0x00b2, 1600,  9 },
  { 0x0006, 1664,  6 },
  { 0x01b2, 1728,  9 },
#ifdef EXT_CODES
  { 0x0080, 1792, 11 },
  { 0x0180, 1856, 11 },
  { 0x0580, 1920, 11 },
  { 0x0480, 1984, 12 },
  { 0x0c80, 2048, 12 },
  { 0x0280, 2112, 12 },
  { 0x0a80, 2176, 12 },
  { 0x0680, 2240, 12 },
  { 0x0e80, 2304, 12 },
  { 0x0380, 2368, 12 },
  { 0x0b80, 2432, 12 },
  { 0x0780, 2496, 12 },
  { 0x0f80, 2560, 12 },
#endif
  {      0,    0,  0 }
};
TABENTRY aTermWhite[] = {
  { 0x0080,RL_EOL, 8 },
  { 0x0800,RL_EOL,12 },
  { 0x00ac,    0,  8 },
  { 0x0038,    1,  6 },
  { 0x000e,    2,  4 },
  { 0x0001,    3,  4 },
  { 0x000d,    4,  4 },
  { 0x0003,    5,  4 },
  { 0x0007,    6,  4 },
  { 0x000f,    7,  4 },
  { 0x0019,    8,  5 },
  { 0x0005,    9,  5 },
  { 0x001c,   10,  5 },
  { 0x0002,   11,  5 },
  { 0x0004,   12,  6 },
  { 0x0030,   13,  6 },
  { 0x000b,   14,  6 },
  { 0x002b,   15,  6 },
  { 0x0015,   16,  6 },
  { 0x0035,   17,  6 },
  { 0x0072,   18,  7 },
  { 0x0018,   19,  7 },
  { 0x0008,   20,  7 },
  { 0x0074,   21,  7 },
  { 0x0060,   22,  7 },
  { 0x0010,   23,  7 },
  { 0x000a,   24,  7 },
  { 0x006a,   25,  7 },
  { 0x0064,   26,  7 },
  { 0x0012,   27,  7 },
  { 0x000c,   28,  7 },
  { 0x0040,   29,  8 },
  { 0x00c0,   30,  8 },
  { 0x0058,   31,  8 },
  { 0x00d8,   32,  8 },
  { 0x0048,   33,  8 },
  { 0x00c8,   34,  8 },
  { 0x0028,   35,  8 },
  { 0x00a8,   36,  8 },
  { 0x0068,   37,  8 },
  { 0x00e8,   38,  8 },
  { 0x0014,   39,  8 },
  { 0x0094,   40,  8 },
  { 0x0054,   41,  8 },
  { 0x00d4,   42,  8 },
  { 0x0034,   43,  8 },
  { 0x00b4,   44,  8 },
  { 0x0020,   45,  8 },
  { 0x00a0,   46,  8 },
  { 0x0050,   47,  8 },
  { 0x00d0,   48,  8 },
  { 0x004a,   49,  8 },
  { 0x00ca,   50,  8 },
  { 0x002a,   51,  8 },
  { 0x00aa,   52,  8 },
  { 0x0024,   53,  8 },
  { 0x00a4,   54,  8 },
  { 0x001a,   55,  8 },
  { 0x009a,   56,  8 },
  { 0x005a,   57,  8 },
  { 0x00da,   58,  8 },
  { 0x0052,   59,  8 },
  { 0x00d2,   60,  8 },
  { 0x004c,   61,  8 },
  { 0x00cc,   62,  8 },
  { 0x002c,   63,  8 },
  {      0,    0,  0 }
};
TABENTRY aMarkUpBlack[] = {
  { 0x0080,RL_EOL, 8 },
  { 0x0800,RL_EOL,12 },
  { 0x03c0,   64, 10 },
  { 0x0130,  128, 12 },
  { 0x0930,  192, 12 },
  { 0x0da0,  256, 12 },
  { 0x0cc0,  320, 12 },
  { 0x02c0,  384, 12 },
  { 0x0ac0,  448, 12 },
  { 0x06c0,  512, 13 },
  { 0x16c0,  576, 13 },
  { 0x0a40,  640, 13 },
  { 0x1a40,  704, 13 },
  { 0x0640,  768, 13 },
  { 0x1640,  832, 13 },
  { 0x09c0,  896, 13 },
  { 0x19c0,  960, 13 },
  { 0x05c0, 1024, 13 },
  { 0x15c0, 1088, 13 },
  { 0x0dc0, 1152, 13 },
  { 0x1dc0, 1216, 13 },
  { 0x0940, 1280, 13 },
  { 0x1940, 1344, 13 },
  { 0x0540, 1408, 13 },
  { 0x1540, 1472, 13 },
  { 0x0b40, 1536, 13 },
  { 0x1b40, 1600, 13 },
  { 0x04c0, 1664, 13 },
  { 0x14c0, 1728, 13 },
#ifdef EXT_CODES
  { 0x0080, 1792, 11 },
  { 0x0180, 1856, 11 },
  { 0x0580, 1920, 11 },
  { 0x0480, 1984, 12 },
  { 0x0c80, 2048, 12 },
  { 0x0280, 2112, 12 },
  { 0x0a80, 2176, 12 },
  { 0x0680, 2240, 12 },
  { 0x0e80, 2304, 12 },
  { 0x0380, 2368, 12 },
  { 0x0b80, 2432, 12 },
  { 0x0780, 2496, 12 },
  { 0x0f80, 2560, 12 },
#endif
  {      0,    0,  0 }
};
TABENTRY aTermBlack[] = {
  { 0x0080,RL_EOL, 8 },
  { 0x0800,RL_EOL,12 },
  { 0x03b0,    0, 10 },
  { 0x0002,    1,  3 },
  { 0x0003,    2,  2 },
  { 0x0001,    3,  2 },
  { 0x0006,    4,  3 },
  { 0x000c,    5,  4 },
  { 0x0004,    6,  4 },
  { 0x0018,    7,  5 },
  { 0x0028,    8,  6 },
  { 0x0008,    9,  6 },
  { 0x0010,   10,  7 },
  { 0x0050,   11,  7 },
  { 0x0070,   12,  7 },
  { 0x0020,   13,  8 },
  { 0x00e0,   14,  8 },
  { 0x0030,   15,  9 },
  { 0x03a0,   16, 10 },
  { 0x0060,   17, 10 },
  { 0x0040,   18, 10 },
  { 0x0730,   19, 11 },
  { 0x00b0,   20, 11 },
  { 0x01b0,   21, 11 },
  { 0x0760,   22, 11 },
  { 0x00a0,   23, 11 },
  { 0x0740,   24, 11 },
  { 0x00c0,   25, 11 },
  { 0x0530,   26, 12 },
  { 0x0d30,   27, 12 },
  { 0x0330,   28, 12 },
  { 0x0b30,   29, 12 },
  { 0x0160,   30, 12 },
  { 0x0960,   31, 12 },
  { 0x0560,   32, 12 },
  { 0x0d60,   33, 12 },
  { 0x04b0,   34, 12 },
  { 0x0cb0,   35, 12 },
  { 0x02b0,   36, 12 },
  { 0x0ab0,   37, 12 },
  { 0x06b0,   38, 12 },
  { 0x0eb0,   39, 12 },
  { 0x0360,   40, 12 },
  { 0x0b60,   41, 12 },
  { 0x05b0,   42, 12 },
  { 0x0db0,   43, 12 },
  { 0x02a0,   44, 12 },
  { 0x0aa0,   45, 12 },
  { 0x06a0,   46, 12 },
  { 0x0ea0,   47, 12 },
  { 0x0260,   48, 12 },
  { 0x0a60,   49, 12 },
  { 0x04a0,   50, 12 },
  { 0x0ca0,   51, 12 },
  { 0x0240,   52, 12 },
  { 0x0ec0,   53, 12 },
  { 0x01c0,   54, 12 },
  { 0x0e40,   55, 12 },
  { 0x0140,   56, 12 },
  { 0x01a0,   57, 12 },
  { 0x09a0,   58, 12 },
  { 0x0d40,   59, 12 },
  { 0x0340,   60, 12 },
  { 0x05a0,   61, 12 },
  { 0x0660,   62, 12 },
  { 0x0e60,   63, 12 },
  {      0,    0,  0 }
};
