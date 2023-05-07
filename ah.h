//**************************** Copyright © Jonathon Bell. All rights reserved.
//*
//*
//*  Version : $Header:$
//*
//*
//*  Purpose : Stereo patches originally designed by Allan Holdsworth for the
//*            Yamaha UD Stomp, and later tweaked for the Yamaha MagicStomp.
//*
//*  See Also: The Yamaha UD Stomp Patch List, a PDF file that enumerates the
//*            parameter values for the preset patches found on the UD Stomp.
//*
//*            http://www.magicstomp.com/eng_flash/patch/yamaha04.html,  where
//*            a UB9 patch library that implements the preset patches found on
//*            the Yamaha UD Stomp is available for download.
//*
//*  Comments: This file uses a tab size of 3 spaces.
//*
//*
//****************************************************************************

#ifndef  no_ah
#define  no_ah

//****************************************************************************

#include "macros.h"                                      // For macro Voice()

//****************************************************************************

#define AH_Chorus_1(...)                                                   \
                                                                           \
   Delay[11111111] ("AH Chorus  1",ELVL:=8.5,DLVL:=5.0,                    \
                                                                           \
   Voice(1,  23.6, 0.0, 3.5, 2.5,-10.0, 10.0),                             \
   Voice(2,  30.0, 0.0, 4.0, 2.5,+10.0, 10.0),                             \
   Voice(3,  38.1, 0.0, 4.2, 2.5,+10.0, 10.0),                             \
   Voice(4,  47.6, 0.0, 3.7, 2.5,-10.0, 10.0),                             \
   Voice(5, 300.0, 4.5, 3.5, 2.5,-10.0,  6.5),                             \
   Voice(6, 400.0, 3.5, 3.8, 2.5,+10.0,  6.5),                             \
   Voice(7, 341.0, 4.3, 4.7, 2.5,-10.0,  6.5),                             \
   Voice(8, 450.0, 3.4, 3.3, 2.5,+10.0,  6.5),__VA_ARGS__)

//****************************************************************************

#define AH_Chorus_2(...)                                                   \
                                                                           \
   Delay[11111111] ("AH Chorus  2",ELVL:=10.0,DLVL:=6.5,                   \
                                                                           \
   Voice(1,  25.1, 0.0, 3.0, 2.5,-10.0, 10.0),                             \
   Voice(2,  33.4, 0.0, 4.0, 2.5,+10.0, 10.0),                             \
   Voice(3,  43.4, 0.0, 3.4, 2.5,+10.0, 10.0),                             \
   Voice(4,  50.0, 0.0, 4.2, 2.5,-10.0, 10.0),                             \
   Voice(5, 300.0, 4.5, 3.5, 2.5,-10.0,  6.0),                             \
   Voice(6, 400.0, 3.5, 3.8, 2.5,+10.0,  6.0),                             \
   Voice(7, 341.0, 4.3, 4.7, 2.5,-10.0,  6.0),                             \
   Voice(8, 450.0, 3.4, 3.3, 2.5,+10.0,  6.0),__VA_ARGS__)

//****************************************************************************

#define AH_Chorus_3(...)                                                   \
                                                                           \
   Delay[11111111] ("AH Chorus  3",ELVL:=10.0,DLVL:=6.5,                   \
                                                                           \
   Voice(1,  25.1, 0.0, 3.0, 2.5,-10.0, 10.0),                             \
   Voice(2,  33.4, 0.0, 4.5, 2.5,+10.0, 10.0),                             \
   Voice(3,  95.6, 0.0, 3.4, 2.5, +7.0,  7.0),                             \
   Voice(4, 120.0, 0.0, 4.2, 2.5, -7.0,  5.7),                             \
   Voice(5, 300.0, 4.5, 3.5, 2.5,-10.0,  4.5),                             \
   Voice(6, 400.0, 3.5, 3.8, 2.5,+10.0,  4.5),                             \
   Voice(7, 341.0, 4.3, 4.7, 2.5,-10.0,  4.5),                             \
   Voice(8, 450.0, 3.4, 3.3, 2.5,+10.0,  4.5),__VA_ARGS__)

//****************************************************************************

