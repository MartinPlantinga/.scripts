/*
 * Robot_sf_data.c
 *
 * Code generation for model "Robot_sf.mdl".
 *
 * Model version              : 1.895
 * Simulink Coder version : 8.1 (R2011b) 08-Jul-2011
 * C source code generated on : Tue Jul 21 14:59:24 2015
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
const ConstBlockIO_Robot Robot_InvariantSignals = {
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
const ConstParam_Robot Robot_ConstP = {
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
   *   '<S11>/Dctpd1'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S5>/ec_Ebox'
   *   '<S9>/Reset EncoderX'
   *   '<S10>/Reset EncoderZ'
   *   '<S11>/Dctpd1'
   */
  1.0,

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S8>/Dctintegrator'
   *   '<S9>/Dctintegrator'
   *   '<S10>/Dctintegrator'
   *   '<S19>/Dct2lowpass1'
   *   '<S20>/Dct2lowpass1'
   *   '<S29>/Dct2lowpass1'
   *   '<S29>/Dctpd1'
   *   '<S30>/Dct2lowpass1'
   *   '<S30>/Dctpd1'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S8>/Dctintegrator'
   *   '<S9>/Dctintegrator'
   *   '<S10>/Dctintegrator'
   *   '<S19>/Dct2lowpass1'
   *   '<S20>/Dct2lowpass1'
   *   '<S29>/Dct2lowpass1'
   *   '<S29>/Dctpd1'
   *   '<S30>/Dct2lowpass1'
   *   '<S30>/Dctpd1'
   */
  0.5,

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S8>/Dctintegrator'
   *   '<S9>/Dctintegrator'
   *   '<S10>/Dctintegrator'
   *   '<S11>/Dct2lowpass1'
   *   '<S11>/Dctnotch1'
   *   '<S11>/Dctpd1'
   *   '<S12>/Dct2lowpass1'
   *   '<S12>/Dctnotch1'
   *   '<S12>/Dctpd1'
   *   '<S19>/Dct2lowpass1'
   *   '<S19>/Dctnotch1'
   *   '<S19>/Dctpd1'
   *   '<S20>/Dct2lowpass1'
   *   '<S20>/Dctnotch1'
   *   '<S20>/Dctpd1'
   *   '<S29>/Dct2lowpass1'
   *   '<S29>/Dctnotch1'
   *   '<S29>/Dctpd1'
   *   '<S30>/Dct2lowpass1'
   *   '<S30>/Dctnotch1'
   *   '<S30>/Dctpd1'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Expression: 0.001)
   * Referenced by:
   *   '<S8>/Dctintegrator'
   *   '<S9>/Dctintegrator'
   *   '<S10>/Dctintegrator'
   *   '<S11>/Dct2lowpass1'
   *   '<S11>/Dctnotch1'
   *   '<S11>/Dctpd1'
   *   '<S12>/Dct2lowpass1'
   *   '<S12>/Dctnotch1'
   *   '<S12>/Dctpd1'
   *   '<S19>/Dct2lowpass1'
   *   '<S19>/Dctnotch1'
   *   '<S19>/Dctpd1'
   *   '<S20>/Dct2lowpass1'
   *   '<S20>/Dctnotch1'
   *   '<S20>/Dctpd1'
   *   '<S29>/Dct2lowpass1'
   *   '<S29>/Dctnotch1'
   *   '<S29>/Dctpd1'
   *   '<S30>/Dct2lowpass1'
   *   '<S30>/Dctnotch1'
   *   '<S30>/Dctpd1'
   */
  0.001,

  /* Computed Parameter: Dctpd1_P1_Size
   * Referenced by: '<S11>/Dctpd1'
   */
  { 1.0, 1.0 },

  /* Expression: kp
   * Referenced by: '<S11>/Dctpd1'
   */
  60.0,

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S11>/Dctnotch1'
   *   '<S12>/Dctnotch1'
   *   '<S19>/Dctnotch1'
   *   '<S20>/Dctnotch1'
   *   '<S29>/Dctnotch1'
   *   '<S30>/Dctnotch1'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S11>/Dctnotch1'
   *   '<S12>/Dctnotch1'
   *   '<S19>/Dctnotch1'
   *   '<S20>/Dctnotch1'
   *   '<S29>/Dctnotch1'
   *   '<S30>/Dctnotch1'
   */
  300.0,

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S11>/Dctnotch1'
   *   '<S12>/Dctnotch1'
   *   '<S19>/Dctnotch1'
   *   '<S20>/Dctnotch1'
   *   '<S29>/Dctnotch1'
   *   '<S30>/Dctnotch1'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S11>/Dctnotch1'
   *   '<S12>/Dctnotch1'
   *   '<S19>/Dctnotch1'
   *   '<S20>/Dctnotch1'
   *   '<S29>/Dctnotch1'
   *   '<S30>/Dctnotch1'
   */
  0.1,

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S11>/Dct2lowpass1'
   *   '<S12>/Dct2lowpass1'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Expression: f_den)
   * Referenced by:
   *   '<S11>/Dct2lowpass1'
   *   '<S12>/Dct2lowpass1'
   */
  120.0,

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S11>/Dct2lowpass1'
   *   '<S12>/Dct2lowpass1'
   *   '<S12>/Dctpd1'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S11>/Dct2lowpass1'
   *   '<S12>/Dct2lowpass1'
   *   '<S12>/Dctpd1'
   */
  0.7,

  /* Computed Parameter: Dctpd1_P1_Size_a
   * Referenced by: '<S12>/Dctpd1'
   */
  { 1.0, 1.0 },

  /* Expression: kp
   * Referenced by: '<S12>/Dctpd1'
   */
  50.0,

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S29>/Dctpd1'
   *   '<S30>/Dctpd1'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Expression: kp)
   * Referenced by:
   *   '<S29>/Dctpd1'
   *   '<S30>/Dctpd1'
   */
  75.0,

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S19>/Dct2lowpass1'
   *   '<S20>/Dct2lowpass1'
   *   '<S29>/Dct2lowpass1'
   *   '<S30>/Dct2lowpass1'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Expression: f_den)
   * Referenced by:
   *   '<S19>/Dct2lowpass1'
   *   '<S20>/Dct2lowpass1'
   *   '<S29>/Dct2lowpass1'
   *   '<S30>/Dct2lowpass1'
   */
  150.0,

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S19>/Dctpd1'
   *   '<S20>/Dctpd1'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Expression: kp)
   * Referenced by:
   *   '<S19>/Dctpd1'
   *   '<S20>/Dctpd1'
   */
  40.0,

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S19>/Dctpd1'
   *   '<S20>/Dctpd1'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Expression: kv)
   * Referenced by:
   *   '<S19>/Dctpd1'
   *   '<S20>/Dctpd1'
   */
  0.45
};

const real_T Robot_sf_RGND = 0.0;      /* real_T ground */
