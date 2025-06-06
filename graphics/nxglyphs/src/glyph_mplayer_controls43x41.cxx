/********************************************************************************************
 * apps/graphics/nxglyphs/src/glyph_mediaplayer43x41.cxx
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ********************************************************************************************/

/********************************************************************************************
 * Included Files
 ********************************************************************************************/

/* Automatically NuttX bitmap file. */

/* Generated from play_music.png by bitmap_converter.py. */

#include <nuttx/config.h>

#include <sys/types.h>
#include <stdint.h>
#include <stdbool.h>

#include <nuttx/nx/nxglib.h>
#include <nuttx/video/fb.h>
#include <nuttx/video/rgbcolors.h>

#include "graphics/nxwidgets/crlepalettebitmap.hxx"

#include "graphics/nxglyphs.hxx"

/********************************************************************************************
 * Pre-Processor Definitions
 ********************************************************************************************/

#define FORWARD_BITMAP_NROWS    41
#define FORWARD_BITMAP_NCOLUMNS 43

#define PLAY_BITMAP_NROWS       41
#define PLAY_BITMAP_NCOLUMNS    43

#define REWIND_BITMAPNROWS      41
#define REWIND_BITMAPNCOLUMNS   43

#define PAUSE_BITMAP_NROWS      41
#define PAUSE_BITMAP_NCOLUMNS   43

#define BITMAP_NLUTCODES        8

/********************************************************************************************
 * Private Data
 ********************************************************************************************/

using namespace NXWidgets;

/* RGB Colors */

static const nxwidget_pixel_t g_normalLut[BITMAP_NLUTCODES] =
{
  CONFIG_NXGLYPHS_BACKGROUNDCOLOR,                       /* Code 0 */
  MKRGB(54,99,171),                                      /* Code 1 */
  MKRGB(0,33,153),                                       /* Code 2 */
  MKRGB(12,16,120)                                       /* Code 3 */
};

static const nxwidget_pixel_t g_brightLut[BITMAP_NLUTCODES] =
{
  CONFIG_NXGLYPHS_BACKGROUNDCOLOR,                       /* Code 0 */
#if 1 // Red
  MKRGB(228,132,72),                                     /* Code 1 */
  MKRGB(204,44,0),                                       /* Code 2 */
  MKRGB(160,24,16)                                       /* Code 3 */
#else // Blue
  MKRGB(72,132,228),                                     /* Code 1 */
  MKRGB(0,44,204),                                       /* Code 2 */
  MKRGB(16,24,160)                                       /* Code 3 */
#endif
};

/* Bitmap definition for the "Forward" button */

