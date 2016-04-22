/*
 * RA.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "RA".
 *
 * Model version              : 1.901
 * Simulink Coder version : 8.9 (R2015b) 13-Aug-2015
 * C source code generated on : Thu Apr 21 17:39:52 2016
 *
 * Target selection: ectarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "RA.h"
#include "RA_private.h"
#include "RA_dt.h"
#undef S_FUNCTION_NAME
#if !defined(RTW_GENERATED_SFCN_TUNABLE_PRMS_Robot_sf)
#define RTW_GENERATED_SFCN_TUNABLE_PRMS_Robot_sf
#endif

#include "Robot_sf.h"

const real_T RA_RGND = 0.0;            /* real_T ground */

/* Block signals (auto storage) */
B_RA_T RA_B;

/* Block states (auto storage) */
DW_RA_T RA_DW;

/* Real-time model */
RT_MODEL_RA_T RA_M_;
RT_MODEL_RA_T *const RA_M = &RA_M_;

/* Model output function */
void RA_output(void)
{
  /* Reset subsysRan breadcrumbs */
  srClearBC(RA_DW.Controller_SubsysRanBC);

  /* UnitDelay: '<Root>/Unit Delay1' */
  RA_B.UnitDelay1[0] = RA_DW.UnitDelay1_DSTATE[0];
  RA_B.UnitDelay1[1] = RA_DW.UnitDelay1_DSTATE[1];
  RA_B.UnitDelay1[2] = RA_DW.UnitDelay1_DSTATE[2];

  /* UnitDelay: '<Root>/Unit Delay' */
  RA_B.UnitDelay = RA_DW.UnitDelay_DSTATE;

  /* RTW Generated Level2 S-Function Block: '<S2>/Robot Arm_sfcn' (Robot_sf) */
  {
    SimStruct *rts = RA_M->childSfunctions[1];
    sfcnOutputs(rts, 0);
  }

  /* Outputs for Enabled SubSystem: '<Root>/Controller' incorporates:
   *  EnablePort: '<S1>/Enable'
   */
  if (RA_B.RobotArm_sfcn_o1 > 0.0) {
    if (!RA_DW.Controller_MODE) {
      RA_DW.Controller_MODE = true;
    }
  } else {
    if (RA_DW.Controller_MODE) {
      RA_DW.Controller_MODE = false;
    }
  }

  if (RA_DW.Controller_MODE) {
    /* Sum: '<S1>/Sum4' incorporates:
     *  Constant: '<S1>/Feedforward R'
     *  Constant: '<S1>/Reference R'
     *  Gain: '<S3>/Gain'
     *  Sum: '<S1>/Sum2'
     */
    RA_B.Sum4 = (RA_P.ReferenceR_Value - RA_B.RobotArm_sfcn_o2[0]) *
      RA_P.Gain_Gain + RA_P.FeedforwardR_Value;

    /* Sum: '<S1>/Sum5' incorporates:
     *  Constant: '<S1>/Feedforward X'
     *  Constant: '<S1>/Reference X'
     *  Gain: '<S4>/Gain'
     *  Sum: '<S1>/Sum1'
     */
    RA_B.Sum5 = (RA_P.ReferenceX_Value - RA_B.RobotArm_sfcn_o2[1]) *
      RA_P.Gain_Gain_e + RA_P.FeedforwardX_Value;

    /* Sum: '<S1>/Sum6' incorporates:
     *  Constant: '<S1>/Feedforward Z'
     *  Constant: '<S1>/Reference Z'
     *  Gain: '<S5>/Gain'
     *  Sum: '<S1>/Sum3'
     */
    RA_B.Sum6 = (RA_P.ReferenceZ_Value - RA_B.RobotArm_sfcn_o2[2]) *
      RA_P.Gain_Gain_l + RA_P.FeedforwardZ_Value;

    /* Constant: '<S1>/Reference Solenoid' */
    RA_B.ReferenceSolenoid = RA_P.ReferenceSolenoid_Value;

    /* Level2 S-Function Block: '<S6>/S-Function' (sf_rt_scope) */
    {
      SimStruct *rts = RA_M->childSfunctions[0];
      sfcnOutputs(rts, 0);
    }

    srUpdateBC(RA_DW.Controller_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<Root>/Controller' */
}

/* Model update function */
void RA_update(void)
{
  /* Update for UnitDelay: '<Root>/Unit Delay1' */
  RA_DW.UnitDelay1_DSTATE[0] = RA_B.Sum4;
  RA_DW.UnitDelay1_DSTATE[1] = RA_B.Sum5;
  RA_DW.UnitDelay1_DSTATE[2] = RA_B.Sum6;

  /* Update for UnitDelay: '<Root>/Unit Delay' */
  RA_DW.UnitDelay_DSTATE = RA_B.ReferenceSolenoid;

  /* RTW Generated Level2 S-Function Block: '<S2>/Robot Arm_sfcn' (Robot_sf) */
  {
    SimStruct *rts = RA_M->childSfunctions[1];
    sfcnUpdate(rts, 0);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++RA_M->Timing.clockTick0)) {
    ++RA_M->Timing.clockTickH0;
  }

  RA_M->Timing.t[0] = RA_M->Timing.clockTick0 * RA_M->Timing.stepSize0 +
    RA_M->Timing.clockTickH0 * RA_M->Timing.stepSize0 * 4294967296.0;

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
    if (!(++RA_M->Timing.clockTick1)) {
      ++RA_M->Timing.clockTickH1;
    }

    RA_M->Timing.t[1] = RA_M->Timing.clockTick1 * RA_M->Timing.stepSize1 +
      RA_M->Timing.clockTickH1 * RA_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
void RA_initialize(void)
{
  /* RTW Generated Level2 S-Function Block: '<S2>/Robot Arm_sfcn' (Robot_sf) */
  {
    SimStruct *rts = RA_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* VirtualOutportStart for Outport: '<S1>/Solenoid' */
  RA_B.ReferenceSolenoid = RA_P.Solenoid_Y0;

  /* End of Start for SubSystem: '<Root>/Controller' */

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay1' */
  RA_DW.UnitDelay1_DSTATE[0] = RA_P.UnitDelay1_InitialCondition;
  RA_DW.UnitDelay1_DSTATE[1] = RA_P.UnitDelay1_InitialCondition;
  RA_DW.UnitDelay1_DSTATE[2] = RA_P.UnitDelay1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
  RA_DW.UnitDelay_DSTATE = RA_P.UnitDelay_InitialCondition;

  /* RTW Generated Level2 S-Function Block: '<S2>/Robot Arm_sfcn' (Robot_sf) */
  {
    SimStruct *rts = RA_M->childSfunctions[1];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* RTW Generated Level2 S-Function Block: '<S2>/Robot Arm_sfcn' (Robot_sf) */
  {
    SimStruct *rts = RA_M->childSfunctions[1];
    sfcnRTWGeneratedEnable(rts);
  }
}

/* Model terminate function */
void RA_terminate(void)
{
  /* RTW Generated Level2 S-Function Block: '<S2>/Robot Arm_sfcn' (Robot_sf) */
  {
    SimStruct *rts = RA_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for Enabled SubSystem: '<Root>/Controller' */

  /* Level2 S-Function Block: '<S6>/S-Function' (sf_rt_scope) */
  {
    SimStruct *rts = RA_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<Root>/Controller' */
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  RA_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  RA_update();
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
  RA_initialize();
}

void MdlTerminate(void)
{
  RA_terminate();
}

/* Registration function */
RT_MODEL_RA_T *RA(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)RA_M, 0,
                sizeof(RT_MODEL_RA_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&RA_M->solverInfo, &RA_M->Timing.simTimeStep);
    rtsiSetTPtr(&RA_M->solverInfo, &rtmGetTPtr(RA_M));
    rtsiSetStepSizePtr(&RA_M->solverInfo, &RA_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&RA_M->solverInfo, (&rtmGetErrorStatus(RA_M)));
    rtsiSetRTModelPtr(&RA_M->solverInfo, RA_M);
  }

  rtsiSetSimTimeStep(&RA_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&RA_M->solverInfo,"FixedStepDiscrete");
  RA_M->solverInfoPtr = (&RA_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = RA_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    RA_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    RA_M->Timing.sampleTimes = (&RA_M->Timing.sampleTimesArray[0]);
    RA_M->Timing.offsetTimes = (&RA_M->Timing.offsetTimesArray[0]);

    /* task periods */
    RA_M->Timing.sampleTimes[0] = (0.0);
    RA_M->Timing.sampleTimes[1] = (0.000244140625);

    /* task offsets */
    RA_M->Timing.offsetTimes[0] = (0.0);
    RA_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(RA_M, &RA_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = RA_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    RA_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(RA_M, 1000.0);
  RA_M->Timing.stepSize0 = 0.000244140625;
  RA_M->Timing.stepSize1 = 0.000244140625;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    RA_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(RA_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(RA_M->rtwLogInfo, (NULL));
    rtliSetLogT(RA_M->rtwLogInfo, "tout");
    rtliSetLogX(RA_M->rtwLogInfo, "");
    rtliSetLogXFinal(RA_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(RA_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(RA_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(RA_M->rtwLogInfo, 0);
    rtliSetLogDecimation(RA_M->rtwLogInfo, 1);
    rtliSetLogY(RA_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(RA_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(RA_M->rtwLogInfo, (NULL));
  }

  /* External mode info */
  RA_M->Sizes.checksums[0] = (4174601851U);
  RA_M->Sizes.checksums[1] = (3466403159U);
  RA_M->Sizes.checksums[2] = (814300747U);
  RA_M->Sizes.checksums[3] = (445879830U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    RA_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)&RA_DW.Controller_SubsysRanBC;
    rteiSetModelMappingInfoPtr(RA_M->extModeInfo, &RA_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(RA_M->extModeInfo, RA_M->Sizes.checksums);
    rteiSetTPtr(RA_M->extModeInfo, rtmGetTPtr(RA_M));
  }

  RA_M->solverInfoPtr = (&RA_M->solverInfo);
  RA_M->Timing.stepSize = (0.000244140625);
  rtsiSetFixedStepSize(&RA_M->solverInfo, 0.000244140625);
  rtsiSetSolverMode(&RA_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  RA_M->ModelData.blockIO = ((void *) &RA_B);
  (void) memset(((void *) &RA_B), 0,
                sizeof(B_RA_T));

  {
    RA_B.UnitDelay1[0] = 0.0;
    RA_B.UnitDelay1[1] = 0.0;
    RA_B.UnitDelay1[2] = 0.0;
    RA_B.UnitDelay = 0.0;
    RA_B.RobotArm_sfcn_o1 = 0.0;
    RA_B.RobotArm_sfcn_o2[0] = 0.0;
    RA_B.RobotArm_sfcn_o2[1] = 0.0;
    RA_B.RobotArm_sfcn_o2[2] = 0.0;
    RA_B.RobotArm_sfcn_o4 = 0.0;
    RA_B.Sum4 = 0.0;
    RA_B.Sum5 = 0.0;
    RA_B.Sum6 = 0.0;
    RA_B.ReferenceSolenoid = 0.0;
    RA_B.SFunction[0] = 0.0;
    RA_B.SFunction[1] = 0.0;
    RA_B.SFunction[2] = 0.0;
    RA_B.SFunction[3] = 0.0;
  }

  /* parameters */
  RA_M->ModelData.defaultParam = ((real_T *)&RA_P);

  /* states (dwork) */
  RA_M->ModelData.dwork = ((void *) &RA_DW);
  (void) memset((void *)&RA_DW, 0,
                sizeof(DW_RA_T));
  RA_DW.UnitDelay1_DSTATE[0] = 0.0;
  RA_DW.UnitDelay1_DSTATE[1] = 0.0;
  RA_DW.UnitDelay1_DSTATE[2] = 0.0;
  RA_DW.UnitDelay_DSTATE = 0.0;
  RA_DW.RobotArm_sfcn_DWORK0 = 0.0;
  RA_DW.RobotArm_sfcn_DWORK1 = 0.0;
  RA_DW.RobotArm_sfcn_DWORK2 = 0.0;
  RA_DW.RobotArm_sfcn_DWORK3 = 0.0;
  RA_DW.RobotArm_sfcn_DWORK4 = 0.0;
  RA_DW.RobotArm_sfcn_DWORK5 = 0.0;
  RA_DW.RobotArm_sfcn_DWORK6 = 0.0;
  RA_DW.RobotArm_sfcn_DWORK7 = 0.0;
  RA_DW.RobotArm_sfcn_DWORK8 = 0.0;
  RA_DW.RobotArm_sfcn_DWORK9 = 0.0;
  RA_DW.RobotArm_sfcn_DWORK10 = 0.0;
  RA_DW.RobotArm_sfcn_DWORK11 = 0.0;
  RA_DW.RobotArm_sfcn_DWORK12 = 0.0;
  RA_DW.RobotArm_sfcn_DWORK13 = 0.0;
  RA_DW.RobotArm_sfcn_DWORK14 = 0.0;
  RA_DW.RobotArm_sfcn_DWORK15 = 0.0;
  RA_DW.RobotArm_sfcn_DWORK16[0] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK16[1] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK17[0] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK17[1] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK18[0] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK18[1] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK18[2] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK18[3] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK19[0] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK19[1] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK19[2] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK19[3] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK20[0] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK20[1] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK21[0] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK21[1] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK21[2] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK21[3] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK22[0] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK22[1] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK22[2] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK22[3] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK23[0] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK23[1] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK24[0] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK24[1] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK25[0] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK25[1] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK25[2] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK25[3] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK26[0] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK26[1] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK26[2] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK26[3] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK27[0] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK27[1] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK28[0] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK28[1] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK28[2] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK28[3] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK29[0] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK29[1] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK29[2] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK29[3] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK30[0] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK30[1] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK31[0] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK31[1] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK32[0] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK32[1] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK32[2] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK32[3] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK33[0] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK33[1] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK33[2] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK33[3] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK34[0] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK34[1] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK35[0] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK35[1] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK35[2] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK35[3] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK36[0] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK36[1] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK36[2] = 0.0;
  RA_DW.RobotArm_sfcn_DWORK36[3] = 0.0;

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    RA_M->SpecialInfo.mappingInfo = (&dtInfo);
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
    RTWSfcnInfo *sfcnInfo = &RA_M->NonInlinedSFcns.sfcnInfo;
    RA_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(RA_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &RA_M->Sizes.numSampTimes);
    RA_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(RA_M)[0]);
    RA_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr(RA_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,RA_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(RA_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(RA_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(RA_M));
    rtssSetStepSizePtr(sfcnInfo, &RA_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(RA_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &RA_M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &RA_M->ModelData.zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &RA_M->ModelData.blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &RA_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &RA_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &RA_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &RA_M->solverInfoPtr);
  }

  RA_M->Sizes.numSFcns = (2);

  /* register each child */
  {
    (void) memset((void *)&RA_M->NonInlinedSFcns.childSFunctions[0], 0,
                  2*sizeof(SimStruct));
    RA_M->childSfunctions = (&RA_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    RA_M->childSfunctions[0] = (&RA_M->NonInlinedSFcns.childSFunctions[0]);
    RA_M->childSfunctions[1] = (&RA_M->NonInlinedSFcns.childSFunctions[1]);

    /* Level2 S-Function Block: RA/<S6>/S-Function (sf_rt_scope) */
    {
      SimStruct *rts = RA_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = RA_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = RA_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = RA_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, RA_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts, &RA_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &RA_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = (real_T*)&RA_RGND;
          sfcnUPtrs[1] = (real_T*)&RA_RGND;
          sfcnUPtrs[2] = (real_T*)&RA_RGND;
          sfcnUPtrs[3] = (real_T*)&RA_RGND;
          sfcnUPtrs[4] = (real_T*)&RA_RGND;
          sfcnUPtrs[5] = (real_T*)&RA_RGND;
          sfcnUPtrs[6] = (real_T*)&RA_RGND;
          sfcnUPtrs[7] = (real_T*)&RA_RGND;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 8);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts, &RA_M->
          NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 4);
          ssSetOutputPortSignal(rts, 0, ((real_T *) RA_B.SFunction));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "RA/Controller/RTScope/S-Function");
      ssSetRTModel(rts,RA_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **) &RA_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)RA_P.SFunction_P1_Size);
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

    /* RTW Generated Level2 S-Function Block: RA/<S2>/Robot Arm_sfcn (Robot_sf) */
    {
      SimStruct *rts = RA_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = RA_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = RA_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = RA_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*2);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*2);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &RA_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, RA_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &RA_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &RA_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &RA_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts, &RA_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts, &RA_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = RA_B.UnitDelay1;
          sfcnUPtrs[1] = &RA_B.UnitDelay1[1];
          sfcnUPtrs[2] = &RA_B.UnitDelay1[2];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 3);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &RA_M->NonInlinedSFcns.Sfcn1.UPtrs1;
          sfcnUPtrs[0] = &RA_B.UnitDelay;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts, &RA_M->
          NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 4);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &RA_B.RobotArm_sfcn_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 3);
          ssSetOutputPortSignal(rts, 1, ((real_T *) RA_B.RobotArm_sfcn_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 3);
          ssSetOutputPortSignal(rts, 2, ((boolean_T *) RA_B.RobotArm_sfcn_o3));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((real_T *) &RA_B.RobotArm_sfcn_o4));
        }
      }

      /* path info */
      ssSetModelName(rts, "Robot Arm_sfcn");
      ssSetPath(rts, "RA/Robot Arm/Robot Arm_sfcn");
      ssSetRTModel(rts,RA_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* work vectors */
      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &RA_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &RA_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 56);

        /* DWORK0 */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWorkUsedAsDState(rts, 0, 1);
        ssSetDWork(rts, 0, &RA_DW.RobotArm_sfcn_DWORK0);

        /* DWORK1 */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWorkUsedAsDState(rts, 1, 1);
        ssSetDWork(rts, 1, &RA_DW.RobotArm_sfcn_DWORK1);

        /* DWORK2 */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWorkUsedAsDState(rts, 2, 1);
        ssSetDWork(rts, 2, &RA_DW.RobotArm_sfcn_DWORK2);

        /* DWORK3 */
        ssSetDWorkWidth(rts, 3, 1);
        ssSetDWorkDataType(rts, 3,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 3, 0);
        ssSetDWorkUsedAsDState(rts, 3, 1);
        ssSetDWork(rts, 3, &RA_DW.RobotArm_sfcn_DWORK3);

        /* DWORK4 */
        ssSetDWorkWidth(rts, 4, 1);
        ssSetDWorkDataType(rts, 4,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 4, 0);
        ssSetDWorkUsedAsDState(rts, 4, 1);
        ssSetDWork(rts, 4, &RA_DW.RobotArm_sfcn_DWORK4);

        /* DWORK5 */
        ssSetDWorkWidth(rts, 5, 1);
        ssSetDWorkDataType(rts, 5,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 5, 0);
        ssSetDWorkUsedAsDState(rts, 5, 1);
        ssSetDWork(rts, 5, &RA_DW.RobotArm_sfcn_DWORK5);

        /* DWORK6 */
        ssSetDWorkWidth(rts, 6, 1);
        ssSetDWorkDataType(rts, 6,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 6, 0);
        ssSetDWorkUsedAsDState(rts, 6, 1);
        ssSetDWork(rts, 6, &RA_DW.RobotArm_sfcn_DWORK6);

        /* DWORK7 */
        ssSetDWorkWidth(rts, 7, 1);
        ssSetDWorkDataType(rts, 7,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 7, 0);
        ssSetDWorkUsedAsDState(rts, 7, 1);
        ssSetDWork(rts, 7, &RA_DW.RobotArm_sfcn_DWORK7);

        /* DWORK8 */
        ssSetDWorkWidth(rts, 8, 1);
        ssSetDWorkDataType(rts, 8,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 8, 0);
        ssSetDWorkUsedAsDState(rts, 8, 1);
        ssSetDWork(rts, 8, &RA_DW.RobotArm_sfcn_DWORK8);

        /* DWORK9 */
        ssSetDWorkWidth(rts, 9, 1);
        ssSetDWorkDataType(rts, 9,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 9, 0);
        ssSetDWorkUsedAsDState(rts, 9, 1);
        ssSetDWork(rts, 9, &RA_DW.RobotArm_sfcn_DWORK9);

        /* DWORK10 */
        ssSetDWorkWidth(rts, 10, 1);
        ssSetDWorkDataType(rts, 10,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 10, 0);
        ssSetDWork(rts, 10, &RA_DW.RobotArm_sfcn_DWORK10);

        /* DWORK11 */
        ssSetDWorkWidth(rts, 11, 1);
        ssSetDWorkDataType(rts, 11,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 11, 0);
        ssSetDWork(rts, 11, &RA_DW.RobotArm_sfcn_DWORK11);

        /* DWORK12 */
        ssSetDWorkWidth(rts, 12, 1);
        ssSetDWorkDataType(rts, 12,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 12, 0);
        ssSetDWork(rts, 12, &RA_DW.RobotArm_sfcn_DWORK12);

        /* DWORK13 */
        ssSetDWorkWidth(rts, 13, 1);
        ssSetDWorkDataType(rts, 13,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 13, 0);
        ssSetDWork(rts, 13, &RA_DW.RobotArm_sfcn_DWORK13);

        /* DWORK14 */
        ssSetDWorkWidth(rts, 14, 1);
        ssSetDWorkDataType(rts, 14,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 14, 0);
        ssSetDWork(rts, 14, &RA_DW.RobotArm_sfcn_DWORK14);

        /* DWORK15 */
        ssSetDWorkWidth(rts, 15, 1);
        ssSetDWorkDataType(rts, 15,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 15, 0);
        ssSetDWork(rts, 15, &RA_DW.RobotArm_sfcn_DWORK15);

        /* DWORK16 */
        ssSetDWorkWidth(rts, 16, 2);
        ssSetDWorkDataType(rts, 16,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 16, 0);
        ssSetDWork(rts, 16, &RA_DW.RobotArm_sfcn_DWORK16[0]);

        /* DWORK17 */
        ssSetDWorkWidth(rts, 17, 2);
        ssSetDWorkDataType(rts, 17,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 17, 0);
        ssSetDWork(rts, 17, &RA_DW.RobotArm_sfcn_DWORK17[0]);

        /* DWORK18 */
        ssSetDWorkWidth(rts, 18, 4);
        ssSetDWorkDataType(rts, 18,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 18, 0);
        ssSetDWork(rts, 18, &RA_DW.RobotArm_sfcn_DWORK18[0]);

        /* DWORK19 */
        ssSetDWorkWidth(rts, 19, 4);
        ssSetDWorkDataType(rts, 19,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 19, 0);
        ssSetDWork(rts, 19, &RA_DW.RobotArm_sfcn_DWORK19[0]);

        /* DWORK20 */
        ssSetDWorkWidth(rts, 20, 2);
        ssSetDWorkDataType(rts, 20,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 20, 0);
        ssSetDWork(rts, 20, &RA_DW.RobotArm_sfcn_DWORK20[0]);

        /* DWORK21 */
        ssSetDWorkWidth(rts, 21, 4);
        ssSetDWorkDataType(rts, 21,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 21, 0);
        ssSetDWork(rts, 21, &RA_DW.RobotArm_sfcn_DWORK21[0]);

        /* DWORK22 */
        ssSetDWorkWidth(rts, 22, 4);
        ssSetDWorkDataType(rts, 22,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 22, 0);
        ssSetDWork(rts, 22, &RA_DW.RobotArm_sfcn_DWORK22[0]);

        /* DWORK23 */
        ssSetDWorkWidth(rts, 23, 2);
        ssSetDWorkDataType(rts, 23,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 23, 0);
        ssSetDWork(rts, 23, &RA_DW.RobotArm_sfcn_DWORK23[0]);

        /* DWORK24 */
        ssSetDWorkWidth(rts, 24, 2);
        ssSetDWorkDataType(rts, 24,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 24, 0);
        ssSetDWork(rts, 24, &RA_DW.RobotArm_sfcn_DWORK24[0]);

        /* DWORK25 */
        ssSetDWorkWidth(rts, 25, 4);
        ssSetDWorkDataType(rts, 25,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 25, 0);
        ssSetDWork(rts, 25, &RA_DW.RobotArm_sfcn_DWORK25[0]);

        /* DWORK26 */
        ssSetDWorkWidth(rts, 26, 4);
        ssSetDWorkDataType(rts, 26,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 26, 0);
        ssSetDWork(rts, 26, &RA_DW.RobotArm_sfcn_DWORK26[0]);

        /* DWORK27 */
        ssSetDWorkWidth(rts, 27, 2);
        ssSetDWorkDataType(rts, 27,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 27, 0);
        ssSetDWork(rts, 27, &RA_DW.RobotArm_sfcn_DWORK27[0]);

        /* DWORK28 */
        ssSetDWorkWidth(rts, 28, 4);
        ssSetDWorkDataType(rts, 28,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 28, 0);
        ssSetDWork(rts, 28, &RA_DW.RobotArm_sfcn_DWORK28[0]);

        /* DWORK29 */
        ssSetDWorkWidth(rts, 29, 4);
        ssSetDWorkDataType(rts, 29,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 29, 0);
        ssSetDWork(rts, 29, &RA_DW.RobotArm_sfcn_DWORK29[0]);

        /* DWORK30 */
        ssSetDWorkWidth(rts, 30, 2);
        ssSetDWorkDataType(rts, 30,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 30, 0);
        ssSetDWork(rts, 30, &RA_DW.RobotArm_sfcn_DWORK30[0]);

        /* DWORK31 */
        ssSetDWorkWidth(rts, 31, 2);
        ssSetDWorkDataType(rts, 31,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 31, 0);
        ssSetDWork(rts, 31, &RA_DW.RobotArm_sfcn_DWORK31[0]);

        /* DWORK32 */
        ssSetDWorkWidth(rts, 32, 4);
        ssSetDWorkDataType(rts, 32,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 32, 0);
        ssSetDWork(rts, 32, &RA_DW.RobotArm_sfcn_DWORK32[0]);

        /* DWORK33 */
        ssSetDWorkWidth(rts, 33, 4);
        ssSetDWorkDataType(rts, 33,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 33, 0);
        ssSetDWork(rts, 33, &RA_DW.RobotArm_sfcn_DWORK33[0]);

        /* DWORK34 */
        ssSetDWorkWidth(rts, 34, 2);
        ssSetDWorkDataType(rts, 34,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 34, 0);
        ssSetDWork(rts, 34, &RA_DW.RobotArm_sfcn_DWORK34[0]);

        /* DWORK35 */
        ssSetDWorkWidth(rts, 35, 4);
        ssSetDWorkDataType(rts, 35,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 35, 0);
        ssSetDWork(rts, 35, &RA_DW.RobotArm_sfcn_DWORK35[0]);

        /* DWORK36 */
        ssSetDWorkWidth(rts, 36, 4);
        ssSetDWorkDataType(rts, 36,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 36, 0);
        ssSetDWork(rts, 36, &RA_DW.RobotArm_sfcn_DWORK36[0]);

        /* DWORK37 */
        ssSetDWorkWidth(rts, 37, 1);
        ssSetDWorkDataType(rts, 37,SS_INT32);
        ssSetDWorkComplexSignal(rts, 37, 0);
        ssSetDWork(rts, 37, &RA_DW.RobotArm_sfcn_DWORK37);

        /* DWORK38 */
        ssSetDWorkWidth(rts, 38, 1);
        ssSetDWorkDataType(rts, 38,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 38, 0);
        ssSetDWork(rts, 38, &RA_DW.RobotArm_sfcn_DWORK38);

        /* DWORK39 */
        ssSetDWorkWidth(rts, 39, 1);
        ssSetDWorkDataType(rts, 39,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 39, 0);
        ssSetDWork(rts, 39, &RA_DW.RobotArm_sfcn_DWORK39);

        /* DWORK40 */
        ssSetDWorkWidth(rts, 40, 1);
        ssSetDWorkDataType(rts, 40,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 40, 0);
        ssSetDWork(rts, 40, &RA_DW.RobotArm_sfcn_DWORK40);

        /* DWORK41 */
        ssSetDWorkWidth(rts, 41, 1);
        ssSetDWorkDataType(rts, 41,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 41, 0);
        ssSetDWork(rts, 41, &RA_DW.RobotArm_sfcn_DWORK41);

        /* DWORK42 */
        ssSetDWorkWidth(rts, 42, 1);
        ssSetDWorkDataType(rts, 42,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 42, 0);
        ssSetDWork(rts, 42, &RA_DW.RobotArm_sfcn_DWORK42);

        /* DWORK43 */
        ssSetDWorkWidth(rts, 43, 1);
        ssSetDWorkDataType(rts, 43,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 43, 0);
        ssSetDWork(rts, 43, &RA_DW.RobotArm_sfcn_DWORK43);

        /* DWORK44 */
        ssSetDWorkWidth(rts, 44, 1);
        ssSetDWorkDataType(rts, 44,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 44, 0);
        ssSetDWork(rts, 44, &RA_DW.RobotArm_sfcn_DWORK44);

        /* DWORK45 */
        ssSetDWorkWidth(rts, 45, 1);
        ssSetDWorkDataType(rts, 45,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 45, 0);
        ssSetDWork(rts, 45, &RA_DW.RobotArm_sfcn_DWORK45);

        /* DWORK46 */
        ssSetDWorkWidth(rts, 46, 1);
        ssSetDWorkDataType(rts, 46,SS_UINT32);
        ssSetDWorkComplexSignal(rts, 46, 0);
        ssSetDWork(rts, 46, &RA_DW.RobotArm_sfcn_DWORK46);

        /* DWORK47 */
        ssSetDWorkWidth(rts, 47, 1);
        ssSetDWorkDataType(rts, 47,SS_UINT16);
        ssSetDWorkComplexSignal(rts, 47, 0);
        ssSetDWork(rts, 47, &RA_DW.RobotArm_sfcn_DWORK47);

        /* DWORK48 */
        ssSetDWorkWidth(rts, 48, 1);
        ssSetDWorkDataType(rts, 48,SS_UINT16);
        ssSetDWorkComplexSignal(rts, 48, 0);
        ssSetDWork(rts, 48, &RA_DW.RobotArm_sfcn_DWORK48);

        /* DWORK49 */
        ssSetDWorkWidth(rts, 49, 1);
        ssSetDWorkDataType(rts, 49,SS_UINT16);
        ssSetDWorkComplexSignal(rts, 49, 0);
        ssSetDWork(rts, 49, &RA_DW.RobotArm_sfcn_DWORK49);

        /* DWORK50 */
        ssSetDWorkWidth(rts, 50, 1);
        ssSetDWorkDataType(rts, 50,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 50, 0);
        ssSetDWork(rts, 50, &RA_DW.RobotArm_sfcn_DWORK50);

        /* DWORK51 */
        ssSetDWorkWidth(rts, 51, 1);
        ssSetDWorkDataType(rts, 51,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 51, 0);
        ssSetDWork(rts, 51, &RA_DW.RobotArm_sfcn_DWORK51);

        /* DWORK52 */
        ssSetDWorkWidth(rts, 52, 1);
        ssSetDWorkDataType(rts, 52,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 52, 0);
        ssSetDWork(rts, 52, &RA_DW.RobotArm_sfcn_DWORK52);

        /* DWORK53 */
        ssSetDWorkWidth(rts, 53, 1);
        ssSetDWorkDataType(rts, 53,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 53, 0);
        ssSetDWork(rts, 53, &RA_DW.RobotArm_sfcn_DWORK53);

        /* DWORK54 */
        ssSetDWorkWidth(rts, 54, 1);
        ssSetDWorkDataType(rts, 54,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 54, 0);
        ssSetDWork(rts, 54, &RA_DW.RobotArm_sfcn_DWORK54);

        /* DWORK55 */
        ssSetDWorkWidth(rts, 55, 1);
        ssSetDWorkDataType(rts, 55,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 55, 0);
        ssSetDWork(rts, 55, &RA_DW.RobotArm_sfcn_DWORK55);
      }

      /* registration */
      Robot_sf(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      ssSetSampleTime(rts, 1, 0.000244140625);
      ssSetOffsetTime(rts, 1, 0.0);
      sfcnTsMap[0] = 0;
      sfcnTsMap[1] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 3, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);

      /* Instance data for generated S-Function: Robot */
#include "Robot_sfcn_rtw/Robot_sid.h"

    }
  }

  /* Initialize Sizes */
  RA_M->Sizes.numContStates = (0);     /* Number of continuous states */
  RA_M->Sizes.numY = (0);              /* Number of model outputs */
  RA_M->Sizes.numU = (0);              /* Number of model inputs */
  RA_M->Sizes.sysDirFeedThru = (0);    /* The model is not direct feedthrough */
  RA_M->Sizes.numSampTimes = (2);      /* Number of sample times */
  RA_M->Sizes.numBlocks = (24);        /* Number of blocks */
  RA_M->Sizes.numBlockIO = (11);       /* Number of block outputs */
  RA_M->Sizes.numBlockPrms = (16);     /* Sum of parameter "widths" */
  return RA_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
