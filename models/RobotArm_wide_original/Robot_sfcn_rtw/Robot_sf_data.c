/*
 * Robot_sf_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Robot_sf".
 *
 * Model version              : 1.902
 * Simulink Coder version : 8.9 (R2015b) 13-Aug-2015
 * C source code generated on : Thu Apr 21 18:52:19 2016
 *
 * Target selection: rtwsfcn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Robot_sf.h"
#include "Robot_sf_private.h"

/* Invariant block signals (auto storage) */
const ConstB_Robot_T Robot_Invariant = {
  0.0
  ,                                    /* '<S13>/Constant1' */
  0.0
  ,                                    /* '<S21>/Constant1' */
  0.0
  ,                                    /* '<S31>/Constant1' */
  0.0
  /* '<S2>/Saturation3' */
};

/* Constant parameters (auto storage) */
const ConstP_Robot_T Robot_ConstP = {
  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S4>/ec_Ebox'
   *   '<S8>/Reset EncoderR'
   *   '<S9>/Reset EncoderX'
   *   '<S10>/Reset EncoderZ'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S4>/ec_Ebox'
   *   '<S8>/Reset EncoderR'
   *   '<S9>/Reset EncoderX'
   *   '<S10>/Reset EncoderZ'
   */
  0.0,

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S5>/ec_Ebox'
   *   '<S9>/Reset EncoderX'
   *   '<S10>/Reset EncoderZ'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S5>/ec_Ebox'
   *   '<S9>/Reset EncoderX'
   *   '<S10>/Reset EncoderZ'
   */
  1.0,

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S8>/Dctintegrator'
   *   '<S9>/Dctintegrator'
   *   '<S10>/Dctintegrator'
   */
  { 1.0, 2.0 },

  /* Pooled Parameter (Expression: [f_num 0.001])
   * Referenced by:
   *   '<S8>/Dctintegrator'
   *   '<S9>/Dctintegrator'
   *   '<S10>/Dctintegrator'
   */
  { 0.5, 0.001 },

  /* Computed Parameter: Dctpd_P1_Size
   * Referenced by: '<S11>/Dctpd'
   */
  { 1.0, 3.0 },

  /* Expression: [kp kv 0.001]
   * Referenced by: '<S11>/Dctpd'
   */
  { 60.0, 1.0, 0.001 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S11>/Dctnotch'
   *   '<S12>/Dctnotch'
   *   '<S19>/Dctnotch'
   *   '<S20>/Dctnotch'
   *   '<S29>/Dctnotch'
   *   '<S30>/Dctnotch'
   */
  { 1.0, 5.0 },

  /* Pooled Parameter (Expression: [f_num b_num f_den b_den 0.001])
   * Referenced by:
   *   '<S11>/Dctnotch'
   *   '<S12>/Dctnotch'
   *   '<S19>/Dctnotch'
   *   '<S20>/Dctnotch'
   *   '<S29>/Dctnotch'
   *   '<S30>/Dctnotch'
   */
  { 300.0, 0.1, 300.0, 0.1, 0.001 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S11>/Dct2lowpass'
   *   '<S12>/Dct2lowpass'
   */
  { 1.0, 3.0 },

  /* Pooled Parameter (Expression: [f_den b_den 0.001])
   * Referenced by:
   *   '<S11>/Dct2lowpass'
   *   '<S12>/Dct2lowpass'
   */
  { 120.0, 0.7, 0.001 },

  /* Computed Parameter: Dctpd_P1_Size_c
   * Referenced by: '<S12>/Dctpd'
   */
  { 1.0, 3.0 },

  /* Expression: [kp kv 0.001]
   * Referenced by: '<S12>/Dctpd'
   */
  { 50.0, 0.7, 0.001 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S29>/Dctpd'
   *   '<S30>/Dctpd'
   */
  { 1.0, 3.0 },

  /* Pooled Parameter (Expression: [kp kv 0.001])
   * Referenced by:
   *   '<S29>/Dctpd'
   *   '<S30>/Dctpd'
   */
  { 75.0, 0.5, 0.001 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S19>/Dct2lowpass'
   *   '<S20>/Dct2lowpass'
   *   '<S29>/Dct2lowpass'
   *   '<S30>/Dct2lowpass'
   */
  { 1.0, 3.0 },

  /* Pooled Parameter (Expression: [f_den b_den 0.001])
   * Referenced by:
   *   '<S19>/Dct2lowpass'
   *   '<S20>/Dct2lowpass'
   *   '<S29>/Dct2lowpass'
   *   '<S30>/Dct2lowpass'
   */
  { 150.0, 0.5, 0.001 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S19>/Dctpd'
   *   '<S20>/Dctpd'
   */
  { 1.0, 3.0 },

  /* Pooled Parameter (Expression: [kp kv 0.001])
   * Referenced by:
   *   '<S19>/Dctpd'
   *   '<S20>/Dctpd'
   */
  { 40.0, 0.45, 0.001 }
};

const real_T Robot_sf_RGND = 0.0;      /* real_T ground */
