/*
 * Robot_sf.h
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

#ifndef RTW_HEADER_Robot_sf_h_
#define RTW_HEADER_Robot_sf_h_
#include <stddef.h>
#include <math.h>
#include <string.h>
#ifndef Robot_sf_COMMON_INCLUDES_
# define Robot_sf_COMMON_INCLUDES_
#include <stdlib.h>
#define S_FUNCTION_NAME                Robot_sf
#define S_FUNCTION_LEVEL               2
#define RTW_GENERATED_S_FUNCTION
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#if !defined(MATLAB_MEX_FILE)
#include "rt_matrx.h"
#endif

#if !defined(RTW_SFUNCTION_DEFINES)
#define RTW_SFUNCTION_DEFINES

typedef struct {
  void *blockIO;
  void *defaultParam;
  void *nonContDerivSig;
} LocalS;

#define ssSetLocalBlockIO(S, io)       ((LocalS *)ssGetUserData(S))->blockIO = ((void *)(io))
#define ssGetLocalBlockIO(S)           ((LocalS *)ssGetUserData(S))->blockIO
#define ssSetLocalDefaultParam(S, paramVector) ((LocalS *)ssGetUserData(S))->defaultParam = (paramVector)
#define ssGetLocalDefaultParam(S)      ((LocalS *)ssGetUserData(S))->defaultParam
#define ssSetLocalNonContDerivSig(S, pSig) ((LocalS *)ssGetUserData(S))->nonContDerivSig = (pSig)
#define ssGetLocalNonContDerivSig(S)   ((LocalS *)ssGetUserData(S))->nonContDerivSig
#endif
#endif                                 /* Robot_sf_COMMON_INCLUDES_ */

#include "Robot_sf_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

