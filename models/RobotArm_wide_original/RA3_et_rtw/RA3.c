/*
 * RA3.c
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

#include "RA3.h"
#include "RA3_private.h"
#include "RA3_dt.h"

/* Named constants for Chart: '<S13>/Supervisor' */
#define RA3_CALL_EVENT                 (-1)
#define RA3_IN_AirbagLeft              ((uint8_T)1U)
#define RA3_IN_AirbagRight             ((uint8_T)2U)
#define RA3_IN_CheckRobotIsON          ((uint8_T)3U)
#define RA3_IN_DisableOutputs          ((uint8_T)4U)
#define RA3_IN_EnableRunAndSafety      ((uint8_T)5U)
#define RA3_IN_Homing                  ((uint8_T)6U)
#define RA3_IN_MovetoX0                ((uint8_T)7U)
#define RA3_IN_NO_ACTIVE_CHILD         ((uint8_T)0U)
#define RA3_IN_ResetEnc                ((uint8_T)8U)
#define RA3_IN_RobotIsON               ((uint8_T)9U)
#define RA3_IN_STOPRobotIsOFF          ((uint8_T)10U)
#define RA3_IN_WaitForRest             ((uint8_T)11U)

/* Named constants for Chart: '<S14>/Supervisor' */
#define RA3_IN_DisableOutputs_j        ((uint8_T)3U)
#define RA3_IN_EnableRunAndSafety_c    ((uint8_T)4U)
#define RA3_IN_Homing_i                ((uint8_T)5U)
#define RA3_IN_MovetoX0_p              ((uint8_T)6U)
#define RA3_IN_ResetEnc_m              ((uint8_T)7U)
#define RA3_IN_WaitForRest_h           ((uint8_T)8U)
#define RA3_IN_WaitForZ                ((uint8_T)9U)

const real_T RA3_RGND = 0.0;           /* real_T ground */

/* Block signals (auto storage) */
B_RA3_T RA3_B;

/* Block states (auto storage) */
DW_RA3_T RA3_DW;

/* Real-time model */
RT_MODEL_RA3_T RA3_M_;
RT_MODEL_RA3_T *const RA3_M = &RA3_M_;