#define AH_Chorus_4(...)                                                   \
                                                                           \
   Delay[11111111] ("AH Chorus  4",ELVL:=8.0,DLVL:=7.5,                    \
                                                                           \
   Voice(1, 15.1,  0.0, 3.8, 2.7,-10.0, 10.0),                             \
   Voice(2, 29.0,  0.0, 4.3, 2.7,+10.0, 10.0),                             \
   Voice(3, 41.1,  0.0, 5.0, 2.7,-10.0, 10.0),                             \
   Voice(4, 37.0,  0.0, 5.6, 2.7,+10.0, 10.0),                             \
   Voice(5, 300.0, 6.0, 3.5, 2.7,-10.0,  4.0),                             \
   Voice(6, 400.0, 5.2, 3.8, 2.7,+10.0,  4.0),                             \
   Voice(7, 355.0, 5.8, 4.7, 2.7,-10.0,  4.0),                             \
   Voice(8, 463.0, 5.0, 3.3, 2.7,+10.0,  4.0),__VA_ARGS__)

//****************************************************************************

#define AH_Chorus_5(...)                                                   \
                                                                           \
   Delay[11111111] ("AH Chorus  5",ELVL:=8.0,DLVL:=8.0,                    \
                                                                           \
   Voice(1,  21.6, 0.0, 3.5, 2.5,-10.0, 10.0),                             \
   Voice(2,  29.0, 0.0, 4.0, 2.5,+10.0, 10.0),                             \
   Voice(3,  50.0, 0.0, 4.2, 2.5,-10.0, 10.0),                             \
   Voice(4,  40.0, 0.0, 3.7, 2.5,+10.0, 10.0),                             \
   Voice(5, 300.0, 5.0, 3.5, 2.5,-10.0,  5.0),                             \
   Voice(6, 400.0, 4.0, 3.8, 2.5,+10.0,  5.0),                             \
   Voice(7, 341.0, 5.0, 4.7, 2.5,-10.0,  5.0),                             \
   Voice(8, 450.0, 3.8, 3.3, 2.5,+10.0,  5.0),__VA_ARGS__)

//****************************************************************************

#define AH_Chorus_6(...)                                                   \
                                                                           \
   Delay[11111111] ("AH Chorus  6",ELVL:=8.5,DLVL:=6.5,                    \
                                                                           \
   Voice(1,  21.6, 0.0, 3.5, 2.5,-10.0, 10.0),                             \
   Voice(2,  29.0, 0.0, 4.0, 2.5,+10.0, 10.0),                             \
   Voice(3,  43.2, 0.0, 4.3, 2.5,-10.0, 10.0),                             \
   Voice(4,  37.0, 0.0, 3.7, 2.5,+10.0, 10.0),                             \
   Voice(5, 301.0, 6.0, 3.4, 2.5,-10.0,  4.5),                             \
   Voice(6, 400.0, 5.2, 2.3, 2.5,+10.0,  4.5),__VA_ARGS__)

//****************************************************************************

#define AH_Chorus_7(...)                                                   \
                                                                           \
   Delay[11111111] ("AH Chorus  7",ELVL:=8.0,DLVL:=8.0,                    \
                                                                           \
   Voice(1,  31.5, 0.0, 4.5, 2.5,-10.0, 10.0), TAP1:=25.0,                 \
   Voice(2,  22.6, 0.0, 5.2, 2.5,+10.0, 10.0), TAP2:=25.0,                 \
   Voice(3,  40.0, 0.0, 4.0, 2.5,-10.0, 10.0), TAP3:=25.0,                 \
   Voice(4,  48.0, 0.0, 4.9, 2.5,+10.0,  5.0), TAP4:=25.0,                 \
   Voice(5, 250.0, 5.0, 3.8, 2.5,-10.0,  4.0),                             \
   Voice(6, 361.0, 4.0, 4.2, 2.5,+10.0,  4.0),                             \
   Voice(7, 300.0, 5.0, 3.5, 2.5,-10.0,  4.0),                             \
   Voice(8, 400.0, 3.0, 5.0, 2.5,+10.0,  4.0),__VA_ARGS__)

//****************************************************************************

