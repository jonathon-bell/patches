//**************************** Copyright © Jonathon Bell. All rights reserved.
//*
//*
//*  Version : $Header:$
//*
//*
//*  Purpose : These macros define the basic effects from which the 'jb' patch
//*            library is constructed.
//*
//*  Comments: This file uses a tab size of 3 spaces.
//*
//*
//****************************************************************************

#ifndef  no_jb
#define  no_jb

//****************************************************************************

#include "macros.h"

//****************************************************************************
// Wet Patches
//****************************************************************************

#define JB_Chorus(N,...)                                                   \
                                                                           \
   Reverb+Flanger ("JB Chorus  "#N,Knobs(FREQ,DPTH,BAL),                   \
                                                                           \
   SmallHall,                                                              \
   LightFlange,                                                            \
                                                                           \
   WAVE :=  Sine,                                                          \
   FB   :=   0.0,                                                          \
   BAL  :=  90.0,                                                          \
   MIX  := 100.0,                                                          \
                                                                           \
   __VA_ARGS__)

//****************************************************************************

#define JB_Reverb(N,...)                                                   \
                                                                           \
   Reverb>Chorus ("JB Reverb  "#N,Knobs(RT,BAL,MIX),                       \
                                                                           \
   SmallHall,                                                              \
                                                                           \
   MDT  :=  60.0,                                                          \
   FREQ :=   1.7,                                                          \
   AMDP :=  50.0,                                                          \
   PMDP :=  50.0,                                                          \
   WAVE :=  Sine,                                                          \
   BAL  := 100.0,                                                          \
   MIX  :=  11.0,                                                          \
                                                                           \
   __VA_ARGS__)

//****************************************************************************

#define MS_Chorus(N,...)                                                   \
                                                                           \
   Delay[11111111] ("MS Chorus  "#N,Knobs(DLVL,NONE,NONE),ELVL:=10,DLVL:=0,\
                                                                           \
   Voice(1, 14.0,0.0,4.0,3.0,-10.0, 8.0),                                  \
   Voice(2, 26.0,0.0,4.7,3.0,+10.0,10.0),                                  \
   Voice(3,500.0,2.0,0.0,0.0,  0.0, 3.5),                                  \
                                                                           \
   __VA_ARGS__)

//****************************************************************************
// Dry Patches
//****************************************************************************

#define JB_Smooth(N,...)                                                   \
                                                                           \
   Filter[Dynamic] ("JB Smooth "#N,Knobs(SENS,RESO,MIX),                   \
                                                                           \
   TYPE:=BandPass,                                                         \
   DCY :=99,                                                               \
   DIR :=Up,                                                               \
   SENS:=30,                                                               \
   OFST:=1,                                                                \
   RESO:=1,                                                                \
   LEVL:=100,                                                              \
   MIX :=80,                                                               \
                                                                           \
   __VA_ARGS__)

//****************************************************************************

#define JB_Bass(N,...)                                                     \
                                                                           \
   Pitch[1] ("JB Bass    "#N,Knobs(MODE,MIX,NONE),                         \
                                                                           \
   MODE :=   5,                                                            \
   PIT  := -12,                                                            \
   MIX  := 100,                                                            \
                                                                           \
   __VA_ARGS__)

//****************************************************************************

#define JB_Shimmer_1(...)                                                  \
                                                                           \
   Pitch[2] ("JB Shimmer 1",Knobs(PIT2,LVL2,MIX),MODE:=10,MIX:=20.0,       \
                                                                           \
   PitchShift(1,12,0,100.0,-10.0,0.0,100),                                 \
   PitchShift(2,19,0,  0.0,  0.0,0.0, 70),                                 \
                                                                           \
   __VA_ARGS__)

//****************************************************************************

#define JB_Shimmer_2(...)                                                  \
                                                                           \
   Pitch[1] ("JB Shimmer 2",Knobs(DT,FB,MIX),MODE:=10,MIX:=8.0,            \
                                                                           \
   PIT  :=  12,                                                            \
   FINE :=   0,                                                            \
   DT   :=  78,                                                            \
   FB   := -17,                                                            \
                                                                           \
   __VA_ARGS__)

//****************************************************************************

#define JB_Clean(GN,model,...)                                             \
                                                                           \
   Amp[Flanger] ("JB Clean  "#GN,Knobs(GAIN,MSTR,DLVL),                    \
                                                                           \
   AMP  := model,                                                          \
   FLDT := 1.1,                                                            \
   FLSP := 2,                                                              \
   FLDP := 2.5,                                                            \
   DT.R := 63,                                                             \
   D.FB := 16,                                                             \
   D.HI := 1,                                                              \
   DLVL := 1,                                                              \
   DTFB := 666.7,                                                          \
                                                                           \
   __VA_ARGS__)

//****************************************************************************

#define JB_Lead(GN,model,...)                                              \
                                                                           \
   Amp[Flanger] ("JB Lead   "#GN,Knobs(GAIN,MSTR,DLVL),FastGate,           \
                                                                           \
   AMP  := model,                                                          \
   FLDT := 1.1,                                                            \
   FLSP := 2,                                                              \
   FLDP := 2.5,                                                            \
   DT.R := 63,                                                             \
   D.FB := -16,                                                            \
   D.HI := 1,                                                              \
   DLVL := 1.5,                                                            \
   DHPF := 238.167,                                                        \
   DTFB := 403.9,                                                          \
                                                                           \
   __VA_ARGS__)

//****************************************************************************
// Variations
//****************************************************************************

#define SlowGate     Gate(1.2,60,0.02, 6)
#define FastGate     Gate(0.2, 4,150, 75)
#define SmallHall    Hall(3.5, 90, 8, 85,0.9,20,9.0e3)
#define LargeHall    Hall(4.0,150,10,100,0.8,20,5.6e3)
#define LightFlange  MDT :=  4.0,FREQ := 2.0,DPTH := 10
#define HeavyFlange  MDT := 11.8,FREQ := 0.5,DPTH := 57

//****************************************************************************

#endif

//****************************************************************************