static const struct SRlePaletteBitmapEntry g_forwardRleEntries[] =
{
  { 1, 1}, {21, 0}, { 1, 1}, {20, 0},                    /* Row 0 */
  { 1, 1}, { 1, 2}, {20, 0}, { 1, 1}, { 1, 2}, {19, 0},  /* Row 1 */
  { 1, 1}, { 2, 2}, {19, 0}, { 1, 1}, { 2, 2}, {18, 0},  /* Row 2 */
  { 1, 1}, { 3, 2}, {18, 0}, { 1, 1}, { 3, 2}, {17, 0},  /* Row 3 */
  { 1, 1}, { 4, 2}, {17, 0}, { 1, 1}, { 4, 2}, {16, 0},  /* Row 4 */
  { 1, 1}, { 5, 2}, {16, 0}, { 1, 1}, { 5, 2}, {15, 0},  /* Row 5 */
  { 1, 1}, { 6, 2}, {15, 0}, { 1, 1}, { 6, 2}, {14, 0},  /* Row 6 */
  { 1, 1}, { 7, 2}, {14, 0}, { 1, 1}, { 7, 2}, {13, 0},  /* Row 7 */
  { 1, 1}, { 8, 2}, {13, 0}, { 1, 1}, { 8, 2}, {12, 0},  /* Row 8 */
  { 1, 1}, { 9, 2}, {12, 0}, { 1, 1}, { 9, 2}, {11, 0},  /* Row 9 */
  { 1, 1}, {10, 2}, {11, 0}, { 1, 1}, {10, 2}, {10, 0},  /* Row 10 */
  { 1, 1}, {11, 2}, {10, 0}, { 1, 1}, {11, 2}, { 9, 0},  /* Row 11 */
  { 1, 1}, {12, 2}, { 9, 0}, { 1, 1}, {12, 2}, { 8, 0},  /* Row 12 */
  { 1, 1}, {13, 2}, { 8, 0}, { 1, 1}, {13, 2}, { 7, 0},  /* Row 13 */
  { 1, 1}, {14, 2}, { 7, 0}, { 1, 1}, {14, 2}, { 6, 0},  /* Row 14 */
  { 1, 1}, {15, 2}, { 6, 0}, { 1, 1}, {15, 2}, { 5, 0},  /* Row 15 */
  { 1, 1}, {16, 2}, { 5, 0}, { 1, 1}, {16, 2}, { 4, 0},  /* Row 16 */
  { 1, 1}, {17, 2}, { 4, 0}, { 1, 1}, {17, 2}, { 3, 0},  /* Row 17 */
  { 1, 1}, {18, 2}, { 3, 0}, { 1, 1}, {18, 2}, { 2, 0},  /* Row 18 */
  { 1, 1}, {19, 2}, { 2, 0}, { 1, 1}, {19, 2}, { 1, 0},  /* Row 19 */
  {21, 1}, { 1, 0}, {21, 1},                             /* Row 20 */
  { 1, 1}, {19, 3}, { 2, 0}, { 1, 1}, {19, 3}, { 1, 0},  /* Row 21 */
  { 1, 1}, {18, 3}, { 3, 0}, { 1, 1}, {18, 3}, { 2, 0},  /* Row 22 */
  { 1, 1}, {17, 3}, { 4, 0}, { 1, 1}, {17, 3}, { 3, 0},  /* Row 23 */
  { 1, 1}, {16, 3}, { 5, 0}, { 1, 1}, {16, 3}, { 4, 0},  /* Row 24 */
  { 1, 1}, {15, 3}, { 6, 0}, { 1, 1}, {15, 3}, { 5, 0},  /* Row 25 */
  { 1, 1}, {14, 3}, { 7, 0}, { 1, 1}, {14, 3}, { 6, 0},  /* Row 26 */
  { 1, 1}, {13, 3}, { 8, 0}, { 1, 1}, {13, 3}, { 7, 0},  /* Row 27 */
  { 1, 1}, {12, 3}, { 9, 0}, { 1, 1}, {12, 3}, { 8, 0},  /* Row 28 */
  { 1, 1}, {11, 3}, {10, 0}, { 1, 1}, {11, 3}, { 9, 0},  /* Row 29 */
  { 1, 1}, {10, 3}, {11, 0}, { 1, 1}, {10, 3}, {10, 0},  /* Row 30 */
  { 1, 1}, { 9, 3}, {12, 0}, { 1, 1}, { 9, 3}, {11, 0},  /* Row 31 */
  { 1, 1}, { 8, 3}, {13, 0}, { 1, 1}, { 8, 3}, {12, 0},  /* Row 32 */
  { 1, 1}, { 7, 3}, {14, 0}, { 1, 1}, { 7, 3}, {13, 0},  /* Row 33 */
  { 1, 1}, { 6, 3}, {15, 0}, { 1, 1}, { 6, 3}, {14, 0},  /* Row 34 */
  { 1, 1}, { 5, 3}, {16, 0}, { 1, 1}, { 5, 3}, {15, 0},  /* Row 35 */
  { 1, 1}, { 4, 3}, {17, 0}, { 1, 1}, { 4, 3}, {16, 0},  /* Row 36 */
  { 1, 1}, { 3, 3}, {18, 0}, { 1, 1}, { 3, 3}, {17, 0},  /* Row 37 */
  { 1, 1}, { 2, 3}, {19, 0}, { 1, 1}, { 2, 3}, {18, 0},  /* Row 38 */
  { 1, 1}, { 1, 3}, {20, 0}, { 1, 1}, { 1, 3}, {19, 0},  /* Row 39 */
  { 1, 3}, {21, 0}, { 1, 3}, {20, 0}                     /* Row 40 */
};

/* Bitmap definition for the "Play" button */

