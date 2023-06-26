//****************** Copyright © 2016-2023 Jonathon Bell. All rights reserved.
//*
//*
//*  Version : $Header:$
//*
//*
//*  Purpose : Defines various macros to facilitate writing patch files.
//*
//*
//*  Comments: This file uses a tab size of 2 spaces.
//*                                                                     0-0
//*                                                                   (| v |)
//**********************************************************************w*w***
#pragma once
//****************************************************************************

//* KNOBS (field,field,field)
//*
//* Sets the three programmable knobs that all effect types support.

#define Knobs(knob1,knob2,knob3)                                            \
                                                                            \
  KNB1 := knob1,                                                            \
  KNB2 := knob2,                                                            \
  KNB3 := knob3

//* MAIN (level,level,level)
//*
//* Sets the gain, master volume and tone levels in an amplifier model.

#define Main(gain,master,tone)                                              \
                                                                            \
  GAIN := gain,                                                             \
  MSTR := master,                                                           \
  TONE := tone

//* TONE (level,level,level,level,level)
//*
//* Sets the levels of the tone controls in an amplifier model.

#define Tone(treble,himid,lomid,bass,presence)                              \
                                                                            \
  TRE  := treble,                                                           \
  HMID := himid,                                                            \
  LMID := lomid,                                                            \
  BASS := bass,                                                             \
  PRE  := presence

//* GATE (level,ms,ms,ms)
//*
//* Sets the parameters of the noise gate in an amplifier model.

#define Gate(threshold,attack,hold,decay)                                   \
                                                                            \
  NGTH := threshold,                                                        \
  NGAT := attack,                                                           \
  NGHL := hold,                                                             \
  NGDC := decay

//* COMP (dB,int,ms,ms,int)
//*
//* Sets the parameters of the compressor in an amplifier model.

#define Comp(threshold,ratio,attack,release,knee)                           \
                                                                            \
CTHR := threshold,                                                          \
CRAT := ratio,                                                              \
CATT := attack,                                                             \
CREL := release,                                                            \
CKNE := knee

//* EQ (#,Hz,dB,Q)
//*
//* Sets the parameters of the N'th EQ band in a parametric equalizer effect.

#define Post(N,frequency,gain,resonance)                                    \
                                                                            \
  EQ##N##F := frequency,                                                    \
  EQ##N##G := gain,                                                         \
  EQ##N##Q := resonance

//* POST (#,Hz,dB,Q)
//*
//* Sets the parameters of the N'th post-distortion EQ band in a distortion
//* effect.

#define Post(N,frequency,gain,resonance)                                    \
                                                                            \
  EQ##N##F := frequency,                                                    \
  EQ##N##G := gain,                                                         \
  EQ##N##Q := resonance

//* PRE (#,Hz,dB,Q)
//*
//* Sets the parameters of the N'th pre-distortion EQ band in a distortion
//* effect.

#define Pre(N,frequency,gain,resonance)                                     \
                                                                            \
  PE##N##F := frequency,                                                    \
  PE##N##G := gain,                                                         \
  PE##N##Q := resonance

//* HALL (s,ms,level,%,ratio,Hz,Hz)
//*
//* Sets the parameters of the reverb simulation in a reverb based effect.

#define Hall(time,delay,diffusion,density,hrat,hpf,lpf)                     \
                                                                            \
  RT   := time,                                                             \
  IDLY := delay,                                                            \
  DIFF := diffusion,                                                        \
  DNST := density,                                                          \
  HRAT := hrat,                                                             \
  HPF  := hpf,                                                              \
  LPF  := lpf

//* TAP (#,waveform,phase,%,Hz,level,pan,level,#)
//*
//* Sets the parameters of the N'th tap of a delay effect.

#define Tap(N,wave,phase,tap,speed,depth,pan,level,sync)                    \
                                                                            \
  WAV##N := wave,                                                           \
  PHS##N := phase,                                                          \
  TAP##N := tap,                                                            \
  SPD##N := speed,                                                          \
  DPT##N := depth,                                                          \
  PAN##N := pan,                                                            \
  LVL##N := level,                                                          \
  SYN##N := sync

//* BAND (#,ms,Hz,Hz,%,waveform,phase,%,Hz,level,pan,level,#)
//*
//* Sets the parameters of the N'th band of a delay effect.

#define Band(N,delay,lcf,hcf,feedback,wave,phase,tap,sped,depth,pan,level,sync) \
                                                                            \
  DT##N  := delay,                                                          \
  FB##N  := feedback,                                                       \
  LCF##N := lcf,                                                            \
  HCF##N := hcf,                                                            \
  WAV##N := wave,                                                           \
  PHS##N := phase,                                                          \
  TAP##N := tap,                                                            \
  SPD##N := speed,                                                          \
  DPT##N := depth,                                                          \
  PAN##N := pan,                                                            \
  LVL##N := level,                                                          \
  SYN##N := sync

//* VOICE (#,ms,%,Hz,level,pan,level)
//*
//* Sets the most useful parameters of the N'th band of a delay effect.

#define Voice(N,delay,feedback,speed,depth,pan,level)                       \
                                                                            \
  DT##N  := delay,                                                          \
  FB##N  := feedback,                                                       \
  SPD##N := speed,                                                          \
  DPT##N := depth,                                                          \
  PAN##N := pan,                                                            \
  LVL##N := level

//* PITCH SHIFT (#,semitone,cent,ms,%,pan,level)
//*
//* Sets the most useful parameters of the N'th band of a pitch shift effect.

#define PitchShift(N,coarse,fine,delay,feedback,pan,level)                  \
                                                                            \
  PIT##N := coarse,                                                         \
  FIN##N := fine,                                                           \
  DT##N  := delay,                                                          \
  FB##N  := feedback,                                                       \
  PAN##N := pan,                                                            \
  LVL##N := level

//* DYNA (up/down,%,%,ms)
//*
//* Sets the most useful parameters of a dynamic effect.

#define Dyna(direction,offset,sensitivity,decay)                            \
                                                                            \
  DIR  := direction,                                                        \
  OFST := offset,                                                           \
  SENS := sensitivity,                                                      \
  DCY  := decay

//****************************************************************************