#define AH_Chorus_8(...)                                                   \
                                                                           \
   Delay[11111111] ("AH Chorus  8",ELVL:=7.5,DLVL:=8.5,                    \
                                                                           \
   Voice(1,  31.5, 0.0, 4.7, 3.0,-10.0, 10.0),                             \
   Voice(2,  22.6, 0.0, 4.8, 3.0,+10.0, 10.0),                             \
   Voice(3,  40.0, 0.0, 6.2, 1.7,-10.0, 10.0),                             \
   Voice(4,  48.0, 0.0, 7.1, 1.7,+10.0, 10.0),                             \
   Voice(5, 250.0, 5.0, 3.8, 2.7,-10.0,  5.0),                             \
   Voice(6, 351.0, 4.0, 4.2, 2.7,+10.0,  5.0),                             \
   Voice(7, 300.0, 5.0, 3.5, 2.7,-10.0,  5.0),                             \
   Voice(8, 400.0, 3.0, 5.0, 2.7,+10.0,  5.0),__VA_ARGS__)

//****************************************************************************

#define AH_Chorus_9(...)                                                   \
                                                                           \
   Delay[11111111] ("AH Chorus  9",ELVL:=7.5,DLVL:=8.2,                    \
                                                                           \
   Voice(1,  31.5, 0.0, 4.5, 5.0,-10.0, 10.0),TAP1:=25.0,                  \
   Voice(2,  22.6, 0.0, 5.2, 5.0,+10.0, 10.0),TAP2:=25.0,                  \
   Voice(3,  40.0, 0.0, 4.0, 5.0,-10.0, 10.0),TAP3:=25.0,                  \
   Voice(4,  48.0, 0.0, 4.9, 5.0,+10.0, 10.0),TAP4:=25.0,                  \
   Voice(5, 250.0, 5.0, 3.8, 3.5,-10.0,  4.0),                             \
   Voice(6, 341.0, 4.0, 4.2, 3.2,+10.0,  4.0),                             \
   Voice(7, 300.0, 5.0, 3.5, 3.5,-10.0,  4.0),                             \
   Voice(8, 400.0, 4.0, 5.0, 3.2,+10.0,  4.0),__VA_ARGS__)

//****************************************************************************

#define AH_Chorus_10(...)                                                  \
                                                                           \
   Delay[11111111] ("AH Chorus 10",ELVL:=8.5,DLVL:=6.0,                    \
                                                                           \
   Voice(1,  19.4, 0.0, 4.5, 2.7,-10.0, 10.0),TAP1:=25.0,                  \
   Voice(2,  15.0, 0.0, 5.2, 2.7,+10.0, 10.0),TAP2:=25.0,                  \
   Voice(3, 250.0, 5.0, 3.8, 3.0,-10.0,  3.5),                             \
   Voice(4, 351.0, 4.0, 4.2, 3.0,+10.0,  3.5),                             \
   Voice(5, 300.0, 5.0, 3.5, 3.0,-10.0,  3.5),                             \
   Voice(6, 400.0, 3.0, 5.0, 3.0,+10.0,  3.5),__VA_ARGS__)                 \

//****************************************************************************

#define AH_Chorus_11(...)                                                  \
                                                                           \
   Delay[11111111] ("AH Chorus 11",ELVL:=8.0,DLVL:=8.0,                    \
                                                                           \
   Voice(1,  23.6, 0.0, 3.9, 5.0,-10.0, 10.0),TAP1:=25.0,                  \
   Voice(2,  30.0, 0.0, 5.2, 5.0,+10.0, 10.0),TAP2:=25.0,                  \
   Voice(3,  40.9, 0.0, 4.0, 3.5,-10.0, 10.0),TAP3:=25.0,                  \
   Voice(4,  48.2, 0.0, 4.9, 3.5,+10.0, 10.0),TAP4:=25.0,__VA_ARGS__)

//****************************************************************************

#define AH_Chorus_12(...)                                                  \
                                                                           \
   Delay[11111111] ("AH Chorus 12",ELVL:=7.5,DLVL:=7.5,                    \
                                                                           \
   Voice(1,  22.0, 0.0, 4.7, 2.3,-10.0, 10.0),                             \
   Voice(2,  27.1, 0.0, 5.8, 2.3,+10.0, 10.0),                             \
   Voice(3,  30.0, 0.0, 6.8, 1.0,-10.0, 10.0),                             \
   Voice(4,  40.0, 0.0, 7.2, 1.0,+10.0, 10.0),                             \
   Voice(5, 300.0, 5.0, 3.5, 3.2,-10.0, 4.5),                              \
   Voice(6, 400.0, 3.0, 5.0, 3.2,+10.0, 4.5),__VA_ARGS__)

//****************************************************************************