static const struct SRlePaletteBitmapEntry g_playRleEntries[] =
{
  {13, 0}, { 1, 1}, {29, 0},                             /* Row 0 */
  {13, 0}, { 1, 1}, { 1, 2}, {28, 0},                    /* Row 1 */
  {13, 0}, { 1, 1}, { 2, 2}, {27, 0},                    /* Row 2 */
  {13, 0}, { 1, 1}, { 3, 2}, {26, 0},                    /* Row 3 */
  {13, 0}, { 1, 1}, { 4, 2}, {25, 0},                    /* Row 4 */
  {13, 0}, { 1, 1}, { 5, 2}, {24, 0},                    /* Row 5 */
  {13, 0}, { 1, 1}, { 6, 2}, {23, 0},                    /* Row 6 */
  {13, 0}, { 1, 1}, { 7, 2}, {22, 0},                    /* Row 7 */
  {13, 0}, { 1, 1}, { 8, 2}, {21, 0},                    /* Row 8 */
  {13, 0}, { 1, 1}, { 9, 2}, {20, 0},                    /* Row 9 */
  {13, 0}, { 1, 1}, {10, 2}, {19, 0},                    /* Row 10 */
  {13, 0}, { 1, 1}, {11, 2}, {18, 0},                    /* Row 11 */
  {13, 0}, { 1, 1}, {12, 2}, {17, 0},                    /* Row 12 */
  {13, 0}, { 1, 1}, {13, 2}, {16, 0},                    /* Row 13 */
  {13, 0}, { 1, 1}, {14, 2}, {15, 0},                    /* Row 14 */
  {13, 0}, { 1, 1}, {15, 2}, {14, 0},                    /* Row 15 */
  {13, 0}, { 1, 1}, {16, 2}, {13, 0},                    /* Row 16 */
  {13, 0}, { 1, 1}, {17, 2}, {12, 0},                    /* Row 17 */
  {13, 0}, { 1, 1}, {18, 2}, {11, 0},                    /* Row 18 */
  {13, 0}, { 1, 1}, {19, 2}, {10, 0},                    /* Row 19 */
  {13, 0}, {21, 1}, { 9, 0},                             /* Row 20 */
  {13, 0}, { 1, 1}, {19, 3}, {10, 0},                    /* Row 21 */
  {13, 0}, { 1, 1}, {18, 3}, {11, 0},                    /* Row 22 */
  {13, 0}, { 1, 1}, {17, 3}, {12, 0},                    /* Row 23 */
  {13, 0}, { 1, 1}, {16, 3}, {13, 0},                    /* Row 24 */
  {13, 0}, { 1, 1}, {15, 3}, {14, 0},                    /* Row 25 */
  {13, 0}, { 1, 1}, {14, 3}, {15, 0},                    /* Row 26 */
  {13, 0}, { 1, 1}, {13, 3}, {16, 0},                    /* Row 27 */
  {13, 0}, { 1, 1}, {12, 3}, {17, 0},                    /* Row 28 */
  {13, 0}, { 1, 1}, {11, 3}, {18, 0},                    /* Row 29 */
  {13, 0}, { 1, 1}, {10, 3}, {19, 0},                    /* Row 30 */
  {13, 0}, { 1, 1}, { 9, 3}, {20, 0},                    /* Row 31 */
  {13, 0}, { 1, 1}, { 8, 3}, {21, 0},                    /* Row 32 */
  {13, 0}, { 1, 1}, { 7, 3}, {22, 0},                    /* Row 33 */
  {13, 0}, { 1, 1}, { 6, 3}, {23, 0},                    /* Row 34 */
  {13, 0}, { 1, 1}, { 5, 3}, {24, 0},                    /* Row 35 */
  {13, 0}, { 1, 1}, { 4, 3}, {25, 0},                    /* Row 36 */
  {13, 0}, { 1, 1}, { 3, 3}, {26, 0},                    /* Row 37 */
  {13, 0}, { 1, 1}, { 2, 3}, {27, 0},                    /* Row 38 */
  {13, 0}, { 1, 1}, { 1, 3}, {28, 0},                    /* Row 39 */
  {13, 0}, { 1, 2}, {29, 0}                              /* Row 40 */
};

/* Bitmap definition for "Rewind" control */

