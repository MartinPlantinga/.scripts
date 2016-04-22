/*
 * Robot_sf.h
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
#ifndef RTW_HEADER_Robot_sf_h_
#define RTW_HEADER_Robot_sf_h_
#ifndef Robot_sf_COMMON_INCLUDES_
# define Robot_sf_COMMON_INCLUDES_
#include <stdlib.h>
#include <stddef.h>
#include <math.h>
#include <string.h>
#define S_FUNCTION_NAME                Robot_sf
#define S_FUNCTION_LEVEL               2
#define RTW_GENERATED_S_FUNCTION
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rtGetNaN.h"
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

/* Block signals (auto storage) */
typedef struct {
  real_T Sum;                          /* '<S8>/Sum' */
  real_T ec_Ebox_o1[2];                /* '<S4>/ec_Ebox' */
  real_T ec_Ebox_o2[2];                /* '<S4>/ec_Ebox' */
  real_T ec_Ebox_o3[8];                /* '<S4>/ec_Ebox' */
  real_T Gain;                         /* '<S2>/Gain' */
  real_T Sum2;                         /* '<S8>/Sum2' */
  real_T Sum_a;                        /* '<S9>/Sum' */
  real_T Gain1;                        /* '<S2>/Gain1' */
  real_T Sum2_g;                       /* '<S9>/Sum2' */
  real_T Sum_e;                        /* '<S10>/Sum' */
  real_T ec_Ebox_o1_e[2];              /* '<S5>/ec_Ebox' */
  real_T ec_Ebox_o2_i[2];              /* '<S5>/ec_Ebox' */
  real_T ec_Ebox_o3_j[8];              /* '<S5>/ec_Ebox' */
  real_T Gain2;                        /* '<S2>/Gain2' */
  real_T Sum2_b;                       /* '<S10>/Sum2' */
  real_T PulseGenerator;               /* '<S2>/Pulse Generator' */
  real_T Dctintegrator;                /* '<S8>/Dctintegrator' */
  real_T Dctpd1;                       /* '<S11>/Dctpd1' */
  real_T Dctnotch1;                    /* '<S11>/Dctnotch1' */
  real_T Dct2lowpass1;                 /* '<S11>/Dct2lowpass1' */
  real_T Saturation;                   /* '<S8>/Saturation' */
  real_T Sum1;                         /* '<S8>/Sum1' */
  real_T Dctpd1_i;                     /* '<S12>/Dctpd1' */
  real_T Dctnotch1_f;                  /* '<S12>/Dctnotch1' */
  real_T Dct2lowpass1_h;               /* '<S12>/Dct2lowpass1' */
  real_T Saturation_j;                 /* '<S2>/Saturation' */
  real_T Dctintegrator_p;              /* '<S10>/Dctintegrator' */
  real_T Dctpd1_d;                     /* '<S30>/Dctpd1' */
  real_T Dctnotch1_i;                  /* '<S30>/Dctnotch1' */
  real_T Dct2lowpass1_c;               /* '<S30>/Dct2lowpass1' */
  real_T Product;                      /* '<S10>/Product' */
  real_T Sum1_f;                       /* '<S10>/Sum1' */
  real_T Dctpd1_g;                     /* '<S29>/Dctpd1' */
  real_T Dctnotch1_a;                  /* '<S29>/Dctnotch1' */
  real_T Dct2lowpass1_n;               /* '<S29>/Dct2lowpass1' */
  real_T Saturation2;                  /* '<S2>/Saturation2' */
  real_T Dctintegrator_j;              /* '<S9>/Dctintegrator' */
  real_T Dctpd1_h;                     /* '<S19>/Dctpd1' */
  real_T Dctnotch1_ia;                 /* '<S19>/Dctnotch1' */
  real_T Dct2lowpass1_l;               /* '<S19>/Dct2lowpass1' */
  real_T Product_i;                    /* '<S9>/Product' */
  real_T Sum1_m;                       /* '<S9>/Sum1' */
  real_T Dctpd1_iy;                    /* '<S20>/Dctpd1' */
  real_T Dctnotch1_fd;                 /* '<S20>/Dctnotch1' */
  real_T Dct2lowpass1_g;               /* '<S20>/Dct2lowpass1' */
  real_T SaturationX;                  /* '<S2>/SaturationX' */
  real_T Switch;                       /* '<S2>/Switch' */
  real_T Add;                          /* '<S3>/Add' */
  real_T TSamp;                        /* '<S18>/TSamp' */
  real_T LimitAcceleration;            /* '<S13>/Limit Acceleration' */
  real_T TSamp_i;                      /* '<S27>/TSamp' */
  real_T LimitAcceleration_g;          /* '<S21>/Limit Acceleration' */
  real_T TSamp_m;                      /* '<S37>/TSamp' */
  real_T LimitAcceleration_c;          /* '<S31>/Limit Acceleration' */
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
  real_T jogSpeed_n;                   /* '<S9>/Supervisor' */
  real_T toPoint_d;                    /* '<S9>/Supervisor' */
  real_T homeControllerEnabled_e;      /* '<S9>/Supervisor' */
  real_T resetEnc_k;                   /* '<S9>/Supervisor' */
  real_T homingBusy_k;                 /* '<S9>/Supervisor' */
  real_T airBagEnabled_h;              /* '<S9>/Supervisor' */
  real_T airBagRef_m;                  /* '<S9>/Supervisor' */
  real_T controlEnabled_o;             /* '<S9>/Supervisor' */
  real_T Ready_d;                      /* '<S9>/Supervisor' */
  real_T StopSim_h;                    /* '<S9>/Supervisor' */
  real_T jogSpeed_i;                   /* '<S8>/Supervisor' */
  real_T toPoint_b;                    /* '<S8>/Supervisor' */
  real_T homeControllerEnabled_m;      /* '<S8>/Supervisor' */
  real_T resetEnc_h;                   /* '<S8>/Supervisor' */
  real_T homingBusy_p;                 /* '<S8>/Supervisor' */
  real_T airBagEnabled_f;              /* '<S8>/Supervisor' */
  real_T airBagRef_b;                  /* '<S8>/Supervisor' */
  real_T controlEnabled_m;             /* '<S8>/Supervisor' */
  real_T Ready_i;                      /* '<S8>/Supervisor' */
  real_T StopSim_a;                    /* '<S8>/Supervisor' */
  boolean_T RelationalOperator;        /* '<S8>/Relational Operator' */
  boolean_T RelationalOperator_a;      /* '<S9>/Relational Operator' */
  boolean_T RelationalOperator_b;      /* '<S10>/Relational Operator' */
  boolean_T LogicalOperator1;          /* '<S8>/Logical Operator1' */
  boolean_T LogicalOperator1_f;        /* '<S10>/Logical Operator1' */
  boolean_T LogicalOperator1_c;        /* '<S9>/Logical Operator1' */
} BlockIO_Robot;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T Constant1;              /* '<S13>/Constant1' */
  const real_T Constant1_n;            /* '<S21>/Constant1' */
  const real_T Constant1_p;            /* '<S31>/Constant1' */
  const real_T Saturation3;            /* '<S2>/Saturation3' */
} ConstBlockIO_Robot;