/* Block signals (auto storage) */
typedef struct {
  real_T Sum;                          /* '<S8>/Sum' */
  real_T ec_Ebox_o1[2];                /* '<S4>/ec_Ebox' */
  real_T ec_Ebox_o2[2];                /* '<S4>/ec_Ebox' */
  real_T ec_Ebox_o3[8];                /* '<S4>/ec_Ebox' */
  real_T Gain;                         /* '<S2>/Gain' */
  real_T Sum2;                         /* '<S8>/Sum2' */
  real_T Sum_g;                        /* '<S9>/Sum' */
  real_T Gain1;                        /* '<S2>/Gain1' */
  real_T Sum2_a;                       /* '<S9>/Sum2' */
  real_T Sum_i;                        /* '<S10>/Sum' */
  real_T ec_Ebox_o1_h[2];              /* '<S5>/ec_Ebox' */
  real_T ec_Ebox_o2_f[2];              /* '<S5>/ec_Ebox' */
  real_T ec_Ebox_o3_h[8];              /* '<S5>/ec_Ebox' */
  real_T Gain2;                        /* '<S2>/Gain2' */
  real_T Sum2_f;                       /* '<S10>/Sum2' */
  real_T PulseGenerator;               /* '<S2>/Pulse Generator' */
  real_T Dctintegrator;                /* '<S8>/Dctintegrator' */
  real_T Dctpd;                        /* '<S11>/Dctpd' */
  real_T Dctnotch;                     /* '<S11>/Dctnotch' */
  real_T Dct2lowpass;                  /* '<S11>/Dct2lowpass' */
  real_T Saturation;                   /* '<S8>/Saturation' */
  real_T Sum1;                         /* '<S8>/Sum1' */
  real_T Dctpd_o;                      /* '<S12>/Dctpd' */
  real_T Dctnotch_k;                   /* '<S12>/Dctnotch' */
  real_T Dct2lowpass_p;                /* '<S12>/Dct2lowpass' */
  real_T Saturation_g;                 /* '<S2>/Saturation' */
  real_T Dctintegrator_b;              /* '<S10>/Dctintegrator' */
  real_T Dctpd_c;                      /* '<S30>/Dctpd' */
  real_T Dctnotch_e;                   /* '<S30>/Dctnotch' */
  real_T Dct2lowpass_m;                /* '<S30>/Dct2lowpass' */
  real_T Product;                      /* '<S10>/Product' */
  real_T Sum1_a;                       /* '<S10>/Sum1' */
  real_T Dctpd_h;                      /* '<S29>/Dctpd' */
  real_T Dctnotch_f;                   /* '<S29>/Dctnotch' */
  real_T Dct2lowpass_l;                /* '<S29>/Dct2lowpass' */
  real_T Saturation2;                  /* '<S2>/Saturation2' */
  real_T Dctintegrator_f;              /* '<S9>/Dctintegrator' */
  real_T Dctpd_h3;                     /* '<S19>/Dctpd' */
  real_T Dctnotch_l;                   /* '<S19>/Dctnotch' */
  real_T Dct2lowpass_n;                /* '<S19>/Dct2lowpass' */
  real_T Product_j;                    /* '<S9>/Product' */
  real_T Sum1_i;                       /* '<S9>/Sum1' */
  real_T Dctpd_m;                      /* '<S20>/Dctpd' */
  real_T Dctnotch_ft;                  /* '<S20>/Dctnotch' */
  real_T Dct2lowpass_i;                /* '<S20>/Dct2lowpass' */
  real_T SaturationX;                  /* '<S2>/SaturationX' */
  real_T Switch;                       /* '<S2>/Switch' */
  real_T Add;                          /* '<S3>/Add' */
  real_T TSamp;                        /* '<S18>/TSamp' */
  real_T LimitAcceleration;            /* '<S13>/Limit Acceleration' */
  real_T TSamp_j;                      /* '<S27>/TSamp' */
  real_T LimitAcceleration_g;          /* '<S21>/Limit Acceleration' */
  real_T TSamp_o;                      /* '<S37>/TSamp' */
  real_T LimitAcceleration_a;          /* '<S31>/Limit Acceleration' */
  real_T jogSpeed;                     /* '<S10>/Supervisor' */
  real_T toPoint;                      /* '<S10>/Supervisor' */
  real_T homeControllerEnabled;        /* '<S10>/Supervisor' */
  real_T resetEnc;                     /* '<S10>/Supervisor' */
  real_T homingBusy;                   /* '<S10>/Supervisor' */
  real_T airBagEnabled;                /* '<S10>/Supervisor' */
  real_T airBagRef;                    /* '<S10>/Supervisor' */
  real_T controlEnabled;               /* '<S10>/Supervisor' */
  real_T Ready;                        /* '<S10>/Supervisor' */
  real_T StopSim;                      /* '<S10>/Supervisor' */
  real_T y;                            /* '<S10>/Angle2Z' */
  real_T jogSpeed_g;                   /* '<S9>/Supervisor' */
  real_T toPoint_b;                    /* '<S9>/Supervisor' */
  real_T homeControllerEnabled_e;      /* '<S9>/Supervisor' */
  real_T resetEnc_l;                   /* '<S9>/Supervisor' */
  real_T homingBusy_g;                 /* '<S9>/Supervisor' */
  real_T airBagEnabled_i;              /* '<S9>/Supervisor' */
  real_T airBagRef_d;                  /* '<S9>/Supervisor' */
  real_T controlEnabled_g;             /* '<S9>/Supervisor' */
  real_T Ready_a;                      /* '<S9>/Supervisor' */
  real_T StopSim_g;                    /* '<S9>/Supervisor' */
  real_T jogSpeed_k;                   /* '<S8>/Supervisor' */
  real_T toPoint_g;                    /* '<S8>/Supervisor' */
  real_T homeControllerEnabled_p;      /* '<S8>/Supervisor' */
  real_T resetEnc_o;                   /* '<S8>/Supervisor' */
  real_T homingBusy_e;                 /* '<S8>/Supervisor' */
  real_T airBagEnabled_d;              /* '<S8>/Supervisor' */
  real_T airBagRef_i;                  /* '<S8>/Supervisor' */
  real_T controlEnabled_e;             /* '<S8>/Supervisor' */
  real_T Ready_m;                      /* '<S8>/Supervisor' */
  real_T StopSim_l;                    /* '<S8>/Supervisor' */
  boolean_T RelationalOperator;        /* '<S8>/Relational Operator' */
  boolean_T RelationalOperator_l;      /* '<S9>/Relational Operator' */
  boolean_T RelationalOperator_e;      /* '<S10>/Relational Operator' */
  boolean_T LogicalOperator1;          /* '<S8>/Logical Operator1' */
  boolean_T LogicalOperator1_i;        /* '<S10>/Logical Operator1' */
  boolean_T LogicalOperator1_j;        /* '<S9>/Logical Operator1' */
} B_Robot_T;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T Constant1;              /* '<S13>/Constant1' */
  const real_T Constant1_l;            /* '<S21>/Constant1' */
  const real_T Constant1_p;            /* '<S31>/Constant1' */
  const real_T Saturation3;            /* '<S2>/Saturation3' */
} ConstB_Robot_T;

