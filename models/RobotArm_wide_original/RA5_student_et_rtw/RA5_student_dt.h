/*
 * RA5_student_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "RA5_student".
 *
 * Model version              : 1.905
 * Simulink Coder version : 8.9 (R2015b) 13-Aug-2015
 * C source code generated on : Thu Apr 21 19:00:29 2016
 *
 * Target selection: ectarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&RA5_student_B.UnitDelay2[0]), 0, 0, 17 },

  { (char_T *)(&RA5_student_B.RobotArm_sfcn_o3[0]), 8, 0, 3 }
  ,

  { (char_T *)(&RA5_student_DW.UnitDelay2_DSTATE[0]), 0, 0, 86 },

  { (char_T *)(&RA5_student_DW.RobotArm_sfcn_DWORK37), 6, 0, 1 },

  { (char_T *)(&RA5_student_DW.RobotArm_sfcn_DWORK38), 5, 0, 3 },

  { (char_T *)(&RA5_student_DW.Controller_SubsysRanBC), 2, 0, 1 },

  { (char_T *)(&RA5_student_DW.RobotArm_sfcn_DWORK41), 3, 0, 6 },

  { (char_T *)(&RA5_student_DW.Controller_MODE), 8, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  8U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&RA5_student_P.Solenoid_Y0), 0, 0, 16 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  1U,
  rtPTransitions
};

/* [EOF] RA5_student_dt.h */
