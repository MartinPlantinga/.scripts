/*
 * Robot_sf.c
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
#include <math.h>
#include "Robot_sf.h"
#include "Robot_sf_private.h"
#include "simstruc.h"
#include "fixedpoint.h"

/* Named constants for Chart: '<S8>/Supervisor' */
#define Robot_IN_AirbagLeft            (1U)
#define Robot_IN_AirbagRight           (2U)
#define Robot_IN_CheckRobotIsON        (3U)
#define Robot_IN_DisableOutputs        (4U)
#define Robot_IN_EnableRunAndSafety    (5U)
#define Robot_IN_Homing                (6U)
#define Robot_IN_MovetoX0              (7U)
#define Robot_IN_ResetEnc              (8U)
#define Robot_IN_RobotIsON             (9U)
#define Robot_IN_STOPRobotIsOFF        (10U)
#define Robot_IN_WaitForRest           (11U)

/* Named constants for Chart: '<S9>/Supervisor' */
#define Robot_IN_DisableOutputs_o      (3U)
#define Robot_IN_EnableRunAndSafety_o  (4U)
#define Robot_IN_Homing_o              (5U)
#define Robot_IN_MovetoX0_o            (6U)
#define Robot_IN_ResetEnc_o            (7U)
#define Robot_IN_WaitForRest_o         (8U)
#define Robot_IN_WaitForZ              (9U)
#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)

extern void *Robot_malloc(SimStruct *S);

#endif

#ifndef __RTW_UTFREE__
#if defined (MATLAB_MEX_FILE)

extern void * utMalloc(size_t);
extern void utFree(void *);

#endif
#endif                                 /* #ifndef __RTW_UTFREE__ */

/* Forward declaration for local functions */
static real_T Robot_rt_powd_snf(real_T u0, real_T u1);

#if defined(MATLAB_MEX_FILE)
#include "rt_nonfinite.c"
#endif

static const char_T *RT_MEMORY_ALLOCATION_ERROR =
  "memory allocation error in generated S-Function";
static real_T Robot_rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T tmp;
  real_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = (rtNaN);
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/* Initial conditions for root system: '<Root>' */
#define MDL_INITIALIZE_CONDITIONS

static void mdlInitializeConditions(SimStruct *S)
{
  /* InitializeConditions for DiscreteIntegrator: '<S8>/Discrete-Time Integrator' */
  ((real_T *)ssGetDWork(S, 0))[0] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S13>/Discrete-Time Integrator' */
  ((real_T *)ssGetDWork(S, 1))[0] = Robot_rtC(S)->Constant1;

  /* InitializeConditions for UnitDelay: '<S3>/Unit Delay' */
  ((real_T *)ssGetDWork(S, 2))[0] = 0.0;

  /* InitializeConditions for Chart: '<S8>/Supervisor' */
  ((uint8_T *)ssGetDWork(S, 54))[0] = 0U;
  ((uint8_T *)ssGetDWork(S, 55))[0] = 0U;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->jogSpeed_i = 0.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->toPoint_b = 0.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homeControllerEnabled_m = 0.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->resetEnc_h = 0.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homingBusy_p = 1.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->airBagEnabled_f = 0.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->airBagRef_b = 0.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->controlEnabled_m = 1.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Ready_i = 1.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->StopSim_a = 0.0;
  ((uint32_T *)ssGetDWork(S, 44))[0] = 0U;
  ((uint32_T *)ssGetDWork(S, 45))[0] = 0U;
  ((uint32_T *)ssGetDWork(S, 46))[0] = 0U;

  /* InitializeConditions for DiscreteIntegrator: '<S9>/Discrete-Time Integrator' */
  ((real_T *)ssGetDWork(S, 3))[0] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S21>/Discrete-Time Integrator' */
  ((real_T *)ssGetDWork(S, 4))[0] = Robot_rtC(S)->Constant1_n;

  /* InitializeConditions for Chart: '<S9>/Supervisor' */
  ((uint8_T *)ssGetDWork(S, 52))[0] = 0U;
  ((uint8_T *)ssGetDWork(S, 53))[0] = 0U;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->jogSpeed_n = 0.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->toPoint_d = 0.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homeControllerEnabled_e = 0.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->resetEnc_k = 0.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homingBusy_k = 1.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->airBagEnabled_h = 0.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->airBagRef_m = 0.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->controlEnabled_o = 1.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Ready_d = 1.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->StopSim_h = 0.0;
  ((uint32_T *)ssGetDWork(S, 41))[0] = 0U;
  ((uint32_T *)ssGetDWork(S, 42))[0] = 0U;
  ((uint32_T *)ssGetDWork(S, 43))[0] = 0U;

  /* InitializeConditions for DiscreteIntegrator: '<S10>/Discrete-Time Integrator' */
  ((real_T *)ssGetDWork(S, 5))[0] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S31>/Discrete-Time Integrator' */
  ((real_T *)ssGetDWork(S, 6))[0] = Robot_rtC(S)->Constant1_p;

  /* InitializeConditions for Chart: '<S10>/Supervisor' */
  ((uint8_T *)ssGetDWork(S, 50))[0] = 0U;
  ((uint8_T *)ssGetDWork(S, 51))[0] = 0U;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->jogSpeed = 0.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->toPoint = 0.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homeControllerEnabled = 0.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->resetEnc = 0.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homingBusy = 1.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->airBagEnabled = 0.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->airBagRef = 0.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->controlEnabled = 1.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Ready = 1.0;
  ((BlockIO_Robot *) ssGetLocalBlockIO(S))->StopSim = 0.0;
  ((uint32_T *)ssGetDWork(S, 38))[0] = 0U;
  ((uint32_T *)ssGetDWork(S, 39))[0] = 0U;
  ((uint32_T *)ssGetDWork(S, 40))[0] = 0U;

  /* InitializeConditions for RateLimiter: '<S13>/Limit Speed' */
  ((real_T *)ssGetDWork(S, 10))[0] = 0.0;

  /* InitializeConditions for UnitDelay: '<S18>/UD' */
  ((real_T *)ssGetDWork(S, 7))[0] = 0.0;

  /* InitializeConditions for RateLimiter: '<S13>/Limit Acceleration' */
  ((real_T *)ssGetDWork(S, 11))[0] = 0.0;

  /* InitializeConditions for RateLimiter: '<S21>/Limit Speed' */
  ((real_T *)ssGetDWork(S, 12))[0] = 0.0;

  /* InitializeConditions for UnitDelay: '<S27>/UD' */
  ((real_T *)ssGetDWork(S, 8))[0] = 0.0;

  /* InitializeConditions for RateLimiter: '<S21>/Limit Acceleration' */
  ((real_T *)ssGetDWork(S, 13))[0] = 0.0;

  /* InitializeConditions for RateLimiter: '<S31>/Limit Speed' */
  ((real_T *)ssGetDWork(S, 14))[0] = 0.0;

  /* InitializeConditions for UnitDelay: '<S37>/UD' */
  ((real_T *)ssGetDWork(S, 9))[0] = 0.0;

  /* InitializeConditions for RateLimiter: '<S31>/Limit Acceleration' */
  ((real_T *)ssGetDWork(S, 15))[0] = 0.0;
}

/* Enable for root system: '<Root>' */
#define RTW_GENERATED_ENABLE

static void mdlEnable(SimStruct *S)
{
  /* Enable for Chart: '<S8>/Supervisor' */
  ((uint32_T *)ssGetDWork(S, 44))[0] = ((uint32_T)(floor(ssGetTaskTime(S,1)/
    0.000244140625+0.5)));
  ((uint32_T *)ssGetDWork(S, 46))[0] = ((uint32_T *)ssGetDWork(S, 44))[0];

  /* Enable for Chart: '<S9>/Supervisor' */
  ((uint32_T *)ssGetDWork(S, 41))[0] = ((uint32_T)(floor(ssGetTaskTime(S,1)/
    0.000244140625+0.5)));
  ((uint32_T *)ssGetDWork(S, 43))[0] = ((uint32_T *)ssGetDWork(S, 41))[0];

  /* Enable for Chart: '<S10>/Supervisor' */
  ((uint32_T *)ssGetDWork(S, 38))[0] = ((uint32_T)(floor(ssGetTaskTime(S,1)/
    0.000244140625+0.5)));
  ((uint32_T *)ssGetDWork(S, 40))[0] = ((uint32_T *)ssGetDWork(S, 38))[0];
}

/* Disable for root system: '<Root>' */
#define RTW_GENERATED_DISABLE

static void mdlDisable(SimStruct *S)
{
  /* Disable for Chart: '<S8>/Supervisor' */
  ((uint32_T *)ssGetDWork(S, 44))[0] = ((uint32_T)(floor(ssGetTaskTime(S,1)/
    0.000244140625+0.5)));
  ((uint32_T *)ssGetDWork(S, 45))[0] = ((uint32_T *)ssGetDWork(S, 44))[0] -
    ((uint32_T *)ssGetDWork(S, 46))[0];
  ((uint32_T *)ssGetDWork(S, 46))[0] = ((uint32_T *)ssGetDWork(S, 44))[0];
  if ((uint32_T)((uint16_T *)ssGetDWork(S, 49))[0] + ((uint32_T *)ssGetDWork(S,
        45))[0] <= 65535U) {
    ((uint16_T *)ssGetDWork(S, 49))[0] = (uint16_T)((uint32_T)((uint16_T *)
      ssGetDWork(S, 49))[0] + ((uint32_T *)ssGetDWork(S, 45))[0]);
  } else {
    ((uint16_T *)ssGetDWork(S, 49))[0] = MAX_uint16_T;
  }

  /* End of Disable for Chart: '<S8>/Supervisor' */

  /* Disable for Chart: '<S9>/Supervisor' */
  ((uint32_T *)ssGetDWork(S, 41))[0] = ((uint32_T)(floor(ssGetTaskTime(S,1)/
    0.000244140625+0.5)));
  ((uint32_T *)ssGetDWork(S, 42))[0] = ((uint32_T *)ssGetDWork(S, 41))[0] -
    ((uint32_T *)ssGetDWork(S, 43))[0];
  ((uint32_T *)ssGetDWork(S, 43))[0] = ((uint32_T *)ssGetDWork(S, 41))[0];
  if ((uint32_T)((uint16_T *)ssGetDWork(S, 48))[0] + ((uint32_T *)ssGetDWork(S,
        42))[0] <= 32767U) {
    ((uint16_T *)ssGetDWork(S, 48))[0] = (uint16_T)((uint32_T)((uint16_T *)
      ssGetDWork(S, 48))[0] + ((uint32_T *)ssGetDWork(S, 42))[0]);
  } else {
    ((uint16_T *)ssGetDWork(S, 48))[0] = 32767U;
  }

  /* End of Disable for Chart: '<S9>/Supervisor' */

  /* Disable for Chart: '<S10>/Supervisor' */
  ((uint32_T *)ssGetDWork(S, 38))[0] = ((uint32_T)(floor(ssGetTaskTime(S,1)/
    0.000244140625+0.5)));
  ((uint32_T *)ssGetDWork(S, 39))[0] = ((uint32_T *)ssGetDWork(S, 38))[0] -
    ((uint32_T *)ssGetDWork(S, 40))[0];
  ((uint32_T *)ssGetDWork(S, 40))[0] = ((uint32_T *)ssGetDWork(S, 38))[0];
  if ((uint32_T)((uint16_T *)ssGetDWork(S, 47))[0] + ((uint32_T *)ssGetDWork(S,
        39))[0] <= 32767U) {
    ((uint16_T *)ssGetDWork(S, 47))[0] = (uint16_T)((uint32_T)((uint16_T *)
      ssGetDWork(S, 47))[0] + ((uint32_T *)ssGetDWork(S, 39))[0]);
  } else {
    ((uint16_T *)ssGetDWork(S, 47))[0] = 32767U;
  }

  /* End of Disable for Chart: '<S10>/Supervisor' */
}

