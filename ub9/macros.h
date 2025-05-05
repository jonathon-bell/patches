//****************** Copyright © 2016-2025 Jonathon Bell. All rights reserved.
//*
//*
//*  Version : $Header:$
//*
//*
//*  Purpose : Defines various macros to facilitate writing patch files.
//*                                                                     0-0
//*                                                                   (| v |)
//**********************************************************************w*w***
#pragma once
//****************************************************************************

/**
 * Sets the three programmable knobs that all effect types support.
 */
#define Knobs(knob1, knob2, knob3)                                          \
                                                                            \
  KNB1 := knob1,                                                            \
  KNB2 := knob2,                                                            \
  KNB3 := knob3

/**
 * Sets the gain, master volume and tone levels in an amplifier model.
 */
#define Main(gain, master, tone)                                            \
                                                                            \
  GAIN := gain,                                                             \
  MSTR := master,                                                           \
  TONE := tone

/**
 * Sets the levels of the tone controls in an amplifier model.
 */
#define Tone(treble, himid, lomid, bass, presence)                          \
                                                                            \
  TRE  := treble,                                                           \
  HMID := himid,                                                            \
  LMID := lomid,                                                            \
  BASS := bass,                                                             \
  PRE  := presence

/**
 * Sets the parameters of the noise gate in an amplifier model.
 */
#define Gate(threshold, attack, hold, decay)                                \
                                                                            \
  NGTH := threshold,                                                        \
  NGAT := attack,                                                           \
  NGHL := hold,                                                             \
  NGDC := decay

/**
 * Sets the parameters of the compressor in an amplifier model.
 */
#define Comp(threshold, ratio, attack, release, knee)                       \
                                                                            \
CTHR := threshold,                                                          \
CRAT := ratio,                                                              \
CATT := attack,                                                             \
CREL := release,                                                            \
CKNE := knee

/**
 * Sets the parameters of the N'th EQ band in a parametric equalizer effect.
 */
#define Post(N, frequency, gain, resonance)                                 \
                                                                            \
  EQ##N##F := frequency,                                                    \
  EQ##N##G := gain,                                                         \
  EQ##N##Q := resonance

/**
 * Sets the parameters of the N'th post-distortion EQ band in a distortion
 * effect.
 */
#define Post(N, frequency, gain, resonance)                                 \
                                                                            \
  EQ##N##F := frequency,                                                    \
  EQ##N##G := gain,                                                         \
  EQ##N##Q := resonance

/**
 * Sets the parameters of the N'th pre-distortion EQ band in a distortion
 * effect.
 */
#define Pre(N, frequency, gain, resonance)                                  \
                                                                            \
  PE##N##F := frequency,                                                    \
  PE##N##G := gain,                                                         \
  PE##N##Q := resonance

/**
 * Sets the parameters of the reverb simulation in a reverb based effect.
 */
#define Hall(time, delay, diffusion, density, hrat, hpf, lpf)               \
                                                                            \
  RT   := time,                                                             \
  IDLY := delay,                                                            \
  DIFF := diffusion,                                                        \
  DNST := density,                                                          \
  HRAT := hrat,                                                             \
  HPF  := hpf,                                                              \
  LPF  := lpf

/**
 * Sets the parameters of the N'th tap of a delay effect.
 */
#define Tap(N, wave, phase, tap, speed, depth, pan, level, sync)            \
                                                                            \
  WAV##N := wave,                                                           \
  PHS##N := phase,                                                          \
  TAP##N := tap,                                                            \
  SPD##N := speed,                                                          \
  DPT##N := depth,                                                          \
  PAN##N := pan,                                                            \
  LVL##N := level,                                                          \
  SYN##N := sync

/**
 * Sets the parameters of the N'th band of a delay effect.
 */
#define Band(N, delay, lcf, hcf, feedback, wave, phase, tap, speed, depth, pan, level, sync) \
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

/**
 * Sets the most useful parameters of the N'th band of a delay effect.
 */
#define Voice(N, delay, feedback, speed, depth, pan, level)                 \
                                                                            \
  DT##N  := delay,                                                          \
  FB##N  := feedback,                                                       \
  SPD##N := speed,                                                          \
  DPT##N := depth,                                                          \
  PAN##N := pan,                                                            \
  LVL##N := level

/**
 * Sets the most useful parameters of the N'th band of a pitch shift effect.
 */
#define PitchShift(N, coarse, fine, delay, feedback, pan, level)            \
                                                                            \
  PIT##N := coarse,                                                         \
  FIN##N := fine,                                                           \
  DT##N  := delay,                                                          \
  FB##N  := feedback,                                                       \
  PAN##N := pan,                                                            \
  LVL##N := level

/**
 * Sets the most useful parameters of a dynamic effect.
 */
#define Dyna(direction, offset, sensitivity, decay)                         \
                                                                            \
  DIR  := direction,                                                        \
  OFST := offset,                                                           \
  SENS := sensitivity,                                                      \
  DCY  := decay

//****************************************************************************