#define AH_Lead_1(...)                                                     \
                                                                           \
   Delay[11111111] ("AH Lead    1",ELVL:=8.5,DLVL:=8.5,                    \
                                                                           \
   Voice(1,  29.7, 0.0, 0.0, 0.0,-10.0, 10.0),                             \
   Voice(2,  40.0, 0.0, 0.0, 0.0,+10.0, 10.0),                             \
   Voice(3,  96.0, 0.0, 0.0, 0.0, -5.0,  4.0),                             \
   Voice(4, 110.0, 0.0, 0.0, 0.0, +5.0,  4.0),                             \
   Voice(5, 300.0, 4.5, 0.0, 0.0,-10.0,  5.0),                             \
   Voice(6, 400.0, 4.0, 0.0, 0.0,+10.0,  5.0),                             \
   Voice(7, 355.0, 3.5, 0.0, 0.0,-10.0,  5.0),                             \
   Voice(8, 461.0, 3.0, 0.0, 0.0,+10.0,  5.0),__VA_ARGS__)

//****************************************************************************

#define AH_Lead_2(...)                                                     \
                                                                           \
   Delay[11111111] ("AH Lead    2",ELVL:=8.5,DLVL:=8.5,                    \
                                                                           \
   Voice(1,  25.0, 0.0, 0.0, 0.0,-10.0, 10.0),                             \
   Voice(2,  36.8, 0.0, 0.0, 0.0,+10.0, 10.0),                             \
   Voice(3,  96.0, 0.0, 0.0, 0.0, -7.6,  7.0),                             \
   Voice(4, 110.0, 0.0, 0.0, 0.0, +7.6,  7.0),                             \
   Voice(5, 276.0, 4.5, 0.0, 0.0,-10.0,  5.0),                             \
   Voice(6, 370.0, 4.0, 0.0, 0.0,+10.0,  5.0),                             \
   Voice(7, 355.0, 3.5, 0.0, 0.0,-10.0,  5.0),                             \
   Voice(8, 461.0, 3.0, 0.0, 0.0,+10.0,  5.0),__VA_ARGS__)

//****************************************************************************

#define AH_Lead_3(...)                                                     \
                                                                           \
   Delay[11111111] ("AH Lead    3",ELVL:=8.1,DLVL:=8.5,                    \
                                                                           \
   Voice(1,  36.1, 0.0, 0.0, 0.0,-10.0, 10.0),                             \
   Voice(2,  45.4, 0.0, 0.0, 0.0,+10.0, 10.0),                             \
   Voice(3,  92.0, 0.0, 0.0, 0.0, -7.6,  8.5),                             \
   Voice(4, 112.0, 0.0, 0.0, 0.0, +7.6,  8.5),                             \
   Voice(5, 300.0, 4.5, 0.0, 0.0,-10.0,  4.0),                             \
   Voice(6, 400.0, 4.0, 0.0, 0.0,+10.0,  4.0),                             \
   Voice(7, 355.0, 4.0, 0.0, 0.0,-10.0,  4.0),                             \
   Voice(8, 455.0, 3.5, 0.0, 0.0,+10.0,  4.0),__VA_ARGS__)

//****************************************************************************

#define AH_Lead_4(...)                                                     \
                                                                           \
   Delay[11111111] ("AH Lead    4",ELVL:=8.5,DLVL:=8.5,                    \
                                                                           \
   Voice(1,  36.1, 0.0, 0.0, 0.0,-10.0, 10.0),                             \
   Voice(2,  45.0, 0.0, 0.0, 0.0,+10.0, 10.0),                             \
   Voice(3, 134.0, 0.0, 0.0, 0.0,  0.0,  5.0),                             \
   Voice(4, 300.0, 2.5, 0.0, 0.0,-10.0,  4.0),                             \
   Voice(5, 400.0, 2.0, 0.0, 0.0,+10.0,  4.0),                             \
   Voice(6, 355.0, 1.7, 0.0, 0.0,-10.0,  4.0),                             \
   Voice(7, 455.0, 1.0, 0.0, 0.0,+10.0,  4.0),__VA_ARGS__)

//****************************************************************************