/* Start for root system: '<Root>' */
#define MDL_START

static void mdlStart(SimStruct *S)
{
  /* instance underlying S-Function data */
#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)
#  if defined(MATLAB_MEX_FILE)

  /* non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* Check for invalid switching between solver types */
  if (ssIsVariableStepSolver(S)) {
    ssSetErrorStatus(S, "This Simulink Coder generated "
                     "S-Function cannot be used in a simulation with "
                     "a solver type of variable-step "
                     "because this S-Function was created from a model with "
                     "solver type of fixed-step and it has continuous time blocks. "
                     "See the Solver page of the simulation parameters dialog.");
    return;
  }

  if (fabs(ssGetFixedStepSize(S) - 0.000244140625) > mxGetEps()*100*
      0.000244140625) {
    ssSetErrorStatus(S, "This Simulink Coder generated "
                     "S-Function cannot be used in a simulation with "
                     "the current fixed step size "
                     "because this S-Function was created from a model with "
                     "a fixed step size of 0.000244140625 and had both "
                     "continuous blocks and discrete blocks running at this rate. "
                     "See the Solver page of the simulation parameters dialog.");
    return;
  }

#  endif

  Robot_malloc(S);
  if (ssGetErrorStatus(S) != (NULL) ) {
    return;
  }

#endif

  {
    /* Start for DiscretePulseGenerator: '<S2>/Pulse Generator' */
    ((int32_T *)ssGetDWork(S, 37))[0] = 0;

    /* Level2 S-Function Block: '<S8>/Dctintegrator' (dweakint) */
    {
      SimStruct *rts = ssGetSFunction(S, 2);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S11>/Dctpd1' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 3);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S11>/Dctnotch1' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 4);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S11>/Dct2lowpass1' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 5);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S12>/Dctpd1' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 6);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S12>/Dctnotch1' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 7);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S12>/Dct2lowpass1' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 8);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S10>/Dctintegrator' (dweakint) */
    {
      SimStruct *rts = ssGetSFunction(S, 9);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S30>/Dctpd1' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 10);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S30>/Dctnotch1' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 11);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S30>/Dct2lowpass1' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 12);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S29>/Dctpd1' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 13);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S29>/Dctnotch1' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 14);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S29>/Dct2lowpass1' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 15);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S9>/Dctintegrator' (dweakint) */
    {
      SimStruct *rts = ssGetSFunction(S, 16);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S19>/Dctpd1' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 17);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S19>/Dctnotch1' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 18);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S19>/Dct2lowpass1' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 19);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S20>/Dctpd1' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 20);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S20>/Dctnotch1' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 21);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S20>/Dct2lowpass1' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 22);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }
  }
}