/* For easy access from the SimStruct */
#define Robot_rtC(rts)                 ((ConstB_Robot_T *) _ssGetConstBlockIO(rts))

/* Constant parameters (auto storage) */
typedef struct {
  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S4>/ec_Ebox'
   *   '<S8>/Reset EncoderR'
   *   '<S9>/Reset EncoderX'
   *   '<S10>/Reset EncoderZ'
   */
  real_T pooled4[2];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S4>/ec_Ebox'
   *   '<S8>/Reset EncoderR'
   *   '<S9>/Reset EncoderX'
   *   '<S10>/Reset EncoderZ'
   */
  real_T pooled5;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S5>/ec_Ebox'
   *   '<S9>/Reset EncoderX'
   *   '<S10>/Reset EncoderZ'
   */
  real_T pooled6[2];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S5>/ec_Ebox'
   *   '<S9>/Reset EncoderX'
   *   '<S10>/Reset EncoderZ'
   */
  real_T pooled7;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S8>/Dctintegrator'
   *   '<S9>/Dctintegrator'
   *   '<S10>/Dctintegrator'
   */
  real_T pooled10[2];

  /* Pooled Parameter (Expression: [f_num 0.001])
   * Referenced by:
   *   '<S8>/Dctintegrator'
   *   '<S9>/Dctintegrator'
   *   '<S10>/Dctintegrator'
   */
  real_T pooled11[2];

  /* Computed Parameter: Dctpd_P1_Size
   * Referenced by: '<S11>/Dctpd'
   */
  real_T Dctpd_P1_Size[2];

  /* Expression: [kp kv 0.001]
   * Referenced by: '<S11>/Dctpd'
   */
  real_T Dctpd_P1[3];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S11>/Dctnotch'
   *   '<S12>/Dctnotch'
   *   '<S19>/Dctnotch'
   *   '<S20>/Dctnotch'
   *   '<S29>/Dctnotch'
   *   '<S30>/Dctnotch'
   */
  real_T pooled12[2];

  /* Pooled Parameter (Expression: [f_num b_num f_den b_den 0.001])
   * Referenced by:
   *   '<S11>/Dctnotch'
   *   '<S12>/Dctnotch'
   *   '<S19>/Dctnotch'
   *   '<S20>/Dctnotch'
   *   '<S29>/Dctnotch'
   *   '<S30>/Dctnotch'
   */
  real_T pooled13[5];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S11>/Dct2lowpass'
   *   '<S12>/Dct2lowpass'
   */
  real_T pooled14[2];

  /* Pooled Parameter (Expression: [f_den b_den 0.001])
   * Referenced by:
   *   '<S11>/Dct2lowpass'
   *   '<S12>/Dct2lowpass'
   */
  real_T pooled15[3];

  /* Computed Parameter: Dctpd_P1_Size_c
   * Referenced by: '<S12>/Dctpd'
   */
  real_T Dctpd_P1_Size_c[2];

  /* Expression: [kp kv 0.001]
   * Referenced by: '<S12>/Dctpd'
   */
  real_T Dctpd_P1_h[3];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S29>/Dctpd'
   *   '<S30>/Dctpd'
   */
  real_T pooled17[2];

  /* Pooled Parameter (Expression: [kp kv 0.001])
   * Referenced by:
   *   '<S29>/Dctpd'
   *   '<S30>/Dctpd'
   */
  real_T pooled18[3];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S19>/Dct2lowpass'
   *   '<S20>/Dct2lowpass'
   *   '<S29>/Dct2lowpass'
   *   '<S30>/Dct2lowpass'
   */
  real_T pooled19[2];

  /* Pooled Parameter (Expression: [f_den b_den 0.001])
   * Referenced by:
   *   '<S19>/Dct2lowpass'
   *   '<S20>/Dct2lowpass'
   *   '<S29>/Dct2lowpass'
   *   '<S30>/Dct2lowpass'
   */
  real_T pooled20[3];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S19>/Dctpd'
   *   '<S20>/Dctpd'
   */
  real_T pooled21[2];

  /* Pooled Parameter (Expression: [kp kv 0.001])
   * Referenced by:
   *   '<S19>/Dctpd'
   *   '<S20>/Dctpd'
   */
  real_T pooled22[3];
} ConstP_Robot_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T *InputV[3];                   /* '<Root>/Input [V]' */
  real_T *Solenoid;                    /* '<Root>/Solenoid' */
} ExternalUPtrs_Robot_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T *HomingBusy;                  /* '<Root>/Homing Busy' */
  real_T *Anglemeasurmentsrad[3];      /* '<Root>/Angle measurments [rad]' */
  boolean_T *AirbagStatus[3];          /* '<Root>/Airbag Status' */
  real_T *AccelerometerV;              /* '<Root>/Accelerometer [V]' */
} ExtY_Robot_T;