#define AH_Lead_5(...)                                                     \
                                                                           \
   Delay[11111111] ("AH Lead    5",ELVL:=8.5,DLVL:=8.5,                    \
                                                                           \
   Voice(1,  20.5, 0.0, 0.0, 0.0,-10.0, 10.0),                             \
   Voice(2,  37.7, 0.0, 0.0, 0.0,+10.0, 10.0),                             \
   Voice(3,  96.0, 0.0, 0.0, 0.0, -5.0,  4.5),                             \
   Voice(4, 110.0, 0.0, 0.0, 0.0, +5.0,  4.5),                             \
   Voice(5, 300.0, 4.5, 0.0, 0.0,-10.0,  4.0),                             \
   Voice(6, 400.0, 4.0, 0.0, 0.0,+10.0,  4.0),                             \
   Voice(7, 355.0, 3.5, 0.0, 0.0,-10.0,  4.0),                             \
   Voice(8, 461.0, 3.0, 0.0, 0.0,+10.0,  4.0),__VA_ARGS__)

//****************************************************************************

#define AH_Lead_6(...)                                                     \
                                                                           \
   Delay[11111111] ("AH Lead    6",ELVL:=8.5,DLVL:=8.5,                    \
                                                                           \
   Voice(1,  29.7, 0.0, 0.0, 0.0,-10.0, 10.0),                             \
   Voice(2,  40.0, 0.0, 0.0, 0.0,+10.0, 10.0),                             \
   Voice(3,  96.0, 0.0, 0.0, 0.0, -5.0,  6.0),                             \
   Voice(4, 110.0, 0.0, 0.0, 0.0, +5.0,  6.0),                             \
   Voice(5, 300.0, 4.5, 0.0, 0.0,-10.0,  5.5),                             \
   Voice(6, 400.0, 4.0, 0.0, 0.0,+10.0,  5.5),                             \
   Voice(7, 355.0, 3.5, 0.0, 0.0,-10.0,  5.5),                             \
   Voice(8, 461.0, 3.0, 0.0, 0.0,+10.0,  5.5),__VA_ARGS__)

//****************************************************************************

#define AH_Lead_7(...)                                                     \
                                                                           \
   Delay[11111111] ("AH Lead    7",ELVL:=8.5,DLVL:=8.5,                    \
                                                                           \
   Voice(1,  23.1, 0.0, 0.0, 0.0,-10.0, 10.0),                             \
   Voice(2,  33.1, 0.0, 0.0, 0.0,+10.0, 10.0),                             \
   Voice(3, 110.0, 0.0, 0.0, 0.0,  0.0,  7.5),                             \
   Voice(4, 300.0, 4.5, 0.0, 0.0,-10.0,  5.0),                             \
   Voice(5, 400.0, 4.0, 0.0, 0.0,+10.0,  5.0),__VA_ARGS__)

//****************************************************************************

#define AH_Lead_8(...)                                                     \
                                                                           \
   Delay[11111111] ("AH Lead    8",ELVL:=8.5,DLVL:=8.5,                    \
                                                                           \
   Voice(1,  31.8, 0.0, 0.0, 0.0,-10.0, 10.0),                             \
   Voice(2,  42.1, 0.0, 0.0, 0.0,+10.0, 10.0),                             \
   Voice(3,  95.0, 0.0, 0.0, 0.0,  0.0,  6.0),                             \
   Voice(4, 333.0, 4.0, 0.0, 0.0,-10.0,  4.5),                             \
   Voice(5, 445.0, 3.8, 0.0, 0.0,+10.0,  4.5),__VA_ARGS__)

//****************************************************************************

#define AH_Lead_9(...)                                                     \
                                                                           \
   Delay[11111111] ("AH Lead    9",ELVL:=8.5,DLVL:=8.5,                    \
                                                                           \
   Voice(1,  21.2, 0.0, 0.0, 0.0,-10.0, 10.0),                             \
   Voice(2,  32.1, 0.0, 0.0, 0.0,+10.0, 10.0),                             \
   Voice(3, 300.0, 5.0, 0.0, 0.0,-10.0,  4.0),                             \
   Voice(4, 400.0, 4.0, 0.0, 0.0,+10.0,  4.0),__VA_ARGS__)

//****************************************************************************