static const struct SRlePaletteBitmapEntry g_rewindRleEntries[] =
{
  {20, 0}, { 1, 1}, {21, 0}, { 1, 1},                    /* Row 0 */
  {19, 0}, { 1, 1}, { 1, 2}, {20, 0}, { 1, 1}, { 1, 2},  /* Row 1 */
  {18, 0}, { 1, 1}, { 2, 2}, {19, 0}, { 1, 1}, { 2, 2},  /* Row 2 */
  {17, 0}, { 1, 1}, { 3, 2}, {18, 0}, { 1, 1}, { 3, 2},  /* Row 3 */
  {16, 0}, { 1, 1}, { 4, 2}, {17, 0}, { 1, 1}, { 4, 2},  /* Row 4 */
  {15, 0}, { 1, 1}, { 5, 2}, {16, 0}, { 1, 1}, { 5, 2},  /* Row 5 */
  {14, 0}, { 1, 1}, { 6, 2}, {15, 0}, { 1, 1}, { 6, 2},  /* Row 6 */
  {13, 0}, { 1, 1}, { 7, 2}, {14, 0}, { 1, 1}, { 7, 2},  /* Row 7 */
  {12, 0}, { 1, 1}, { 8, 2}, {13, 0}, { 1, 1}, { 8, 2},  /* Row 8 */
  {11, 0}, { 1, 1}, { 9, 2}, {12, 0}, { 1, 1}, { 9, 2},  /* Row 9 */
  {10, 0}, { 1, 1}, {10, 2}, {11, 0}, { 1, 1}, {10, 2},  /* Row 10 */
  { 9, 0}, { 1, 1}, {11, 2}, {10, 0}, { 1, 1}, {11, 2},  /* Row 11 */
  { 8, 0}, { 1, 1}, {12, 2}, { 9, 0}, { 1, 1}, {12, 2},  /* Row 12 */
  { 7, 0}, { 1, 1}, {13, 2}, { 8, 0}, { 1, 1}, {13, 2},  /* Row 13 */
  { 6, 0}, { 1, 1}, {14, 2}, { 7, 0}, { 1, 1}, {14, 2},  /* Row 14 */
  { 5, 0}, { 1, 1}, {15, 2}, { 6, 0}, { 1, 1}, {15, 2},  /* Row 15 */
  { 4, 0}, { 1, 1}, {16, 2}, { 5, 0}, { 1, 1}, {16, 2},  /* Row 16 */
  { 3, 0}, { 1, 1}, {17, 2}, { 4, 0}, { 1, 1}, {17, 2},  /* Row 17 */
  { 2, 0}, { 1, 1}, {18, 2}, { 3, 0}, { 1, 1}, {18, 2},  /* Row 18 */
  { 1, 0}, { 1, 1}, {19, 2}, { 2, 0}, { 1, 1}, {19, 2},  /* Row 19 */
  {21, 1}, { 1, 0}, {21, 1},                             /* Row 20 */
  { 1, 0}, {20, 3}, { 2, 0}, {20, 3},                    /* Row 21 */
  { 2, 0}, {19, 3}, { 3, 0}, {19, 3},                    /* Row 22 */
  { 3, 0}, {18, 3}, { 4, 0}, {18, 3},                    /* Row 23 */
  { 4, 0}, {17, 3}, { 5, 0}, {17, 3},                    /* Row 24 */
  { 5, 0}, {16, 3}, { 6, 0}, {16, 3},                    /* Row 25 */
  { 6, 0}, {15, 3}, { 7, 0}, {15, 3},                    /* Row 26 */
  { 7, 0}, {14, 3}, { 8, 0}, {14, 3},                    /* Row 27 */
  { 8, 0}, {13, 3}, { 9, 0}, {13, 3},                    /* Row 28 */
  { 9, 0}, {12, 3}, {10, 0}, {12, 3},                    /* Row 29 */
  {10, 0}, {11, 3}, {11, 0}, {11, 3},                    /* Row 30 */
  {11, 0}, {10, 3}, {12, 0}, {10, 3},                    /* Row 31 */
  {12, 0}, { 9, 3}, {13, 0}, { 9, 3},                    /* Row 32 */
  {13, 0}, { 8, 3}, {14, 0}, { 8, 3},                    /* Row 33 */
  {14, 0}, { 7, 3}, {15, 0}, { 7, 3},                    /* Row 34 */
  {15, 0}, { 6, 3}, {16, 0}, { 6, 3},                    /* Row 35 */
  {16, 0}, { 5, 3}, {17, 0}, { 5, 3},                    /* Row 36 */
  {17, 0}, { 4, 3}, {18, 0}, { 4, 3},                    /* Row 37 */
  {18, 0}, { 3, 3}, {19, 0}, { 3, 3},                    /* Row 38 */
  {19, 0}, { 2, 3}, {20, 0}, { 2, 3},                    /* Row 39 */
  {20, 0}, { 1, 3}, {21, 0}, { 1, 3}                     /* Row 40 */
};