extern const ConstB_Robot_T Robot_Invariant;

/* Constant parameters (auto storage) */
extern const ConstP_Robot_T Robot_ConstP;

/* External data declarations for dependent source files */
extern const real_T Robot_sf_RGND;     /* real_T ground */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('RA3/Robot Arm')    - opens subsystem RA3/Robot Arm
 * hilite_system('RA3/Robot Arm/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'RA3'
 * '<S1>'   : 'RA3/Robot Arm'
 * '<S2>'   : 'RA3/Robot Arm/IO'
 * '<S3>'   : 'RA3/Robot Arm/Supervisor'
 * '<S4>'   : 'RA3/Robot Arm/IO/E-box'
 * '<S5>'   : 'RA3/Robot Arm/IO/E-box1'
 * '<S6>'   : 'RA3/Robot Arm/Supervisor/Compare To Constant'
 * '<S7>'   : 'RA3/Robot Arm/Supervisor/HomingBusyCheck'
 * '<S8>'   : 'RA3/Robot Arm/Supervisor/Supervisory Controller R'
 * '<S9>'   : 'RA3/Robot Arm/Supervisor/Supervisory Controller X'
 * '<S10>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller Z'
 * '<S11>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller R/ControllerR'
 * '<S12>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller R/ControllerR1'
 * '<S13>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller R/Point-to-point trajectory'
 * '<S14>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller R/Selector'
 * '<S15>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller R/Selector1'
 * '<S16>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller R/Selector2'
 * '<S17>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller R/Supervisor'
 * '<S18>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller R/Point-to-point trajectory/Discrete Derivative'
 * '<S19>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller X/ControllerX'
 * '<S20>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller X/ControllerX1'
 * '<S21>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller X/Point-to-point trajectory'
 * '<S22>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller X/Selector'
 * '<S23>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller X/Selector1'
 * '<S24>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller X/Selector2'
 * '<S25>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller X/Selector3'
 * '<S26>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller X/Supervisor'
 * '<S27>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller X/Point-to-point trajectory/Discrete Derivative'
 * '<S28>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller Z/Angle2Z'
 * '<S29>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller Z/Controller1'
 * '<S30>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller Z/Controller2'
 * '<S31>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller Z/Point-to-point trajectory'
 * '<S32>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller Z/Selector'
 * '<S33>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller Z/Selector1'
 * '<S34>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller Z/Selector2'
 * '<S35>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller Z/Selector3'
 * '<S36>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller Z/Supervisor'
 * '<S37>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller Z/Point-to-point trajectory/Discrete Derivative'
 */
#endif                                 /* RTW_HEADER_Robot_sf_h_ */