#define AH_Swell_1(...)                                                    \
                                                                           \
   Delay[11111111] ("AH Swell   1",ELVL:=7.5,DLVL:=5.0,                    \
                                                                           \
   Voice(1,  21.6, 0.0, 3.5, 2.5,-10.0, 10.0),                             \
   Voice(2,  29.0, 0.0, 4.0, 2.5,+10.0, 10.0),                             \
   Voice(3, 350.0, 4.0, 4.2, 2.5,-10.0, 10.0),                             \
   Voice(4, 463.0, 3.0, 3.7, 2.5,+10.0, 10.0),                             \
   Voice(5, 250.0, 5.4, 3.5, 2.5,-10.0, 10.0),                             \
   Voice(6, 347.0, 4.2, 3.8, 2.5,+10.0, 10.0),                             \
   Voice(7, 300.0, 5.8, 4.7, 2.5,+10.0, 10.0),                             \
   Voice(8, 400.0, 5.0, 3.3, 2.5,-10.0, 10.0),__VA_ARGS__)

//****************************************************************************

#define AH_Swell_2(...)                                                    \
                                                                           \
   Delay[11111111] ("AH Swell   2",ELVL:=7.5,DLVL:=0.0,                    \
                                                                           \
   Voice(1,  23.1, 0.0, 3.5, 2.5,-10.0, 10.0),                             \
   Voice(2,  33.6, 0.0, 4.0, 2.5,+10.0, 10.0),                             \
   Voice(3,  43.3, 0.0, 4.2, 2.5,-10.0, 10.0),                             \
   Voice(4,  51.1, 0.0, 3.7, 2.5,+10.0, 10.0),                             \
   Voice(5, 300.0, 6.0, 3.5, 2.5,-10.0, 10.0),                             \
   Voice(6, 400.0, 5.2, 3.8, 2.5,+10.0, 10.0),                             \
   Voice(7, 345.0, 5.8, 4.7, 2.5,-10.0, 10.0),                             \
   Voice(8, 465.0, 5.0, 3.3, 2.5,+10.0, 10.0),__VA_ARGS__)

//****************************************************************************

#define AH_Stereo(...)                                                     \
                                                                           \
   Delay[11111111] ("AH Stereo   ",ELVL:=10.0,DLVL:=8.0,                   \
                                                                           \
   Voice(1,  5.25, 0.0, 0.0, 0.0,-10.0,  7.0),                             \
   Voice(2,  5.48, 0.0, 0.0, 0.0,+10.0, 10.0), PHS2:=Reverse,              \
   Voice(3, 250.0, 4.0, 0.0, 0.0,-10.0,  3.7),                             \
   Voice(4, 341.0, 3.5, 0.0, 0.0,+10.0,  3.7),                             \
   Voice(5, 300.0, 4.0, 0.0, 0.0,-10.0,  3.7),                             \
   Voice(6, 400.0, 3.5, 0.0, 0.0,+10.0,  3.7),__VA_ARGS__)

//****************************************************************************

#define AH_Echo_1(...)                                                     \
                                                                           \
   Delay[11111111] ("AH Echo    1",ELVL:=8.5,DLVL:=8.5,                    \
                                                                           \
   Voice(1, 321.0, 4.7, 3.7, 2.3,-10.0,  5.5),                             \
   Voice(2, 429.0, 4.0, 4.1, 2.3,+10.0,  5.5),                             \
   Voice(3, 360.0, 3.5, 4.6, 2.3,  0.0,  5.0),__VA_ARGS__)

//****************************************************************************

#define AH_Echo_2(...)                                                     \
                                                                           \
   Delay[11111111] ("AH Echo    2",ELVL:=8.5,DLVL:=8.5,                    \
                                                                           \
   Voice(1, 300.0, 4.5, 4.5, 2.0,-10.0,  5.5),                             \
   Voice(2, 400.0, 3.7, 5.4, 2.0,+10.0,  5.5),                             \
   Voice(3, 355.0, 3.5, 3.9, 2.0,-10.0,  5.5),                             \
   Voice(4, 461.0, 2.7, 3.4, 2.0,+10.0,  5.5),__VA_ARGS__)

//****************************************************************************

#define AH_Echo_3(...)                                                     \
                                                                           \
   Delay[11111111] ("AH Echo    3",ELVL:=8.5,DLVL:=8.5,                    \
                                                                           \
   Voice(1, 250.0, 4.5, 3.5, 2.0,-10.0,  5.0),                             \
   Voice(2, 330.0, 4.0, 4.1, 2.0,+10.0,  5.0),                             \
   Voice(3, 300.0, 3.5, 3.1, 2.0,-10.0,  5.0),                             \
   Voice(4, 401.0, 3.0, 4.5, 2.0,+10.0,  5.0),__VA_ARGS__)

//****************************************************************************

#endif

//****************************************************************************
