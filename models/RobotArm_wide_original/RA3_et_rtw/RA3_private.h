/*
 * RA3_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "RA3".
 *
 * Model version              : 1.902
 * Simulink Coder version : 8.9 (R2015b) 13-Aug-2015
 * C source code generated on : Thu Apr 21 18:51:18 2016
 *
 * Target selection: ectarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_RA3_private_h_
#define RTW_HEADER_RA3_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"

extern void sf_rt_scope(SimStruct *rts);
extern void ec_Ebox(SimStruct *rts);
extern void dweakint(SimStruct *rts);
extern void dpd(SimStruct *rts);
extern void dnotch(SimStruct *rts);
extern void dlowpass2(SimStruct *rts);
extern void ec_EboxResetEnc(SimStruct *rts);

#endif                                 /* RTW_HEADER_RA3_private_h_ */