/* Model output function */
void RA3_output(void)
{
  real_T fx1;
  real_T fy1;
  real_T fy2;
  real_T d12;
  real_T b_a;

  /* Reset subsysRan breadcrumbs */
  srClearBC(RA3_DW.Controller_SubsysRanBC);

  /* Level2 S-Function Block: '<S9>/ec_Ebox' (ec_Ebox) */
  {
    SimStruct *rts = RA3_M->childSfunctions[1];
    sfcnOutputs(rts, 0);
  }

  /* Constant: '<S18>/Constant1' */
  RA3_B.Constant1 = RA3_P.Constant1_Value;

  /* Sum: '<S13>/Sum' incorporates:
   *  DiscreteIntegrator: '<S13>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S18>/Discrete-Time Integrator'
   */
  RA3_B.Sum = RA3_DW.DiscreteTimeIntegrator_DSTATE +
    RA3_DW.DiscreteTimeIntegrator_DSTATE_b;

  /* Gain: '<S7>/Gain' */
  RA3_B.Gain = RA3_P.Gain_Gain_n * RA3_B.ec_Ebox_o2[0];

  /* Sum: '<S13>/Sum2' */
  RA3_B.Sum2 = RA3_B.Sum - RA3_B.Gain;

  /* RelationalOperator: '<S13>/Relational Operator' incorporates:
   *  Constant: '<S13>/Constant'
   */
  RA3_B.RelationalOperator = (RA3_B.Sum2 >= RA3_P.Constant_Value);

  /* RelationalOperator: '<S11>/Compare' incorporates:
   *  Constant: '<S11>/Constant'
   *  UnitDelay: '<S8>/Unit Delay'
   */
  RA3_B.Compare = (RA3_DW.UnitDelay_DSTATE == RA3_P.CompareToConstant_const);

  /* Chart: '<S13>/Supervisor' */
  if (RA3_DW.temporalCounter_i1_i < 65535U) {
    RA3_DW.temporalCounter_i1_i++;
  }

  /* Gateway: Robot Arm/Supervisor/Supervisory Controller R/Supervisor */
  RA3_DW.sfEvent_b = RA3_CALL_EVENT;

  /* During: Robot Arm/Supervisor/Supervisory Controller R/Supervisor */
  if (RA3_DW.is_active_c5_RA3 == 0U) {
    /* Entry: Robot Arm/Supervisor/Supervisory Controller R/Supervisor */
    RA3_DW.is_active_c5_RA3 = 1U;

    /* Entry Internal: Robot Arm/Supervisor/Supervisory Controller R/Supervisor */
    /* Transition: '<S22>:7' */
    RA3_DW.is_c5_RA3 = RA3_IN_Homing;

    /* Entry 'Homing': '<S22>:6' */
    /* Set jog speed and homing state */
    RA3_B.Ready_m = 0.0;
    RA3_B.toPoint_g = 0.0;
    RA3_B.homingBusy_e = 1.0;
    RA3_B.jogSpeed_k = 0.4;
    RA3_B.homeControllerEnabled_p = 1.0;
  } else {
    switch (RA3_DW.is_c5_RA3) {
     case RA3_IN_AirbagLeft:
      /* During 'AirbagLeft': '<S22>:71' */
      if (RA3_DW.temporalCounter_i1_i >= 20480U) {
        /* Transition: '<S22>:79' */
        RA3_DW.is_c5_RA3 = RA3_IN_DisableOutputs;

        /* Entry 'DisableOutputs': '<S22>:77' */
        RA3_B.controlEnabled_e = 0.0;
        RA3_B.StopSim_l = 1.0;
      }
      break;

     case RA3_IN_AirbagRight:
      /* During 'AirbagRight': '<S22>:74' */
      if (RA3_DW.temporalCounter_i1_i >= 20480U) {
        /* Transition: '<S22>:78' */
        RA3_DW.is_c5_RA3 = RA3_IN_DisableOutputs;

        /* Entry 'DisableOutputs': '<S22>:77' */
        RA3_B.controlEnabled_e = 0.0;
        RA3_B.StopSim_l = 1.0;
      }
      break;

     case RA3_IN_CheckRobotIsON:
      /* During 'CheckRobotIsON': '<S22>:97' */
      if (RA3_B.Gain < 0.1) {
        /* Transition: '<S22>:101' */
        RA3_DW.is_c5_RA3 = RA3_IN_STOPRobotIsOFF;

        /* Entry 'STOPRobotIsOFF': '<S22>:100' */
        RA3_B.StopSim_l = 1.0;
      } else {
        /* Transition: '<S22>:103' */
        RA3_DW.is_c5_RA3 = RA3_IN_RobotIsON;
        RA3_DW.temporalCounter_i1_i = 0U;
      }
      break;

     case RA3_IN_DisableOutputs:
      /* During 'DisableOutputs': '<S22>:77' */
      break;

     case RA3_IN_EnableRunAndSafety:
      /* During 'EnableRunAndSafety': '<S22>:65' */
      if (RA3_B.Gain < -1.4) {
        /* Transition: '<S22>:72' */
        RA3_DW.is_c5_RA3 = RA3_IN_AirbagLeft;
        RA3_DW.temporalCounter_i1_i = 0U;

        /* Entry 'AirbagLeft': '<S22>:71' */
        RA3_B.airBagEnabled_d = 1.0;
        RA3_B.airBagRef_i = -1.4;
      } else {
        if (RA3_B.Gain > 1.4) {
          /* Transition: '<S22>:75' */
          RA3_DW.is_c5_RA3 = RA3_IN_AirbagRight;
          RA3_DW.temporalCounter_i1_i = 0U;

          /* Entry 'AirbagRight': '<S22>:74' */
          RA3_B.airBagEnabled_d = 1.0;
          RA3_B.airBagRef_i = 1.4;
        }
      }
      break;

     case RA3_IN_Homing:
      /* During 'Homing': '<S22>:6' */
      /* Transition if homeswitch becomes high */
      if (RA3_B.RelationalOperator) {
        /* Transition: '<S22>:10' */
        RA3_DW.is_c5_RA3 = RA3_IN_MovetoX0;
        RA3_DW.temporalCounter_i1_i = 0U;

        /* Entry 'MovetoX0': '<S22>:19' */
        RA3_B.jogSpeed_k = 0.0;
        RA3_B.toPoint_g = -2.15;
      }
      break;

     case RA3_IN_MovetoX0:
      /* During 'MovetoX0': '<S22>:19' */
      /* Allow time for moving */
      if (RA3_DW.temporalCounter_i1_i >= 2048U) {
        /* Transition: '<S22>:59' */
        RA3_DW.is_c5_RA3 = RA3_IN_CheckRobotIsON;
      }
      break;

     case RA3_IN_ResetEnc:
      /* During 'ResetEnc': '<S22>:58' */
      if (RA3_DW.temporalCounter_i1_i >= 41U) {
        /* Transition: '<S22>:66' */
        RA3_DW.is_c5_RA3 = RA3_IN_EnableRunAndSafety;

        /* Entry 'EnableRunAndSafety': '<S22>:65' */
        RA3_B.resetEnc_o = 0.0;
        RA3_B.homingBusy_e = 0.0;
      }
      break;

     case RA3_IN_RobotIsON:
      /* During 'RobotIsON': '<S22>:102' */
      if (RA3_DW.temporalCounter_i1_i >= 36864U) {
        /* Transition: '<S22>:99' */
        RA3_DW.is_c5_RA3 = RA3_IN_WaitForRest;

        /* Entry 'WaitForRest': '<S22>:94' */
        RA3_B.Ready_m = 1.0;
      }
      break;

     case RA3_IN_STOPRobotIsOFF:
      /* During 'STOPRobotIsOFF': '<S22>:100' */
      break;

     default:
      /* During 'WaitForRest': '<S22>:94' */
      if (RA3_B.Compare) {
        /* Transition: '<S22>:95' */
        RA3_DW.is_c5_RA3 = RA3_IN_ResetEnc;
        RA3_DW.temporalCounter_i1_i = 0U;

        /* Entry 'ResetEnc': '<S22>:58' */
        RA3_B.resetEnc_o = 1.0;
        RA3_B.homeControllerEnabled_p = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<S13>/Supervisor' */

  /* Logic: '<S13>/Logical Operator2' */
  RA3_B.LogicalOperator2 = !(RA3_B.controlEnabled_e != 0.0);

  /* Constant: '<S26>/Constant1' */
  RA3_B.Constant1_l = RA3_P.Constant1_Value_g;

  /* Sum: '<S14>/Sum' incorporates:
   *  DiscreteIntegrator: '<S14>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S26>/Discrete-Time Integrator'
   */
  RA3_B.Sum_g = RA3_DW.DiscreteTimeIntegrator_DSTATE_n +
    RA3_DW.DiscreteTimeIntegrator_DSTATE_k;

  /* Gain: '<S7>/Gain1' */
  RA3_B.Gain1 = RA3_P.Gain1_Gain * RA3_B.ec_Ebox_o2[1];

  /* Sum: '<S14>/Sum2' */
  RA3_B.Sum2_a = RA3_B.Sum_g - RA3_B.Gain1;

  /* RelationalOperator: '<S14>/Relational Operator' incorporates:
   *  Constant: '<S14>/Constant'
   */
  RA3_B.RelationalOperator_l = (RA3_B.Sum2_a <= RA3_P.Constant_Value_c);

  /* Chart: '<S14>/Supervisor' */
  if (RA3_DW.temporalCounter_i1_a < 32767U) {
    RA3_DW.temporalCounter_i1_a++;
  }

  /* Gateway: Robot Arm/Supervisor/Supervisory Controller X/Supervisor */
  RA3_DW.sfEvent_m = RA3_CALL_EVENT;

  /* During: Robot Arm/Supervisor/Supervisory Controller X/Supervisor */
  if (RA3_DW.is_active_c6_RA3 == 0U) {
    /* Entry: Robot Arm/Supervisor/Supervisory Controller X/Supervisor */
    RA3_DW.is_active_c6_RA3 = 1U;

    /* Entry Internal: Robot Arm/Supervisor/Supervisory Controller X/Supervisor */
    /* Transition: '<S31>:7' */
    RA3_DW.is_c6_RA3 = RA3_IN_WaitForZ;
    RA3_DW.temporalCounter_i1_a = 0U;

    /* Entry 'WaitForZ': '<S31>:107' */
    RA3_B.toPoint_b = 0.0;
    RA3_B.Ready_a = 0.0;
    RA3_B.homingBusy_g = 1.0;
    RA3_B.jogSpeed_g = 0.0;
  } else {
    switch (RA3_DW.is_c6_RA3) {
     case RA3_IN_AirbagLeft:
      /* During 'AirbagLeft': '<S31>:71' */
      if (RA3_DW.temporalCounter_i1_a >= 20480U) {
        /* Transition: '<S31>:79' */
        RA3_DW.is_c6_RA3 = RA3_IN_DisableOutputs_j;

        /* Entry 'DisableOutputs': '<S31>:77' */
        RA3_B.controlEnabled_g = 0.0;
        RA3_B.StopSim_g = 1.0;
      }
      break;

     case RA3_IN_AirbagRight:
      /* During 'AirbagRight': '<S31>:74' */
      if (RA3_DW.temporalCounter_i1_a >= 20480U) {
        /* Transition: '<S31>:78' */
        RA3_DW.is_c6_RA3 = RA3_IN_DisableOutputs_j;

        /* Entry 'DisableOutputs': '<S31>:77' */
        RA3_B.controlEnabled_g = 0.0;
        RA3_B.StopSim_g = 1.0;
      }
      break;

     case RA3_IN_DisableOutputs_j:
      /* During 'DisableOutputs': '<S31>:77' */
      break;

     case RA3_IN_EnableRunAndSafety_c:
      /* During 'EnableRunAndSafety': '<S31>:65' */
      if (RA3_B.Gain1 < -0.1) {
        /* Transition: '<S31>:72' */
        RA3_DW.is_c6_RA3 = RA3_IN_AirbagLeft;
        RA3_DW.temporalCounter_i1_a = 0U;

        /* Entry 'AirbagLeft': '<S31>:71' */
        RA3_B.airBagEnabled_i = 1.0;
        RA3_B.airBagRef_d = -0.1;
      } else {
        if (RA3_B.Gain1 > 1.15) {
          /* Transition: '<S31>:75' */
          RA3_DW.is_c6_RA3 = RA3_IN_AirbagRight;
          RA3_DW.temporalCounter_i1_a = 0U;

          /* Entry 'AirbagRight': '<S31>:74' */
          RA3_B.airBagEnabled_i = 1.0;
          RA3_B.airBagRef_d = 1.13;
        }
      }
      break;

     case RA3_IN_Homing_i:
      /* During 'Homing': '<S31>:6' */
      /* Transition if homeswitch becomes high */
      if (RA3_B.RelationalOperator_l) {
        /* Transition: '<S31>:10' */
        RA3_DW.is_c6_RA3 = RA3_IN_MovetoX0_p;
        RA3_DW.temporalCounter_i1_a = 0U;

        /* Entry 'MovetoX0': '<S31>:19' */
        RA3_B.jogSpeed_g = 0.0;
        RA3_B.toPoint_b = 0.3708572;
      }
      break;

     case RA3_IN_MovetoX0_p:
      /* During 'MovetoX0': '<S31>:19' */
      /* Allow time for moving */
      if (RA3_DW.temporalCounter_i1_a >= 28672U) {
        /* Transition: '<S31>:59' */
        RA3_DW.is_c6_RA3 = RA3_IN_WaitForRest_h;

        /* Entry 'WaitForRest': '<S31>:116' */
        RA3_B.Ready_a = 1.0;
      }
      break;

     case RA3_IN_ResetEnc_m:
      /* During 'ResetEnc': '<S31>:58' */
      if (RA3_DW.temporalCounter_i1_a >= 41U) {
        /* Transition: '<S31>:66' */
        RA3_DW.is_c6_RA3 = RA3_IN_EnableRunAndSafety_c;

        /* Entry 'EnableRunAndSafety': '<S31>:65' */
        RA3_B.resetEnc_l = 0.0;
        RA3_B.homingBusy_g = 0.0;
      }
      break;

     case RA3_IN_WaitForRest_h:
      /* During 'WaitForRest': '<S31>:116' */
      if (RA3_B.Compare) {
        /* Transition: '<S31>:117' */
        RA3_DW.is_c6_RA3 = RA3_IN_ResetEnc_m;
        RA3_DW.temporalCounter_i1_a = 0U;

        /* Entry 'ResetEnc': '<S31>:58' */
        RA3_B.resetEnc_l = 1.0;
        RA3_B.homeControllerEnabled_e = 0.0;
      }
      break;

     default:
      /* During 'WaitForZ': '<S31>:107' */
      if (RA3_DW.temporalCounter_i1_a >= 12288U) {
        /* Transition: '<S31>:111' */
        RA3_DW.is_c6_RA3 = RA3_IN_Homing_i;

        /* Entry 'Homing': '<S31>:6' */
        /* Set jog speed and homing state */
        RA3_B.jogSpeed_g = -0.2;
        RA3_B.homeControllerEnabled_e = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S14>/Supervisor' */

  /* Logic: '<S14>/Logical Operator2' */
  RA3_B.LogicalOperator2_g = !(RA3_B.controlEnabled_g != 0.0);

  /* Constant: '<S36>/Constant1' */
  RA3_B.Constant1_p = RA3_P.Constant1_Value_i;

  /* Sum: '<S15>/Sum' incorporates:
   *  DiscreteIntegrator: '<S15>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S36>/Discrete-Time Integrator'
   */
  RA3_B.Sum_i = RA3_DW.DiscreteTimeIntegrator_DSTAT_bd +
    RA3_DW.DiscreteTimeIntegrator_DSTATE_i;

  /* Level2 S-Function Block: '<S10>/ec_Ebox' (ec_Ebox) */
  {
    SimStruct *rts = RA3_M->childSfunctions[2];
    sfcnOutputs(rts, 0);
  }

  /* Gain: '<S7>/Gain2' */
  RA3_B.Gain2 = RA3_P.Gain2_Gain * RA3_B.ec_Ebox_o2_f[0];

  /* Sum: '<S15>/Sum2' */
  RA3_B.Sum2_f = RA3_B.Sum_i - RA3_B.Gain2;

  /* RelationalOperator: '<S15>/Relational Operator' incorporates:
   *  Constant: '<S15>/Constant'
   */
  RA3_B.RelationalOperator_e = (RA3_B.Sum2_f >= RA3_P.Constant_Value_f);

  /* MATLAB Function: '<S15>/Angle2Z' incorporates:
   *  SignalConversion: '<S33>/TmpSignal ConversionAt SFunction Inport1'
   */
  /* MATLAB Function 'Robot Arm/Supervisor/Supervisory Controller Z/Angle2Z': '<S33>:1' */
  /* '<S33>:1:3' */
  /* '<S33>:1:4' */
  /* '<S33>:1:5' */
  /* '<S33>:1:6' */
  /*  parameters */
  /* '<S33>:1:13' */
  /* '<S33>:1:14' */
  /* '<S33>:1:15' */
  /* '<S33>:1:17' */
  /* '<S33>:1:18' */
  /*  functions */
  /* '<S33>:1:22' */
  fx1 = cos(-RA3_B.Gain1 + 1.5707963267948966) * 0.08;

  /* '<S33>:1:23' */
  fy1 = sin(-RA3_B.Gain1 + 1.5707963267948966) * 0.08;

  /* '<S33>:1:25' */
  /* '<S33>:1:26' */
  fy2 = sin(RA3_B.Gain2 + 0.43633231299858238) * 0.13 + 0.165;

  /* '<S33>:1:28' */
  d12 = cos(RA3_B.Gain2 + 0.43633231299858238) * 0.13 - fx1;
  b_a = fy2 - fy1;
  d12 = sqrt(d12 * d12 + b_a * b_a);

  /* '<S33>:1:29' */
  fx1 = sqrt((0.165 - fy1) * (0.165 - fy1) + fx1 * fx1);

  /* '<S33>:1:31' */
  /* '<S33>:1:32' */
  /* '<S33>:1:34' */
  /* '<S33>:1:36' */
  RA3_B.y = (fy2 - sin(((3.1415926535897931 - acos(((d12 * d12 +
    0.016900000000000002) - fx1 * fx1) / (2.0 * d12 * 0.13))) - acos(((d12 * d12
    + 0.0144) - 0.016900000000000002) / (2.0 * d12 * 0.12))) - (RA3_B.Gain2 +
    0.43633231299858238)) * 0.185) - 0.013;

  /* Chart: '<S15>/Supervisor' */
  if (RA3_DW.temporalCounter_i1 < 32767U) {
    RA3_DW.temporalCounter_i1++;
  }

  /* Gateway: Robot Arm/Supervisor/Supervisory Controller Z/Supervisor */
  RA3_DW.sfEvent = RA3_CALL_EVENT;

  /* During: Robot Arm/Supervisor/Supervisory Controller Z/Supervisor */
  if (RA3_DW.is_active_c7_RA3 == 0U) {
    /* Entry: Robot Arm/Supervisor/Supervisory Controller Z/Supervisor */
    RA3_DW.is_active_c7_RA3 = 1U;

    /* Entry Internal: Robot Arm/Supervisor/Supervisory Controller Z/Supervisor */
    /* Transition: '<S41>:7' */
    RA3_DW.is_c7_RA3 = RA3_IN_Homing_i;

    /* Entry 'Homing': '<S41>:6' */
    /* Set jog speed and homing state */
    RA3_B.toPoint = 0.0;
    RA3_B.Ready = 0.0;
    RA3_B.homingBusy = 1.0;
    RA3_B.jogSpeed = 0.2;
    RA3_B.homeControllerEnabled = 1.0;
  } else {
    switch (RA3_DW.is_c7_RA3) {
     case RA3_IN_AirbagLeft:
      /* During 'AirbagLeft': '<S41>:71' */
      if (RA3_DW.temporalCounter_i1 >= 20480U) {
        /* Transition: '<S41>:79' */
        RA3_DW.is_c7_RA3 = RA3_IN_DisableOutputs_j;

        /* Entry 'DisableOutputs': '<S41>:77' */
        RA3_B.controlEnabled = 0.0;
        RA3_B.StopSim = 1.0;
      }
      break;

     case RA3_IN_AirbagRight:
      /* During 'AirbagRight': '<S41>:74' */
      if (RA3_DW.temporalCounter_i1 >= 20480U) {
        /* Transition: '<S41>:78' */
        RA3_DW.is_c7_RA3 = RA3_IN_DisableOutputs_j;

        /* Entry 'DisableOutputs': '<S41>:77' */
        RA3_B.controlEnabled = 0.0;
        RA3_B.StopSim = 1.0;
      }
      break;

     case RA3_IN_DisableOutputs_j:
      /* During 'DisableOutputs': '<S41>:77' */
      break;

     case RA3_IN_EnableRunAndSafety_c:
      /* During 'EnableRunAndSafety': '<S41>:65' */
      if (RA3_B.y < -0.0225) {
        /* Transition: '<S41>:72' */
        RA3_DW.is_c7_RA3 = RA3_IN_AirbagLeft;
        RA3_DW.temporalCounter_i1 = 0U;

        /* Entry 'AirbagLeft': '<S41>:71' */
        RA3_DW.currentcarPos = RA3_B.Gain2;
        RA3_B.airBagEnabled = 1.0;
        RA3_B.airBagRef = RA3_DW.currentcarPos + 0.02;
      } else {
        if (RA3_B.Gain2 > 0.5) {
          /* Transition: '<S41>:75' */
          RA3_DW.is_c7_RA3 = RA3_IN_AirbagRight;
          RA3_DW.temporalCounter_i1 = 0U;

          /* Entry 'AirbagRight': '<S41>:74' */
          RA3_B.airBagEnabled = 1.0;
          RA3_B.airBagRef = 0.48;
        }
      }
      break;

     case RA3_IN_Homing_i:
      /* During 'Homing': '<S41>:6' */
      /* Transition if homeswitch becomes high */
      if (RA3_B.RelationalOperator_e) {
        /* Transition: '<S41>:10' */
        RA3_DW.is_c7_RA3 = RA3_IN_MovetoX0_p;
        RA3_DW.temporalCounter_i1 = 0U;

        /* Entry 'MovetoX0': '<S41>:19' */
        RA3_B.jogSpeed = 0.0;
        RA3_B.toPoint = -0.7854;
      }
      break;

     case RA3_IN_MovetoX0_p:
      /* During 'MovetoX0': '<S41>:19' */
      /* Allow time for moving */
      if (RA3_DW.temporalCounter_i1 >= 28672U) {
        /* Transition: '<S41>:59' */
        RA3_DW.is_c7_RA3 = RA3_IN_WaitForRest_h;

        /* Entry 'WaitForRest': '<S41>:93' */
        RA3_B.Ready = 1.0;
      }
      break;

     case RA3_IN_ResetEnc_m:
      /* During 'ResetEnc': '<S41>:58' */
      if (RA3_DW.temporalCounter_i1 >= 41U) {
        /* Transition: '<S41>:66' */
        RA3_DW.is_c7_RA3 = RA3_IN_EnableRunAndSafety_c;

        /* Entry 'EnableRunAndSafety': '<S41>:65' */
        RA3_B.resetEnc = 0.0;
        RA3_B.homingBusy = 0.0;
      }
      break;

     default:
      /* During 'WaitForRest': '<S41>:93' */
      if (RA3_B.Compare) {
        /* Transition: '<S41>:94' */
        RA3_DW.is_c7_RA3 = RA3_IN_ResetEnc_m;
        RA3_DW.temporalCounter_i1 = 0U;

        /* Entry 'ResetEnc': '<S41>:58' */
        RA3_B.resetEnc = 1.0;
        RA3_B.homeControllerEnabled = 0.0;
        RA3_B.Ready = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S15>/Supervisor' */

  /* Logic: '<S15>/Logical Operator2' */
  RA3_B.LogicalOperator2_e = !(RA3_B.controlEnabled != 0.0);

  /* Sum: '<S12>/Add' */
  fx1 = (RA3_B.homingBusy_e + RA3_B.homingBusy_g) + RA3_B.homingBusy;

  /* Signum: '<S12>/Sign' */
  if (fx1 < 0.0) {
    fx1 = -1.0;
  } else if (fx1 > 0.0) {
    fx1 = 1.0;
  } else {
    if (fx1 == 0.0) {
      fx1 = 0.0;
    }
  }

  /* Sum: '<S12>/Add1' incorporates:
   *  Constant: '<S12>/Constant'
   *  Signum: '<S12>/Sign'
   */
  RA3_B.Add1 = RA3_P.Constant_Value_p - fx1;

  /* Outputs for Enabled SubSystem: '<Root>/Controller' incorporates:
   *  EnablePort: '<S1>/Enable'
   */
  if (RA3_B.Add1 > 0.0) {
    if (!RA3_DW.Controller_MODE) {
      RA3_DW.Controller_MODE = true;
    }
  } else {
    if (RA3_DW.Controller_MODE) {
      RA3_DW.Controller_MODE = false;
    }
  }

  if (RA3_DW.Controller_MODE) {
    /* Sum: '<S1>/Sum4' incorporates:
     *  Constant: '<S1>/Feedforward R'
     *  Constant: '<S1>/Reference R'
     *  Gain: '<S3>/Gain'
     *  Sum: '<S1>/Sum2'
     */
    RA3_B.Sum4 = (RA3_P.ReferenceR_Value - RA3_B.Gain) * RA3_P.Gain_Gain +
      RA3_P.FeedforwardR_Value;

    /* Sum: '<S1>/Sum5' incorporates:
     *  Constant: '<S1>/Feedforward X'
     *  Constant: '<S1>/Reference X'
     *  Gain: '<S4>/Gain'
     *  Sum: '<S1>/Sum1'
     */
    RA3_B.Sum5 = (RA3_P.ReferenceX_Value - RA3_B.Gain1) * RA3_P.Gain_Gain_e +
      RA3_P.FeedforwardX_Value;

    /* Sum: '<S1>/Sum6' incorporates:
     *  Constant: '<S1>/Feedforward Z'
     *  Constant: '<S1>/Reference Z'
     *  Gain: '<S5>/Gain'
     *  Sum: '<S1>/Sum3'
     */
    RA3_B.Sum6 = (RA3_P.ReferenceZ_Value - RA3_B.Gain2) * RA3_P.Gain_Gain_l +
      RA3_P.FeedforwardZ_Value;

    /* Constant: '<S1>/Reference Solenoid' */
    RA3_B.ReferenceSolenoid = RA3_P.ReferenceSolenoid_Value;

    /* Level2 S-Function Block: '<S6>/S-Function' (sf_rt_scope) */
    {
      SimStruct *rts = RA3_M->childSfunctions[0];
      sfcnOutputs(rts, 0);
    }

    srUpdateBC(RA3_DW.Controller_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<Root>/Controller' */

  /* DiscretePulseGenerator: '<S7>/Pulse Generator' */
  RA3_B.PulseGenerator = (RA3_DW.clockTickCounter < RA3_P.PulseGenerator_Duty) &&
    (RA3_DW.clockTickCounter >= 0) ? RA3_P.PulseGenerator_Amp : 0.0;
  if (RA3_DW.clockTickCounter >= RA3_P.PulseGenerator_Period - 1.0) {
    RA3_DW.clockTickCounter = 0;
  } else {
    RA3_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S7>/Pulse Generator' */

  /* Level2 S-Function Block: '<S13>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = RA3_M->childSfunctions[3];
    sfcnOutputs(rts, 1);
  }

  /* Gain: '<S16>/Gain1' */
  RA3_B.Gain1_h = RA3_P.Gain1_Gain_j * RA3_B.Dctintegrator;

  /* Level2 S-Function Block: '<S16>/Dctpd' (dpd) */
  {
    SimStruct *rts = RA3_M->childSfunctions[4];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S16>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = RA3_M->childSfunctions[5];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S16>/Dct2lowpass' (dlowpass2) */
  {
    SimStruct *rts = RA3_M->childSfunctions[6];
    sfcnOutputs(rts, 1);
  }

  /* Product: '<S13>/Product' */
  fx1 = RA3_B.Dct2lowpass * RA3_B.homeControllerEnabled_p;

  /* Saturate: '<S13>/Saturation' */
  if (fx1 > RA3_P.Saturation_UpperSat) {
    RA3_B.Saturation = RA3_P.Saturation_UpperSat;
  } else if (fx1 < RA3_P.Saturation_LowerSat) {
    RA3_B.Saturation = RA3_P.Saturation_LowerSat;
  } else {
    RA3_B.Saturation = fx1;
  }

  /* End of Saturate: '<S13>/Saturation' */

  /* Logic: '<S13>/Logical Operator1' */
  RA3_B.LogicalOperator1 = !(RA3_B.airBagEnabled_d != 0.0);

  /* Gain: '<S17>/Gain1' incorporates:
   *  Sum: '<S13>/Sum1'
   */
  RA3_B.Gain1_p = (RA3_B.airBagRef_i - RA3_B.Gain) * RA3_P.Gain1_Gain_o;

  /* Level2 S-Function Block: '<S17>/Dctpd' (dpd) */
  {
    SimStruct *rts = RA3_M->childSfunctions[7];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S17>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = RA3_M->childSfunctions[8];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S17>/Dct2lowpass' (dlowpass2) */
  {
    SimStruct *rts = RA3_M->childSfunctions[9];
    sfcnOutputs(rts, 1);
  }

  /* Switch: '<S13>/AirbagSwitch' */
  if (RA3_B.LogicalOperator1) {
    /* Switch: '<S13>/Homing Running Switch' */
    if (RA3_B.homingBusy_e >= RA3_P.HomingRunningSwitch_Threshold) {
      fx1 = RA3_B.Saturation;
    } else {
      fx1 = RA3_B.Sum4;
    }

    /* End of Switch: '<S13>/Homing Running Switch' */
  } else {
    fx1 = RA3_B.Dct2lowpass_p;
  }

  /* End of Switch: '<S13>/AirbagSwitch' */

  /* Sum: '<S7>/Sum' incorporates:
   *  Constant: '<S7>/Constant'
   *  Product: '<S13>/Product1'
   */
  fx1 = fx1 * RA3_B.controlEnabled_e + RA3_P.Constant_Value_k;

  /* Saturate: '<S7>/Saturation' */
  if (fx1 > RA3_P.Saturation_UpperSat_p) {
    RA3_B.Saturation_g = RA3_P.Saturation_UpperSat_p;
  } else if (fx1 < RA3_P.Saturation_LowerSat_d) {
    RA3_B.Saturation_g = RA3_P.Saturation_LowerSat_d;
  } else {
    RA3_B.Saturation_g = fx1;
  }

  /* End of Saturate: '<S7>/Saturation' */

  /* Level2 S-Function Block: '<S15>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = RA3_M->childSfunctions[10];
    sfcnOutputs(rts, 1);
  }

  /* Gain: '<S35>/Gain1' */
  RA3_B.Gain1_hb = RA3_P.Gain1_Gain_p * RA3_B.Dctintegrator_b;

  /* Level2 S-Function Block: '<S35>/Dctpd' (dpd) */
  {
    SimStruct *rts = RA3_M->childSfunctions[11];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S35>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = RA3_M->childSfunctions[12];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S35>/Dct2lowpass' (dlowpass2) */
  {
    SimStruct *rts = RA3_M->childSfunctions[13];
    sfcnOutputs(rts, 1);
  }

  /* Product: '<S15>/Product' */
  RA3_B.Product = RA3_B.Dct2lowpass_m * RA3_B.homeControllerEnabled;

  /* Logic: '<S15>/Logical Operator1' */
  RA3_B.LogicalOperator1_i = !(RA3_B.airBagEnabled != 0.0);

  /* Gain: '<S34>/Gain1' incorporates:
   *  Sum: '<S15>/Sum1'
   */
  RA3_B.Gain1_g = (RA3_B.airBagRef - RA3_B.Gain2) * RA3_P.Gain1_Gain_a;

  /* Level2 S-Function Block: '<S34>/Dctpd' (dpd) */
  {
    SimStruct *rts = RA3_M->childSfunctions[14];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S34>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = RA3_M->childSfunctions[15];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S34>/Dct2lowpass' (dlowpass2) */
  {
    SimStruct *rts = RA3_M->childSfunctions[16];
    sfcnOutputs(rts, 1);
  }

  /* Switch: '<S15>/AirbagSwitch' */
  if (RA3_B.LogicalOperator1_i) {
    /* Switch: '<S15>/Homing Running Switch' */
    if (RA3_B.homingBusy >= RA3_P.HomingRunningSwitch_Threshold_i) {
      fx1 = RA3_B.Product;
    } else {
      fx1 = RA3_B.Sum6;
    }

    /* End of Switch: '<S15>/Homing Running Switch' */
  } else {
    fx1 = RA3_B.Dct2lowpass_l;
  }

  /* End of Switch: '<S15>/AirbagSwitch' */

  /* Sum: '<S7>/Sum2' incorporates:
   *  Constant: '<S7>/Constant1'
   *  Product: '<S15>/Product1'
   */
  fx1 = fx1 * RA3_B.controlEnabled + RA3_P.Constant1_Value_b;

  /* Saturate: '<S7>/Saturation2' */
  if (fx1 > RA3_P.Saturation2_UpperSat) {
    RA3_B.Saturation2 = RA3_P.Saturation2_UpperSat;
  } else if (fx1 < RA3_P.Saturation2_LowerSat) {
    RA3_B.Saturation2 = RA3_P.Saturation2_LowerSat;
  } else {
    RA3_B.Saturation2 = fx1;
  }

  /* End of Saturate: '<S7>/Saturation2' */

  /* Saturate: '<S7>/Saturation3' incorporates:
   *  Constant: '<S7>/Constant2'
   */
  if (RA3_P.Constant2_Value > RA3_P.Saturation3_UpperSat) {
    RA3_B.Saturation3 = RA3_P.Saturation3_UpperSat;
  } else if (RA3_P.Constant2_Value < RA3_P.Saturation3_LowerSat) {
    RA3_B.Saturation3 = RA3_P.Saturation3_LowerSat;
  } else {
    RA3_B.Saturation3 = RA3_P.Constant2_Value;
  }

  /* End of Saturate: '<S7>/Saturation3' */

  /* Level2 S-Function Block: '<S14>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = RA3_M->childSfunctions[17];
    sfcnOutputs(rts, 1);
  }

  /* Gain: '<S24>/Gain1' */
  RA3_B.Gain1_j = RA3_P.Gain1_Gain_os * RA3_B.Dctintegrator_f;

  /* Level2 S-Function Block: '<S24>/Dctpd' (dpd) */
  {
    SimStruct *rts = RA3_M->childSfunctions[18];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S24>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = RA3_M->childSfunctions[19];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S24>/Dct2lowpass' (dlowpass2) */
  {
    SimStruct *rts = RA3_M->childSfunctions[20];
    sfcnOutputs(rts, 1);
  }

  /* Product: '<S14>/Product' */
  RA3_B.Product_j = RA3_B.Dct2lowpass_n * RA3_B.homeControllerEnabled_e;

  /* Logic: '<S14>/Logical Operator1' */
  RA3_B.LogicalOperator1_j = !(RA3_B.airBagEnabled_i != 0.0);

  /* Gain: '<S25>/Gain1' incorporates:
   *  Sum: '<S14>/Sum1'
   */
  RA3_B.Gain1_k = (RA3_B.airBagRef_d - RA3_B.Gain1) * RA3_P.Gain1_Gain_h;

  /* Level2 S-Function Block: '<S25>/Dctpd' (dpd) */
  {
    SimStruct *rts = RA3_M->childSfunctions[21];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S25>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = RA3_M->childSfunctions[22];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<S25>/Dct2lowpass' (dlowpass2) */
  {
    SimStruct *rts = RA3_M->childSfunctions[23];
    sfcnOutputs(rts, 1);
  }

  /* Switch: '<S14>/AirbagSwitch' */
  if (RA3_B.LogicalOperator1_j) {
    /* Switch: '<S14>/Homing Running Switch' */
    if (RA3_B.homingBusy_g >= RA3_P.HomingRunningSwitch_Threshold_l) {
      fx1 = RA3_B.Product_j;
    } else {
      fx1 = RA3_B.Sum5;
    }

    /* End of Switch: '<S14>/Homing Running Switch' */
  } else {
    fx1 = RA3_B.Dct2lowpass_i;
  }

  /* End of Switch: '<S14>/AirbagSwitch' */

  /* Sum: '<S7>/Sum1' incorporates:
   *  Constant: '<S7>/Constant'
   *  Product: '<S14>/Product1'
   */
  fx1 = RA3_P.Constant_Value_k - fx1 * RA3_B.controlEnabled_g;

  /* Saturate: '<S7>/SaturationX' */
  if (fx1 > RA3_P.SaturationX_UpperSat) {
    RA3_B.SaturationX = RA3_P.SaturationX_UpperSat;
  } else if (fx1 < RA3_P.SaturationX_LowerSat) {
    RA3_B.SaturationX = RA3_P.SaturationX_LowerSat;
  } else {
    RA3_B.SaturationX = fx1;
  }

  /* End of Saturate: '<S7>/SaturationX' */

  /* Switch: '<S7>/Switch' incorporates:
   *  Constant: '<S7>/Constant3'
   *  Constant: '<S7>/Constant4'
   */
  if (RA3_B.ReferenceSolenoid >= RA3_P.Switch_Threshold) {
    RA3_B.Switch = RA3_P.Constant3_Value;
  } else {
    RA3_B.Switch = RA3_P.Constant4_Value;
  }

  /* End of Switch: '<S7>/Switch' */

  /* Sum: '<S8>/Add' */
  RA3_B.Add = (RA3_B.Ready_m + RA3_B.Ready_a) + RA3_B.Ready;

  /* Level2 S-Function Block: '<S13>/Reset EncoderR' (ec_EboxResetEnc) */
  {
    SimStruct *rts = RA3_M->childSfunctions[24];
    sfcnOutputs(rts, 0);
  }

  /* Stop: '<S13>/Stop Simulation' */
  if (RA3_B.StopSim_l != 0.0) {
    rtmSetStopRequested(RA3_M, 1);
  }

  /* End of Stop: '<S13>/Stop Simulation' */

  /* Sum: '<S18>/Sum' */
  fy2 = RA3_B.toPoint_g + RA3_B.Constant1;

  /* RateLimiter: '<S18>/Limit Speed' */
  fx1 = fy2 - RA3_DW.PrevY;
  if (fx1 > RA3_P.LimitSpeed_RisingLim) {
    fy2 = RA3_DW.PrevY + RA3_P.LimitSpeed_RisingLim;
  } else {
    if (fx1 < RA3_P.LimitSpeed_FallingLim) {
      fy2 = RA3_DW.PrevY + RA3_P.LimitSpeed_FallingLim;
    }
  }

  RA3_DW.PrevY = fy2;

  /* End of RateLimiter: '<S18>/Limit Speed' */

  /* SampleTimeMath: '<S23>/TSamp'
   *
   * About '<S23>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  RA3_B.TSamp = fy2 * RA3_P.TSamp_WtEt;

  /* Sum: '<S23>/Diff' incorporates:
   *  UnitDelay: '<S23>/UD'
   */
  fy2 = RA3_B.TSamp - RA3_DW.UD_DSTATE;

  /* RateLimiter: '<S18>/Limit Acceleration' */
  fx1 = fy2 - RA3_DW.PrevY_e;
  if (fx1 > RA3_P.LimitAcceleration_RisingLim) {
    RA3_B.LimitAcceleration = RA3_DW.PrevY_e + RA3_P.LimitAcceleration_RisingLim;
  } else if (fx1 < RA3_P.LimitAcceleration_FallingLim) {
    RA3_B.LimitAcceleration = RA3_DW.PrevY_e +
      RA3_P.LimitAcceleration_FallingLim;
  } else {
    RA3_B.LimitAcceleration = fy2;
  }

  RA3_DW.PrevY_e = RA3_B.LimitAcceleration;

  /* End of RateLimiter: '<S18>/Limit Acceleration' */

  /* Level2 S-Function Block: '<S14>/Reset EncoderX' (ec_EboxResetEnc) */
  {
    SimStruct *rts = RA3_M->childSfunctions[25];
    sfcnOutputs(rts, 0);
  }

  /* Stop: '<S14>/Stop Simulation' */
  if (RA3_B.StopSim_g != 0.0) {
    rtmSetStopRequested(RA3_M, 1);
  }

  /* End of Stop: '<S14>/Stop Simulation' */

  /* Sum: '<S26>/Sum' */
  fy2 = RA3_B.toPoint_b + RA3_B.Constant1_l;

  /* RateLimiter: '<S26>/Limit Speed' */
  fx1 = fy2 - RA3_DW.PrevY_p;
  if (fx1 > RA3_P.LimitSpeed_RisingLim_b) {
    fy2 = RA3_DW.PrevY_p + RA3_P.LimitSpeed_RisingLim_b;
  } else {
    if (fx1 < RA3_P.LimitSpeed_FallingLim_e) {
      fy2 = RA3_DW.PrevY_p + RA3_P.LimitSpeed_FallingLim_e;
    }
  }

  RA3_DW.PrevY_p = fy2;

  /* End of RateLimiter: '<S26>/Limit Speed' */

  /* SampleTimeMath: '<S32>/TSamp'
   *
   * About '<S32>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  RA3_B.TSamp_j = fy2 * RA3_P.TSamp_WtEt_g;

  /* Sum: '<S32>/Diff' incorporates:
   *  UnitDelay: '<S32>/UD'
   */
  fy2 = RA3_B.TSamp_j - RA3_DW.UD_DSTATE_p;

  /* RateLimiter: '<S26>/Limit Acceleration' */
  fx1 = fy2 - RA3_DW.PrevY_n;
  if (fx1 > RA3_P.LimitAcceleration_RisingLim_g) {
    RA3_B.LimitAcceleration_g = RA3_DW.PrevY_n +
      RA3_P.LimitAcceleration_RisingLim_g;
  } else if (fx1 < RA3_P.LimitAcceleration_FallingLim_o) {
    RA3_B.LimitAcceleration_g = RA3_DW.PrevY_n +
      RA3_P.LimitAcceleration_FallingLim_o;
  } else {
    RA3_B.LimitAcceleration_g = fy2;
  }

  RA3_DW.PrevY_n = RA3_B.LimitAcceleration_g;

  /* End of RateLimiter: '<S26>/Limit Acceleration' */

  /* Level2 S-Function Block: '<S15>/Reset EncoderZ' (ec_EboxResetEnc) */
  {
    SimStruct *rts = RA3_M->childSfunctions[26];
    sfcnOutputs(rts, 0);
  }

  /* Stop: '<S15>/Stop Simulation' */
  if (RA3_B.StopSim != 0.0) {
    rtmSetStopRequested(RA3_M, 1);
  }

  /* End of Stop: '<S15>/Stop Simulation' */

  /* Sum: '<S36>/Sum' */
  fy2 = RA3_B.toPoint + RA3_B.Constant1_p;

  /* RateLimiter: '<S36>/Limit Speed' */
  fx1 = fy2 - RA3_DW.PrevY_h;
  if (fx1 > RA3_P.LimitSpeed_RisingLim_h) {
    fy2 = RA3_DW.PrevY_h + RA3_P.LimitSpeed_RisingLim_h;
  } else {
    if (fx1 < RA3_P.LimitSpeed_FallingLim_h) {
      fy2 = RA3_DW.PrevY_h + RA3_P.LimitSpeed_FallingLim_h;
    }
  }

  RA3_DW.PrevY_h = fy2;

  /* End of RateLimiter: '<S36>/Limit Speed' */

  /* SampleTimeMath: '<S42>/TSamp'
   *
   * About '<S42>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  RA3_B.TSamp_o = fy2 * RA3_P.TSamp_WtEt_d;

  /* Sum: '<S42>/Diff' incorporates:
   *  UnitDelay: '<S42>/UD'
   */
  fy2 = RA3_B.TSamp_o - RA3_DW.UD_DSTATE_k;

  /* RateLimiter: '<S36>/Limit Acceleration' */
  fx1 = fy2 - RA3_DW.PrevY_o;
  if (fx1 > RA3_P.LimitAcceleration_RisingLim_a) {
    RA3_B.LimitAcceleration_a = RA3_DW.PrevY_o +
      RA3_P.LimitAcceleration_RisingLim_a;
  } else if (fx1 < RA3_P.LimitAcceleration_FallingLim_m) {
    RA3_B.LimitAcceleration_a = RA3_DW.PrevY_o +
      RA3_P.LimitAcceleration_FallingLim_m;
  } else {
    RA3_B.LimitAcceleration_a = fy2;
  }

  RA3_DW.PrevY_o = RA3_B.LimitAcceleration_a;

  /* End of RateLimiter: '<S36>/Limit Acceleration' */
}

/* Model update function */
void RA3_update(void)
{
  /* Update for DiscreteIntegrator: '<S13>/Discrete-Time Integrator' */
  RA3_DW.DiscreteTimeIntegrator_DSTATE += RA3_P.DiscreteTimeIntegrator_gainval *
    RA3_B.jogSpeed_k;

  /* Update for DiscreteIntegrator: '<S18>/Discrete-Time Integrator' */
  RA3_DW.DiscreteTimeIntegrator_DSTATE_b +=
    RA3_P.DiscreteTimeIntegrator_gainva_e * RA3_B.LimitAcceleration;

  /* Update for UnitDelay: '<S8>/Unit Delay' */
  RA3_DW.UnitDelay_DSTATE = RA3_B.Add;

  /* Update for DiscreteIntegrator: '<S14>/Discrete-Time Integrator' */
  RA3_DW.DiscreteTimeIntegrator_DSTATE_n +=
    RA3_P.DiscreteTimeIntegrator_gainva_n * RA3_B.jogSpeed_g;

  /* Update for DiscreteIntegrator: '<S26>/Discrete-Time Integrator' */
  RA3_DW.DiscreteTimeIntegrator_DSTATE_k +=
    RA3_P.DiscreteTimeIntegrator_gainva_d * RA3_B.LimitAcceleration_g;

  /* Update for DiscreteIntegrator: '<S15>/Discrete-Time Integrator' */
  RA3_DW.DiscreteTimeIntegrator_DSTAT_bd +=
    RA3_P.DiscreteTimeIntegrator_gainva_j * RA3_B.jogSpeed;

  /* Update for DiscreteIntegrator: '<S36>/Discrete-Time Integrator' */
  RA3_DW.DiscreteTimeIntegrator_DSTATE_i +=
    RA3_P.DiscreteTimeIntegrator_gainva_k * RA3_B.LimitAcceleration_a;

  /* Update for UnitDelay: '<S23>/UD' */
  RA3_DW.UD_DSTATE = RA3_B.TSamp;

  /* Update for UnitDelay: '<S32>/UD' */
  RA3_DW.UD_DSTATE_p = RA3_B.TSamp_j;

  /* Update for UnitDelay: '<S42>/UD' */
  RA3_DW.UD_DSTATE_k = RA3_B.TSamp_o;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++RA3_M->Timing.clockTick0)) {
    ++RA3_M->Timing.clockTickH0;
  }

  RA3_M->Timing.t[0] = RA3_M->Timing.clockTick0 * RA3_M->Timing.stepSize0 +
    RA3_M->Timing.clockTickH0 * RA3_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.000244140625s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++RA3_M->Timing.clockTick1)) {
      ++RA3_M->Timing.clockTickH1;
    }

    RA3_M->Timing.t[1] = RA3_M->Timing.clockTick1 * RA3_M->Timing.stepSize1 +
      RA3_M->Timing.clockTickH1 * RA3_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
void RA3_initialize(void)
{
  /* Start for Constant: '<S18>/Constant1' */
  RA3_B.Constant1 = RA3_P.Constant1_Value;

  /* Start for Constant: '<S26>/Constant1' */
  RA3_B.Constant1_l = RA3_P.Constant1_Value_g;

  /* Start for Constant: '<S36>/Constant1' */
  RA3_B.Constant1_p = RA3_P.Constant1_Value_i;

  /* VirtualOutportStart for Outport: '<S1>/Solenoid' */
  RA3_B.ReferenceSolenoid = RA3_P.Solenoid_Y0;

  /* End of Start for SubSystem: '<Root>/Controller' */

  /* Start for DiscretePulseGenerator: '<S7>/Pulse Generator' */
  RA3_DW.clockTickCounter = 0;

  /* Level2 S-Function Block: '<S13>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = RA3_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S16>/Dctpd' (dpd) */
  {
    SimStruct *rts = RA3_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S16>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = RA3_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S16>/Dct2lowpass' (dlowpass2) */
  {
    SimStruct *rts = RA3_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S17>/Dctpd' (dpd) */
  {
    SimStruct *rts = RA3_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S17>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = RA3_M->childSfunctions[8];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S17>/Dct2lowpass' (dlowpass2) */
  {
    SimStruct *rts = RA3_M->childSfunctions[9];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S15>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = RA3_M->childSfunctions[10];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S35>/Dctpd' (dpd) */
  {
    SimStruct *rts = RA3_M->childSfunctions[11];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S35>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = RA3_M->childSfunctions[12];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S35>/Dct2lowpass' (dlowpass2) */
  {
    SimStruct *rts = RA3_M->childSfunctions[13];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S34>/Dctpd' (dpd) */
  {
    SimStruct *rts = RA3_M->childSfunctions[14];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S34>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = RA3_M->childSfunctions[15];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S34>/Dct2lowpass' (dlowpass2) */
  {
    SimStruct *rts = RA3_M->childSfunctions[16];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S14>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = RA3_M->childSfunctions[17];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S24>/Dctpd' (dpd) */
  {
    SimStruct *rts = RA3_M->childSfunctions[18];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S24>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = RA3_M->childSfunctions[19];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S24>/Dct2lowpass' (dlowpass2) */
  {
    SimStruct *rts = RA3_M->childSfunctions[20];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S25>/Dctpd' (dpd) */
  {
    SimStruct *rts = RA3_M->childSfunctions[21];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S25>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = RA3_M->childSfunctions[22];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S25>/Dct2lowpass' (dlowpass2) */
  {
    SimStruct *rts = RA3_M->childSfunctions[23];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for DiscreteIntegrator: '<S13>/Discrete-Time Integrator' */
  RA3_DW.DiscreteTimeIntegrator_DSTATE = RA3_P.DiscreteTimeIntegrator_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S18>/Discrete-Time Integrator' */
  RA3_DW.DiscreteTimeIntegrator_DSTATE_b = RA3_B.Constant1;

  /* InitializeConditions for UnitDelay: '<S8>/Unit Delay' */
  RA3_DW.UnitDelay_DSTATE = RA3_P.UnitDelay_InitialCondition;

  /* InitializeConditions for Chart: '<S13>/Supervisor' */
  RA3_DW.sfEvent_b = RA3_CALL_EVENT;
  RA3_DW.temporalCounter_i1_i = 0U;
  RA3_DW.is_active_c5_RA3 = 0U;
  RA3_DW.is_c5_RA3 = RA3_IN_NO_ACTIVE_CHILD;
  RA3_B.jogSpeed_k = 0.0;
  RA3_B.toPoint_g = 0.0;
  RA3_B.homeControllerEnabled_p = 0.0;
  RA3_B.resetEnc_o = 0.0;
  RA3_B.homingBusy_e = 1.0;
  RA3_B.airBagEnabled_d = 0.0;
  RA3_B.airBagRef_i = 0.0;
  RA3_B.controlEnabled_e = 1.0;
  RA3_B.Ready_m = 1.0;
  RA3_B.StopSim_l = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S14>/Discrete-Time Integrator' */
  RA3_DW.DiscreteTimeIntegrator_DSTATE_n = RA3_P.DiscreteTimeIntegrator_IC_k;

  /* InitializeConditions for DiscreteIntegrator: '<S26>/Discrete-Time Integrator' */
  RA3_DW.DiscreteTimeIntegrator_DSTATE_k = RA3_B.Constant1_l;

  /* InitializeConditions for Chart: '<S14>/Supervisor' */
  RA3_DW.sfEvent_m = RA3_CALL_EVENT;
  RA3_DW.temporalCounter_i1_a = 0U;
  RA3_DW.is_active_c6_RA3 = 0U;
  RA3_DW.is_c6_RA3 = RA3_IN_NO_ACTIVE_CHILD;
  RA3_B.jogSpeed_g = 0.0;
  RA3_B.toPoint_b = 0.0;
  RA3_B.homeControllerEnabled_e = 0.0;
  RA3_B.resetEnc_l = 0.0;
  RA3_B.homingBusy_g = 1.0;
  RA3_B.airBagEnabled_i = 0.0;
  RA3_B.airBagRef_d = 0.0;
  RA3_B.controlEnabled_g = 1.0;
  RA3_B.Ready_a = 1.0;
  RA3_B.StopSim_g = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S15>/Discrete-Time Integrator' */
  RA3_DW.DiscreteTimeIntegrator_DSTAT_bd = RA3_P.DiscreteTimeIntegrator_IC_p;

  /* InitializeConditions for DiscreteIntegrator: '<S36>/Discrete-Time Integrator' */
  RA3_DW.DiscreteTimeIntegrator_DSTATE_i = RA3_B.Constant1_p;

  /* InitializeConditions for Chart: '<S15>/Supervisor' */
  RA3_DW.sfEvent = RA3_CALL_EVENT;
  RA3_DW.temporalCounter_i1 = 0U;
  RA3_DW.is_active_c7_RA3 = 0U;
  RA3_DW.is_c7_RA3 = RA3_IN_NO_ACTIVE_CHILD;
  RA3_DW.currentcarPos = 0.0;
  RA3_B.jogSpeed = 0.0;
  RA3_B.toPoint = 0.0;
  RA3_B.homeControllerEnabled = 0.0;
  RA3_B.resetEnc = 0.0;
  RA3_B.homingBusy = 1.0;
  RA3_B.airBagEnabled = 0.0;
  RA3_B.airBagRef = 0.0;
  RA3_B.controlEnabled = 1.0;
  RA3_B.Ready = 1.0;
  RA3_B.StopSim = 0.0;

  /* InitializeConditions for RateLimiter: '<S18>/Limit Speed' */
  RA3_DW.PrevY = RA3_P.LimitSpeed_IC;

  /* InitializeConditions for UnitDelay: '<S23>/UD' */
  RA3_DW.UD_DSTATE = RA3_P.DiscreteDerivative_ICPrevScaled;

  /* InitializeConditions for RateLimiter: '<S18>/Limit Acceleration' */
  RA3_DW.PrevY_e = RA3_P.LimitAcceleration_IC;

  /* InitializeConditions for RateLimiter: '<S26>/Limit Speed' */
  RA3_DW.PrevY_p = RA3_P.LimitSpeed_IC_i;

  /* InitializeConditions for UnitDelay: '<S32>/UD' */
  RA3_DW.UD_DSTATE_p = RA3_P.DiscreteDerivative_ICPrevScal_k;

  /* InitializeConditions for RateLimiter: '<S26>/Limit Acceleration' */
  RA3_DW.PrevY_n = RA3_P.LimitAcceleration_IC_k;

  /* InitializeConditions for RateLimiter: '<S36>/Limit Speed' */
  RA3_DW.PrevY_h = RA3_P.LimitSpeed_IC_f;

  /* InitializeConditions for UnitDelay: '<S42>/UD' */
  RA3_DW.UD_DSTATE_k = RA3_P.DiscreteDerivative_ICPrevScal_h;

  /* InitializeConditions for RateLimiter: '<S36>/Limit Acceleration' */
  RA3_DW.PrevY_o = RA3_P.LimitAcceleration_IC_n;
}

/* Model terminate function */
void RA3_terminate(void)
{
  /* Level2 S-Function Block: '<S9>/ec_Ebox' (ec_Ebox) */
  {
    SimStruct *rts = RA3_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S10>/ec_Ebox' (ec_Ebox) */
  {
    SimStruct *rts = RA3_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for Enabled SubSystem: '<Root>/Controller' */

  /* Level2 S-Function Block: '<S6>/S-Function' (sf_rt_scope) */
  {
    SimStruct *rts = RA3_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<Root>/Controller' */

  /* Level2 S-Function Block: '<S13>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = RA3_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S16>/Dctpd' (dpd) */
  {
    SimStruct *rts = RA3_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S16>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = RA3_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S16>/Dct2lowpass' (dlowpass2) */
  {
    SimStruct *rts = RA3_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S17>/Dctpd' (dpd) */
  {
    SimStruct *rts = RA3_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S17>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = RA3_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S17>/Dct2lowpass' (dlowpass2) */
  {
    SimStruct *rts = RA3_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S15>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = RA3_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S35>/Dctpd' (dpd) */
  {
    SimStruct *rts = RA3_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S35>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = RA3_M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S35>/Dct2lowpass' (dlowpass2) */
  {
    SimStruct *rts = RA3_M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S34>/Dctpd' (dpd) */
  {
    SimStruct *rts = RA3_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S34>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = RA3_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S34>/Dct2lowpass' (dlowpass2) */
  {
    SimStruct *rts = RA3_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S14>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = RA3_M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S24>/Dctpd' (dpd) */
  {
    SimStruct *rts = RA3_M->childSfunctions[18];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S24>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = RA3_M->childSfunctions[19];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S24>/Dct2lowpass' (dlowpass2) */
  {
    SimStruct *rts = RA3_M->childSfunctions[20];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S25>/Dctpd' (dpd) */
  {
    SimStruct *rts = RA3_M->childSfunctions[21];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S25>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = RA3_M->childSfunctions[22];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S25>/Dct2lowpass' (dlowpass2) */
  {
    SimStruct *rts = RA3_M->childSfunctions[23];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S13>/Reset EncoderR' (ec_EboxResetEnc) */
  {
    SimStruct *rts = RA3_M->childSfunctions[24];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S14>/Reset EncoderX' (ec_EboxResetEnc) */
  {
    SimStruct *rts = RA3_M->childSfunctions[25];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S15>/Reset EncoderZ' (ec_EboxResetEnc) */
  {
    SimStruct *rts = RA3_M->childSfunctions[26];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  RA3_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  RA3_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  RA3_initialize();
}

void MdlTerminate(void)
{
  RA3_terminate();
}

/* Registration function */
RT_MODEL_RA3_T *RA3(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)RA3_M, 0,
                sizeof(RT_MODEL_RA3_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&RA3_M->solverInfo, &RA3_M->Timing.simTimeStep);
    rtsiSetTPtr(&RA3_M->solverInfo, &rtmGetTPtr(RA3_M));
    rtsiSetStepSizePtr(&RA3_M->solverInfo, &RA3_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&RA3_M->solverInfo, (&rtmGetErrorStatus(RA3_M)));
    rtsiSetRTModelPtr(&RA3_M->solverInfo, RA3_M);
  }

  rtsiSetSimTimeStep(&RA3_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&RA3_M->solverInfo,"FixedStepDiscrete");
  RA3_M->solverInfoPtr = (&RA3_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = RA3_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    RA3_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    RA3_M->Timing.sampleTimes = (&RA3_M->Timing.sampleTimesArray[0]);
    RA3_M->Timing.offsetTimes = (&RA3_M->Timing.offsetTimesArray[0]);

    /* task periods */
    RA3_M->Timing.sampleTimes[0] = (0.0);
    RA3_M->Timing.sampleTimes[1] = (0.000244140625);

    /* task offsets */
    RA3_M->Timing.offsetTimes[0] = (0.0);
    RA3_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(RA3_M, &RA3_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = RA3_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    RA3_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(RA3_M, 1000.0);
  RA3_M->Timing.stepSize0 = 0.000244140625;
  RA3_M->Timing.stepSize1 = 0.000244140625;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    RA3_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(RA3_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(RA3_M->rtwLogInfo, (NULL));
    rtliSetLogT(RA3_M->rtwLogInfo, "tout");
    rtliSetLogX(RA3_M->rtwLogInfo, "");
    rtliSetLogXFinal(RA3_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(RA3_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(RA3_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(RA3_M->rtwLogInfo, 0);
    rtliSetLogDecimation(RA3_M->rtwLogInfo, 1);
    rtliSetLogY(RA3_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(RA3_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(RA3_M->rtwLogInfo, (NULL));
  }

  /* External mode info */
  RA3_M->Sizes.checksums[0] = (2345506916U);
  RA3_M->Sizes.checksums[1] = (267580224U);
  RA3_M->Sizes.checksums[2] = (3798723068U);
  RA3_M->Sizes.checksums[3] = (3880460234U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[11];
    RA3_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)&RA3_DW.Controller_SubsysRanBC;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = &rtAlwaysEnabled;
    systemRan[9] = &rtAlwaysEnabled;
    systemRan[10] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(RA3_M->extModeInfo,
      &RA3_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(RA3_M->extModeInfo, RA3_M->Sizes.checksums);
    rteiSetTPtr(RA3_M->extModeInfo, rtmGetTPtr(RA3_M));
  }

  RA3_M->solverInfoPtr = (&RA3_M->solverInfo);
  RA3_M->Timing.stepSize = (0.000244140625);
  rtsiSetFixedStepSize(&RA3_M->solverInfo, 0.000244140625);
  rtsiSetSolverMode(&RA3_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  RA3_M->ModelData.blockIO = ((void *) &RA3_B);
  (void) memset(((void *) &RA3_B), 0,
                sizeof(B_RA3_T));

  {
    int32_T i;
    for (i = 0; i < 8; i++) {
      RA3_B.ec_Ebox_o3[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      RA3_B.ec_Ebox_o3_h[i] = 0.0;
    }

    RA3_B.ec_Ebox_o1[0] = 0.0;
    RA3_B.ec_Ebox_o1[1] = 0.0;
    RA3_B.ec_Ebox_o2[0] = 0.0;
    RA3_B.ec_Ebox_o2[1] = 0.0;
    RA3_B.Constant1 = 0.0;
    RA3_B.Sum = 0.0;
    RA3_B.Gain = 0.0;
    RA3_B.Sum2 = 0.0;
    RA3_B.Constant1_l = 0.0;
    RA3_B.Sum_g = 0.0;
    RA3_B.Gain1 = 0.0;
    RA3_B.Sum2_a = 0.0;
    RA3_B.Constant1_p = 0.0;
    RA3_B.Sum_i = 0.0;
    RA3_B.ec_Ebox_o1_h[0] = 0.0;
    RA3_B.ec_Ebox_o1_h[1] = 0.0;
    RA3_B.ec_Ebox_o2_f[0] = 0.0;
    RA3_B.ec_Ebox_o2_f[1] = 0.0;
    RA3_B.Gain2 = 0.0;
    RA3_B.Sum2_f = 0.0;
    RA3_B.Add1 = 0.0;
    RA3_B.PulseGenerator = 0.0;
    RA3_B.Dctintegrator = 0.0;
    RA3_B.Gain1_h = 0.0;
    RA3_B.Dctpd = 0.0;
    RA3_B.Dctnotch = 0.0;
    RA3_B.Dct2lowpass = 0.0;
    RA3_B.Saturation = 0.0;
    RA3_B.Gain1_p = 0.0;
    RA3_B.Dctpd_o = 0.0;
    RA3_B.Dctnotch_k = 0.0;
    RA3_B.Dct2lowpass_p = 0.0;
    RA3_B.Saturation_g = 0.0;
    RA3_B.Dctintegrator_b = 0.0;
    RA3_B.Gain1_hb = 0.0;
    RA3_B.Dctpd_c = 0.0;
    RA3_B.Dctnotch_e = 0.0;
    RA3_B.Dct2lowpass_m = 0.0;
    RA3_B.Product = 0.0;
    RA3_B.Gain1_g = 0.0;
    RA3_B.Dctpd_h = 0.0;
    RA3_B.Dctnotch_f = 0.0;
    RA3_B.Dct2lowpass_l = 0.0;
    RA3_B.Saturation2 = 0.0;
    RA3_B.Saturation3 = 0.0;
    RA3_B.Dctintegrator_f = 0.0;
    RA3_B.Gain1_j = 0.0;
    RA3_B.Dctpd_h3 = 0.0;
    RA3_B.Dctnotch_l = 0.0;
    RA3_B.Dct2lowpass_n = 0.0;
    RA3_B.Product_j = 0.0;
    RA3_B.Gain1_k = 0.0;
    RA3_B.Dctpd_m = 0.0;
    RA3_B.Dctnotch_ft = 0.0;
    RA3_B.Dct2lowpass_i = 0.0;
    RA3_B.SaturationX = 0.0;
    RA3_B.Switch = 0.0;
    RA3_B.Add = 0.0;
    RA3_B.TSamp = 0.0;
    RA3_B.LimitAcceleration = 0.0;
    RA3_B.TSamp_j = 0.0;
    RA3_B.LimitAcceleration_g = 0.0;
    RA3_B.TSamp_o = 0.0;
    RA3_B.LimitAcceleration_a = 0.0;
    RA3_B.jogSpeed = 0.0;
    RA3_B.toPoint = 0.0;
    RA3_B.homeControllerEnabled = 0.0;
    RA3_B.resetEnc = 0.0;
    RA3_B.homingBusy = 0.0;
    RA3_B.airBagEnabled = 0.0;
    RA3_B.airBagRef = 0.0;
    RA3_B.controlEnabled = 0.0;
    RA3_B.Ready = 0.0;
    RA3_B.StopSim = 0.0;
    RA3_B.y = 0.0;
    RA3_B.jogSpeed_g = 0.0;
    RA3_B.toPoint_b = 0.0;
    RA3_B.homeControllerEnabled_e = 0.0;
    RA3_B.resetEnc_l = 0.0;
    RA3_B.homingBusy_g = 0.0;
    RA3_B.airBagEnabled_i = 0.0;
    RA3_B.airBagRef_d = 0.0;
    RA3_B.controlEnabled_g = 0.0;
    RA3_B.Ready_a = 0.0;
    RA3_B.StopSim_g = 0.0;
    RA3_B.jogSpeed_k = 0.0;
    RA3_B.toPoint_g = 0.0;
    RA3_B.homeControllerEnabled_p = 0.0;
    RA3_B.resetEnc_o = 0.0;
    RA3_B.homingBusy_e = 0.0;
    RA3_B.airBagEnabled_d = 0.0;
    RA3_B.airBagRef_i = 0.0;
    RA3_B.controlEnabled_e = 0.0;
    RA3_B.Ready_m = 0.0;
    RA3_B.StopSim_l = 0.0;
    RA3_B.Sum4 = 0.0;
    RA3_B.Sum5 = 0.0;
    RA3_B.Sum6 = 0.0;
    RA3_B.ReferenceSolenoid = 0.0;
    RA3_B.SFunction[0] = 0.0;
    RA3_B.SFunction[1] = 0.0;
    RA3_B.SFunction[2] = 0.0;
    RA3_B.SFunction[3] = 0.0;
  }

  /* parameters */
  RA3_M->ModelData.defaultParam = ((real_T *)&RA3_P);

  /* states (dwork) */
  RA3_M->ModelData.dwork = ((void *) &RA3_DW);
  (void) memset((void *)&RA3_DW, 0,
                sizeof(DW_RA3_T));
  RA3_DW.DiscreteTimeIntegrator_DSTATE = 0.0;
  RA3_DW.DiscreteTimeIntegrator_DSTATE_b = 0.0;
  RA3_DW.UnitDelay_DSTATE = 0.0;
  RA3_DW.DiscreteTimeIntegrator_DSTATE_n = 0.0;
  RA3_DW.DiscreteTimeIntegrator_DSTATE_k = 0.0;
  RA3_DW.DiscreteTimeIntegrator_DSTAT_bd = 0.0;
  RA3_DW.DiscreteTimeIntegrator_DSTATE_i = 0.0;
  RA3_DW.UD_DSTATE = 0.0;
  RA3_DW.UD_DSTATE_p = 0.0;
  RA3_DW.UD_DSTATE_k = 0.0;
  RA3_DW.PrevY = 0.0;
  RA3_DW.PrevY_e = 0.0;
  RA3_DW.PrevY_p = 0.0;
  RA3_DW.PrevY_n = 0.0;
  RA3_DW.PrevY_h = 0.0;
  RA3_DW.PrevY_o = 0.0;
  RA3_DW.currentcarPos = 0.0;
  RA3_DW.Dctintegrator_RWORK[0] = 0.0;
  RA3_DW.Dctintegrator_RWORK[1] = 0.0;
  RA3_DW.Dctpd_RWORK[0] = 0.0;
  RA3_DW.Dctpd_RWORK[1] = 0.0;
  RA3_DW.Dctnotch_RWORK[0] = 0.0;
  RA3_DW.Dctnotch_RWORK[1] = 0.0;
  RA3_DW.Dctnotch_RWORK[2] = 0.0;
  RA3_DW.Dctnotch_RWORK[3] = 0.0;
  RA3_DW.Dct2lowpass_RWORK[0] = 0.0;
  RA3_DW.Dct2lowpass_RWORK[1] = 0.0;
  RA3_DW.Dct2lowpass_RWORK[2] = 0.0;
  RA3_DW.Dct2lowpass_RWORK[3] = 0.0;
  RA3_DW.Dctpd_RWORK_a[0] = 0.0;
  RA3_DW.Dctpd_RWORK_a[1] = 0.0;
  RA3_DW.Dctnotch_RWORK_j[0] = 0.0;
  RA3_DW.Dctnotch_RWORK_j[1] = 0.0;
  RA3_DW.Dctnotch_RWORK_j[2] = 0.0;
  RA3_DW.Dctnotch_RWORK_j[3] = 0.0;
  RA3_DW.Dct2lowpass_RWORK_g[0] = 0.0;
  RA3_DW.Dct2lowpass_RWORK_g[1] = 0.0;
  RA3_DW.Dct2lowpass_RWORK_g[2] = 0.0;
  RA3_DW.Dct2lowpass_RWORK_g[3] = 0.0;
  RA3_DW.Dctintegrator_RWORK_o[0] = 0.0;
  RA3_DW.Dctintegrator_RWORK_o[1] = 0.0;
  RA3_DW.Dctpd_RWORK_j[0] = 0.0;
  RA3_DW.Dctpd_RWORK_j[1] = 0.0;
  RA3_DW.Dctnotch_RWORK_h[0] = 0.0;
  RA3_DW.Dctnotch_RWORK_h[1] = 0.0;
  RA3_DW.Dctnotch_RWORK_h[2] = 0.0;
  RA3_DW.Dctnotch_RWORK_h[3] = 0.0;
  RA3_DW.Dct2lowpass_RWORK_m[0] = 0.0;
  RA3_DW.Dct2lowpass_RWORK_m[1] = 0.0;
  RA3_DW.Dct2lowpass_RWORK_m[2] = 0.0;
  RA3_DW.Dct2lowpass_RWORK_m[3] = 0.0;
  RA3_DW.Dctpd_RWORK_p[0] = 0.0;
  RA3_DW.Dctpd_RWORK_p[1] = 0.0;
  RA3_DW.Dctnotch_RWORK_i[0] = 0.0;
  RA3_DW.Dctnotch_RWORK_i[1] = 0.0;
  RA3_DW.Dctnotch_RWORK_i[2] = 0.0;
  RA3_DW.Dctnotch_RWORK_i[3] = 0.0;
  RA3_DW.Dct2lowpass_RWORK_l[0] = 0.0;
  RA3_DW.Dct2lowpass_RWORK_l[1] = 0.0;
  RA3_DW.Dct2lowpass_RWORK_l[2] = 0.0;
  RA3_DW.Dct2lowpass_RWORK_l[3] = 0.0;
  RA3_DW.Dctintegrator_RWORK_b[0] = 0.0;
  RA3_DW.Dctintegrator_RWORK_b[1] = 0.0;
  RA3_DW.Dctpd_RWORK_f[0] = 0.0;
  RA3_DW.Dctpd_RWORK_f[1] = 0.0;
  RA3_DW.Dctnotch_RWORK_l[0] = 0.0;
  RA3_DW.Dctnotch_RWORK_l[1] = 0.0;
  RA3_DW.Dctnotch_RWORK_l[2] = 0.0;
  RA3_DW.Dctnotch_RWORK_l[3] = 0.0;
  RA3_DW.Dct2lowpass_RWORK_j[0] = 0.0;
  RA3_DW.Dct2lowpass_RWORK_j[1] = 0.0;
  RA3_DW.Dct2lowpass_RWORK_j[2] = 0.0;
  RA3_DW.Dct2lowpass_RWORK_j[3] = 0.0;
  RA3_DW.Dctpd_RWORK_g[0] = 0.0;
  RA3_DW.Dctpd_RWORK_g[1] = 0.0;
  RA3_DW.Dctnotch_RWORK_iu[0] = 0.0;
  RA3_DW.Dctnotch_RWORK_iu[1] = 0.0;
  RA3_DW.Dctnotch_RWORK_iu[2] = 0.0;
  RA3_DW.Dctnotch_RWORK_iu[3] = 0.0;
  RA3_DW.Dct2lowpass_RWORK_k[0] = 0.0;
  RA3_DW.Dct2lowpass_RWORK_k[1] = 0.0;
  RA3_DW.Dct2lowpass_RWORK_k[2] = 0.0;
  RA3_DW.Dct2lowpass_RWORK_k[3] = 0.0;

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    RA3_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &RA3_M->NonInlinedSFcns.sfcnInfo;
    RA3_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(RA3_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &RA3_M->Sizes.numSampTimes);
    RA3_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(RA3_M)[0]);
    RA3_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr(RA3_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,RA3_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(RA3_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(RA3_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(RA3_M));
    rtssSetStepSizePtr(sfcnInfo, &RA3_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(RA3_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &RA3_M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &RA3_M->ModelData.zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &RA3_M->ModelData.blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &RA3_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &RA3_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &RA3_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &RA3_M->solverInfoPtr);
  }

  RA3_M->Sizes.numSFcns = (27);

  /* register each child */
  {
    (void) memset((void *)&RA3_M->NonInlinedSFcns.childSFunctions[0], 0,
                  27*sizeof(SimStruct));
    RA3_M->childSfunctions = (&RA3_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 27; i++) {
        RA3_M->childSfunctions[i] = (&RA3_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: RA3/<S6>/S-Function (sf_rt_scope) */
    {
      SimStruct *rts = RA3_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA3_M->NonInlinedSFcns.Sfcn0.inputPortInfo
          [0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = (real_T*)&RA3_RGND;
          sfcnUPtrs[1] = (real_T*)&RA3_RGND;
          sfcnUPtrs[2] = (real_T*)&RA3_RGND;
          sfcnUPtrs[3] = (real_T*)&RA3_RGND;
          sfcnUPtrs[4] = (real_T*)&RA3_RGND;
          sfcnUPtrs[5] = (real_T*)&RA3_RGND;
          sfcnUPtrs[6] = (real_T*)&RA3_RGND;
          sfcnUPtrs[7] = (real_T*)&RA3_RGND;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 8);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &RA3_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 4);
          ssSetOutputPortSignal(rts, 0, ((real_T *) RA3_B.SFunction));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "RA3/Controller/RTScope/S-Function");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **) &RA3_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.SFunction_P1_Size);
      }

      /* registration */
      sf_rt_scope(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: RA3/<S9>/ec_Ebox (ec_Ebox) */
    {
      SimStruct *rts = RA3_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts, &RA3_M->NonInlinedSFcns.Sfcn1.inputPortInfo
          [0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.Saturation_g;
          sfcnUPtrs[1] = &RA3_B.SaturationX;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 2);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn1.UPtrs1;
          sfcnUPtrs[0] = &RA3_B.PulseGenerator;
          sfcnUPtrs[1] = &RA3_B.Switch;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 2);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn1.UPtrs2;
          sfcnUPtrs[0] = (real_T*)&RA3_RGND;
          sfcnUPtrs[1] = (real_T*)&RA3_RGND;
          sfcnUPtrs[2] = (real_T*)&RA3_RGND;
          sfcnUPtrs[3] = (real_T*)&RA3_RGND;
          sfcnUPtrs[4] = (real_T*)&RA3_RGND;
          sfcnUPtrs[5] = (real_T*)&RA3_RGND;
          sfcnUPtrs[6] = (real_T*)&RA3_RGND;
          sfcnUPtrs[7] = (real_T*)&RA3_RGND;
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 8);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &RA3_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 2);
          ssSetOutputPortSignal(rts, 0, ((real_T *) RA3_B.ec_Ebox_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 2);
          ssSetOutputPortSignal(rts, 1, ((real_T *) RA3_B.ec_Ebox_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 8);
          ssSetOutputPortSignal(rts, 2, ((real_T *) RA3_B.ec_Ebox_o3));
        }
      }

      /* path info */
      ssSetModelName(rts, "ec_Ebox");
      ssSetPath(rts, "RA3/Robot Arm/IO/E-box/ec_Ebox");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **) &RA3_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.ec_Ebox_P1_Size);
      }

      /* registration */
      ec_Ebox(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
    }

    /* Level2 S-Function Block: RA3/<S10>/ec_Ebox (ec_Ebox) */
    {
      SimStruct *rts = RA3_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts, &RA3_M->NonInlinedSFcns.Sfcn2.inputPortInfo
          [0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn2.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.Saturation2;
          sfcnUPtrs[1] = &RA3_B.Saturation3;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 2);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn2.UPtrs1;
          sfcnUPtrs[0] = (real_T*)&RA3_RGND;
          sfcnUPtrs[1] = (real_T*)&RA3_RGND;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 2);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn2.UPtrs2;
          sfcnUPtrs[0] = (real_T*)&RA3_RGND;
          sfcnUPtrs[1] = (real_T*)&RA3_RGND;
          sfcnUPtrs[2] = (real_T*)&RA3_RGND;
          sfcnUPtrs[3] = (real_T*)&RA3_RGND;
          sfcnUPtrs[4] = (real_T*)&RA3_RGND;
          sfcnUPtrs[5] = (real_T*)&RA3_RGND;
          sfcnUPtrs[6] = (real_T*)&RA3_RGND;
          sfcnUPtrs[7] = (real_T*)&RA3_RGND;
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 8);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &RA3_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 2);
          ssSetOutputPortSignal(rts, 0, ((real_T *) RA3_B.ec_Ebox_o1_h));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 2);
          ssSetOutputPortSignal(rts, 1, ((real_T *) RA3_B.ec_Ebox_o2_f));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 8);
          ssSetOutputPortSignal(rts, 2, ((real_T *) RA3_B.ec_Ebox_o3_h));
        }
      }

      /* path info */
      ssSetModelName(rts, "ec_Ebox");
      ssSetPath(rts, "RA3/Robot Arm/IO/E-box1/ec_Ebox");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **) &RA3_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.ec_Ebox_P1_Size_b);
      }

      /* registration */
      ec_Ebox(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
    }

    /* Level2 S-Function Block: RA3/<S13>/Dctintegrator (dweakint) */
    {
      SimStruct *rts = RA3_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[3]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA3_M->NonInlinedSFcns.Sfcn3.inputPortInfo
          [0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn3.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.Sum2;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &RA3_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &RA3_B.Dctintegrator));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator");
      ssSetPath(rts,
                "RA3/Robot Arm/Supervisor/Supervisory Controller R/Dctintegrator");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **) &RA3_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.Dctintegrator_P1_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &RA3_DW.Dctintegrator_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &RA3_DW.Dctintegrator_RWORK[0]);
      }

      /* registration */
      dweakint(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: RA3/<S16>/Dctpd (dpd) */
    {
      SimStruct *rts = RA3_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[4]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA3_M->NonInlinedSFcns.Sfcn4.inputPortInfo
          [0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn4.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.Gain1_h;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &RA3_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &RA3_B.Dctpd));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctpd");
      ssSetPath(rts,
                "RA3/Robot Arm/Supervisor/Supervisory Controller R/ControllerR/Dctpd");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **) &RA3_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.Dctpd_P1_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &RA3_DW.Dctpd_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &RA3_DW.Dctpd_RWORK[0]);
      }

      /* registration */
      dpd(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: RA3/<S16>/Dctnotch (dnotch) */
    {
      SimStruct *rts = RA3_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[5]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [5]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA3_M->NonInlinedSFcns.Sfcn5.inputPortInfo
          [0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn5.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.Dctpd;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &RA3_M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &RA3_B.Dctnotch));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctnotch");
      ssSetPath(rts,
                "RA3/Robot Arm/Supervisor/Supervisory Controller R/ControllerR/Dctnotch");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **) &RA3_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.Dctnotch_P1_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &RA3_DW.Dctnotch_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &RA3_DW.Dctnotch_RWORK[0]);
      }

      /* registration */
      dnotch(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: RA3/<S16>/Dct2lowpass (dlowpass2) */
    {
      SimStruct *rts = RA3_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[6]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[6]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [6]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA3_M->NonInlinedSFcns.Sfcn6.inputPortInfo
          [0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn6.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.Dctnotch;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &RA3_M->NonInlinedSFcns.Sfcn6.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &RA3_B.Dct2lowpass));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct2lowpass");
      ssSetPath(rts,
                "RA3/Robot Arm/Supervisor/Supervisory Controller R/ControllerR/Dct2lowpass");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **) &RA3_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.Dct2lowpass_P1_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &RA3_DW.Dct2lowpass_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &RA3_DW.Dct2lowpass_RWORK[0]);
      }

      /* registration */
      dlowpass2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: RA3/<S17>/Dctpd (dpd) */
    {
      SimStruct *rts = RA3_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[7]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[7]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [7]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA3_M->NonInlinedSFcns.Sfcn7.inputPortInfo
          [0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn7.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.Gain1_p;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &RA3_M->NonInlinedSFcns.Sfcn7.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &RA3_B.Dctpd_o));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctpd");
      ssSetPath(rts,
                "RA3/Robot Arm/Supervisor/Supervisory Controller R/ControllerR1/Dctpd");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **) &RA3_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.Dctpd_P1_Size_c);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &RA3_DW.Dctpd_RWORK_a[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn7.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &RA3_DW.Dctpd_RWORK_a[0]);
      }

      /* registration */
      dpd(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: RA3/<S17>/Dctnotch (dnotch) */
    {
      SimStruct *rts = RA3_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[8]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[8]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [8]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA3_M->NonInlinedSFcns.Sfcn8.inputPortInfo
          [0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn8.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.Dctpd_o;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &RA3_M->NonInlinedSFcns.Sfcn8.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &RA3_B.Dctnotch_k));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctnotch");
      ssSetPath(rts,
                "RA3/Robot Arm/Supervisor/Supervisory Controller R/ControllerR1/Dctnotch");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **) &RA3_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.Dctnotch_P1_Size_p);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &RA3_DW.Dctnotch_RWORK_j[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn8.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn8.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &RA3_DW.Dctnotch_RWORK_j[0]);
      }

      /* registration */
      dnotch(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: RA3/<S17>/Dct2lowpass (dlowpass2) */
    {
      SimStruct *rts = RA3_M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[9]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[9]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [9]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA3_M->NonInlinedSFcns.Sfcn9.inputPortInfo
          [0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn9.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.Dctnotch_k;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &RA3_M->NonInlinedSFcns.Sfcn9.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &RA3_B.Dct2lowpass_p));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct2lowpass");
      ssSetPath(rts,
                "RA3/Robot Arm/Supervisor/Supervisory Controller R/ControllerR1/Dct2lowpass");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **) &RA3_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.Dct2lowpass_P1_Size_n);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &RA3_DW.Dct2lowpass_RWORK_g[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn9.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn9.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &RA3_DW.Dct2lowpass_RWORK_g[0]);
      }

      /* registration */
      dlowpass2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: RA3/<S15>/Dctintegrator (dweakint) */
    {
      SimStruct *rts = RA3_M->childSfunctions[10];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[10]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[10]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [10]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA3_M->
          NonInlinedSFcns.Sfcn10.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn10.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.Sum2_f;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &RA3_M->NonInlinedSFcns.Sfcn10.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &RA3_B.Dctintegrator_b));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator");
      ssSetPath(rts,
                "RA3/Robot Arm/Supervisor/Supervisory Controller Z/Dctintegrator");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &RA3_M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.Dctintegrator_P1_Size_i);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &RA3_DW.Dctintegrator_RWORK_o[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn10.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn10.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &RA3_DW.Dctintegrator_RWORK_o[0]);
      }

      /* registration */
      dweakint(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: RA3/<S35>/Dctpd (dpd) */
    {
      SimStruct *rts = RA3_M->childSfunctions[11];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn11.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn11.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn11.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[11]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[11]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[11]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[11]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [11]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA3_M->
          NonInlinedSFcns.Sfcn11.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn11.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.Gain1_hb;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &RA3_M->NonInlinedSFcns.Sfcn11.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &RA3_B.Dctpd_c));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctpd");
      ssSetPath(rts,
                "RA3/Robot Arm/Supervisor/Supervisory Controller Z/Controller2/Dctpd");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &RA3_M->NonInlinedSFcns.Sfcn11.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.Dctpd_P1_Size_i);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &RA3_DW.Dctpd_RWORK_j[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn11.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn11.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &RA3_DW.Dctpd_RWORK_j[0]);
      }

      /* registration */
      dpd(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: RA3/<S35>/Dctnotch (dnotch) */
    {
      SimStruct *rts = RA3_M->childSfunctions[12];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn12.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn12.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn12.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[12]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[12]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[12]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[12]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [12]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA3_M->
          NonInlinedSFcns.Sfcn12.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn12.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.Dctpd_c;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &RA3_M->NonInlinedSFcns.Sfcn12.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &RA3_B.Dctnotch_e));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctnotch");
      ssSetPath(rts,
                "RA3/Robot Arm/Supervisor/Supervisory Controller Z/Controller2/Dctnotch");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &RA3_M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.Dctnotch_P1_Size_h);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &RA3_DW.Dctnotch_RWORK_h[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn12.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn12.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &RA3_DW.Dctnotch_RWORK_h[0]);
      }

      /* registration */
      dnotch(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: RA3/<S35>/Dct2lowpass (dlowpass2) */
    {
      SimStruct *rts = RA3_M->childSfunctions[13];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn13.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn13.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn13.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[13]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[13]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[13]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[13]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [13]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA3_M->
          NonInlinedSFcns.Sfcn13.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn13.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.Dctnotch_e;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &RA3_M->NonInlinedSFcns.Sfcn13.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &RA3_B.Dct2lowpass_m));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct2lowpass");
      ssSetPath(rts,
                "RA3/Robot Arm/Supervisor/Supervisory Controller Z/Controller2/Dct2lowpass");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &RA3_M->NonInlinedSFcns.Sfcn13.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.Dct2lowpass_P1_Size_d);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &RA3_DW.Dct2lowpass_RWORK_m[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn13.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn13.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &RA3_DW.Dct2lowpass_RWORK_m[0]);
      }

      /* registration */
      dlowpass2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: RA3/<S34>/Dctpd (dpd) */
    {
      SimStruct *rts = RA3_M->childSfunctions[14];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn14.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn14.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn14.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[14]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[14]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[14]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[14]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [14]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA3_M->
          NonInlinedSFcns.Sfcn14.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn14.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.Gain1_g;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &RA3_M->NonInlinedSFcns.Sfcn14.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &RA3_B.Dctpd_h));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctpd");
      ssSetPath(rts,
                "RA3/Robot Arm/Supervisor/Supervisory Controller Z/Controller1/Dctpd");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &RA3_M->NonInlinedSFcns.Sfcn14.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.Dctpd_P1_Size_n);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &RA3_DW.Dctpd_RWORK_p[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn14.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn14.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &RA3_DW.Dctpd_RWORK_p[0]);
      }

      /* registration */
      dpd(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: RA3/<S34>/Dctnotch (dnotch) */
    {
      SimStruct *rts = RA3_M->childSfunctions[15];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn15.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn15.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn15.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[15]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[15]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[15]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[15]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [15]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA3_M->
          NonInlinedSFcns.Sfcn15.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn15.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.Dctpd_h;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &RA3_M->NonInlinedSFcns.Sfcn15.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &RA3_B.Dctnotch_f));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctnotch");
      ssSetPath(rts,
                "RA3/Robot Arm/Supervisor/Supervisory Controller Z/Controller1/Dctnotch");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &RA3_M->NonInlinedSFcns.Sfcn15.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.Dctnotch_P1_Size_d);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &RA3_DW.Dctnotch_RWORK_i[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn15.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn15.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &RA3_DW.Dctnotch_RWORK_i[0]);
      }

      /* registration */
      dnotch(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: RA3/<S34>/Dct2lowpass (dlowpass2) */
    {
      SimStruct *rts = RA3_M->childSfunctions[16];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn16.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn16.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn16.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[16]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[16]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[16]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[16]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [16]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA3_M->
          NonInlinedSFcns.Sfcn16.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn16.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.Dctnotch_f;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &RA3_M->NonInlinedSFcns.Sfcn16.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &RA3_B.Dct2lowpass_l));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct2lowpass");
      ssSetPath(rts,
                "RA3/Robot Arm/Supervisor/Supervisory Controller Z/Controller1/Dct2lowpass");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &RA3_M->NonInlinedSFcns.Sfcn16.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.Dct2lowpass_P1_Size_e);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &RA3_DW.Dct2lowpass_RWORK_l[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn16.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn16.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &RA3_DW.Dct2lowpass_RWORK_l[0]);
      }

      /* registration */
      dlowpass2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: RA3/<S14>/Dctintegrator (dweakint) */
    {
      SimStruct *rts = RA3_M->childSfunctions[17];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn17.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn17.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn17.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[17]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[17]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[17]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[17]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [17]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA3_M->
          NonInlinedSFcns.Sfcn17.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn17.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.Sum2_a;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &RA3_M->NonInlinedSFcns.Sfcn17.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &RA3_B.Dctintegrator_f));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator");
      ssSetPath(rts,
                "RA3/Robot Arm/Supervisor/Supervisory Controller X/Dctintegrator");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &RA3_M->NonInlinedSFcns.Sfcn17.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.Dctintegrator_P1_Size_o);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &RA3_DW.Dctintegrator_RWORK_b[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn17.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn17.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &RA3_DW.Dctintegrator_RWORK_b[0]);
      }

      /* registration */
      dweakint(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: RA3/<S24>/Dctpd (dpd) */
    {
      SimStruct *rts = RA3_M->childSfunctions[18];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn18.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn18.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn18.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[18]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[18]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[18]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[18]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [18]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA3_M->
          NonInlinedSFcns.Sfcn18.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn18.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.Gain1_j;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &RA3_M->NonInlinedSFcns.Sfcn18.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &RA3_B.Dctpd_h3));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctpd");
      ssSetPath(rts,
                "RA3/Robot Arm/Supervisor/Supervisory Controller X/ControllerX/Dctpd");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &RA3_M->NonInlinedSFcns.Sfcn18.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.Dctpd_P1_Size_b);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &RA3_DW.Dctpd_RWORK_f[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn18.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn18.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &RA3_DW.Dctpd_RWORK_f[0]);
      }

      /* registration */
      dpd(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: RA3/<S24>/Dctnotch (dnotch) */
    {
      SimStruct *rts = RA3_M->childSfunctions[19];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn19.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn19.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn19.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[19]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[19]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[19]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[19]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [19]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA3_M->
          NonInlinedSFcns.Sfcn19.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn19.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.Dctpd_h3;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &RA3_M->NonInlinedSFcns.Sfcn19.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &RA3_B.Dctnotch_l));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctnotch");
      ssSetPath(rts,
                "RA3/Robot Arm/Supervisor/Supervisory Controller X/ControllerX/Dctnotch");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &RA3_M->NonInlinedSFcns.Sfcn19.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.Dctnotch_P1_Size_p5);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &RA3_DW.Dctnotch_RWORK_l[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn19.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn19.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &RA3_DW.Dctnotch_RWORK_l[0]);
      }

      /* registration */
      dnotch(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: RA3/<S24>/Dct2lowpass (dlowpass2) */
    {
      SimStruct *rts = RA3_M->childSfunctions[20];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn20.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn20.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn20.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[20]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[20]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[20]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[20]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [20]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA3_M->
          NonInlinedSFcns.Sfcn20.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn20.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.Dctnotch_l;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &RA3_M->NonInlinedSFcns.Sfcn20.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &RA3_B.Dct2lowpass_n));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct2lowpass");
      ssSetPath(rts,
                "RA3/Robot Arm/Supervisor/Supervisory Controller X/ControllerX/Dct2lowpass");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &RA3_M->NonInlinedSFcns.Sfcn20.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.Dct2lowpass_P1_Size_a);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &RA3_DW.Dct2lowpass_RWORK_j[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn20.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn20.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &RA3_DW.Dct2lowpass_RWORK_j[0]);
      }

      /* registration */
      dlowpass2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: RA3/<S25>/Dctpd (dpd) */
    {
      SimStruct *rts = RA3_M->childSfunctions[21];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn21.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn21.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn21.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[21]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[21]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[21]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[21]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [21]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA3_M->
          NonInlinedSFcns.Sfcn21.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn21.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.Gain1_k;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &RA3_M->NonInlinedSFcns.Sfcn21.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &RA3_B.Dctpd_m));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctpd");
      ssSetPath(rts,
                "RA3/Robot Arm/Supervisor/Supervisory Controller X/ControllerX1/Dctpd");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &RA3_M->NonInlinedSFcns.Sfcn21.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.Dctpd_P1_Size_l);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &RA3_DW.Dctpd_RWORK_g[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn21.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn21.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &RA3_DW.Dctpd_RWORK_g[0]);
      }

      /* registration */
      dpd(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: RA3/<S25>/Dctnotch (dnotch) */
    {
      SimStruct *rts = RA3_M->childSfunctions[22];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn22.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn22.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn22.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[22]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[22]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[22]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[22]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [22]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA3_M->
          NonInlinedSFcns.Sfcn22.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn22.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.Dctpd_m;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &RA3_M->NonInlinedSFcns.Sfcn22.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &RA3_B.Dctnotch_ft));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctnotch");
      ssSetPath(rts,
                "RA3/Robot Arm/Supervisor/Supervisory Controller X/ControllerX1/Dctnotch");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &RA3_M->NonInlinedSFcns.Sfcn22.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.Dctnotch_P1_Size_i);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &RA3_DW.Dctnotch_RWORK_iu[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn22.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn22.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &RA3_DW.Dctnotch_RWORK_iu[0]);
      }

      /* registration */
      dnotch(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: RA3/<S25>/Dct2lowpass (dlowpass2) */
    {
      SimStruct *rts = RA3_M->childSfunctions[23];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn23.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn23.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn23.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[23]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[23]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[23]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[23]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [23]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA3_M->
          NonInlinedSFcns.Sfcn23.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn23.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.Dctnotch_ft;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &RA3_M->NonInlinedSFcns.Sfcn23.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &RA3_B.Dct2lowpass_i));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct2lowpass");
      ssSetPath(rts,
                "RA3/Robot Arm/Supervisor/Supervisory Controller X/ControllerX1/Dct2lowpass");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &RA3_M->NonInlinedSFcns.Sfcn23.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.Dct2lowpass_P1_Size_h);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &RA3_DW.Dct2lowpass_RWORK_k[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn23.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &RA3_M->NonInlinedSFcns.Sfcn23.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &RA3_DW.Dct2lowpass_RWORK_k[0]);
      }

      /* registration */
      dlowpass2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.000244140625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: RA3/<S13>/Reset EncoderR (ec_EboxResetEnc) */
    {
      SimStruct *rts = RA3_M->childSfunctions[24];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn24.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn24.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn24.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[24]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[24]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[24]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[24]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [24]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA3_M->
          NonInlinedSFcns.Sfcn24.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn24.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.resetEnc_o;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Reset EncoderR");
      ssSetPath(rts,
                "RA3/Robot Arm/Supervisor/Supervisory Controller R/Reset EncoderR");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &RA3_M->NonInlinedSFcns.Sfcn24.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.ResetEncoderR_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)RA3_P.ResetEncoderR_P2_Size);
      }

      /* registration */
      ec_EboxResetEnc(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: RA3/<S14>/Reset EncoderX (ec_EboxResetEnc) */
    {
      SimStruct *rts = RA3_M->childSfunctions[25];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn25.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn25.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn25.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[25]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[25]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[25]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[25]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [25]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA3_M->
          NonInlinedSFcns.Sfcn25.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn25.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.resetEnc_l;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Reset EncoderX");
      ssSetPath(rts,
                "RA3/Robot Arm/Supervisor/Supervisory Controller X/Reset EncoderX");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &RA3_M->NonInlinedSFcns.Sfcn25.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.ResetEncoderX_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)RA3_P.ResetEncoderX_P2_Size);
      }

      /* registration */
      ec_EboxResetEnc(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: RA3/<S15>/Reset EncoderZ (ec_EboxResetEnc) */
    {
      SimStruct *rts = RA3_M->childSfunctions[26];

      /* timing info */
      time_T *sfcnPeriod = RA3_M->NonInlinedSFcns.Sfcn26.sfcnPeriod;
      time_T *sfcnOffset = RA3_M->NonInlinedSFcns.Sfcn26.sfcnOffset;
      int_T *sfcnTsMap = RA3_M->NonInlinedSFcns.Sfcn26.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA3_M->NonInlinedSFcns.blkInfo2[26]);
      }

      ssSetRTWSfcnInfo(rts, RA3_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA3_M->NonInlinedSFcns.methods2[26]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA3_M->NonInlinedSFcns.methods3[26]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA3_M->NonInlinedSFcns.statesInfo2[26]);
        ssSetPeriodicStatesInfo(rts, &RA3_M->NonInlinedSFcns.periodicStatesInfo
          [26]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA3_M->
          NonInlinedSFcns.Sfcn26.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA3_M->NonInlinedSFcns.Sfcn26.UPtrs0;
          sfcnUPtrs[0] = &RA3_B.resetEnc;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Reset EncoderZ");
      ssSetPath(rts,
                "RA3/Robot Arm/Supervisor/Supervisory Controller Z/Reset EncoderZ");
      ssSetRTModel(rts,RA3_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &RA3_M->NonInlinedSFcns.Sfcn26.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA3_P.ResetEncoderZ_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)RA3_P.ResetEncoderZ_P2_Size);
      }

      /* registration */
      ec_EboxResetEnc(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Initialize Sizes */
  RA3_M->Sizes.numContStates = (0);    /* Number of continuous states */
  RA3_M->Sizes.numY = (0);             /* Number of model outputs */
  RA3_M->Sizes.numU = (0);             /* Number of model inputs */
  RA3_M->Sizes.sysDirFeedThru = (0);   /* The model is not direct feedthrough */
  RA3_M->Sizes.numSampTimes = (2);     /* Number of sample times */
  RA3_M->Sizes.numBlocks = (156);      /* Number of blocks */
  RA3_M->Sizes.numBlockIO = (108);     /* Number of block outputs */
  RA3_M->Sizes.numBlockPrms = (226);   /* Sum of parameter "widths" */
  return RA3_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