/* Outputs for root system: '<Root>' */
static void mdlOutputs(SimStruct *S, int_T tid)
{
  real_T fx;
  real_T fy;
  real_T d;
  real_T x;
  boolean_T rtb_Compare;
  if (ssIsSampleHit(S, 1, tid)) {
    /* Sum: '<S8>/Sum' incorporates:
     *  DiscreteIntegrator: '<S13>/Discrete-Time Integrator'
     *  DiscreteIntegrator: '<S8>/Discrete-Time Integrator'
     */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Sum = ((real_T *)ssGetDWork(S, 0))
      [0] + ((real_T *)ssGetDWork(S, 1))[0];
  }

  if (ssIsContinuousTask(S, tid)) {
    /* Level2 S-Function Block: '<S4>/ec_Ebox' (ec_Ebox) */
    {
      SimStruct *rts = ssGetSFunction(S, 0);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Gain: '<S2>/Gain' */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Gain = 9.4247779607693812E-5 *
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->ec_Ebox_o2[0];

    /* Sum: '<S8>/Sum2' */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Sum2 = ((BlockIO_Robot *)
      ssGetLocalBlockIO(S))->Sum - ((BlockIO_Robot *) ssGetLocalBlockIO(S))
      ->Gain;

    /* RelationalOperator: '<S8>/Relational Operator' incorporates:
     *  Constant: '<S8>/Constant'
     */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->RelationalOperator =
      (((BlockIO_Robot *) ssGetLocalBlockIO(S))->Sum2 >= 0.05);
  }

  if (ssIsSampleHit(S, 1, tid)) {
    /* RelationalOperator: '<S6>/Compare' incorporates:
     *  Constant: '<S6>/Constant'
     *  UnitDelay: '<S3>/Unit Delay'
     */
    rtb_Compare = (((real_T *)ssGetDWork(S, 2))[0] == 3.0);

    /* Chart: '<S8>/Supervisor' */
    ((uint32_T *)ssGetDWork(S, 44))[0] = ((uint32_T)(floor(ssGetTaskTime(S,1)/
      0.000244140625+0.5)));
    ((uint32_T *)ssGetDWork(S, 45))[0] = ((uint32_T *)ssGetDWork(S, 44))[0] -
      ((uint32_T *)ssGetDWork(S, 46))[0];
    ((uint32_T *)ssGetDWork(S, 46))[0] = ((uint32_T *)ssGetDWork(S, 44))[0];
    if ((uint32_T)((uint16_T *)ssGetDWork(S, 49))[0] + ((uint32_T *)ssGetDWork(S,
          45))[0] <= 65535U) {
      ((uint16_T *)ssGetDWork(S, 49))[0] = (uint16_T)((uint32_T)((uint16_T *)
        ssGetDWork(S, 49))[0] + ((uint32_T *)ssGetDWork(S, 45))[0]);
    } else {
      ((uint16_T *)ssGetDWork(S, 49))[0] = MAX_uint16_T;
    }

    /* Gateway: Robot Arm/Supervisor/Supervisory Controller R/Supervisor */
    /* During: Robot Arm/Supervisor/Supervisory Controller R/Supervisor */
    if (((uint8_T *)ssGetDWork(S, 54))[0] == 0U) {
      /* Entry: Robot Arm/Supervisor/Supervisory Controller R/Supervisor */
      ((uint8_T *)ssGetDWork(S, 54))[0] = 1U;

      /* Transition: '<S17>:7' */
      ((uint8_T *)ssGetDWork(S, 55))[0] = Robot_IN_Homing;

      /* Entry 'Homing': '<S17>:6' */
      /* Set jog speed and homing state */
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Ready_i = 0.0;
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->toPoint_b = 0.0;
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homingBusy_p = 1.0;
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->jogSpeed_i = 0.4;
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homeControllerEnabled_m = 1.0;
    } else {
      switch (((uint8_T *)ssGetDWork(S, 55))[0]) {
       case Robot_IN_AirbagLeft:
        /* During 'AirbagLeft': '<S17>:71' */
        if (((uint16_T *)ssGetDWork(S, 49))[0] >= 20480U) {
          /* Transition: '<S17>:79' */
          ((uint8_T *)ssGetDWork(S, 55))[0] = Robot_IN_DisableOutputs;

          /* Entry 'DisableOutputs': '<S17>:77' */
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->controlEnabled_m = 0.0;
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->StopSim_a = 1.0;
        }
        break;

       case Robot_IN_AirbagRight:
        /* During 'AirbagRight': '<S17>:74' */
        if (((uint16_T *)ssGetDWork(S, 49))[0] >= 20480U) {
          /* Transition: '<S17>:78' */
          ((uint8_T *)ssGetDWork(S, 55))[0] = Robot_IN_DisableOutputs;

          /* Entry 'DisableOutputs': '<S17>:77' */
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->controlEnabled_m = 0.0;
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->StopSim_a = 1.0;
        }
        break;

       case Robot_IN_CheckRobotIsON:
        /* During 'CheckRobotIsON': '<S17>:97' */
        if (((BlockIO_Robot *) ssGetLocalBlockIO(S))->Gain < 0.1) {
          /* Transition: '<S17>:101' */
          ((uint8_T *)ssGetDWork(S, 55))[0] = Robot_IN_STOPRobotIsOFF;

          /* Entry 'STOPRobotIsOFF': '<S17>:100' */
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->StopSim_a = 1.0;
        } else {
          /* Transition: '<S17>:103' */
          ((uint8_T *)ssGetDWork(S, 55))[0] = Robot_IN_RobotIsON;
          ((uint16_T *)ssGetDWork(S, 49))[0] = 0U;
        }
        break;

       case Robot_IN_DisableOutputs:
        break;

       case Robot_IN_EnableRunAndSafety:
        /* During 'EnableRunAndSafety': '<S17>:65' */
        if (((BlockIO_Robot *) ssGetLocalBlockIO(S))->Gain < -1.4) {
          /* Transition: '<S17>:72' */
          ((uint8_T *)ssGetDWork(S, 55))[0] = Robot_IN_AirbagLeft;
          ((uint16_T *)ssGetDWork(S, 49))[0] = 0U;

          /* Entry 'AirbagLeft': '<S17>:71' */
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->airBagEnabled_f = 1.0;
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->airBagRef_b = -1.4;
        } else {
          if (((BlockIO_Robot *) ssGetLocalBlockIO(S))->Gain > 1.4) {
            /* Transition: '<S17>:75' */
            ((uint8_T *)ssGetDWork(S, 55))[0] = Robot_IN_AirbagRight;
            ((uint16_T *)ssGetDWork(S, 49))[0] = 0U;

            /* Entry 'AirbagRight': '<S17>:74' */
            ((BlockIO_Robot *) ssGetLocalBlockIO(S))->airBagEnabled_f = 1.0;
            ((BlockIO_Robot *) ssGetLocalBlockIO(S))->airBagRef_b = 1.4;
          }
        }
        break;

       case Robot_IN_Homing:
        /* During 'Homing': '<S17>:6' */
        /* Transition if homeswitch becomes high */
        if (((BlockIO_Robot *) ssGetLocalBlockIO(S))->RelationalOperator) {
          /* Transition: '<S17>:10' */
          ((uint8_T *)ssGetDWork(S, 55))[0] = Robot_IN_MovetoX0;
          ((uint16_T *)ssGetDWork(S, 49))[0] = 0U;

          /* Entry 'MovetoX0': '<S17>:19' */
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->jogSpeed_i = 0.0;
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->toPoint_b = -2.15;
        }
        break;

       case Robot_IN_MovetoX0:
        /* During 'MovetoX0': '<S17>:19' */
        /* Allow time for moving */
        if (((uint16_T *)ssGetDWork(S, 49))[0] >= 2048U) {
          /* Transition: '<S17>:59' */
          ((uint8_T *)ssGetDWork(S, 55))[0] = Robot_IN_CheckRobotIsON;
        }
        break;

       case Robot_IN_ResetEnc:
        /* During 'ResetEnc': '<S17>:58' */
        if (((uint16_T *)ssGetDWork(S, 49))[0] >= 41U) {
          /* Transition: '<S17>:66' */
          ((uint8_T *)ssGetDWork(S, 55))[0] = Robot_IN_EnableRunAndSafety;

          /* Entry 'EnableRunAndSafety': '<S17>:65' */
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->resetEnc_h = 0.0;
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homingBusy_p = 0.0;
        }
        break;

       case Robot_IN_RobotIsON:
        /* During 'RobotIsON': '<S17>:102' */
        if (((uint16_T *)ssGetDWork(S, 49))[0] >= 36864U) {
          /* Transition: '<S17>:99' */
          ((uint8_T *)ssGetDWork(S, 55))[0] = Robot_IN_WaitForRest;

          /* Entry 'WaitForRest': '<S17>:94' */
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Ready_i = 1.0;
        }
        break;

       case Robot_IN_STOPRobotIsOFF:
        break;

       case Robot_IN_WaitForRest:
        /* During 'WaitForRest': '<S17>:94' */
        if (rtb_Compare) {
          /* Transition: '<S17>:95' */
          ((uint8_T *)ssGetDWork(S, 55))[0] = Robot_IN_ResetEnc;
          ((uint16_T *)ssGetDWork(S, 49))[0] = 0U;

          /* Entry 'ResetEnc': '<S17>:58' */
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->resetEnc_h = 1.0;
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homeControllerEnabled_m =
            0.0;
        }
        break;

       default:
        /* Transition: '<S17>:7' */
        ((uint8_T *)ssGetDWork(S, 55))[0] = Robot_IN_Homing;

        /* Entry 'Homing': '<S17>:6' */
        /* Set jog speed and homing state */
        ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Ready_i = 0.0;
        ((BlockIO_Robot *) ssGetLocalBlockIO(S))->toPoint_b = 0.0;
        ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homingBusy_p = 1.0;
        ((BlockIO_Robot *) ssGetLocalBlockIO(S))->jogSpeed_i = 0.4;
        ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homeControllerEnabled_m = 1.0;
        break;
      }
    }

    /* End of Chart: '<S8>/Supervisor' */

    /* Sum: '<S9>/Sum' incorporates:
     *  DiscreteIntegrator: '<S21>/Discrete-Time Integrator'
     *  DiscreteIntegrator: '<S9>/Discrete-Time Integrator'
     */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Sum_a = ((real_T *)ssGetDWork(S, 3))
      [0] + ((real_T *)ssGetDWork(S, 4))[0];
  }

  if (ssIsContinuousTask(S, tid)) {
    /* Gain: '<S2>/Gain1' */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Gain1 = -0.00014137166941154071 *
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->ec_Ebox_o2[1];

    /* Sum: '<S9>/Sum2' */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Sum2_g = ((BlockIO_Robot *)
      ssGetLocalBlockIO(S))->Sum_a - ((BlockIO_Robot *) ssGetLocalBlockIO(S))
      ->Gain1;

    /* RelationalOperator: '<S9>/Relational Operator' incorporates:
     *  Constant: '<S9>/Constant'
     */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->RelationalOperator_a =
      (((BlockIO_Robot *) ssGetLocalBlockIO(S))->Sum2_g <= -0.1);
  }

  if (ssIsSampleHit(S, 1, tid)) {
    /* Chart: '<S9>/Supervisor' */
    ((uint32_T *)ssGetDWork(S, 41))[0] = ((uint32_T)(floor(ssGetTaskTime(S,1)/
      0.000244140625+0.5)));
    ((uint32_T *)ssGetDWork(S, 42))[0] = ((uint32_T *)ssGetDWork(S, 41))[0] -
      ((uint32_T *)ssGetDWork(S, 43))[0];
    ((uint32_T *)ssGetDWork(S, 43))[0] = ((uint32_T *)ssGetDWork(S, 41))[0];
    if ((uint32_T)((uint16_T *)ssGetDWork(S, 48))[0] + ((uint32_T *)ssGetDWork(S,
          42))[0] <= 32767U) {
      ((uint16_T *)ssGetDWork(S, 48))[0] = (uint16_T)((uint32_T)((uint16_T *)
        ssGetDWork(S, 48))[0] + ((uint32_T *)ssGetDWork(S, 42))[0]);
    } else {
      ((uint16_T *)ssGetDWork(S, 48))[0] = 32767U;
    }

    /* Gateway: Robot Arm/Supervisor/Supervisory Controller X/Supervisor */
    /* During: Robot Arm/Supervisor/Supervisory Controller X/Supervisor */
    if (((uint8_T *)ssGetDWork(S, 52))[0] == 0U) {
      /* Entry: Robot Arm/Supervisor/Supervisory Controller X/Supervisor */
      ((uint8_T *)ssGetDWork(S, 52))[0] = 1U;

      /* Transition: '<S26>:7' */
      ((uint8_T *)ssGetDWork(S, 53))[0] = Robot_IN_WaitForZ;
      ((uint16_T *)ssGetDWork(S, 48))[0] = 0U;

      /* Entry 'WaitForZ': '<S26>:107' */
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->toPoint_d = 0.0;
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Ready_d = 0.0;
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homingBusy_k = 1.0;
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->jogSpeed_n = 0.0;
    } else {
      switch (((uint8_T *)ssGetDWork(S, 53))[0]) {
       case Robot_IN_AirbagLeft:
        /* During 'AirbagLeft': '<S26>:71' */
        if (((uint16_T *)ssGetDWork(S, 48))[0] >= 20480U) {
          /* Transition: '<S26>:79' */
          ((uint8_T *)ssGetDWork(S, 53))[0] = Robot_IN_DisableOutputs_o;

          /* Entry 'DisableOutputs': '<S26>:77' */
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->controlEnabled_o = 0.0;
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->StopSim_h = 1.0;
        }
        break;

       case Robot_IN_AirbagRight:
        /* During 'AirbagRight': '<S26>:74' */
        if (((uint16_T *)ssGetDWork(S, 48))[0] >= 20480U) {
          /* Transition: '<S26>:78' */
          ((uint8_T *)ssGetDWork(S, 53))[0] = Robot_IN_DisableOutputs_o;

          /* Entry 'DisableOutputs': '<S26>:77' */
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->controlEnabled_o = 0.0;
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->StopSim_h = 1.0;
        }
        break;

       case Robot_IN_DisableOutputs_o:
        break;

       case Robot_IN_EnableRunAndSafety_o:
        /* During 'EnableRunAndSafety': '<S26>:65' */
        if (((BlockIO_Robot *) ssGetLocalBlockIO(S))->Gain1 < -0.1) {
          /* Transition: '<S26>:72' */
          ((uint8_T *)ssGetDWork(S, 53))[0] = Robot_IN_AirbagLeft;
          ((uint16_T *)ssGetDWork(S, 48))[0] = 0U;

          /* Entry 'AirbagLeft': '<S26>:71' */
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->airBagEnabled_h = 1.0;
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->airBagRef_m = -0.1;
        } else {
          if (((BlockIO_Robot *) ssGetLocalBlockIO(S))->Gain1 > 1.15) {
            /* Transition: '<S26>:75' */
            ((uint8_T *)ssGetDWork(S, 53))[0] = Robot_IN_AirbagRight;
            ((uint16_T *)ssGetDWork(S, 48))[0] = 0U;

            /* Entry 'AirbagRight': '<S26>:74' */
            ((BlockIO_Robot *) ssGetLocalBlockIO(S))->airBagEnabled_h = 1.0;
            ((BlockIO_Robot *) ssGetLocalBlockIO(S))->airBagRef_m = 1.13;
          }
        }
        break;

       case Robot_IN_Homing_o:
        /* During 'Homing': '<S26>:6' */
        /* Transition if homeswitch becomes high */
        if (((BlockIO_Robot *) ssGetLocalBlockIO(S))->RelationalOperator_a) {
          /* Transition: '<S26>:10' */
          ((uint8_T *)ssGetDWork(S, 53))[0] = Robot_IN_MovetoX0_o;
          ((uint16_T *)ssGetDWork(S, 48))[0] = 0U;

          /* Entry 'MovetoX0': '<S26>:19' */
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->jogSpeed_n = 0.0;
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->toPoint_d = 0.3708572;
        }
        break;

       case Robot_IN_MovetoX0_o:
        /* During 'MovetoX0': '<S26>:19' */
        /* Allow time for moving */
        if (((uint16_T *)ssGetDWork(S, 48))[0] >= 28672U) {
          /* Transition: '<S26>:59' */
          ((uint8_T *)ssGetDWork(S, 53))[0] = Robot_IN_WaitForRest_o;

          /* Entry 'WaitForRest': '<S26>:116' */
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Ready_d = 1.0;
        }
        break;

       case Robot_IN_ResetEnc_o:
        /* During 'ResetEnc': '<S26>:58' */
        if (((uint16_T *)ssGetDWork(S, 48))[0] >= 41U) {
          /* Transition: '<S26>:66' */
          ((uint8_T *)ssGetDWork(S, 53))[0] = Robot_IN_EnableRunAndSafety_o;

          /* Entry 'EnableRunAndSafety': '<S26>:65' */
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->resetEnc_k = 0.0;
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homingBusy_k = 0.0;
        }
        break;

       case Robot_IN_WaitForRest_o:
        /* During 'WaitForRest': '<S26>:116' */
        if (rtb_Compare) {
          /* Transition: '<S26>:117' */
          ((uint8_T *)ssGetDWork(S, 53))[0] = Robot_IN_ResetEnc_o;
          ((uint16_T *)ssGetDWork(S, 48))[0] = 0U;

          /* Entry 'ResetEnc': '<S26>:58' */
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->resetEnc_k = 1.0;
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homeControllerEnabled_e =
            0.0;
        }
        break;

       case Robot_IN_WaitForZ:
        /* During 'WaitForZ': '<S26>:107' */
        if (((uint16_T *)ssGetDWork(S, 48))[0] >= 12288U) {
          /* Transition: '<S26>:111' */
          ((uint8_T *)ssGetDWork(S, 53))[0] = Robot_IN_Homing_o;

          /* Entry 'Homing': '<S26>:6' */
          /* Set jog speed and homing state */
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->jogSpeed_n = -0.2;
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homeControllerEnabled_e =
            1.0;
        }
        break;

       default:
        /* Transition: '<S26>:7' */
        ((uint8_T *)ssGetDWork(S, 53))[0] = Robot_IN_WaitForZ;
        ((uint16_T *)ssGetDWork(S, 48))[0] = 0U;

        /* Entry 'WaitForZ': '<S26>:107' */
        ((BlockIO_Robot *) ssGetLocalBlockIO(S))->toPoint_d = 0.0;
        ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Ready_d = 0.0;
        ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homingBusy_k = 1.0;
        ((BlockIO_Robot *) ssGetLocalBlockIO(S))->jogSpeed_n = 0.0;
        break;
      }
    }

    /* End of Chart: '<S9>/Supervisor' */

    /* Sum: '<S10>/Sum' incorporates:
     *  DiscreteIntegrator: '<S10>/Discrete-Time Integrator'
     *  DiscreteIntegrator: '<S31>/Discrete-Time Integrator'
     */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Sum_e = ((real_T *)ssGetDWork(S, 5))
      [0] + ((real_T *)ssGetDWork(S, 6))[0];
  }

  if (ssIsContinuousTask(S, tid)) {
    /* Level2 S-Function Block: '<S5>/ec_Ebox' (ec_Ebox) */
    {
      SimStruct *rts = ssGetSFunction(S, 1);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Gain: '<S2>/Gain2' */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Gain2 = 0.00014137166941154071 *
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->ec_Ebox_o2_i[0];

    /* Sum: '<S10>/Sum2' */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Sum2_b = ((BlockIO_Robot *)
      ssGetLocalBlockIO(S))->Sum_e - ((BlockIO_Robot *) ssGetLocalBlockIO(S))
      ->Gain2;

    /* RelationalOperator: '<S10>/Relational Operator' incorporates:
     *  Constant: '<S10>/Constant'
     */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->RelationalOperator_b =
      (((BlockIO_Robot *) ssGetLocalBlockIO(S))->Sum2_b >= 0.1);

    /* MATLAB Function: '<S10>/Angle2Z' incorporates:
     *  SignalConversion: '<S28>/TmpSignal ConversionAt SFunction Inport1'
     */
    /* MATLAB Function 'Robot Arm/Supervisor/Supervisory Controller Z/Angle2Z': '<S28>:1' */
    /* '<S28>:1:3' */
    /* '<S28>:1:4' */
    /* '<S28>:1:5' */
    /* '<S28>:1:6' */
    /*  parameters */
    /* '<S28>:1:15' */
    /*  functions */
    /* '<S28>:1:22' */
    fx = cos(-((BlockIO_Robot *) ssGetLocalBlockIO(S))->Gain1 +
             1.5707963267948966) * 0.08;

    /* '<S28>:1:23' */
    fy = sin(-((BlockIO_Robot *) ssGetLocalBlockIO(S))->Gain1 +
             1.5707963267948966) * 0.08;

    /* '<S28>:1:25' */
    /* '<S28>:1:26' */
    x = sin(((BlockIO_Robot *) ssGetLocalBlockIO(S))->Gain2 +
            0.43633231299858238);

    /* '<S28>:1:28' */
    d = sqrt(Robot_rt_powd_snf(cos(((BlockIO_Robot *) ssGetLocalBlockIO(S))
               ->Gain2 + 0.43633231299858238) * 0.13 - fx, 2.0) +
             Robot_rt_powd_snf((0.13 * x + 0.165) - fy, 2.0));

    /* '<S28>:1:29' */
    /* '<S28>:1:31' */
    /* '<S28>:1:32' */
    /* '<S28>:1:34' */
    /* '<S28>:1:36' */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->y = ((0.13 * x + 0.165) - sin
      (((3.1415926535897931 - acos(((0.016900000000000002 + Robot_rt_powd_snf(d,
      2.0)) - Robot_rt_powd_snf(sqrt(Robot_rt_powd_snf(0.165 - fy, 2.0) +
      Robot_rt_powd_snf(fx, 2.0)), 2.0)) / (2.0 * d * 0.13))) - acos(((0.0144 +
      Robot_rt_powd_snf(d, 2.0)) - 0.016900000000000002) / (2.0 * d * 0.12))) -
       (((BlockIO_Robot *) ssGetLocalBlockIO(S))->Gain2 + 0.43633231299858238)) *
      0.185) - 0.013;
  }

  if (ssIsSampleHit(S, 1, tid)) {
    /* Chart: '<S10>/Supervisor' */
    ((uint32_T *)ssGetDWork(S, 38))[0] = ((uint32_T)(floor(ssGetTaskTime(S,1)/
      0.000244140625+0.5)));
    ((uint32_T *)ssGetDWork(S, 39))[0] = ((uint32_T *)ssGetDWork(S, 38))[0] -
      ((uint32_T *)ssGetDWork(S, 40))[0];
    ((uint32_T *)ssGetDWork(S, 40))[0] = ((uint32_T *)ssGetDWork(S, 38))[0];
    if ((uint32_T)((uint16_T *)ssGetDWork(S, 47))[0] + ((uint32_T *)ssGetDWork(S,
          39))[0] <= 32767U) {
      ((uint16_T *)ssGetDWork(S, 47))[0] = (uint16_T)((uint32_T)((uint16_T *)
        ssGetDWork(S, 47))[0] + ((uint32_T *)ssGetDWork(S, 39))[0]);
    } else {
      ((uint16_T *)ssGetDWork(S, 47))[0] = 32767U;
    }

    /* Gateway: Robot Arm/Supervisor/Supervisory Controller Z/Supervisor */
    /* During: Robot Arm/Supervisor/Supervisory Controller Z/Supervisor */
    if (((uint8_T *)ssGetDWork(S, 50))[0] == 0U) {
      /* Entry: Robot Arm/Supervisor/Supervisory Controller Z/Supervisor */
      ((uint8_T *)ssGetDWork(S, 50))[0] = 1U;

      /* Transition: '<S36>:7' */
      ((uint8_T *)ssGetDWork(S, 51))[0] = Robot_IN_Homing_o;

      /* Entry 'Homing': '<S36>:6' */
      /* Set jog speed and homing state */
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->toPoint = 0.0;
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Ready = 0.0;
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homingBusy = 1.0;
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->jogSpeed = 0.2;
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homeControllerEnabled = 1.0;
    } else {
      switch (((uint8_T *)ssGetDWork(S, 51))[0]) {
       case Robot_IN_AirbagLeft:
        /* During 'AirbagLeft': '<S36>:71' */
        if (((uint16_T *)ssGetDWork(S, 47))[0] >= 20480U) {
          /* Transition: '<S36>:79' */
          ((uint8_T *)ssGetDWork(S, 51))[0] = Robot_IN_DisableOutputs_o;

          /* Entry 'DisableOutputs': '<S36>:77' */
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->controlEnabled = 0.0;
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->StopSim = 1.0;
        }
        break;

       case Robot_IN_AirbagRight:
        /* During 'AirbagRight': '<S36>:74' */
        if (((uint16_T *)ssGetDWork(S, 47))[0] >= 20480U) {
          /* Transition: '<S36>:78' */
          ((uint8_T *)ssGetDWork(S, 51))[0] = Robot_IN_DisableOutputs_o;

          /* Entry 'DisableOutputs': '<S36>:77' */
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->controlEnabled = 0.0;
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->StopSim = 1.0;
        }
        break;

       case Robot_IN_DisableOutputs_o:
        break;

       case Robot_IN_EnableRunAndSafety_o:
        /* During 'EnableRunAndSafety': '<S36>:65' */
        if (((BlockIO_Robot *) ssGetLocalBlockIO(S))->y < -0.0225) {
          /* Transition: '<S36>:72' */
          ((uint8_T *)ssGetDWork(S, 51))[0] = Robot_IN_AirbagLeft;
          ((uint16_T *)ssGetDWork(S, 47))[0] = 0U;

          /* Entry 'AirbagLeft': '<S36>:71' */
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->airBagEnabled = 1.0;
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->airBagRef = ((BlockIO_Robot *)
            ssGetLocalBlockIO(S))->Gain2 + 0.02;
        } else {
          if (((BlockIO_Robot *) ssGetLocalBlockIO(S))->Gain2 > 0.5) {
            /* Transition: '<S36>:75' */
            ((uint8_T *)ssGetDWork(S, 51))[0] = Robot_IN_AirbagRight;
            ((uint16_T *)ssGetDWork(S, 47))[0] = 0U;

            /* Entry 'AirbagRight': '<S36>:74' */
            ((BlockIO_Robot *) ssGetLocalBlockIO(S))->airBagEnabled = 1.0;
            ((BlockIO_Robot *) ssGetLocalBlockIO(S))->airBagRef = 0.48;
          }
        }
        break;

       case Robot_IN_Homing_o:
        /* During 'Homing': '<S36>:6' */
        /* Transition if homeswitch becomes high */
        if (((BlockIO_Robot *) ssGetLocalBlockIO(S))->RelationalOperator_b) {
          /* Transition: '<S36>:10' */
          ((uint8_T *)ssGetDWork(S, 51))[0] = Robot_IN_MovetoX0_o;
          ((uint16_T *)ssGetDWork(S, 47))[0] = 0U;

          /* Entry 'MovetoX0': '<S36>:19' */
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->jogSpeed = 0.0;
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->toPoint = -0.7854;
        }
        break;

       case Robot_IN_MovetoX0_o:
        /* During 'MovetoX0': '<S36>:19' */
        /* Allow time for moving */
        if (((uint16_T *)ssGetDWork(S, 47))[0] >= 28672U) {
          /* Transition: '<S36>:59' */
          ((uint8_T *)ssGetDWork(S, 51))[0] = Robot_IN_WaitForRest_o;

          /* Entry 'WaitForRest': '<S36>:93' */
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Ready = 1.0;
        }
        break;

       case Robot_IN_ResetEnc_o:
        /* During 'ResetEnc': '<S36>:58' */
        if (((uint16_T *)ssGetDWork(S, 47))[0] >= 41U) {
          /* Transition: '<S36>:66' */
          ((uint8_T *)ssGetDWork(S, 51))[0] = Robot_IN_EnableRunAndSafety_o;

          /* Entry 'EnableRunAndSafety': '<S36>:65' */
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->resetEnc = 0.0;
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homingBusy = 0.0;
        }
        break;

       case Robot_IN_WaitForRest_o:
        /* During 'WaitForRest': '<S36>:93' */
        if (rtb_Compare) {
          /* Transition: '<S36>:94' */
          ((uint8_T *)ssGetDWork(S, 51))[0] = Robot_IN_ResetEnc_o;
          ((uint16_T *)ssGetDWork(S, 47))[0] = 0U;

          /* Entry 'ResetEnc': '<S36>:58' */
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->resetEnc = 1.0;
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homeControllerEnabled = 0.0;
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Ready = 1.0;
        }
        break;

       default:
        /* Transition: '<S36>:7' */
        ((uint8_T *)ssGetDWork(S, 51))[0] = Robot_IN_Homing_o;

        /* Entry 'Homing': '<S36>:6' */
        /* Set jog speed and homing state */
        ((BlockIO_Robot *) ssGetLocalBlockIO(S))->toPoint = 0.0;
        ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Ready = 0.0;
        ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homingBusy = 1.0;
        ((BlockIO_Robot *) ssGetLocalBlockIO(S))->jogSpeed = 0.2;
        ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homeControllerEnabled = 1.0;
        break;
      }
    }

    /* End of Chart: '<S10>/Supervisor' */

    /* Sum: '<S7>/Add' */
    fx = (((BlockIO_Robot *) ssGetLocalBlockIO(S))->homingBusy_p +
          ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homingBusy_k) +
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homingBusy;

    /* Outport: '<Root>/Homing Busy' incorporates:
     *  Constant: '<S7>/Constant'
     *  Signum: '<S7>/Sign'
     *  Sum: '<S7>/Add1'
     */
    ((real_T *)ssGetOutputPortSignal(S, 0))[0] = 1.0 - (fx < 0.0 ? -1.0 : fx >
      0.0 ? 1.0 : fx == 0.0 ? 0.0 : fx);
  }

  if (ssIsContinuousTask(S, tid)) {
    /* Outport: '<Root>/Angle measurments [rad]' */
    ((real_T *)ssGetOutputPortSignal(S, 1))[0] = ((BlockIO_Robot *)
      ssGetLocalBlockIO(S))->Gain;
    ((real_T *)ssGetOutputPortSignal(S, 1))[1] = ((BlockIO_Robot *)
      ssGetLocalBlockIO(S))->Gain1;
    ((real_T *)ssGetOutputPortSignal(S, 1))[2] = ((BlockIO_Robot *)
      ssGetLocalBlockIO(S))->Gain2;
  }

  if (ssIsSampleHit(S, 1, tid)) {
    /* Outport: '<Root>/Airbag Status' incorporates:
     *  Logic: '<S10>/Logical Operator2'
     *  Logic: '<S8>/Logical Operator2'
     *  Logic: '<S9>/Logical Operator2'
     */
    ((boolean_T *)ssGetOutputPortSignal(S, 2))[0] = !(((BlockIO_Robot *)
      ssGetLocalBlockIO(S))->controlEnabled_m != 0.0);
    ((boolean_T *)ssGetOutputPortSignal(S, 2))[1] = !(((BlockIO_Robot *)
      ssGetLocalBlockIO(S))->controlEnabled_o != 0.0);
    ((boolean_T *)ssGetOutputPortSignal(S, 2))[2] = !(((BlockIO_Robot *)
      ssGetLocalBlockIO(S))->controlEnabled != 0.0);
  }

  if (ssIsContinuousTask(S, tid)) {
    /* Outport: '<Root>/Accelerometer [V]' */
    ((real_T *)ssGetOutputPortSignal(S, 3))[0] = ((BlockIO_Robot *)
      ssGetLocalBlockIO(S))->ec_Ebox_o1[0];
  }

  if (ssIsSampleHit(S, 1, tid)) {
    /* DiscretePulseGenerator: '<S2>/Pulse Generator' */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->PulseGenerator = (((int32_T *)
      ssGetDWork(S, 37))[0] < 2) && (((int32_T *)ssGetDWork(S, 37))[0] >= 0) ?
      2000.0 : 0.0;
    if (((int32_T *)ssGetDWork(S, 37))[0] >= 3) {
      ((int32_T *)ssGetDWork(S, 37))[0] = 0;
    } else {
      ((int32_T *)ssGetDWork(S, 37))[0] = ((int32_T *)ssGetDWork(S, 37))[0] + 1;
    }

    /* End of DiscretePulseGenerator: '<S2>/Pulse Generator' */
    /* Level2 S-Function Block: '<S8>/Dctintegrator' (dweakint) */
    {
      SimStruct *rts = ssGetSFunction(S, 2);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S11>/Dctpd1' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 3);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S11>/Dctnotch1' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 4);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S11>/Dct2lowpass1' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 5);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Product: '<S8>/Product' */
    fx = ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Dct2lowpass1 *
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->homeControllerEnabled_m;

    /* Saturate: '<S8>/Saturation' */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Saturation = fx >= 0.7 ? 0.7 : fx <=
      -0.7 ? -0.7 : fx;

    /* Logic: '<S8>/Logical Operator1' */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->LogicalOperator1 =
      !(((BlockIO_Robot *) ssGetLocalBlockIO(S))->airBagEnabled_f != 0.0);
  }

  if (ssIsContinuousTask(S, tid)) {
    /* Sum: '<S8>/Sum1' */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Sum1 = ((BlockIO_Robot *)
      ssGetLocalBlockIO(S))->airBagRef_b - ((BlockIO_Robot *) ssGetLocalBlockIO
      (S))->Gain;
  }

  if (ssIsSampleHit(S, 1, tid)) {
    /* Level2 S-Function Block: '<S12>/Dctpd1' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 6);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S12>/Dctnotch1' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 7);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S12>/Dct2lowpass1' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 8);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }
  }

  if (ssIsContinuousTask(S, tid)) {
    /* Switch: '<S8>/AirbagSwitch' */
    if (((BlockIO_Robot *) ssGetLocalBlockIO(S))->LogicalOperator1) {
      /* Switch: '<S8>/Homing Running Switch' incorporates:
       *  Inport: '<Root>/Input [V]'
       */
      if (((BlockIO_Robot *) ssGetLocalBlockIO(S))->homingBusy_p >= 0.5) {
        fx = ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Saturation;
      } else {
        fx = (*(((const real_T **)ssGetInputPortSignalPtrs(S, 0))[0]));
      }

      /* End of Switch: '<S8>/Homing Running Switch' */
    } else {
      fx = ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Dct2lowpass1_h;
    }

    /* End of Switch: '<S8>/AirbagSwitch' */

    /* Sum: '<S2>/Sum' incorporates:
     *  Constant: '<S2>/Constant'
     *  Product: '<S8>/Product1'
     */
    fx = fx * ((BlockIO_Robot *) ssGetLocalBlockIO(S))->controlEnabled_m + 2.5;

    /* Saturate: '<S2>/Saturation' */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Saturation_j = fx >= 5.0 ? 5.0 :
      fx <= 0.0 ? 0.0 : fx;
  }

  if (ssIsSampleHit(S, 1, tid)) {
    /* Level2 S-Function Block: '<S10>/Dctintegrator' (dweakint) */
    {
      SimStruct *rts = ssGetSFunction(S, 9);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S30>/Dctpd1' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 10);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S30>/Dctnotch1' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 11);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S30>/Dct2lowpass1' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 12);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Product: '<S10>/Product' */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Product = ((BlockIO_Robot *)
      ssGetLocalBlockIO(S))->Dct2lowpass1_c * ((BlockIO_Robot *)
      ssGetLocalBlockIO(S))->homeControllerEnabled;

    /* Logic: '<S10>/Logical Operator1' */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->LogicalOperator1_f =
      !(((BlockIO_Robot *) ssGetLocalBlockIO(S))->airBagEnabled != 0.0);
  }

  if (ssIsContinuousTask(S, tid)) {
    /* Sum: '<S10>/Sum1' */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Sum1_f = ((BlockIO_Robot *)
      ssGetLocalBlockIO(S))->airBagRef - ((BlockIO_Robot *) ssGetLocalBlockIO(S))
      ->Gain2;
  }

  if (ssIsSampleHit(S, 1, tid)) {
    /* Level2 S-Function Block: '<S29>/Dctpd1' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 13);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S29>/Dctnotch1' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 14);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S29>/Dct2lowpass1' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 15);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }
  }

  if (ssIsContinuousTask(S, tid)) {
    /* Switch: '<S10>/AirbagSwitch' */
    if (((BlockIO_Robot *) ssGetLocalBlockIO(S))->LogicalOperator1_f) {
      /* Switch: '<S10>/Homing Running Switch' incorporates:
       *  Inport: '<Root>/Input [V]'
       */
      if (((BlockIO_Robot *) ssGetLocalBlockIO(S))->homingBusy >= 0.5) {
        fx = ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Product;
      } else {
        fx = (*(((const real_T **)ssGetInputPortSignalPtrs(S, 0))[2]));
      }

      /* End of Switch: '<S10>/Homing Running Switch' */
    } else {
      fx = ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Dct2lowpass1_n;
    }

    /* End of Switch: '<S10>/AirbagSwitch' */

    /* Sum: '<S2>/Sum2' incorporates:
     *  Constant: '<S2>/Constant1'
     *  Product: '<S10>/Product1'
     */
    fx = fx * ((BlockIO_Robot *) ssGetLocalBlockIO(S))->controlEnabled + 2.5;

    /* Saturate: '<S2>/Saturation2' */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Saturation2 = fx >= 5.0 ? 5.0 : fx
      <= 0.0 ? 0.0 : fx;
  }

  if (ssIsSampleHit(S, 1, tid)) {
    /* Level2 S-Function Block: '<S9>/Dctintegrator' (dweakint) */
    {
      SimStruct *rts = ssGetSFunction(S, 16);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S19>/Dctpd1' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 17);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S19>/Dctnotch1' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 18);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S19>/Dct2lowpass1' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 19);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Product: '<S9>/Product' */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Product_i = ((BlockIO_Robot *)
      ssGetLocalBlockIO(S))->Dct2lowpass1_l * ((BlockIO_Robot *)
      ssGetLocalBlockIO(S))->homeControllerEnabled_e;

    /* Logic: '<S9>/Logical Operator1' */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->LogicalOperator1_c =
      !(((BlockIO_Robot *) ssGetLocalBlockIO(S))->airBagEnabled_h != 0.0);
  }

  if (ssIsContinuousTask(S, tid)) {
    /* Sum: '<S9>/Sum1' */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Sum1_m = ((BlockIO_Robot *)
      ssGetLocalBlockIO(S))->airBagRef_m - ((BlockIO_Robot *) ssGetLocalBlockIO
      (S))->Gain1;
  }

  if (ssIsSampleHit(S, 1, tid)) {
    /* Level2 S-Function Block: '<S20>/Dctpd1' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 20);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S20>/Dctnotch1' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 21);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S20>/Dct2lowpass1' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 22);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }
  }

  if (ssIsContinuousTask(S, tid)) {
    /* Switch: '<S9>/AirbagSwitch' */
    if (((BlockIO_Robot *) ssGetLocalBlockIO(S))->LogicalOperator1_c) {
      /* Switch: '<S9>/Homing Running Switch' incorporates:
       *  Inport: '<Root>/Input [V]'
       */
      if (((BlockIO_Robot *) ssGetLocalBlockIO(S))->homingBusy_k >= 0.5) {
        fx = ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Product_i;
      } else {
        fx = (*(((const real_T **)ssGetInputPortSignalPtrs(S, 0))[1]));
      }

      /* End of Switch: '<S9>/Homing Running Switch' */
    } else {
      fx = ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Dct2lowpass1_g;
    }

    /* End of Switch: '<S9>/AirbagSwitch' */

    /* Sum: '<S2>/Sum1' incorporates:
     *  Constant: '<S2>/Constant'
     *  Product: '<S9>/Product1'
     */
    fx = 2.5 - fx * ((BlockIO_Robot *) ssGetLocalBlockIO(S))->controlEnabled_o;

    /* Saturate: '<S2>/SaturationX' */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->SaturationX = fx >= 5.0 ? 5.0 : fx
      <= 0.0 ? 0.0 : fx;
  }

  if (ssIsSampleHit(S, 1, tid)) {
    /* Switch: '<S2>/Switch' incorporates:
     *  Constant: '<S2>/Constant3'
     *  Constant: '<S2>/Constant4'
     *  Inport: '<Root>/Solenoid'
     */
    if ((*(((const real_T **)ssGetInputPortSignalPtrs(S, 1))[0])) >= 0.5) {
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Switch = 2000.0;
    } else {
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Switch = 0.0;
    }

    /* End of Switch: '<S2>/Switch' */

    /* Sum: '<S3>/Add' */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Add = (((BlockIO_Robot *)
      ssGetLocalBlockIO(S))->Ready_i + ((BlockIO_Robot *) ssGetLocalBlockIO(S)
      )->Ready_d) + ((BlockIO_Robot *) ssGetLocalBlockIO(S))->Ready;
  }

  if (ssIsContinuousTask(S, tid)) {
    /* Level2 S-Function Block: '<S8>/Reset EncoderR' (ec_EboxResetEnc) */
    {
      SimStruct *rts = ssGetSFunction(S, 23);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }
  }

  if (ssIsSampleHit(S, 1, tid)) {
    /* Stop: '<S8>/Stop Simulation' */
    if (((BlockIO_Robot *) ssGetLocalBlockIO(S))->StopSim_a != 0.0) {
      ssSetStopRequested(S, 1);
    }

    /* End of Stop: '<S8>/Stop Simulation' */

    /* Sum: '<S13>/Sum' */
    fx = ((BlockIO_Robot *) ssGetLocalBlockIO(S))->toPoint_b + Robot_rtC(S)
      ->Constant1;

    /* RateLimiter: '<S13>/Limit Speed' */
    fy = fx - ((real_T *)ssGetDWork(S, 10))[0];
    if (fy > 9.765625E-5) {
      fx = ((real_T *)ssGetDWork(S, 10))[0] + 9.765625E-5;
    } else {
      if (fy < -9.765625E-5) {
        fx = ((real_T *)ssGetDWork(S, 10))[0] + -9.765625E-5;
      }
    }

    ((real_T *)ssGetDWork(S, 10))[0] = fx;

    /* End of RateLimiter: '<S13>/Limit Speed' */

    /* SampleTimeMath: '<S18>/TSamp'
     *
     * About '<S18>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->TSamp = fx * 4096.0;

    /* Sum: '<S18>/Diff' incorporates:
     *  UnitDelay: '<S18>/UD'
     */
    fx = ((BlockIO_Robot *) ssGetLocalBlockIO(S))->TSamp - ((real_T *)ssGetDWork
      (S, 7))[0];

    /* RateLimiter: '<S13>/Limit Acceleration' */
    fy = fx - ((real_T *)ssGetDWork(S, 11))[0];
    if (fy > 0.0001220703125) {
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->LimitAcceleration = ((real_T *)
        ssGetDWork(S, 11))[0] + 0.0001220703125;
    } else if (fy < -0.0001220703125) {
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->LimitAcceleration = ((real_T *)
        ssGetDWork(S, 11))[0] + -0.0001220703125;
    } else {
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->LimitAcceleration = fx;
    }

    ((real_T *)ssGetDWork(S, 11))[0] = ((BlockIO_Robot *) ssGetLocalBlockIO(S)
      )->LimitAcceleration;

    /* End of RateLimiter: '<S13>/Limit Acceleration' */
  }

  if (ssIsContinuousTask(S, tid)) {
    /* Level2 S-Function Block: '<S9>/Reset EncoderX' (ec_EboxResetEnc) */
    {
      SimStruct *rts = ssGetSFunction(S, 24);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }
  }

  if (ssIsSampleHit(S, 1, tid)) {
    /* Stop: '<S9>/Stop Simulation' */
    if (((BlockIO_Robot *) ssGetLocalBlockIO(S))->StopSim_h != 0.0) {
      ssSetStopRequested(S, 1);
    }

    /* End of Stop: '<S9>/Stop Simulation' */

    /* Sum: '<S21>/Sum' */
    fx = ((BlockIO_Robot *) ssGetLocalBlockIO(S))->toPoint_d + Robot_rtC(S)
      ->Constant1_n;

    /* RateLimiter: '<S21>/Limit Speed' */
    fy = fx - ((real_T *)ssGetDWork(S, 12))[0];
    if (fy > 9.765625E-5) {
      fx = ((real_T *)ssGetDWork(S, 12))[0] + 9.765625E-5;
    } else {
      if (fy < -9.765625E-5) {
        fx = ((real_T *)ssGetDWork(S, 12))[0] + -9.765625E-5;
      }
    }

    ((real_T *)ssGetDWork(S, 12))[0] = fx;

    /* End of RateLimiter: '<S21>/Limit Speed' */

    /* SampleTimeMath: '<S27>/TSamp'
     *
     * About '<S27>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->TSamp_i = fx * 4096.0;

    /* Sum: '<S27>/Diff' incorporates:
     *  UnitDelay: '<S27>/UD'
     */
    fx = ((BlockIO_Robot *) ssGetLocalBlockIO(S))->TSamp_i - ((real_T *)
      ssGetDWork(S, 8))[0];

    /* RateLimiter: '<S21>/Limit Acceleration' */
    fy = fx - ((real_T *)ssGetDWork(S, 13))[0];
    if (fy > 0.0001220703125) {
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->LimitAcceleration_g = ((real_T *)
        ssGetDWork(S, 13))[0] + 0.0001220703125;
    } else if (fy < -0.0001220703125) {
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->LimitAcceleration_g = ((real_T *)
        ssGetDWork(S, 13))[0] + -0.0001220703125;
    } else {
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->LimitAcceleration_g = fx;
    }

    ((real_T *)ssGetDWork(S, 13))[0] = ((BlockIO_Robot *) ssGetLocalBlockIO(S)
      )->LimitAcceleration_g;

    /* End of RateLimiter: '<S21>/Limit Acceleration' */
  }

  if (ssIsContinuousTask(S, tid)) {
    /* Level2 S-Function Block: '<S10>/Reset EncoderZ' (ec_EboxResetEnc) */
    {
      SimStruct *rts = ssGetSFunction(S, 25);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }
  }

  if (ssIsSampleHit(S, 1, tid)) {
    /* Stop: '<S10>/Stop Simulation' */
    if (((BlockIO_Robot *) ssGetLocalBlockIO(S))->StopSim != 0.0) {
      ssSetStopRequested(S, 1);
    }

    /* End of Stop: '<S10>/Stop Simulation' */

    /* Sum: '<S31>/Sum' */
    fx = ((BlockIO_Robot *) ssGetLocalBlockIO(S))->toPoint + Robot_rtC(S)
      ->Constant1_p;

    /* RateLimiter: '<S31>/Limit Speed' */
    fy = fx - ((real_T *)ssGetDWork(S, 14))[0];
    if (fy > 4.8828125E-5) {
      fx = ((real_T *)ssGetDWork(S, 14))[0] + 4.8828125E-5;
    } else {
      if (fy < -4.8828125E-5) {
        fx = ((real_T *)ssGetDWork(S, 14))[0] + -4.8828125E-5;
      }
    }

    ((real_T *)ssGetDWork(S, 14))[0] = fx;

    /* End of RateLimiter: '<S31>/Limit Speed' */

    /* SampleTimeMath: '<S37>/TSamp'
     *
     * About '<S37>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    ((BlockIO_Robot *) ssGetLocalBlockIO(S))->TSamp_m = fx * 4096.0;

    /* Sum: '<S37>/Diff' incorporates:
     *  UnitDelay: '<S37>/UD'
     */
    fx = ((BlockIO_Robot *) ssGetLocalBlockIO(S))->TSamp_m - ((real_T *)
      ssGetDWork(S, 9))[0];

    /* RateLimiter: '<S31>/Limit Acceleration' */
    fy = fx - ((real_T *)ssGetDWork(S, 15))[0];
    if (fy > 0.0001220703125) {
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->LimitAcceleration_c = ((real_T *)
        ssGetDWork(S, 15))[0] + 0.0001220703125;
    } else if (fy < -0.0001220703125) {
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->LimitAcceleration_c = ((real_T *)
        ssGetDWork(S, 15))[0] + -0.0001220703125;
    } else {
      ((BlockIO_Robot *) ssGetLocalBlockIO(S))->LimitAcceleration_c = fx;
    }

    ((real_T *)ssGetDWork(S, 15))[0] = ((BlockIO_Robot *) ssGetLocalBlockIO(S)
      )->LimitAcceleration_c;

    /* End of RateLimiter: '<S31>/Limit Acceleration' */
  }
}