/* For easy access from the SimStruct */
#define Robot_rtC(rts)                 ((ConstBlockIO_Robot *) _ssGetConstBlockIO(rts))

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
   *   '<S11>/Dctpd1'
   */
  real_T pooled6[2];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S5>/ec_Ebox'
   *   '<S9>/Reset EncoderX'
   *   '<S10>/Reset EncoderZ'
   *   '<S11>/Dctpd1'
   */
  real_T pooled7;

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
  real_T pooled10[2];

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
  real_T pooled11;

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
  real_T pooled12[2];

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
  real_T pooled13;

  /* Computed Parameter: Dctpd1_P1_Size
   * Referenced by: '<S11>/Dctpd1'
   */
  real_T Dctpd1_P1_Size[2];

  /* Expression: kp
   * Referenced by: '<S11>/Dctpd1'
   */
  real_T Dctpd1_P1;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S11>/Dctnotch1'
   *   '<S12>/Dctnotch1'
   *   '<S19>/Dctnotch1'
   *   '<S20>/Dctnotch1'
   *   '<S29>/Dctnotch1'
   *   '<S30>/Dctnotch1'
   */
  real_T pooled14[2];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S11>/Dctnotch1'
   *   '<S12>/Dctnotch1'
   *   '<S19>/Dctnotch1'
   *   '<S20>/Dctnotch1'
   *   '<S29>/Dctnotch1'
   *   '<S30>/Dctnotch1'
   */
  real_T pooled15;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S11>/Dctnotch1'
   *   '<S12>/Dctnotch1'
   *   '<S19>/Dctnotch1'
   *   '<S20>/Dctnotch1'
   *   '<S29>/Dctnotch1'
   *   '<S30>/Dctnotch1'
   */
  real_T pooled16[2];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S11>/Dctnotch1'
   *   '<S12>/Dctnotch1'
   *   '<S19>/Dctnotch1'
   *   '<S20>/Dctnotch1'
   *   '<S29>/Dctnotch1'
   *   '<S30>/Dctnotch1'
   */
  real_T pooled17;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S11>/Dct2lowpass1'
   *   '<S12>/Dct2lowpass1'
   */
  real_T pooled18[2];

  /* Pooled Parameter (Expression: f_den)
   * Referenced by:
   *   '<S11>/Dct2lowpass1'
   *   '<S12>/Dct2lowpass1'
   */
  real_T pooled19;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S11>/Dct2lowpass1'
   *   '<S12>/Dct2lowpass1'
   *   '<S12>/Dctpd1'
   */
  real_T pooled20[2];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S11>/Dct2lowpass1'
   *   '<S12>/Dct2lowpass1'
   *   '<S12>/Dctpd1'
   */
  real_T pooled21;

  /* Computed Parameter: Dctpd1_P1_Size_a
   * Referenced by: '<S12>/Dctpd1'
   */
  real_T Dctpd1_P1_Size_a[2];

  /* Expression: kp
   * Referenced by: '<S12>/Dctpd1'
   */
  real_T Dctpd1_P1_i;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S29>/Dctpd1'
   *   '<S30>/Dctpd1'
   */
  real_T pooled23[2];

  /* Pooled Parameter (Expression: kp)
   * Referenced by:
   *   '<S29>/Dctpd1'
   *   '<S30>/Dctpd1'
   */
  real_T pooled24;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S19>/Dct2lowpass1'
   *   '<S20>/Dct2lowpass1'
   *   '<S29>/Dct2lowpass1'
   *   '<S30>/Dct2lowpass1'
   */
  real_T pooled25[2];

  /* Pooled Parameter (Expression: f_den)
   * Referenced by:
   *   '<S19>/Dct2lowpass1'
   *   '<S20>/Dct2lowpass1'
   *   '<S29>/Dct2lowpass1'
   *   '<S30>/Dct2lowpass1'
   */
  real_T pooled26;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S19>/Dctpd1'
   *   '<S20>/Dctpd1'
   */
  real_T pooled27[2];

  /* Pooled Parameter (Expression: kp)
   * Referenced by:
   *   '<S19>/Dctpd1'
   *   '<S20>/Dctpd1'
   */
  real_T pooled28;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S19>/Dctpd1'
   *   '<S20>/Dctpd1'
   */
  real_T pooled29[2];

  /* Pooled Parameter (Expression: kv)
   * Referenced by:
   *   '<S19>/Dctpd1'
   *   '<S20>/Dctpd1'
   */
  real_T pooled30;
} ConstParam_Robot;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T *InputV[3];                   /* '<Root>/Input [V]' */
  real_T *Solenoid;                    /* '<Root>/Solenoid' */
} ExternalUPtrs_Robot;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T *HomingBusy;                  /* '<Root>/Homing Busy' */
  real_T *Anglemeasurmentsrad[3];      /* '<Root>/Angle measurments [rad]' */
  boolean_T *AirbagStatus[3];          /* '<Root>/Airbag Status' */
  real_T *AccelerometerV;              /* '<Root>/Accelerometer [V]' */
} ExternalOutputs_Robot;

