/*
 * Robot_sf.c
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

#include <math.h>
#include "Robot_sf.h"
#include "Robot_sf_private.h"
#include "simstruc.h"
#include "fixedpoint.h"

/* Named constants for Chart: '<S8>/Supervisor' */
#define Robot_IN_AirbagLeft            ((uint8_T)1U)
#define Robot_IN_AirbagRight           ((uint8_T)2U)
#define Robot_IN_CheckRobotIsON        ((uint8_T)3U)
#define Robot_IN_DisableOutputs        ((uint8_T)4U)
#define Robot_IN_EnableRunAndSafety    ((uint8_T)5U)
#define Robot_IN_Homing                ((uint8_T)6U)
#define Robot_IN_MovetoX0              ((uint8_T)7U)
#define Robot_IN_NO_ACTIVE_CHILD       ((uint8_T)0U)
#define Robot_IN_ResetEnc              ((uint8_T)8U)
#define Robot_IN_RobotIsON             ((uint8_T)9U)
#define Robot_IN_STOPRobotIsOFF        ((uint8_T)10U)
#define Robot_IN_WaitForRest           ((uint8_T)11U)

/* Named constants for Chart: '<S9>/Supervisor' */
#define Robot_IN_DisableOutputs_j      ((uint8_T)3U)
#define Robot_IN_EnableRunAndSafety_c  ((uint8_T)4U)
#define Robot_IN_Homing_i              ((uint8_T)5U)
#define Robot_IN_MovetoX0_p            ((uint8_T)6U)
#define Robot_IN_ResetEnc_m            ((uint8_T)7U)
#define Robot_IN_WaitForRest_h         ((uint8_T)8U)
#define Robot_IN_WaitForZ              ((uint8_T)9U)
#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)

extern void *Robot_malloc(SimStruct *S);

#endif

#ifndef __RTW_UTFREE__
#if defined (MATLAB_MEX_FILE)

extern void * utMalloc(size_t);
extern void utFree(void *);

#endif
#endif                                 /* #ifndef __RTW_UTFREE__ */

#if defined(MATLAB_MEX_FILE)
#include "rt_nonfinite.c"
#endif

static const char_T *RT_MEMORY_ALLOCATION_ERROR =
  "memory allocation error in generated S-Function";

/* Initial conditions for root system: '<Root>' */
#define MDL_INITIALIZE_CONDITIONS