/* Update for root system: '<Root>' */
#define MDL_UPDATE

static void mdlUpdate(SimStruct *S, int_T tid)
{
  if (ssIsSampleHit(S, 1, tid)) {
    /* Update for DiscreteIntegrator: '<S8>/Discrete-Time Integrator' */
    ((real_T *)ssGetDWork(S, 0))[0] = 0.000244140625 * ((BlockIO_Robot *)
      ssGetLocalBlockIO(S))->jogSpeed_i + ((real_T *)ssGetDWork(S, 0))[0];

    /* Update for DiscreteIntegrator: '<S13>/Discrete-Time Integrator' */
    ((real_T *)ssGetDWork(S, 1))[0] = 0.000244140625 * ((BlockIO_Robot *)
      ssGetLocalBlockIO(S))->LimitAcceleration + ((real_T *)ssGetDWork(S, 1))[0];

    /* Update for UnitDelay: '<S3>/Unit Delay' */
    ((real_T *)ssGetDWork(S, 2))[0] = ((BlockIO_Robot *) ssGetLocalBlockIO(S))
      ->Add;

    /* Update for DiscreteIntegrator: '<S9>/Discrete-Time Integrator' */
    ((real_T *)ssGetDWork(S, 3))[0] = 0.000244140625 * ((BlockIO_Robot *)
      ssGetLocalBlockIO(S))->jogSpeed_n + ((real_T *)ssGetDWork(S, 3))[0];

    /* Update for DiscreteIntegrator: '<S21>/Discrete-Time Integrator' */
    ((real_T *)ssGetDWork(S, 4))[0] = 0.000244140625 * ((BlockIO_Robot *)
      ssGetLocalBlockIO(S))->LimitAcceleration_g + ((real_T *)ssGetDWork(S, 4))
      [0];

    /* Update for DiscreteIntegrator: '<S10>/Discrete-Time Integrator' */
    ((real_T *)ssGetDWork(S, 5))[0] = 0.000244140625 * ((BlockIO_Robot *)
      ssGetLocalBlockIO(S))->jogSpeed + ((real_T *)ssGetDWork(S, 5))[0];

    /* Update for DiscreteIntegrator: '<S31>/Discrete-Time Integrator' */
    ((real_T *)ssGetDWork(S, 6))[0] = 0.000244140625 * ((BlockIO_Robot *)
      ssGetLocalBlockIO(S))->LimitAcceleration_c + ((real_T *)ssGetDWork(S, 6))
      [0];

    /* Update for UnitDelay: '<S18>/UD' */
    ((real_T *)ssGetDWork(S, 7))[0] = ((BlockIO_Robot *) ssGetLocalBlockIO(S))
      ->TSamp;

    /* Update for UnitDelay: '<S27>/UD' */
    ((real_T *)ssGetDWork(S, 8))[0] = ((BlockIO_Robot *) ssGetLocalBlockIO(S))
      ->TSamp_i;

    /* Update for UnitDelay: '<S37>/UD' */
    ((real_T *)ssGetDWork(S, 9))[0] = ((BlockIO_Robot *) ssGetLocalBlockIO(S))
      ->TSamp_m;
  }
}