extern const ConstBlockIO_Robot Robot_InvariantSignals;

/* Constant parameters (auto storage) */
extern const ConstParam_Robot Robot_ConstP;

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
 * hilite_system('RA2/Robot Arm')    - opens subsystem RA2/Robot Arm
 * hilite_system('RA2/Robot Arm/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'RA2'
 * '<S1>'   : 'RA2/Robot Arm'
 * '<S2>'   : 'RA2/Robot Arm/IO'
 * '<S3>'   : 'RA2/Robot Arm/Supervisor'
 * '<S4>'   : 'RA2/Robot Arm/IO/E-box'
 * '<S5>'   : 'RA2/Robot Arm/IO/E-box1'
 * '<S6>'   : 'RA2/Robot Arm/Supervisor/Compare To Constant'
 * '<S7>'   : 'RA2/Robot Arm/Supervisor/HomingBusyCheck'
 * '<S8>'   : 'RA2/Robot Arm/Supervisor/Supervisory Controller R'
 * '<S9>'   : 'RA2/Robot Arm/Supervisor/Supervisory Controller X'
 * '<S10>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller Z'
 * '<S11>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller R/ControllerR'
 * '<S12>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller R/ControllerR1'
 * '<S13>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller R/Point-to-point trajectory'
 * '<S14>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller R/Selector'
 * '<S15>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller R/Selector1'
 * '<S16>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller R/Selector2'
 * '<S17>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller R/Supervisor'
 * '<S18>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller R/Point-to-point trajectory/Discrete Derivative'
 * '<S19>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller X/ControllerX'
 * '<S20>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller X/ControllerX1'
 * '<S21>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller X/Point-to-point trajectory'
 * '<S22>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller X/Selector'
 * '<S23>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller X/Selector1'
 * '<S24>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller X/Selector2'
 * '<S25>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller X/Selector3'
 * '<S26>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller X/Supervisor'
 * '<S27>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller X/Point-to-point trajectory/Discrete Derivative'
 * '<S28>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller Z/Angle2Z'
 * '<S29>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller Z/Controller1'
 * '<S30>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller Z/Controller2'
 * '<S31>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller Z/Point-to-point trajectory'
 * '<S32>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller Z/Selector'
 * '<S33>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller Z/Selector1'
 * '<S34>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller Z/Selector2'
 * '<S35>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller Z/Selector3'
 * '<S36>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller Z/Supervisor'
 * '<S37>'  : 'RA2/Robot Arm/Supervisor/Supervisory Controller Z/Point-to-point trajectory/Discrete Derivative'
 */
#endif                                 /* RTW_HEADER_Robot_sf_h_ */