static void mdlInitializeConditions(SimStruct *S)
{
  B_Robot_T *_rtB;
  _rtB = ((B_Robot_T *) ssGetLocalBlockIO(S));

  /* InitializeConditions for DiscreteIntegrator: '<S8>/Discrete-Time Integrator' */
  ((real_T *)ssGetDWork(S, 0))[0] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S13>/Discrete-Time Integrator' */
  ((real_T *)ssGetDWork(S, 1))[0] = Robot_rtC(S)->Constant1;

  /* InitializeConditions for UnitDelay: '<S3>/Unit Delay' */
  ((real_T *)ssGetDWork(S, 2))[0] = 0.0;

  /* InitializeConditions for Chart: '<S8>/Supervisor' */
  ((uint16_T *)ssGetDWork(S, 40))[0] = 0U;
  ((uint8_T *)ssGetDWork(S, 45))[0] = 0U;
  ((uint8_T *)ssGetDWork(S, 46))[0] = Robot_IN_NO_ACTIVE_CHILD;
  _rtB->jogSpeed_k = 0.0;
  _rtB->toPoint_g = 0.0;
  _rtB->homeControllerEnabled_p = 0.0;
  _rtB->resetEnc_o = 0.0;
  _rtB->homingBusy_e = 1.0;
  _rtB->airBagEnabled_d = 0.0;
  _rtB->airBagRef_i = 0.0;
  _rtB->controlEnabled_e = 1.0;
  _rtB->Ready_m = 1.0;
  _rtB->StopSim_l = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S9>/Discrete-Time Integrator' */
  ((real_T *)ssGetDWork(S, 3))[0] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S21>/Discrete-Time Integrator' */
  ((real_T *)ssGetDWork(S, 4))[0] = Robot_rtC(S)->Constant1_l;

  /* InitializeConditions for Chart: '<S9>/Supervisor' */
  ((uint16_T *)ssGetDWork(S, 39))[0] = 0U;
  ((uint8_T *)ssGetDWork(S, 43))[0] = 0U;
  ((uint8_T *)ssGetDWork(S, 44))[0] = Robot_IN_NO_ACTIVE_CHILD;
  _rtB->jogSpeed_g = 0.0;
  _rtB->toPoint_b = 0.0;
  _rtB->homeControllerEnabled_e = 0.0;
  _rtB->resetEnc_l = 0.0;
  _rtB->homingBusy_g = 1.0;
  _rtB->airBagEnabled_i = 0.0;
  _rtB->airBagRef_d = 0.0;
  _rtB->controlEnabled_g = 1.0;
  _rtB->Ready_a = 1.0;
  _rtB->StopSim_g = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S10>/Discrete-Time Integrator' */
  ((real_T *)ssGetDWork(S, 5))[0] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S31>/Discrete-Time Integrator' */
  ((real_T *)ssGetDWork(S, 6))[0] = Robot_rtC(S)->Constant1_p;

  /* InitializeConditions for Chart: '<S10>/Supervisor' */
  ((uint16_T *)ssGetDWork(S, 38))[0] = 0U;
  ((uint8_T *)ssGetDWork(S, 41))[0] = 0U;
  ((uint8_T *)ssGetDWork(S, 42))[0] = Robot_IN_NO_ACTIVE_CHILD;
  _rtB->jogSpeed = 0.0;
  _rtB->toPoint = 0.0;
  _rtB->homeControllerEnabled = 0.0;
  _rtB->resetEnc = 0.0;
  _rtB->homingBusy = 1.0;
  _rtB->airBagEnabled = 0.0;
  _rtB->airBagRef = 0.0;
  _rtB->controlEnabled = 1.0;
  _rtB->Ready = 1.0;
  _rtB->StopSim = 0.0;

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
    B_Robot_T *_rtB;
    _rtB = ((B_Robot_T *) ssGetLocalBlockIO(S));

    /* Start for DiscretePulseGenerator: '<S2>/Pulse Generator' */
    ((int32_T *)ssGetDWork(S, 37))[0] = 0;

    /* Level2 S-Function Block: '<S8>/Dctintegrator' (dweakint) */
    {
      SimStruct *rts = ssGetSFunction(S, 2);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S11>/Dctpd' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 3);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S11>/Dctnotch' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 4);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S11>/Dct2lowpass' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 5);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S12>/Dctpd' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 6);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S12>/Dctnotch' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 7);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S12>/Dct2lowpass' (dlowpass2) */
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

    /* Level2 S-Function Block: '<S30>/Dctpd' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 10);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S30>/Dctnotch' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 11);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S30>/Dct2lowpass' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 12);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S29>/Dctpd' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 13);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S29>/Dctnotch' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 14);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S29>/Dct2lowpass' (dlowpass2) */
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

    /* Level2 S-Function Block: '<S19>/Dctpd' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 17);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S19>/Dctnotch' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 18);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S19>/Dct2lowpass' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 19);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S20>/Dctpd' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 20);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S20>/Dctnotch' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 21);
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S20>/Dct2lowpass' (dlowpass2) */
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
  real_T fx1;
  real_T fy1;
  real_T fy2;
  real_T d12;
  real_T b_a;
  boolean_T rtb_Compare;
  B_Robot_T *_rtB;
  _rtB = ((B_Robot_T *) ssGetLocalBlockIO(S));
  if (ssIsSampleHit(S, 1, tid)) {
    /* Sum: '<S8>/Sum' incorporates:
     *  DiscreteIntegrator: '<S13>/Discrete-Time Integrator'
     *  DiscreteIntegrator: '<S8>/Discrete-Time Integrator'
     */
    _rtB->Sum = ((real_T *)ssGetDWork(S, 0))[0] + ((real_T *)ssGetDWork(S, 1))[0];
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
    _rtB->Gain = 9.4247779607693812E-5 * _rtB->ec_Ebox_o2[0];

    /* Sum: '<S8>/Sum2' */
    _rtB->Sum2 = _rtB->Sum - _rtB->Gain;

    /* RelationalOperator: '<S8>/Relational Operator' incorporates:
     *  Constant: '<S8>/Constant'
     */
    _rtB->RelationalOperator = (_rtB->Sum2 >= 0.05);
  }

  if (ssIsSampleHit(S, 1, tid)) {
    /* RelationalOperator: '<S6>/Compare' incorporates:
     *  Constant: '<S6>/Constant'
     *  UnitDelay: '<S3>/Unit Delay'
     */
    rtb_Compare = (((real_T *)ssGetDWork(S, 2))[0] == 3.0);

    /* Chart: '<S8>/Supervisor' */
    if (((uint16_T *)ssGetDWork(S, 40))[0] < 65535U) {
      ((uint16_T *)ssGetDWork(S, 40))[0] = (uint16_T)(((uint16_T *)ssGetDWork(S,
        40))[0] + 1);
    }

    /* Gateway: Robot Arm/Supervisor/Supervisory Controller R/Supervisor */
    /* During: Robot Arm/Supervisor/Supervisory Controller R/Supervisor */
    if (((uint8_T *)ssGetDWork(S, 45))[0] == 0U) {
      /* Entry: Robot Arm/Supervisor/Supervisory Controller R/Supervisor */
      ((uint8_T *)ssGetDWork(S, 45))[0] = 1U;

      /* Entry Internal: Robot Arm/Supervisor/Supervisory Controller R/Supervisor */
      /* Transition: '<S17>:7' */
      ((uint8_T *)ssGetDWork(S, 46))[0] = Robot_IN_Homing;

      /* Entry 'Homing': '<S17>:6' */
      /* Set jog speed and homing state */
      _rtB->Ready_m = 0.0;
      _rtB->toPoint_g = 0.0;
      _rtB->homingBusy_e = 1.0;
      _rtB->jogSpeed_k = 0.4;
      _rtB->homeControllerEnabled_p = 1.0;
    } else {
      switch (((uint8_T *)ssGetDWork(S, 46))[0]) {
       case Robot_IN_AirbagLeft:
        /* During 'AirbagLeft': '<S17>:71' */
        if (((uint16_T *)ssGetDWork(S, 40))[0] >= 20480U) {
          /* Transition: '<S17>:79' */
          ((uint8_T *)ssGetDWork(S, 46))[0] = Robot_IN_DisableOutputs;

          /* Entry 'DisableOutputs': '<S17>:77' */
          _rtB->controlEnabled_e = 0.0;
          _rtB->StopSim_l = 1.0;
        }
        break;

       case Robot_IN_AirbagRight:
        /* During 'AirbagRight': '<S17>:74' */
        if (((uint16_T *)ssGetDWork(S, 40))[0] >= 20480U) {
          /* Transition: '<S17>:78' */
          ((uint8_T *)ssGetDWork(S, 46))[0] = Robot_IN_DisableOutputs;

          /* Entry 'DisableOutputs': '<S17>:77' */
          _rtB->controlEnabled_e = 0.0;
          _rtB->StopSim_l = 1.0;
        }
        break;

       case Robot_IN_CheckRobotIsON:
        /* During 'CheckRobotIsON': '<S17>:97' */
        if (_rtB->Gain < 0.1) {
          /* Transition: '<S17>:101' */
          ((uint8_T *)ssGetDWork(S, 46))[0] = Robot_IN_STOPRobotIsOFF;

          /* Entry 'STOPRobotIsOFF': '<S17>:100' */
          _rtB->StopSim_l = 1.0;
        } else {
          /* Transition: '<S17>:103' */
          ((uint8_T *)ssGetDWork(S, 46))[0] = Robot_IN_RobotIsON;
          ((uint16_T *)ssGetDWork(S, 40))[0] = 0U;
        }
        break;

       case Robot_IN_DisableOutputs:
        /* During 'DisableOutputs': '<S17>:77' */
        break;

       case Robot_IN_EnableRunAndSafety:
        /* During 'EnableRunAndSafety': '<S17>:65' */
        if (_rtB->Gain < -1.4) {
          /* Transition: '<S17>:72' */
          ((uint8_T *)ssGetDWork(S, 46))[0] = Robot_IN_AirbagLeft;
          ((uint16_T *)ssGetDWork(S, 40))[0] = 0U;

          /* Entry 'AirbagLeft': '<S17>:71' */
          _rtB->airBagEnabled_d = 1.0;
          _rtB->airBagRef_i = -1.4;
        } else {
          if (_rtB->Gain > 1.4) {
            /* Transition: '<S17>:75' */
            ((uint8_T *)ssGetDWork(S, 46))[0] = Robot_IN_AirbagRight;
            ((uint16_T *)ssGetDWork(S, 40))[0] = 0U;

            /* Entry 'AirbagRight': '<S17>:74' */
            _rtB->airBagEnabled_d = 1.0;
            _rtB->airBagRef_i = 1.4;
          }
        }
        break;

       case Robot_IN_Homing:
        /* During 'Homing': '<S17>:6' */
        /* Transition if homeswitch becomes high */
        if (_rtB->RelationalOperator) {
          /* Transition: '<S17>:10' */
          ((uint8_T *)ssGetDWork(S, 46))[0] = Robot_IN_MovetoX0;
          ((uint16_T *)ssGetDWork(S, 40))[0] = 0U;

          /* Entry 'MovetoX0': '<S17>:19' */
          _rtB->jogSpeed_k = 0.0;
          _rtB->toPoint_g = -2.15;
        }
        break;

       case Robot_IN_MovetoX0:
        /* During 'MovetoX0': '<S17>:19' */
        /* Allow time for moving */
        if (((uint16_T *)ssGetDWork(S, 40))[0] >= 2048U) {
          /* Transition: '<S17>:59' */
          ((uint8_T *)ssGetDWork(S, 46))[0] = Robot_IN_CheckRobotIsON;
        }
        break;

       case Robot_IN_ResetEnc:
        /* During 'ResetEnc': '<S17>:58' */
        if (((uint16_T *)ssGetDWork(S, 40))[0] >= 41U) {
          /* Transition: '<S17>:66' */
          ((uint8_T *)ssGetDWork(S, 46))[0] = Robot_IN_EnableRunAndSafety;

          /* Entry 'EnableRunAndSafety': '<S17>:65' */
          _rtB->resetEnc_o = 0.0;
          _rtB->homingBusy_e = 0.0;
        }
        break;

       case Robot_IN_RobotIsON:
        /* During 'RobotIsON': '<S17>:102' */
        if (((uint16_T *)ssGetDWork(S, 40))[0] >= 36864U) {
          /* Transition: '<S17>:99' */
          ((uint8_T *)ssGetDWork(S, 46))[0] = Robot_IN_WaitForRest;

          /* Entry 'WaitForRest': '<S17>:94' */
          _rtB->Ready_m = 1.0;
        }
        break;

       case Robot_IN_STOPRobotIsOFF:
        /* During 'STOPRobotIsOFF': '<S17>:100' */
        break;

       default:
        /* During 'WaitForRest': '<S17>:94' */
        if (rtb_Compare) {
          /* Transition: '<S17>:95' */
          ((uint8_T *)ssGetDWork(S, 46))[0] = Robot_IN_ResetEnc;
          ((uint16_T *)ssGetDWork(S, 40))[0] = 0U;

          /* Entry 'ResetEnc': '<S17>:58' */
          _rtB->resetEnc_o = 1.0;
          _rtB->homeControllerEnabled_p = 0.0;
        }
        break;
      }
    }

    /* End of Chart: '<S8>/Supervisor' */

    /* Sum: '<S9>/Sum' incorporates:
     *  DiscreteIntegrator: '<S21>/Discrete-Time Integrator'
     *  DiscreteIntegrator: '<S9>/Discrete-Time Integrator'
     */
    _rtB->Sum_g = ((real_T *)ssGetDWork(S, 3))[0] + ((real_T *)ssGetDWork(S, 4))
      [0];
  }

  if (ssIsContinuousTask(S, tid)) {
    /* Gain: '<S2>/Gain1' */
    _rtB->Gain1 = -0.00014137166941154071 * _rtB->ec_Ebox_o2[1];

    /* Sum: '<S9>/Sum2' */
    _rtB->Sum2_a = _rtB->Sum_g - _rtB->Gain1;

    /* RelationalOperator: '<S9>/Relational Operator' incorporates:
     *  Constant: '<S9>/Constant'
     */
    _rtB->RelationalOperator_l = (_rtB->Sum2_a <= -0.1);
  }

  if (ssIsSampleHit(S, 1, tid)) {
    /* Chart: '<S9>/Supervisor' */
    if (((uint16_T *)ssGetDWork(S, 39))[0] < 32767U) {
      ((uint16_T *)ssGetDWork(S, 39))[0] = (uint16_T)(((uint16_T *)ssGetDWork(S,
        39))[0] + 1);
    }

    /* Gateway: Robot Arm/Supervisor/Supervisory Controller X/Supervisor */
    /* During: Robot Arm/Supervisor/Supervisory Controller X/Supervisor */
    if (((uint8_T *)ssGetDWork(S, 43))[0] == 0U) {
      /* Entry: Robot Arm/Supervisor/Supervisory Controller X/Supervisor */
      ((uint8_T *)ssGetDWork(S, 43))[0] = 1U;

      /* Entry Internal: Robot Arm/Supervisor/Supervisory Controller X/Supervisor */
      /* Transition: '<S26>:7' */
      ((uint8_T *)ssGetDWork(S, 44))[0] = Robot_IN_WaitForZ;
      ((uint16_T *)ssGetDWork(S, 39))[0] = 0U;

      /* Entry 'WaitForZ': '<S26>:107' */
      _rtB->toPoint_b = 0.0;
      _rtB->Ready_a = 0.0;
      _rtB->homingBusy_g = 1.0;
      _rtB->jogSpeed_g = 0.0;
    } else {
      switch (((uint8_T *)ssGetDWork(S, 44))[0]) {
       case Robot_IN_AirbagLeft:
        /* During 'AirbagLeft': '<S26>:71' */
        if (((uint16_T *)ssGetDWork(S, 39))[0] >= 20480U) {
          /* Transition: '<S26>:79' */
          ((uint8_T *)ssGetDWork(S, 44))[0] = Robot_IN_DisableOutputs_j;

          /* Entry 'DisableOutputs': '<S26>:77' */
          _rtB->controlEnabled_g = 0.0;
          _rtB->StopSim_g = 1.0;
        }
        break;

       case Robot_IN_AirbagRight:
        /* During 'AirbagRight': '<S26>:74' */
        if (((uint16_T *)ssGetDWork(S, 39))[0] >= 20480U) {
          /* Transition: '<S26>:78' */
          ((uint8_T *)ssGetDWork(S, 44))[0] = Robot_IN_DisableOutputs_j;

          /* Entry 'DisableOutputs': '<S26>:77' */
          _rtB->controlEnabled_g = 0.0;
          _rtB->StopSim_g = 1.0;
        }
        break;

       case Robot_IN_DisableOutputs_j:
        /* During 'DisableOutputs': '<S26>:77' */
        break;

       case Robot_IN_EnableRunAndSafety_c:
        /* During 'EnableRunAndSafety': '<S26>:65' */
        if (_rtB->Gain1 < -0.1) {
          /* Transition: '<S26>:72' */
          ((uint8_T *)ssGetDWork(S, 44))[0] = Robot_IN_AirbagLeft;
          ((uint16_T *)ssGetDWork(S, 39))[0] = 0U;

          /* Entry 'AirbagLeft': '<S26>:71' */
          _rtB->airBagEnabled_i = 1.0;
          _rtB->airBagRef_d = -0.1;
        } else {
          if (_rtB->Gain1 > 1.15) {
            /* Transition: '<S26>:75' */
            ((uint8_T *)ssGetDWork(S, 44))[0] = Robot_IN_AirbagRight;
            ((uint16_T *)ssGetDWork(S, 39))[0] = 0U;

            /* Entry 'AirbagRight': '<S26>:74' */
            _rtB->airBagEnabled_i = 1.0;
            _rtB->airBagRef_d = 1.13;
          }
        }
        break;

       case Robot_IN_Homing_i:
        /* During 'Homing': '<S26>:6' */
        /* Transition if homeswitch becomes high */
        if (_rtB->RelationalOperator_l) {
          /* Transition: '<S26>:10' */
          ((uint8_T *)ssGetDWork(S, 44))[0] = Robot_IN_MovetoX0_p;
          ((uint16_T *)ssGetDWork(S, 39))[0] = 0U;

          /* Entry 'MovetoX0': '<S26>:19' */
          _rtB->jogSpeed_g = 0.0;
          _rtB->toPoint_b = 0.3708572;
        }
        break;

       case Robot_IN_MovetoX0_p:
        /* During 'MovetoX0': '<S26>:19' */
        /* Allow time for moving */
        if (((uint16_T *)ssGetDWork(S, 39))[0] >= 28672U) {
          /* Transition: '<S26>:59' */
          ((uint8_T *)ssGetDWork(S, 44))[0] = Robot_IN_WaitForRest_h;

          /* Entry 'WaitForRest': '<S26>:116' */
          _rtB->Ready_a = 1.0;
        }
        break;

       case Robot_IN_ResetEnc_m:
        /* During 'ResetEnc': '<S26>:58' */
        if (((uint16_T *)ssGetDWork(S, 39))[0] >= 41U) {
          /* Transition: '<S26>:66' */
          ((uint8_T *)ssGetDWork(S, 44))[0] = Robot_IN_EnableRunAndSafety_c;

          /* Entry 'EnableRunAndSafety': '<S26>:65' */
          _rtB->resetEnc_l = 0.0;
          _rtB->homingBusy_g = 0.0;
        }
        break;

       case Robot_IN_WaitForRest_h:
        /* During 'WaitForRest': '<S26>:116' */
        if (rtb_Compare) {
          /* Transition: '<S26>:117' */
          ((uint8_T *)ssGetDWork(S, 44))[0] = Robot_IN_ResetEnc_m;
          ((uint16_T *)ssGetDWork(S, 39))[0] = 0U;

          /* Entry 'ResetEnc': '<S26>:58' */
          _rtB->resetEnc_l = 1.0;
          _rtB->homeControllerEnabled_e = 0.0;
        }
        break;

       default:
        /* During 'WaitForZ': '<S26>:107' */
        if (((uint16_T *)ssGetDWork(S, 39))[0] >= 12288U) {
          /* Transition: '<S26>:111' */
          ((uint8_T *)ssGetDWork(S, 44))[0] = Robot_IN_Homing_i;

          /* Entry 'Homing': '<S26>:6' */
          /* Set jog speed and homing state */
          _rtB->jogSpeed_g = -0.2;
          _rtB->homeControllerEnabled_e = 1.0;
        }
        break;
      }
    }

    /* End of Chart: '<S9>/Supervisor' */

    /* Sum: '<S10>/Sum' incorporates:
     *  DiscreteIntegrator: '<S10>/Discrete-Time Integrator'
     *  DiscreteIntegrator: '<S31>/Discrete-Time Integrator'
     */
    _rtB->Sum_i = ((real_T *)ssGetDWork(S, 5))[0] + ((real_T *)ssGetDWork(S, 6))
      [0];
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
    _rtB->Gain2 = 0.00014137166941154071 * _rtB->ec_Ebox_o2_f[0];

    /* Sum: '<S10>/Sum2' */
    _rtB->Sum2_f = _rtB->Sum_i - _rtB->Gain2;

    /* RelationalOperator: '<S10>/Relational Operator' incorporates:
     *  Constant: '<S10>/Constant'
     */
    _rtB->RelationalOperator_e = (_rtB->Sum2_f >= 0.1);

    /* MATLAB Function: '<S10>/Angle2Z' incorporates:
     *  SignalConversion: '<S28>/TmpSignal ConversionAt SFunction Inport1'
     */
    /* MATLAB Function 'Robot Arm/Supervisor/Supervisory Controller Z/Angle2Z': '<S28>:1' */
    /* '<S28>:1:3' */
    /* '<S28>:1:4' */
    /* '<S28>:1:5' */
    /* '<S28>:1:6' */
    /*  parameters */
    /* '<S28>:1:13' */
    /* '<S28>:1:14' */
    /* '<S28>:1:15' */
    /* '<S28>:1:17' */
    /* '<S28>:1:18' */
    /*  functions */
    /* '<S28>:1:22' */
    fx1 = cos(-_rtB->Gain1 + 1.5707963267948966) * 0.08;

    /* '<S28>:1:23' */
    fy1 = sin(-_rtB->Gain1 + 1.5707963267948966) * 0.08;

    /* '<S28>:1:25' */
    /* '<S28>:1:26' */
    fy2 = sin(_rtB->Gain2 + 0.43633231299858238) * 0.13 + 0.165;

    /* '<S28>:1:28' */
    d12 = cos(_rtB->Gain2 + 0.43633231299858238) * 0.13 - fx1;
    b_a = fy2 - fy1;
    d12 = sqrt(d12 * d12 + b_a * b_a);

    /* '<S28>:1:29' */
    fx1 = sqrt((0.165 - fy1) * (0.165 - fy1) + fx1 * fx1);

    /* '<S28>:1:31' */
    /* '<S28>:1:32' */
    /* '<S28>:1:34' */
    /* '<S28>:1:36' */
    _rtB->y = (fy2 - sin(((3.1415926535897931 - acos(((d12 * d12 +
      0.016900000000000002) - fx1 * fx1) / (2.0 * d12 * 0.13))) - acos(((d12 *
      d12 + 0.0144) - 0.016900000000000002) / (2.0 * d12 * 0.12))) -
                         (_rtB->Gain2 + 0.43633231299858238)) * 0.185) - 0.013;
  }

  if (ssIsSampleHit(S, 1, tid)) {
    /* Chart: '<S10>/Supervisor' */
    if (((uint16_T *)ssGetDWork(S, 38))[0] < 32767U) {
      ((uint16_T *)ssGetDWork(S, 38))[0] = (uint16_T)(((uint16_T *)ssGetDWork(S,
        38))[0] + 1);
    }

    /* Gateway: Robot Arm/Supervisor/Supervisory Controller Z/Supervisor */
    /* During: Robot Arm/Supervisor/Supervisory Controller Z/Supervisor */
    if (((uint8_T *)ssGetDWork(S, 41))[0] == 0U) {
      /* Entry: Robot Arm/Supervisor/Supervisory Controller Z/Supervisor */
      ((uint8_T *)ssGetDWork(S, 41))[0] = 1U;

      /* Entry Internal: Robot Arm/Supervisor/Supervisory Controller Z/Supervisor */
      /* Transition: '<S36>:7' */
      ((uint8_T *)ssGetDWork(S, 42))[0] = Robot_IN_Homing_i;

      /* Entry 'Homing': '<S36>:6' */
      /* Set jog speed and homing state */
      _rtB->toPoint = 0.0;
      _rtB->Ready = 0.0;
      _rtB->homingBusy = 1.0;
      _rtB->jogSpeed = 0.2;
      _rtB->homeControllerEnabled = 1.0;
    } else {
      switch (((uint8_T *)ssGetDWork(S, 42))[0]) {
       case Robot_IN_AirbagLeft:
        /* During 'AirbagLeft': '<S36>:71' */
        if (((uint16_T *)ssGetDWork(S, 38))[0] >= 20480U) {
          /* Transition: '<S36>:79' */
          ((uint8_T *)ssGetDWork(S, 42))[0] = Robot_IN_DisableOutputs_j;

          /* Entry 'DisableOutputs': '<S36>:77' */
          _rtB->controlEnabled = 0.0;
          _rtB->StopSim = 1.0;
        }
        break;

       case Robot_IN_AirbagRight:
        /* During 'AirbagRight': '<S36>:74' */
        if (((uint16_T *)ssGetDWork(S, 38))[0] >= 20480U) {
          /* Transition: '<S36>:78' */
          ((uint8_T *)ssGetDWork(S, 42))[0] = Robot_IN_DisableOutputs_j;

          /* Entry 'DisableOutputs': '<S36>:77' */
          _rtB->controlEnabled = 0.0;
          _rtB->StopSim = 1.0;
        }
        break;

       case Robot_IN_DisableOutputs_j:
        /* During 'DisableOutputs': '<S36>:77' */
        break;

       case Robot_IN_EnableRunAndSafety_c:
        /* During 'EnableRunAndSafety': '<S36>:65' */
        if (_rtB->y < -0.0225) {
          /* Transition: '<S36>:72' */
          ((uint8_T *)ssGetDWork(S, 42))[0] = Robot_IN_AirbagLeft;
          ((uint16_T *)ssGetDWork(S, 38))[0] = 0U;

          /* Entry 'AirbagLeft': '<S36>:71' */
          _rtB->airBagEnabled = 1.0;
          _rtB->airBagRef = _rtB->Gain2 + 0.02;
        } else {
          if (_rtB->Gain2 > 0.5) {
            /* Transition: '<S36>:75' */
            ((uint8_T *)ssGetDWork(S, 42))[0] = Robot_IN_AirbagRight;
            ((uint16_T *)ssGetDWork(S, 38))[0] = 0U;

            /* Entry 'AirbagRight': '<S36>:74' */
            _rtB->airBagEnabled = 1.0;
            _rtB->airBagRef = 0.48;
          }
        }
        break;

       case Robot_IN_Homing_i:
        /* During 'Homing': '<S36>:6' */
        /* Transition if homeswitch becomes high */
        if (_rtB->RelationalOperator_e) {
          /* Transition: '<S36>:10' */
          ((uint8_T *)ssGetDWork(S, 42))[0] = Robot_IN_MovetoX0_p;
          ((uint16_T *)ssGetDWork(S, 38))[0] = 0U;

          /* Entry 'MovetoX0': '<S36>:19' */
          _rtB->jogSpeed = 0.0;
          _rtB->toPoint = -0.7854;
        }
        break;

       case Robot_IN_MovetoX0_p:
        /* During 'MovetoX0': '<S36>:19' */
        /* Allow time for moving */
        if (((uint16_T *)ssGetDWork(S, 38))[0] >= 28672U) {
          /* Transition: '<S36>:59' */
          ((uint8_T *)ssGetDWork(S, 42))[0] = Robot_IN_WaitForRest_h;

          /* Entry 'WaitForRest': '<S36>:93' */
          _rtB->Ready = 1.0;
        }
        break;

       case Robot_IN_ResetEnc_m:
        /* During 'ResetEnc': '<S36>:58' */
        if (((uint16_T *)ssGetDWork(S, 38))[0] >= 41U) {
          /* Transition: '<S36>:66' */
          ((uint8_T *)ssGetDWork(S, 42))[0] = Robot_IN_EnableRunAndSafety_c;

          /* Entry 'EnableRunAndSafety': '<S36>:65' */
          _rtB->resetEnc = 0.0;
          _rtB->homingBusy = 0.0;
        }
        break;

       default:
        /* During 'WaitForRest': '<S36>:93' */
        if (rtb_Compare) {
          /* Transition: '<S36>:94' */
          ((uint8_T *)ssGetDWork(S, 42))[0] = Robot_IN_ResetEnc_m;
          ((uint16_T *)ssGetDWork(S, 38))[0] = 0U;

          /* Entry 'ResetEnc': '<S36>:58' */
          _rtB->resetEnc = 1.0;
          _rtB->homeControllerEnabled = 0.0;
          _rtB->Ready = 1.0;
        }
        break;
      }
    }

    /* End of Chart: '<S10>/Supervisor' */

    /* Sum: '<S7>/Add' */
    fx1 = (_rtB->homingBusy_e + _rtB->homingBusy_g) + _rtB->homingBusy;

    /* Signum: '<S7>/Sign' */
    if (fx1 < 0.0) {
      fx1 = -1.0;
    } else if (fx1 > 0.0) {
      fx1 = 1.0;
    } else {
      if (fx1 == 0.0) {
        fx1 = 0.0;
      }
    }

    /* Outport: '<Root>/Homing Busy' incorporates:
     *  Constant: '<S7>/Constant'
     *  Signum: '<S7>/Sign'
     *  Sum: '<S7>/Add1'
     */
    ((real_T *)ssGetOutputPortSignal(S, 0))[0] = 1.0 - fx1;

    /* Outport: '<Root>/Airbag Status' incorporates:
     *  Logic: '<S10>/Logical Operator2'
     *  Logic: '<S8>/Logical Operator2'
     *  Logic: '<S9>/Logical Operator2'
     */
    ((boolean_T *)ssGetOutputPortSignal(S, 2))[0] = !(_rtB->controlEnabled_e !=
      0.0);
    ((boolean_T *)ssGetOutputPortSignal(S, 2))[1] = !(_rtB->controlEnabled_g !=
      0.0);
    ((boolean_T *)ssGetOutputPortSignal(S, 2))[2] = !(_rtB->controlEnabled !=
      0.0);
  }

  if (ssIsContinuousTask(S, tid)) {
    /* Outport: '<Root>/Angle measurments [rad]' */
    ((real_T *)ssGetOutputPortSignal(S, 1))[0] = _rtB->Gain;
    ((real_T *)ssGetOutputPortSignal(S, 1))[1] = _rtB->Gain1;
    ((real_T *)ssGetOutputPortSignal(S, 1))[2] = _rtB->Gain2;

    /* Outport: '<Root>/Accelerometer [V]' */
    ((real_T *)ssGetOutputPortSignal(S, 3))[0] = _rtB->ec_Ebox_o1[0];
  }

  if (ssIsSampleHit(S, 1, tid)) {
    /* DiscretePulseGenerator: '<S2>/Pulse Generator' */
    _rtB->PulseGenerator = (((int32_T *)ssGetDWork(S, 37))[0] < 2) && (((int32_T
      *)ssGetDWork(S, 37))[0] >= 0) ? 2000.0 : 0.0;
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

    /* Level2 S-Function Block: '<S11>/Dctpd' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 3);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S11>/Dctnotch' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 4);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S11>/Dct2lowpass' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 5);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Product: '<S8>/Product' */
    fx1 = _rtB->Dct2lowpass * _rtB->homeControllerEnabled_p;

    /* Saturate: '<S8>/Saturation' */
    if (fx1 > 0.7) {
      _rtB->Saturation = 0.7;
    } else if (fx1 < -0.7) {
      _rtB->Saturation = -0.7;
    } else {
      _rtB->Saturation = fx1;
    }

    /* End of Saturate: '<S8>/Saturation' */

    /* Logic: '<S8>/Logical Operator1' */
    _rtB->LogicalOperator1 = !(_rtB->airBagEnabled_d != 0.0);
  }

  if (ssIsContinuousTask(S, tid)) {
    /* Sum: '<S8>/Sum1' */
    _rtB->Sum1 = _rtB->airBagRef_i - _rtB->Gain;
  }

  if (ssIsSampleHit(S, 1, tid)) {
    /* Level2 S-Function Block: '<S12>/Dctpd' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 6);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S12>/Dctnotch' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 7);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S12>/Dct2lowpass' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 8);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }
  }

  if (ssIsContinuousTask(S, tid)) {
    /* Switch: '<S8>/AirbagSwitch' */
    if (_rtB->LogicalOperator1) {
      /* Switch: '<S8>/Homing Running Switch' incorporates:
       *  Inport: '<Root>/Input [V]'
       */
      if (_rtB->homingBusy_e >= 0.5) {
        fx1 = _rtB->Saturation;
      } else {
        fx1 = *((const real_T **)ssGetInputPortSignalPtrs(S, 0))[0];
      }

      /* End of Switch: '<S8>/Homing Running Switch' */
    } else {
      fx1 = _rtB->Dct2lowpass_p;
    }

    /* End of Switch: '<S8>/AirbagSwitch' */

    /* Sum: '<S2>/Sum' incorporates:
     *  Constant: '<S2>/Constant'
     *  Product: '<S8>/Product1'
     */
    fx1 = fx1 * _rtB->controlEnabled_e + 2.5;

    /* Saturate: '<S2>/Saturation' */
    if (fx1 > 5.0) {
      _rtB->Saturation_g = 5.0;
    } else if (fx1 < 0.0) {
      _rtB->Saturation_g = 0.0;
    } else {
      _rtB->Saturation_g = fx1;
    }

    /* End of Saturate: '<S2>/Saturation' */
  }

  if (ssIsSampleHit(S, 1, tid)) {
    /* Level2 S-Function Block: '<S10>/Dctintegrator' (dweakint) */
    {
      SimStruct *rts = ssGetSFunction(S, 9);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S30>/Dctpd' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 10);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S30>/Dctnotch' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 11);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S30>/Dct2lowpass' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 12);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Product: '<S10>/Product' */
    _rtB->Product = _rtB->Dct2lowpass_m * _rtB->homeControllerEnabled;

    /* Logic: '<S10>/Logical Operator1' */
    _rtB->LogicalOperator1_i = !(_rtB->airBagEnabled != 0.0);
  }

  if (ssIsContinuousTask(S, tid)) {
    /* Sum: '<S10>/Sum1' */
    _rtB->Sum1_a = _rtB->airBagRef - _rtB->Gain2;
  }

  if (ssIsSampleHit(S, 1, tid)) {
    /* Level2 S-Function Block: '<S29>/Dctpd' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 13);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S29>/Dctnotch' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 14);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S29>/Dct2lowpass' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 15);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }
  }

  if (ssIsContinuousTask(S, tid)) {
    /* Switch: '<S10>/AirbagSwitch' */
    if (_rtB->LogicalOperator1_i) {
      /* Switch: '<S10>/Homing Running Switch' incorporates:
       *  Inport: '<Root>/Input [V]'
       */
      if (_rtB->homingBusy >= 0.5) {
        fx1 = _rtB->Product;
      } else {
        fx1 = *((const real_T **)ssGetInputPortSignalPtrs(S, 0))[2];
      }

      /* End of Switch: '<S10>/Homing Running Switch' */
    } else {
      fx1 = _rtB->Dct2lowpass_l;
    }

    /* End of Switch: '<S10>/AirbagSwitch' */

    /* Sum: '<S2>/Sum2' incorporates:
     *  Constant: '<S2>/Constant1'
     *  Product: '<S10>/Product1'
     */
    fx1 = fx1 * _rtB->controlEnabled + 2.5;

    /* Saturate: '<S2>/Saturation2' */
    if (fx1 > 5.0) {
      _rtB->Saturation2 = 5.0;
    } else if (fx1 < 0.0) {
      _rtB->Saturation2 = 0.0;
    } else {
      _rtB->Saturation2 = fx1;
    }

    /* End of Saturate: '<S2>/Saturation2' */
  }

  if (ssIsSampleHit(S, 1, tid)) {
    /* Level2 S-Function Block: '<S9>/Dctintegrator' (dweakint) */
    {
      SimStruct *rts = ssGetSFunction(S, 16);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S19>/Dctpd' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 17);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S19>/Dctnotch' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 18);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S19>/Dct2lowpass' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 19);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Product: '<S9>/Product' */
    _rtB->Product_j = _rtB->Dct2lowpass_n * _rtB->homeControllerEnabled_e;

    /* Logic: '<S9>/Logical Operator1' */
    _rtB->LogicalOperator1_j = !(_rtB->airBagEnabled_i != 0.0);
  }

  if (ssIsContinuousTask(S, tid)) {
    /* Sum: '<S9>/Sum1' */
    _rtB->Sum1_i = _rtB->airBagRef_d - _rtB->Gain1;
  }

  if (ssIsSampleHit(S, 1, tid)) {
    /* Level2 S-Function Block: '<S20>/Dctpd' (dpd) */
    {
      SimStruct *rts = ssGetSFunction(S, 20);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S20>/Dctnotch' (dnotch) */
    {
      SimStruct *rts = ssGetSFunction(S, 21);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Level2 S-Function Block: '<S20>/Dct2lowpass' (dlowpass2) */
    {
      SimStruct *rts = ssGetSFunction(S, 22);
      sfcnOutputs(rts, tid);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Switch: '<S2>/Switch' incorporates:
     *  Constant: '<S2>/Constant3'
     *  Constant: '<S2>/Constant4'
     *  Inport: '<Root>/Solenoid'
     */
    if (*((const real_T **)ssGetInputPortSignalPtrs(S, 1))[0] >= 0.5) {
      _rtB->Switch = 2000.0;
    } else {
      _rtB->Switch = 0.0;
    }

    /* End of Switch: '<S2>/Switch' */

    /* Sum: '<S3>/Add' */
    _rtB->Add = (_rtB->Ready_m + _rtB->Ready_a) + _rtB->Ready;
  }

  if (ssIsContinuousTask(S, tid)) {
    /* Switch: '<S9>/AirbagSwitch' */
    if (_rtB->LogicalOperator1_j) {
      /* Switch: '<S9>/Homing Running Switch' incorporates:
       *  Inport: '<Root>/Input [V]'
       */
      if (_rtB->homingBusy_g >= 0.5) {
        fx1 = _rtB->Product_j;
      } else {
        fx1 = *((const real_T **)ssGetInputPortSignalPtrs(S, 0))[1];
      }

      /* End of Switch: '<S9>/Homing Running Switch' */
    } else {
      fx1 = _rtB->Dct2lowpass_i;
    }

    /* End of Switch: '<S9>/AirbagSwitch' */

    /* Sum: '<S2>/Sum1' incorporates:
     *  Constant: '<S2>/Constant'
     *  Product: '<S9>/Product1'
     */
    fx1 = 2.5 - fx1 * _rtB->controlEnabled_g;

    /* Saturate: '<S2>/SaturationX' */
    if (fx1 > 5.0) {
      _rtB->SaturationX = 5.0;
    } else if (fx1 < 0.0) {
      _rtB->SaturationX = 0.0;
    } else {
      _rtB->SaturationX = fx1;
    }

    /* End of Saturate: '<S2>/SaturationX' */

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
    if (_rtB->StopSim_l != 0.0) {
      ssSetStopRequested(S, 1);
    }

    /* End of Stop: '<S8>/Stop Simulation' */

    /* Sum: '<S13>/Sum' */
    fy2 = _rtB->toPoint_g + Robot_rtC(S)->Constant1;

    /* RateLimiter: '<S13>/Limit Speed' */
    fx1 = fy2 - ((real_T *)ssGetDWork(S, 10))[0];
    if (fx1 > 9.765625E-5) {
      fy2 = ((real_T *)ssGetDWork(S, 10))[0] + 9.765625E-5;
    } else {
      if (fx1 < -9.765625E-5) {
        fy2 = ((real_T *)ssGetDWork(S, 10))[0] + -9.765625E-5;
      }
    }

    ((real_T *)ssGetDWork(S, 10))[0] = fy2;

    /* End of RateLimiter: '<S13>/Limit Speed' */

    /* SampleTimeMath: '<S18>/TSamp'
     *
     * About '<S18>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    _rtB->TSamp = fy2 * 4096.0;

    /* Sum: '<S18>/Diff' incorporates:
     *  UnitDelay: '<S18>/UD'
     */
    fy2 = _rtB->TSamp - ((real_T *)ssGetDWork(S, 7))[0];

    /* RateLimiter: '<S13>/Limit Acceleration' */
    fx1 = fy2 - ((real_T *)ssGetDWork(S, 11))[0];
    if (fx1 > 0.0001220703125) {
      _rtB->LimitAcceleration = ((real_T *)ssGetDWork(S, 11))[0] +
        0.0001220703125;
    } else if (fx1 < -0.0001220703125) {
      _rtB->LimitAcceleration = ((real_T *)ssGetDWork(S, 11))[0] +
        -0.0001220703125;
    } else {
      _rtB->LimitAcceleration = fy2;
    }

    ((real_T *)ssGetDWork(S, 11))[0] = _rtB->LimitAcceleration;

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
    if (_rtB->StopSim_g != 0.0) {
      ssSetStopRequested(S, 1);
    }

    /* End of Stop: '<S9>/Stop Simulation' */

    /* Sum: '<S21>/Sum' */
    fy2 = _rtB->toPoint_b + Robot_rtC(S)->Constant1_l;

    /* RateLimiter: '<S21>/Limit Speed' */
    fx1 = fy2 - ((real_T *)ssGetDWork(S, 12))[0];
    if (fx1 > 9.765625E-5) {
      fy2 = ((real_T *)ssGetDWork(S, 12))[0] + 9.765625E-5;
    } else {
      if (fx1 < -9.765625E-5) {
        fy2 = ((real_T *)ssGetDWork(S, 12))[0] + -9.765625E-5;
      }
    }

    ((real_T *)ssGetDWork(S, 12))[0] = fy2;

    /* End of RateLimiter: '<S21>/Limit Speed' */

    /* SampleTimeMath: '<S27>/TSamp'
     *
     * About '<S27>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    _rtB->TSamp_j = fy2 * 4096.0;

    /* Sum: '<S27>/Diff' incorporates:
     *  UnitDelay: '<S27>/UD'
     */
    fy2 = _rtB->TSamp_j - ((real_T *)ssGetDWork(S, 8))[0];

    /* RateLimiter: '<S21>/Limit Acceleration' */
    fx1 = fy2 - ((real_T *)ssGetDWork(S, 13))[0];
    if (fx1 > 0.0001220703125) {
      _rtB->LimitAcceleration_g = ((real_T *)ssGetDWork(S, 13))[0] +
        0.0001220703125;
    } else if (fx1 < -0.0001220703125) {
      _rtB->LimitAcceleration_g = ((real_T *)ssGetDWork(S, 13))[0] +
        -0.0001220703125;
    } else {
      _rtB->LimitAcceleration_g = fy2;
    }

    ((real_T *)ssGetDWork(S, 13))[0] = _rtB->LimitAcceleration_g;

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
    if (_rtB->StopSim != 0.0) {
      ssSetStopRequested(S, 1);
    }

    /* End of Stop: '<S10>/Stop Simulation' */

    /* Sum: '<S31>/Sum' */
    fy2 = _rtB->toPoint + Robot_rtC(S)->Constant1_p;

    /* RateLimiter: '<S31>/Limit Speed' */
    fx1 = fy2 - ((real_T *)ssGetDWork(S, 14))[0];
    if (fx1 > 4.8828125E-5) {
      fy2 = ((real_T *)ssGetDWork(S, 14))[0] + 4.8828125E-5;
    } else {
      if (fx1 < -4.8828125E-5) {
        fy2 = ((real_T *)ssGetDWork(S, 14))[0] + -4.8828125E-5;
      }
    }

    ((real_T *)ssGetDWork(S, 14))[0] = fy2;

    /* End of RateLimiter: '<S31>/Limit Speed' */

    /* SampleTimeMath: '<S37>/TSamp'
     *
     * About '<S37>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    _rtB->TSamp_o = fy2 * 4096.0;

    /* Sum: '<S37>/Diff' incorporates:
     *  UnitDelay: '<S37>/UD'
     */
    fy2 = _rtB->TSamp_o - ((real_T *)ssGetDWork(S, 9))[0];

    /* RateLimiter: '<S31>/Limit Acceleration' */
    fx1 = fy2 - ((real_T *)ssGetDWork(S, 15))[0];
    if (fx1 > 0.0001220703125) {
      _rtB->LimitAcceleration_a = ((real_T *)ssGetDWork(S, 15))[0] +
        0.0001220703125;
    } else if (fx1 < -0.0001220703125) {
      _rtB->LimitAcceleration_a = ((real_T *)ssGetDWork(S, 15))[0] +
        -0.0001220703125;
    } else {
      _rtB->LimitAcceleration_a = fy2;
    }

    ((real_T *)ssGetDWork(S, 15))[0] = _rtB->LimitAcceleration_a;

    /* End of RateLimiter: '<S31>/Limit Acceleration' */
  }

  UNUSED_PARAMETER(tid);
}

/* Update for root system: '<Root>' */
#define MDL_UPDATE

static void mdlUpdate(SimStruct *S, int_T tid)
{
  B_Robot_T *_rtB;
  _rtB = ((B_Robot_T *) ssGetLocalBlockIO(S));
  if (ssIsSampleHit(S, 1, tid)) {
    /* Update for DiscreteIntegrator: '<S8>/Discrete-Time Integrator' */
    ((real_T *)ssGetDWork(S, 0))[0] = 0.000244140625 * _rtB->jogSpeed_k +
      ((real_T *)ssGetDWork(S, 0))[0];

    /* Update for DiscreteIntegrator: '<S13>/Discrete-Time Integrator' */
    ((real_T *)ssGetDWork(S, 1))[0] = 0.000244140625 * _rtB->LimitAcceleration +
      ((real_T *)ssGetDWork(S, 1))[0];

    /* Update for UnitDelay: '<S3>/Unit Delay' */
    ((real_T *)ssGetDWork(S, 2))[0] = _rtB->Add;

    /* Update for DiscreteIntegrator: '<S9>/Discrete-Time Integrator' */
    ((real_T *)ssGetDWork(S, 3))[0] = 0.000244140625 * _rtB->jogSpeed_g +
      ((real_T *)ssGetDWork(S, 3))[0];

    /* Update for DiscreteIntegrator: '<S21>/Discrete-Time Integrator' */
    ((real_T *)ssGetDWork(S, 4))[0] = 0.000244140625 * _rtB->LimitAcceleration_g
      + ((real_T *)ssGetDWork(S, 4))[0];

    /* Update for DiscreteIntegrator: '<S10>/Discrete-Time Integrator' */
    ((real_T *)ssGetDWork(S, 5))[0] = 0.000244140625 * _rtB->jogSpeed + ((real_T
      *)ssGetDWork(S, 5))[0];

    /* Update for DiscreteIntegrator: '<S31>/Discrete-Time Integrator' */
    ((real_T *)ssGetDWork(S, 6))[0] = 0.000244140625 * _rtB->LimitAcceleration_a
      + ((real_T *)ssGetDWork(S, 6))[0];

    /* Update for UnitDelay: '<S18>/UD' */
    ((real_T *)ssGetDWork(S, 7))[0] = _rtB->TSamp;

    /* Update for UnitDelay: '<S27>/UD' */
    ((real_T *)ssGetDWork(S, 8))[0] = _rtB->TSamp_j;

    /* Update for UnitDelay: '<S37>/UD' */
    ((real_T *)ssGetDWork(S, 9))[0] = _rtB->TSamp_o;
  }

  UNUSED_PARAMETER(tid);
}

/* Termination for root system: '<Root>' */
static void mdlTerminate(SimStruct *S)
{
  B_Robot_T *_rtB;
  _rtB = ((B_Robot_T *) ssGetLocalBlockIO(S));

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

  /* Level2 S-Function Block: '<S11>/Dctpd' (dpd) */
  {
    SimStruct *rts = ssGetSFunction(S, 3);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S11>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = ssGetSFunction(S, 4);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S11>/Dct2lowpass' (dlowpass2) */
  {
    SimStruct *rts = ssGetSFunction(S, 5);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S12>/Dctpd' (dpd) */
  {
    SimStruct *rts = ssGetSFunction(S, 6);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S12>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = ssGetSFunction(S, 7);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S12>/Dct2lowpass' (dlowpass2) */
  {
    SimStruct *rts = ssGetSFunction(S, 8);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S10>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = ssGetSFunction(S, 9);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S30>/Dctpd' (dpd) */
  {
    SimStruct *rts = ssGetSFunction(S, 10);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S30>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = ssGetSFunction(S, 11);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S30>/Dct2lowpass' (dlowpass2) */
  {
    SimStruct *rts = ssGetSFunction(S, 12);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S29>/Dctpd' (dpd) */
  {
    SimStruct *rts = ssGetSFunction(S, 13);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S29>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = ssGetSFunction(S, 14);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S29>/Dct2lowpass' (dlowpass2) */
  {
    SimStruct *rts = ssGetSFunction(S, 15);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S9>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = ssGetSFunction(S, 16);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S19>/Dctpd' (dpd) */
  {
    SimStruct *rts = ssGetSFunction(S, 17);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S19>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = ssGetSFunction(S, 18);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S19>/Dct2lowpass' (dlowpass2) */
  {
    SimStruct *rts = ssGetSFunction(S, 19);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S20>/Dctpd' (dpd) */
  {
    SimStruct *rts = ssGetSFunction(S, 20);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S20>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = ssGetSFunction(S, 21);
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S20>/Dct2lowpass' (dlowpass2) */
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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

    /* Level2 S-Function Block: '<S11>/Dctpd' (dpd) */
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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

    /* Level2 S-Function Block: '<S11>/Dctnotch' (dnotch) */
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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

    /* Level2 S-Function Block: '<S11>/Dct2lowpass' (dlowpass2) */
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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

    /* Level2 S-Function Block: '<S12>/Dctpd' (dpd) */
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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

    /* Level2 S-Function Block: '<S12>/Dctnotch' (dnotch) */
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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

    /* Level2 S-Function Block: '<S12>/Dct2lowpass' (dlowpass2) */
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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

    /* Level2 S-Function Block: '<S30>/Dctpd' (dpd) */
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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

    /* Level2 S-Function Block: '<S30>/Dctnotch' (dnotch) */
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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

    /* Level2 S-Function Block: '<S30>/Dct2lowpass' (dlowpass2) */
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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

    /* Level2 S-Function Block: '<S29>/Dctpd' (dpd) */
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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

    /* Level2 S-Function Block: '<S29>/Dctnotch' (dnotch) */
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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

    /* Level2 S-Function Block: '<S29>/Dct2lowpass' (dlowpass2) */
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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

    /* Level2 S-Function Block: '<S19>/Dctpd' (dpd) */
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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

    /* Level2 S-Function Block: '<S19>/Dctnotch' (dnotch) */
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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

    /* Level2 S-Function Block: '<S19>/Dct2lowpass' (dlowpass2) */
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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

    /* Level2 S-Function Block: '<S20>/Dctpd' (dpd) */
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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

    /* Level2 S-Function Block: '<S20>/Dctnotch' (dnotch) */
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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

    /* Level2 S-Function Block: '<S20>/Dct2lowpass' (dlowpass2) */
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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
          ssPeriodicStatesInfo* periodicStatesInfo = ssGetPeriodicStatesInfo(rts);
          rt_FREE(periodicStatesInfo);
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
  if (!ssSetNumDWork(S, 47)) {
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

  /* '<S11>/Dctpd': RWORK */
  ssSetDWorkName(S, 17, "DWORK17");
  ssSetDWorkWidth(S, 17, 2);

  /* '<S11>/Dctnotch': RWORK */
  ssSetDWorkName(S, 18, "DWORK18");
  ssSetDWorkWidth(S, 18, 4);

  /* '<S11>/Dct2lowpass': RWORK */
  ssSetDWorkName(S, 19, "DWORK19");
  ssSetDWorkWidth(S, 19, 4);

  /* '<S12>/Dctpd': RWORK */
  ssSetDWorkName(S, 20, "DWORK20");
  ssSetDWorkWidth(S, 20, 2);

  /* '<S12>/Dctnotch': RWORK */
  ssSetDWorkName(S, 21, "DWORK21");
  ssSetDWorkWidth(S, 21, 4);

  /* '<S12>/Dct2lowpass': RWORK */
  ssSetDWorkName(S, 22, "DWORK22");
  ssSetDWorkWidth(S, 22, 4);

  /* '<S10>/Dctintegrator': RWORK */
  ssSetDWorkName(S, 23, "DWORK23");
  ssSetDWorkWidth(S, 23, 2);

  /* '<S30>/Dctpd': RWORK */
  ssSetDWorkName(S, 24, "DWORK24");
  ssSetDWorkWidth(S, 24, 2);

  /* '<S30>/Dctnotch': RWORK */
  ssSetDWorkName(S, 25, "DWORK25");
  ssSetDWorkWidth(S, 25, 4);

  /* '<S30>/Dct2lowpass': RWORK */
  ssSetDWorkName(S, 26, "DWORK26");
  ssSetDWorkWidth(S, 26, 4);

  /* '<S29>/Dctpd': RWORK */
  ssSetDWorkName(S, 27, "DWORK27");
  ssSetDWorkWidth(S, 27, 2);

  /* '<S29>/Dctnotch': RWORK */
  ssSetDWorkName(S, 28, "DWORK28");
  ssSetDWorkWidth(S, 28, 4);

  /* '<S29>/Dct2lowpass': RWORK */
  ssSetDWorkName(S, 29, "DWORK29");
  ssSetDWorkWidth(S, 29, 4);

  /* '<S9>/Dctintegrator': RWORK */
  ssSetDWorkName(S, 30, "DWORK30");
  ssSetDWorkWidth(S, 30, 2);

  /* '<S19>/Dctpd': RWORK */
  ssSetDWorkName(S, 31, "DWORK31");
  ssSetDWorkWidth(S, 31, 2);

  /* '<S19>/Dctnotch': RWORK */
  ssSetDWorkName(S, 32, "DWORK32");
  ssSetDWorkWidth(S, 32, 4);

  /* '<S19>/Dct2lowpass': RWORK */
  ssSetDWorkName(S, 33, "DWORK33");
  ssSetDWorkWidth(S, 33, 4);

  /* '<S20>/Dctpd': RWORK */
  ssSetDWorkName(S, 34, "DWORK34");
  ssSetDWorkWidth(S, 34, 2);

  /* '<S20>/Dctnotch': RWORK */
  ssSetDWorkName(S, 35, "DWORK35");
  ssSetDWorkWidth(S, 35, 4);

  /* '<S20>/Dct2lowpass': RWORK */
  ssSetDWorkName(S, 36, "DWORK36");
  ssSetDWorkWidth(S, 36, 4);

  /* '<S2>/Pulse Generator': Counter */
  ssSetDWorkName(S, 37, "DWORK37");
  ssSetDWorkWidth(S, 37, 1);
  ssSetDWorkDataType(S, 37, SS_INT32);

  /* '<S10>/Supervisor': DWORK3 */
  ssSetDWorkName(S, 38, "DWORK38");
  ssSetDWorkWidth(S, 38, 1);
  ssSetDWorkDataType(S, 38, SS_UINT16);

  /* '<S9>/Supervisor': DWORK3 */
  ssSetDWorkName(S, 39, "DWORK39");
  ssSetDWorkWidth(S, 39, 1);
  ssSetDWorkDataType(S, 39, SS_UINT16);

  /* '<S8>/Supervisor': DWORK3 */
  ssSetDWorkName(S, 40, "DWORK40");
  ssSetDWorkWidth(S, 40, 1);
  ssSetDWorkDataType(S, 40, SS_UINT16);

  /* '<S10>/Supervisor': DWORK1 */
  ssSetDWorkName(S, 41, "DWORK41");
  ssSetDWorkWidth(S, 41, 1);
  ssSetDWorkDataType(S, 41, SS_UINT8);

  /* '<S10>/Supervisor': DWORK2 */
  ssSetDWorkName(S, 42, "DWORK42");
  ssSetDWorkWidth(S, 42, 1);
  ssSetDWorkDataType(S, 42, SS_UINT8);

  /* '<S9>/Supervisor': DWORK1 */
  ssSetDWorkName(S, 43, "DWORK43");
  ssSetDWorkWidth(S, 43, 1);
  ssSetDWorkDataType(S, 43, SS_UINT8);

  /* '<S9>/Supervisor': DWORK2 */
  ssSetDWorkName(S, 44, "DWORK44");
  ssSetDWorkWidth(S, 44, 1);
  ssSetDWorkDataType(S, 44, SS_UINT8);

  /* '<S8>/Supervisor': DWORK1 */
  ssSetDWorkName(S, 45, "DWORK45");
  ssSetDWorkWidth(S, 45, 1);
  ssSetDWorkDataType(S, 45, SS_UINT8);

  /* '<S8>/Supervisor': DWORK2 */
  ssSetDWorkName(S, 46, "DWORK46");
  ssSetDWorkWidth(S, 46, 1);
  ssSetDWorkDataType(S, 46, SS_UINT8);

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
    ssRegisterMsgForNotSupportingMultiExecInst(S,
      "<diag_root><diag id=\"Simulink:blocks:UserSFcnBlockDoesNotSupportMultiExecInstances\"><arguments><arg type=\"encoded\">UgBvAGIAbwB0AC8AUgBvAGIAbwB0ACAAQQByAG0ALwBJAE8ALwBFAC0AYgBvAHgALwBlAGMAXwBFAGIAbwB4AAAA</arg><arg type=\"encoded\">PABfAF8AaQBpAFMAUwBfAF8APgA8AC8AXwBfAGkAaQBTAFMAXwBfAD4AAAA=</arg><arg type=\"encoded\">PABfAF8AaQB0AGUAcgBCAGwAawBfAF8APgA8AC8AXwBfAGkAdABlAHIAQgBsAGsAXwBfAD4AAAA=</arg></arguments></diag>\n</diag_root>");
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