/* Termination for root system: '<Root>' */
static void mdlTerminate(SimStruct *S)
{
  /* Level2 S-Function Block: '<S4>/ec_Ebox' (ec_Ebox) */
  {
    SimStruct *rts = ssGetSFunction(S, 0);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S5>/ec_Ebox' (ec_Ebox) */
  {
    SimStruct *rts = ssGetSFunction(S, 1);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S8>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = ssGetSFunction(S, 2);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S11>/Dctpd1' (dpd) */
  {
    SimStruct *rts = ssGetSFunction(S, 3);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S11>/Dctnotch1' (dnotch) */
  {
    SimStruct *rts = ssGetSFunction(S, 4);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S11>/Dct2lowpass1' (dlowpass2) */
  {
    SimStruct *rts = ssGetSFunction(S, 5);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S12>/Dctpd1' (dpd) */
  {
    SimStruct *rts = ssGetSFunction(S, 6);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S12>/Dctnotch1' (dnotch) */
  {
    SimStruct *rts = ssGetSFunction(S, 7);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S12>/Dct2lowpass1' (dlowpass2) */
  {
    SimStruct *rts = ssGetSFunction(S, 8);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S10>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = ssGetSFunction(S, 9);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S30>/Dctpd1' (dpd) */
  {
    SimStruct *rts = ssGetSFunction(S, 10);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S30>/Dctnotch1' (dnotch) */
  {
    SimStruct *rts = ssGetSFunction(S, 11);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S30>/Dct2lowpass1' (dlowpass2) */
  {
    SimStruct *rts = ssGetSFunction(S, 12);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S29>/Dctpd1' (dpd) */
  {
    SimStruct *rts = ssGetSFunction(S, 13);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S29>/Dctnotch1' (dnotch) */
  {
    SimStruct *rts = ssGetSFunction(S, 14);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S29>/Dct2lowpass1' (dlowpass2) */
  {
    SimStruct *rts = ssGetSFunction(S, 15);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S9>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = ssGetSFunction(S, 16);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S19>/Dctpd1' (dpd) */
  {
    SimStruct *rts = ssGetSFunction(S, 17);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S19>/Dctnotch1' (dnotch) */
  {
    SimStruct *rts = ssGetSFunction(S, 18);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S19>/Dct2lowpass1' (dlowpass2) */
  {
    SimStruct *rts = ssGetSFunction(S, 19);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S20>/Dctpd1' (dpd) */
  {
    SimStruct *rts = ssGetSFunction(S, 20);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S20>/Dctnotch1' (dnotch) */
  {
    SimStruct *rts = ssGetSFunction(S, 21);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S20>/Dct2lowpass1' (dlowpass2) */
  {
    SimStruct *rts = ssGetSFunction(S, 22);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S8>/Reset EncoderR' (ec_EboxResetEnc) */
  {
    SimStruct *rts = ssGetSFunction(S, 23);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S9>/Reset EncoderX' (ec_EboxResetEnc) */
  {
    SimStruct *rts = ssGetSFunction(S, 24);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S10>/Reset EncoderZ' (ec_EboxResetEnc) */
  {
    SimStruct *rts = ssGetSFunction(S, 25);
    sfcnTerminate(rts);
  }

#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)

  /* child S-function code */
  if (_ssGetSFunctions(S) ) {
    /* Level2 S-Function Block: '<S4>/ec_Ebox' (ec_Ebox) */
    {
      SimStruct *rts = ssGetSFunction(S, 0);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 1);
          rt_FREE(ptr);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 2);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
      }
    }

    /* Level2 S-Function Block: '<S5>/ec_Ebox' (ec_Ebox) */
    {
      SimStruct *rts = ssGetSFunction(S, 1);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 1);
          rt_FREE(ptr);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 2);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
      }
    }

    /* Level2 S-Function Block: '<S8>/Dctintegrator' (dweakint) */
    {
      SimStruct *rts = ssGetSFunction(S, 2);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 1));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S11>/Dctpd1' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 3);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 1));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 2));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S11>/Dctnotch1' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 4);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 1));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 2));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 3));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 4));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S11>/Dct2lowpass1' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 5);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 1));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 2));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S12>/Dctpd1' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 6);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 1));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 2));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S12>/Dctnotch1' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 7);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 1));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 2));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 3));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 4));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S12>/Dct2lowpass1' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 8);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 1));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 2));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S10>/Dctintegrator' (dweakint) */
    {
      SimStruct *rts = ssGetSFunction(S, 9);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 1));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S30>/Dctpd1' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 10);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 1));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 2));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S30>/Dctnotch1' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 11);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 1));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 2));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 3));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 4));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S30>/Dct2lowpass1' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 12);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 1));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 2));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S29>/Dctpd1' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 13);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 1));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 2));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S29>/Dctnotch1' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 14);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 1));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 2));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 3));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 4));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S29>/Dct2lowpass1' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 15);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 1));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 2));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S9>/Dctintegrator' (dweakint) */
    {
      SimStruct *rts = ssGetSFunction(S, 16);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 1));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S19>/Dctpd1' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 17);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 1));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 2));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S19>/Dctnotch1' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 18);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 1));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 2));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 3));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 4));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S19>/Dct2lowpass1' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 19);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 1));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 2));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S20>/Dctpd1' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 20);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 1));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 2));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S20>/Dctnotch1' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 21);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 1));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 2));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 3));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 4));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S20>/Dct2lowpass1' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 22);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 1));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 2));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
        rt_FREE(ssGetSFcnDWork(rts));
      }
    }

    /* Level2 S-Function Block: '<S8>/Reset EncoderR' (ec_EboxResetEnc) */
    {
      SimStruct *rts = ssGetSFunction(S, 23);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 1));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
      }
    }

    /* Level2 S-Function Block: '<S9>/Reset EncoderX' (ec_EboxResetEnc) */
    {
      SimStruct *rts = ssGetSFunction(S, 24);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 1));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
      }
    }

    /* Level2 S-Function Block: '<S10>/Reset EncoderZ' (ec_EboxResetEnc) */
    {
      SimStruct *rts = ssGetSFunction(S, 25);
      if (rts != (NULL) ) {
        rt_FREE(ssGetSampleTimePtr(rts));
        rt_FREE(ssGetOffsetTimePtr(rts));
        rt_FREE(ssGetSampleTimeTaskIDPtr(rts));

#if defined(MATLAB_MEX_FILE)

        {
          uint_T *attribs = ssGetSFcnParamAttribsPtr(rts);
          mxFree(attribs);
        }

#endif

#if defined(MATLAB_MEX_FILE)

        {
          {
            mxDestroyArray(_ssGetSFcnParam(rts, 0));
          }

          {
            mxDestroyArray(_ssGetSFcnParam(rts, 1));
          }
        }

#endif

        {
          mxArray **ptr = (mxArray **) ssGetSFcnParamsPtr(rts);
          rt_FREE(ptr);
        }

        /* Destroy model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = ssGetModelMethods3(rts);
          rt_FREE(methods3);
        }

        /* Destroy model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = ssGetModelMethods2(rts);
          rt_FREE(methods2);
        }

        /* Destroy state auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = ssGetStatesInfo2(rts);
          rt_FREE(statesInfo2);
        }

        {
          void **ptr = (void**) ssGetInputPortSignalPtrs(rts, 0);
          rt_FREE(ptr);
        }

        rt_FREE(ssGetPortInfoForInputs(rts));
        rt_FREE(ssGetPortInfoForOutputs(rts));
      }
    }

    rt_FREE(ssGetSFunction(S, 0))
      rt_FREE(_ssGetSFunctions(S));
  }

  if (ssGetUserData(S) != (NULL) ) {
    rt_FREE(ssGetLocalBlockIO(S));
  }

  rt_FREE(ssGetUserData(S));

#endif

}

#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)
#  include "Robot_mid.h"
#endif

/* Function to initialize sizes. */
static void mdlInitializeSizes(SimStruct *S)
{
  ssSetNumSampleTimes(S, 2);           /* Number of sample times */
  ssSetNumContStates(S, 0);            /* Number of continuous states */
  ssSetNumNonsampledZCs(S, 0);         /* Number of nonsampled ZCs */

  /* Number of output ports */
  if (!ssSetNumOutputPorts(S, 4))
    return;

  /* outport number: 0 */
  if (!ssSetOutputPortVectorDimension(S, 0, 1))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 0, SS_DOUBLE);
  }

  ssSetOutputPortSampleTime(S, 0, 0.000244140625);
  ssSetOutputPortOffsetTime(S, 0, 0.0);
  ssSetOutputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);

  /* outport number: 1 */
  if (!ssSetOutputPortVectorDimension(S, 1, 3))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 1, SS_DOUBLE);
  }

  ssSetOutputPortSampleTime(S, 1, 0.0);
  ssSetOutputPortOffsetTime(S, 1, 0.0);
  ssSetOutputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);

  /* outport number: 2 */
  if (!ssSetOutputPortVectorDimension(S, 2, 3))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 2, SS_BOOLEAN);
  }

  ssSetOutputPortSampleTime(S, 2, 0.000244140625);
  ssSetOutputPortOffsetTime(S, 2, 0.0);
  ssSetOutputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);

  /* outport number: 3 */
  if (!ssSetOutputPortVectorDimension(S, 3, 1))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 3, SS_DOUBLE);
  }

  ssSetOutputPortSampleTime(S, 3, 0.0);
  ssSetOutputPortOffsetTime(S, 3, 0.0);
  ssSetOutputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);

  /* Number of input ports */
  if (!ssSetNumInputPorts(S, 2))
    return;

  /* inport number: 0 */
  {
    if (!ssSetInputPortVectorDimension(S, 0, 3))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 0, SS_DOUBLE);
    }

    ssSetInputPortDirectFeedThrough(S, 0, 1);
    ssSetInputPortSampleTime(S, 0, 0.0);
    ssSetInputPortOffsetTime(S, 0, 0.0);
    ssSetInputPortOverWritable(S, 0, 0);
    ssSetInputPortOptimOpts(S, 0, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 1 */
  {
    if (!ssSetInputPortVectorDimension(S, 1, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 1, SS_DOUBLE);
    }

    ssSetInputPortDirectFeedThrough(S, 1, 1);
    ssSetInputPortSampleTime(S, 1, 0.000244140625);
    ssSetInputPortOffsetTime(S, 1, 0.0);
    ssSetInputPortOverWritable(S, 1, 0);
    ssSetInputPortOptimOpts(S, 1, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  ssSetRTWGeneratedSFcn(S, 1);         /* Generated S-function */

  /* DWork */
  if (!ssSetNumDWork(S, 56)) {
    return;
  }

  /* '<S8>/Discrete-Time Integrator': DSTATE */
  ssSetDWorkName(S, 0, "DWORK0");
  ssSetDWorkWidth(S, 0, 1);
  ssSetDWorkUsedAsDState(S, 0, 1);

  /* '<S13>/Discrete-Time Integrator': DSTATE */
  ssSetDWorkName(S, 1, "DWORK1");
  ssSetDWorkWidth(S, 1, 1);
  ssSetDWorkUsedAsDState(S, 1, 1);

  /* '<S3>/Unit Delay': DSTATE */
  ssSetDWorkName(S, 2, "DWORK2");
  ssSetDWorkWidth(S, 2, 1);
  ssSetDWorkUsedAsDState(S, 2, 1);

  /* '<S9>/Discrete-Time Integrator': DSTATE */
  ssSetDWorkName(S, 3, "DWORK3");
  ssSetDWorkWidth(S, 3, 1);
  ssSetDWorkUsedAsDState(S, 3, 1);

  /* '<S21>/Discrete-Time Integrator': DSTATE */
  ssSetDWorkName(S, 4, "DWORK4");
  ssSetDWorkWidth(S, 4, 1);
  ssSetDWorkUsedAsDState(S, 4, 1);

  /* '<S10>/Discrete-Time Integrator': DSTATE */
  ssSetDWorkName(S, 5, "DWORK5");
  ssSetDWorkWidth(S, 5, 1);
  ssSetDWorkUsedAsDState(S, 5, 1);

  /* '<S31>/Discrete-Time Integrator': DSTATE */
  ssSetDWorkName(S, 6, "DWORK6");
  ssSetDWorkWidth(S, 6, 1);
  ssSetDWorkUsedAsDState(S, 6, 1);

  /* '<S18>/UD': DSTATE */
  ssSetDWorkName(S, 7, "DWORK7");
  ssSetDWorkWidth(S, 7, 1);
  ssSetDWorkUsedAsDState(S, 7, 1);

  /* '<S27>/UD': DSTATE */
  ssSetDWorkName(S, 8, "DWORK8");
  ssSetDWorkWidth(S, 8, 1);
  ssSetDWorkUsedAsDState(S, 8, 1);

  /* '<S37>/UD': DSTATE */
  ssSetDWorkName(S, 9, "DWORK9");
  ssSetDWorkWidth(S, 9, 1);
  ssSetDWorkUsedAsDState(S, 9, 1);

  /* '<S13>/Limit Speed': PrevY */
  ssSetDWorkName(S, 10, "DWORK10");
  ssSetDWorkWidth(S, 10, 1);

  /* '<S13>/Limit Acceleration': PrevY */
  ssSetDWorkName(S, 11, "DWORK11");
  ssSetDWorkWidth(S, 11, 1);

  /* '<S21>/Limit Speed': PrevY */
  ssSetDWorkName(S, 12, "DWORK12");
  ssSetDWorkWidth(S, 12, 1);

  /* '<S21>/Limit Acceleration': PrevY */
  ssSetDWorkName(S, 13, "DWORK13");
  ssSetDWorkWidth(S, 13, 1);

  /* '<S31>/Limit Speed': PrevY */
  ssSetDWorkName(S, 14, "DWORK14");
  ssSetDWorkWidth(S, 14, 1);

  /* '<S31>/Limit Acceleration': PrevY */
  ssSetDWorkName(S, 15, "DWORK15");
  ssSetDWorkWidth(S, 15, 1);

  /* '<S8>/Dctintegrator': RWORK */
  ssSetDWorkName(S, 16, "DWORK16");
  ssSetDWorkWidth(S, 16, 2);

  /* '<S11>/Dctpd1': RWORK */
  ssSetDWorkName(S, 17, "DWORK17");
  ssSetDWorkWidth(S, 17, 2);

  /* '<S11>/Dctnotch1': RWORK */
  ssSetDWorkName(S, 18, "DWORK18");
  ssSetDWorkWidth(S, 18, 4);

  /* '<S11>/Dct2lowpass1': RWORK */
  ssSetDWorkName(S, 19, "DWORK19");
  ssSetDWorkWidth(S, 19, 4);

  /* '<S12>/Dctpd1': RWORK */
  ssSetDWorkName(S, 20, "DWORK20");
  ssSetDWorkWidth(S, 20, 2);

  /* '<S12>/Dctnotch1': RWORK */
  ssSetDWorkName(S, 21, "DWORK21");
  ssSetDWorkWidth(S, 21, 4);

  /* '<S12>/Dct2lowpass1': RWORK */
  ssSetDWorkName(S, 22, "DWORK22");
  ssSetDWorkWidth(S, 22, 4);

  /* '<S10>/Dctintegrator': RWORK */
  ssSetDWorkName(S, 23, "DWORK23");
  ssSetDWorkWidth(S, 23, 2);

  /* '<S30>/Dctpd1': RWORK */
  ssSetDWorkName(S, 24, "DWORK24");
  ssSetDWorkWidth(S, 24, 2);

  /* '<S30>/Dctnotch1': RWORK */
  ssSetDWorkName(S, 25, "DWORK25");
  ssSetDWorkWidth(S, 25, 4);

  /* '<S30>/Dct2lowpass1': RWORK */
  ssSetDWorkName(S, 26, "DWORK26");
  ssSetDWorkWidth(S, 26, 4);

  /* '<S29>/Dctpd1': RWORK */
  ssSetDWorkName(S, 27, "DWORK27");
  ssSetDWorkWidth(S, 27, 2);

  /* '<S29>/Dctnotch1': RWORK */
  ssSetDWorkName(S, 28, "DWORK28");
  ssSetDWorkWidth(S, 28, 4);

  /* '<S29>/Dct2lowpass1': RWORK */
  ssSetDWorkName(S, 29, "DWORK29");
  ssSetDWorkWidth(S, 29, 4);

  /* '<S9>/Dctintegrator': RWORK */
  ssSetDWorkName(S, 30, "DWORK30");
  ssSetDWorkWidth(S, 30, 2);

  /* '<S19>/Dctpd1': RWORK */
  ssSetDWorkName(S, 31, "DWORK31");
  ssSetDWorkWidth(S, 31, 2);

  /* '<S19>/Dctnotch1': RWORK */
  ssSetDWorkName(S, 32, "DWORK32");
  ssSetDWorkWidth(S, 32, 4);

  /* '<S19>/Dct2lowpass1': RWORK */
  ssSetDWorkName(S, 33, "DWORK33");
  ssSetDWorkWidth(S, 33, 4);

  /* '<S20>/Dctpd1': RWORK */
  ssSetDWorkName(S, 34, "DWORK34");
  ssSetDWorkWidth(S, 34, 2);

  /* '<S20>/Dctnotch1': RWORK */
  ssSetDWorkName(S, 35, "DWORK35");
  ssSetDWorkWidth(S, 35, 4);

  /* '<S20>/Dct2lowpass1': RWORK */
  ssSetDWorkName(S, 36, "DWORK36");
  ssSetDWorkWidth(S, 36, 4);

  /* '<S2>/Pulse Generator': Counter */
  ssSetDWorkName(S, 37, "DWORK37");
  ssSetDWorkWidth(S, 37, 1);
  ssSetDWorkDataType(S, 37, SS_INT32);

  /* '<S10>/Supervisor': DWORK4 */
  ssSetDWorkName(S, 38, "DWORK38");
  ssSetDWorkWidth(S, 38, 1);
  ssSetDWorkDataType(S, 38, SS_UINT32);

  /* '<S10>/Supervisor': DWORK5 */
  ssSetDWorkName(S, 39, "DWORK39");
  ssSetDWorkWidth(S, 39, 1);
  ssSetDWorkDataType(S, 39, SS_UINT32);

  /* '<S10>/Supervisor': DWORK6 */
  ssSetDWorkName(S, 40, "DWORK40");
  ssSetDWorkWidth(S, 40, 1);
  ssSetDWorkDataType(S, 40, SS_UINT32);

  /* '<S9>/Supervisor': DWORK4 */
  ssSetDWorkName(S, 41, "DWORK41");
  ssSetDWorkWidth(S, 41, 1);
  ssSetDWorkDataType(S, 41, SS_UINT32);

  /* '<S9>/Supervisor': DWORK5 */
  ssSetDWorkName(S, 42, "DWORK42");
  ssSetDWorkWidth(S, 42, 1);
  ssSetDWorkDataType(S, 42, SS_UINT32);

  /* '<S9>/Supervisor': DWORK6 */
  ssSetDWorkName(S, 43, "DWORK43");
  ssSetDWorkWidth(S, 43, 1);
  ssSetDWorkDataType(S, 43, SS_UINT32);

  /* '<S8>/Supervisor': DWORK4 */
  ssSetDWorkName(S, 44, "DWORK44");
  ssSetDWorkWidth(S, 44, 1);
  ssSetDWorkDataType(S, 44, SS_UINT32);

  /* '<S8>/Supervisor': DWORK5 */
  ssSetDWorkName(S, 45, "DWORK45");
  ssSetDWorkWidth(S, 45, 1);
  ssSetDWorkDataType(S, 45, SS_UINT32);

  /* '<S8>/Supervisor': DWORK6 */
  ssSetDWorkName(S, 46, "DWORK46");
  ssSetDWorkWidth(S, 46, 1);
  ssSetDWorkDataType(S, 46, SS_UINT32);

  /* '<S10>/Supervisor': DWORK3 */
  ssSetDWorkName(S, 47, "DWORK47");
  ssSetDWorkWidth(S, 47, 1);
  ssSetDWorkDataType(S, 47, SS_UINT16);

  /* '<S9>/Supervisor': DWORK3 */
  ssSetDWorkName(S, 48, "DWORK48");
  ssSetDWorkWidth(S, 48, 1);
  ssSetDWorkDataType(S, 48, SS_UINT16);

  /* '<S8>/Supervisor': DWORK3 */
  ssSetDWorkName(S, 49, "DWORK49");
  ssSetDWorkWidth(S, 49, 1);
  ssSetDWorkDataType(S, 49, SS_UINT16);

  /* '<S10>/Supervisor': DWORK1 */
  ssSetDWorkName(S, 50, "DWORK50");
  ssSetDWorkWidth(S, 50, 1);
  ssSetDWorkDataType(S, 50, SS_UINT8);

  /* '<S10>/Supervisor': DWORK2 */
  ssSetDWorkName(S, 51, "DWORK51");
  ssSetDWorkWidth(S, 51, 1);
  ssSetDWorkDataType(S, 51, SS_UINT8);

  /* '<S9>/Supervisor': DWORK1 */
  ssSetDWorkName(S, 52, "DWORK52");
  ssSetDWorkWidth(S, 52, 1);
  ssSetDWorkDataType(S, 52, SS_UINT8);

  /* '<S9>/Supervisor': DWORK2 */
  ssSetDWorkName(S, 53, "DWORK53");
  ssSetDWorkWidth(S, 53, 1);
  ssSetDWorkDataType(S, 53, SS_UINT8);

  /* '<S8>/Supervisor': DWORK1 */
  ssSetDWorkName(S, 54, "DWORK54");
  ssSetDWorkWidth(S, 54, 1);
  ssSetDWorkDataType(S, 54, SS_UINT8);

  /* '<S8>/Supervisor': DWORK2 */
  ssSetDWorkName(S, 55, "DWORK55");
  ssSetDWorkWidth(S, 55, 1);
  ssSetDWorkDataType(S, 55, SS_UINT8);

  /* Tunable Parameters */
  ssSetNumSFcnParams(S, 0);

  /* Number of expected parameters */
#if defined(MATLAB_MEX_FILE)

  if (ssGetNumSFcnParams(S) == ssGetSFcnParamsCount(S)) {

#if defined(MDL_CHECK_PARAMETERS)

    mdlCheckParameters(S);

#endif                                 /* MDL_CHECK_PARAMETERS */

    if (ssGetErrorStatus(S) != (NULL) ) {
      return;
    }
  } else {
    return;                            /* Parameter mismatch will be reported by Simulink */
  }

#endif                                 /* MATLAB_MEX_FILE */

  /* Options */
  ssSetOptions(S, (SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE |
                   SS_OPTION_PORT_SAMPLE_TIMES_ASSIGNED ));

#if SS_SFCN_FOR_SIM

  {
    ssSupportsMultipleExecInstances(S, false);
    ssHasStateInsideForEachSS(S, false);
  }

#endif

}

/* Function to initialize sample times. */
static void mdlInitializeSampleTimes(SimStruct *S)
{
  /* task periods */
  ssSetSampleTime(S, 0, 0.0);
  ssSetSampleTime(S, 1, 0.000244140625);

  /* task offsets */
  ssSetOffsetTime(S, 0, 0.0);
  ssSetOffsetTime(S, 1, 0.0);
}

#if defined(MATLAB_MEX_FILE)
# include "fixedpoint.c"
# include "simulink.c"
#else
# undef S_FUNCTION_NAME
# define S_FUNCTION_NAME               Robot_sf
# include "cg_sfun.h"
#endif                                 /* defined(MATLAB_MEX_FILE) */