/* Bitmap definition for the "Pause" button */

static const struct SRlePaletteBitmapEntry g_pauseRleEntries[] =
{
  {12, 0}, { 6, 1}, { 7, 0}, { 6, 1}, {12, 0},                             /* Row 0 */
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 1 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 2 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 3 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 4 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 5 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 6 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 7 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 8 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 9 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 10 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 11 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 12 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 13 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 14 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 15 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 16 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 17 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 18 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 19 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 20 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 21 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 22 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 23 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 24 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 25 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 26 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 27 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 28 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 29 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 30 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 31 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 32 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 33 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 34 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 35 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 36 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 37 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 38 */
  { 1, 1}, { 3, 3}, {11, 0},
  {11, 0}, { 1, 1}, { 3, 2}, { 1, 1}, { 3, 3}, { 5, 0}, { 1, 1}, { 3, 2},  /* Row 39 */
  { 1, 1}, { 3, 3}, {11, 0},
  {12, 0}, { 6, 3}, { 7, 0}, { 6, 3}, {12, 0}                              /* Row 40 */
};

/********************************************************************************************
 * Public Data
 ********************************************************************************************/

const struct SRlePaletteBitmap NXWidgets::g_mplayerFwdBitmap =
{
  CONFIG_NXWIDGETS_BPP,    // bpp    - Bits per pixel
  CONFIG_NXWIDGETS_FMT,    // fmt    - Color format
  BITMAP_NLUTCODES,        // nlut   - Number of colors in the lLook-Up Table (LUT)
  FORWARD_BITMAP_NCOLUMNS, // width  - Width in pixels
  FORWARD_BITMAP_NROWS,    // height - Height in rows
  {                        // lut    - Pointer to the beginning of the Look-Up Table (LUT)
    g_normalLut,           //          Index 0: Unselected LUT
    g_brightLut,           //          Index 1: Selected LUT
  },
  g_forwardRleEntries      // data   - Pointer to the beginning of the RLE data
};

const struct SRlePaletteBitmap NXWidgets::g_mplayerPlayBitmap =
{
  CONFIG_NXWIDGETS_BPP,    // bpp    - Bits per pixel
  CONFIG_NXWIDGETS_FMT,    // fmt    - Color format
  BITMAP_NLUTCODES,        // nlut   - Number of colors in the lLook-Up Table (LUT)
  PLAY_BITMAP_NCOLUMNS,    // width  - Width in pixels
  PLAY_BITMAP_NROWS,       // height - Height in rows
  {                        // lut    - Pointer to the beginning of the Look-Up Table (LUT)
    g_normalLut,           //          Index 0: Unselected LUT
    g_brightLut,           //          Index 1: Selected LUT
  },
  g_playRleEntries         // data   - Pointer to the beginning of the RLE data
};

const struct SRlePaletteBitmap NXWidgets::g_mplayerRewBitmap =
{
  CONFIG_NXWIDGETS_BPP,  // bpp    - Bits per pixel
  CONFIG_NXWIDGETS_FMT,  // fmt    - Color format
  BITMAP_NLUTCODES,      // nlut   - Number of colors in the lLook-Up Table (LUT)
  REWIND_BITMAPNCOLUMNS, // width  - Width in pixels
  REWIND_BITMAPNROWS,    // height - Height in rows
  {                      // lut    - Pointer to the beginning of the Look-Up Table (LUT)
    g_normalLut,         //          Index 0: Unselected LUT
    g_brightLut,         //          Index 1: Selected LUT
  },
  g_rewindRleEntries     // data   - Pointer to the beginning of the RLE data
};

const struct SRlePaletteBitmap NXWidgets::g_mplayerPauseBitmap =
{
  CONFIG_NXWIDGETS_BPP,  // bpp    - Bits per pixel
  CONFIG_NXWIDGETS_FMT,  // fmt    - Color format
  BITMAP_NLUTCODES,      // nlut   - Number of colors in the lLook-Up Table (LUT)
  PAUSE_BITMAP_NCOLUMNS, // width  - Width in pixels
  PAUSE_BITMAP_NROWS,    // height - Height in rows
  {                      // lut    - Pointer to the beginning of the Look-Up Table (LUT)
    g_normalLut,         //          Index 0: Unselected LUT
    g_brightLut,         //          Index 1: Selected LUT
  },
  g_pauseRleEntries      // data   - Pointer to the beginning of the RLE data
};
