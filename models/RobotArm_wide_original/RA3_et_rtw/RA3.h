/*
 * RA3.h
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

#ifndef RTW_HEADER_RA3_h_
#define RTW_HEADER_RA3_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#ifndef RA3_COMMON_INCLUDES_
# define RA3_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#endif                                 /* RA3_COMMON_INCLUDES_ */

#include "RA3_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->ModelData.blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->ModelData.blkStateChange = (val))
#endif

#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->ModelData.blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->ModelData.blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->ModelData.constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->ModelData.constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ()
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ()
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->ModelData.defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->ModelData.defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ()
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ()
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
# define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
# define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ()
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ()
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ()
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ()
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ()
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->ModelData.periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->ModelData.periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->ModelData.periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->ModelData.periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->ModelData.prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->ModelData.prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->ModelData.dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->ModelData.dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ()
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ()
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->ModelData.inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->ModelData.inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->ModelData.outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->ModelData.outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->ModelData.zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->ModelData.zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->ModelData.dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->ModelData.dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
# define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
# define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define RA3_rtModel                    RT_MODEL_RA3_T

/* Block signals (auto storage) */
typedef struct {
  real_T ec_Ebox_o1[2];                /* '<S9>/ec_Ebox' */
  real_T ec_Ebox_o2[2];                /* '<S9>/ec_Ebox' */
  real_T ec_Ebox_o3[8];                /* '<S9>/ec_Ebox' */
  real_T Constant1;                    /* '<S18>/Constant1' */
  real_T Sum;                          /* '<S13>/Sum' */
  real_T Gain;                         /* '<S7>/Gain' */
  real_T Sum2;                         /* '<S13>/Sum2' */
  real_T Constant1_l;                  /* '<S26>/Constant1' */
  real_T Sum_g;                        /* '<S14>/Sum' */
  real_T Gain1;                        /* '<S7>/Gain1' */
  real_T Sum2_a;                       /* '<S14>/Sum2' */
  real_T Constant1_p;                  /* '<S36>/Constant1' */
  real_T Sum_i;                        /* '<S15>/Sum' */
  real_T ec_Ebox_o1_h[2];              /* '<S10>/ec_Ebox' */
  real_T ec_Ebox_o2_f[2];              /* '<S10>/ec_Ebox' */
  real_T ec_Ebox_o3_h[8];              /* '<S10>/ec_Ebox' */
  real_T Gain2;                        /* '<S7>/Gain2' */
  real_T Sum2_f;                       /* '<S15>/Sum2' */
  real_T Add1;                         /* '<S12>/Add1' */
  real_T PulseGenerator;               /* '<S7>/Pulse Generator' */
  real_T Dctintegrator;                /* '<S13>/Dctintegrator' */
  real_T Gain1_h;                      /* '<S16>/Gain1' */
  real_T Dctpd;                        /* '<S16>/Dctpd' */
  real_T Dctnotch;                     /* '<S16>/Dctnotch' */
  real_T Dct2lowpass;                  /* '<S16>/Dct2lowpass' */
  real_T Saturation;                   /* '<S13>/Saturation' */
  real_T Gain1_p;                      /* '<S17>/Gain1' */
  real_T Dctpd_o;                      /* '<S17>/Dctpd' */
  real_T Dctnotch_k;                   /* '<S17>/Dctnotch' */
  real_T Dct2lowpass_p;                /* '<S17>/Dct2lowpass' */
  real_T Saturation_g;                 /* '<S7>/Saturation' */
  real_T Dctintegrator_b;              /* '<S15>/Dctintegrator' */
  real_T Gain1_hb;                     /* '<S35>/Gain1' */
  real_T Dctpd_c;                      /* '<S35>/Dctpd' */
  real_T Dctnotch_e;                   /* '<S35>/Dctnotch' */
  real_T Dct2lowpass_m;                /* '<S35>/Dct2lowpass' */
  real_T Product;                      /* '<S15>/Product' */
  real_T Gain1_g;                      /* '<S34>/Gain1' */
  real_T Dctpd_h;                      /* '<S34>/Dctpd' */
  real_T Dctnotch_f;                   /* '<S34>/Dctnotch' */
  real_T Dct2lowpass_l;                /* '<S34>/Dct2lowpass' */
  real_T Saturation2;                  /* '<S7>/Saturation2' */
  real_T Saturation3;                  /* '<S7>/Saturation3' */
  real_T Dctintegrator_f;              /* '<S14>/Dctintegrator' */
  real_T Gain1_j;                      /* '<S24>/Gain1' */
  real_T Dctpd_h3;                     /* '<S24>/Dctpd' */
  real_T Dctnotch_l;                   /* '<S24>/Dctnotch' */
  real_T Dct2lowpass_n;                /* '<S24>/Dct2lowpass' */
  real_T Product_j;                    /* '<S14>/Product' */
  real_T Gain1_k;                      /* '<S25>/Gain1' */
  real_T Dctpd_m;                      /* '<S25>/Dctpd' */
  real_T Dctnotch_ft;                  /* '<S25>/Dctnotch' */
  real_T Dct2lowpass_i;                /* '<S25>/Dct2lowpass' */
  real_T SaturationX;                  /* '<S7>/SaturationX' */
  real_T Switch;                       /* '<S7>/Switch' */
  real_T Add;                          /* '<S8>/Add' */
  real_T TSamp;                        /* '<S23>/TSamp' */
  real_T LimitAcceleration;            /* '<S18>/Limit Acceleration' */
  real_T TSamp_j;                      /* '<S32>/TSamp' */
  real_T LimitAcceleration_g;          /* '<S26>/Limit Acceleration' */
  real_T TSamp_o;                      /* '<S42>/TSamp' */
  real_T LimitAcceleration_a;          /* '<S36>/Limit Acceleration' */
  real_T jogSpeed;                     /* '<S15>/Supervisor' */
  real_T toPoint;                      /* '<S15>/Supervisor' */
  real_T homeControllerEnabled;        /* '<S15>/Supervisor' */
  real_T resetEnc;                     /* '<S15>/Supervisor' */
  real_T homingBusy;                   /* '<S15>/Supervisor' */
  real_T airBagEnabled;                /* '<S15>/Supervisor' */
  real_T airBagRef;                    /* '<S15>/Supervisor' */
  real_T controlEnabled;               /* '<S15>/Supervisor' */
  real_T Ready;                        /* '<S15>/Supervisor' */
  real_T StopSim;                      /* '<S15>/Supervisor' */
  real_T y;                            /* '<S15>/Angle2Z' */
  real_T jogSpeed_g;                   /* '<S14>/Supervisor' */
  real_T toPoint_b;                    /* '<S14>/Supervisor' */
  real_T homeControllerEnabled_e;      /* '<S14>/Supervisor' */
  real_T resetEnc_l;                   /* '<S14>/Supervisor' */
  real_T homingBusy_g;                 /* '<S14>/Supervisor' */
  real_T airBagEnabled_i;              /* '<S14>/Supervisor' */
  real_T airBagRef_d;                  /* '<S14>/Supervisor' */
  real_T controlEnabled_g;             /* '<S14>/Supervisor' */
  real_T Ready_a;                      /* '<S14>/Supervisor' */
  real_T StopSim_g;                    /* '<S14>/Supervisor' */
  real_T jogSpeed_k;                   /* '<S13>/Supervisor' */
  real_T toPoint_g;                    /* '<S13>/Supervisor' */
  real_T homeControllerEnabled_p;      /* '<S13>/Supervisor' */
  real_T resetEnc_o;                   /* '<S13>/Supervisor' */
  real_T homingBusy_e;                 /* '<S13>/Supervisor' */
  real_T airBagEnabled_d;              /* '<S13>/Supervisor' */
  real_T airBagRef_i;                  /* '<S13>/Supervisor' */
  real_T controlEnabled_e;             /* '<S13>/Supervisor' */
  real_T Ready_m;                      /* '<S13>/Supervisor' */
  real_T StopSim_l;                    /* '<S13>/Supervisor' */
  real_T Sum4;                         /* '<S1>/Sum4' */
  real_T Sum5;                         /* '<S1>/Sum5' */
  real_T Sum6;                         /* '<S1>/Sum6' */
  real_T ReferenceSolenoid;            /* '<S1>/Reference Solenoid' */
  real_T SFunction[4];                 /* '<S6>/S-Function' */
  boolean_T RelationalOperator;        /* '<S13>/Relational Operator' */
  boolean_T Compare;                   /* '<S11>/Compare' */
  boolean_T LogicalOperator2;          /* '<S13>/Logical Operator2' */
  boolean_T RelationalOperator_l;      /* '<S14>/Relational Operator' */
  boolean_T LogicalOperator2_g;        /* '<S14>/Logical Operator2' */
  boolean_T RelationalOperator_e;      /* '<S15>/Relational Operator' */
  boolean_T LogicalOperator2_e;        /* '<S15>/Logical Operator2' */
  boolean_T LogicalOperator1;          /* '<S13>/Logical Operator1' */
  boolean_T LogicalOperator1_i;        /* '<S15>/Logical Operator1' */
  boolean_T LogicalOperator1_j;        /* '<S14>/Logical Operator1' */
} B_RA3_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S13>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_b;/* '<S18>/Discrete-Time Integrator' */
  real_T UnitDelay_DSTATE;             /* '<S8>/Unit Delay' */
  real_T DiscreteTimeIntegrator_DSTATE_n;/* '<S14>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_k;/* '<S26>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTAT_bd;/* '<S15>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_i;/* '<S36>/Discrete-Time Integrator' */
  real_T UD_DSTATE;                    /* '<S23>/UD' */
  real_T UD_DSTATE_p;                  /* '<S32>/UD' */
  real_T UD_DSTATE_k;                  /* '<S42>/UD' */
  real_T PrevY;                        /* '<S18>/Limit Speed' */
  real_T PrevY_e;                      /* '<S18>/Limit Acceleration' */
  real_T PrevY_p;                      /* '<S26>/Limit Speed' */
  real_T PrevY_n;                      /* '<S26>/Limit Acceleration' */
  real_T PrevY_h;                      /* '<S36>/Limit Speed' */
  real_T PrevY_o;                      /* '<S36>/Limit Acceleration' */
  real_T currentcarPos;                /* '<S15>/Supervisor' */
  real_T Dctintegrator_RWORK[2];       /* '<S13>/Dctintegrator' */
  real_T Dctpd_RWORK[2];               /* '<S16>/Dctpd' */
  real_T Dctnotch_RWORK[4];            /* '<S16>/Dctnotch' */
  real_T Dct2lowpass_RWORK[4];         /* '<S16>/Dct2lowpass' */
  real_T Dctpd_RWORK_a[2];             /* '<S17>/Dctpd' */
  real_T Dctnotch_RWORK_j[4];          /* '<S17>/Dctnotch' */
  real_T Dct2lowpass_RWORK_g[4];       /* '<S17>/Dct2lowpass' */
  real_T Dctintegrator_RWORK_o[2];     /* '<S15>/Dctintegrator' */
  real_T Dctpd_RWORK_j[2];             /* '<S35>/Dctpd' */
  real_T Dctnotch_RWORK_h[4];          /* '<S35>/Dctnotch' */
  real_T Dct2lowpass_RWORK_m[4];       /* '<S35>/Dct2lowpass' */
  real_T Dctpd_RWORK_p[2];             /* '<S34>/Dctpd' */
  real_T Dctnotch_RWORK_i[4];          /* '<S34>/Dctnotch' */
  real_T Dct2lowpass_RWORK_l[4];       /* '<S34>/Dct2lowpass' */
  real_T Dctintegrator_RWORK_b[2];     /* '<S14>/Dctintegrator' */
  real_T Dctpd_RWORK_f[2];             /* '<S24>/Dctpd' */
  real_T Dctnotch_RWORK_l[4];          /* '<S24>/Dctnotch' */
  real_T Dct2lowpass_RWORK_j[4];       /* '<S24>/Dct2lowpass' */
  real_T Dctpd_RWORK_g[2];             /* '<S25>/Dctpd' */
  real_T Dctnotch_RWORK_iu[4];         /* '<S25>/Dctnotch' */
  real_T Dct2lowpass_RWORK_k[4];       /* '<S25>/Dct2lowpass' */
  int32_T clockTickCounter;            /* '<S7>/Pulse Generator' */
  int32_T sfEvent;                     /* '<S15>/Supervisor' */
  int32_T sfEvent_m;                   /* '<S14>/Supervisor' */
  int32_T sfEvent_b;                   /* '<S13>/Supervisor' */
  uint16_T temporalCounter_i1;         /* '<S15>/Supervisor' */
  uint16_T temporalCounter_i1_a;       /* '<S14>/Supervisor' */
  uint16_T temporalCounter_i1_i;       /* '<S13>/Supervisor' */
  int8_T Controller_SubsysRanBC;       /* '<Root>/Controller' */
  uint8_T is_active_c7_RA3;            /* '<S15>/Supervisor' */
  uint8_T is_c7_RA3;                   /* '<S15>/Supervisor' */
  uint8_T is_active_c6_RA3;            /* '<S14>/Supervisor' */
  uint8_T is_c6_RA3;                   /* '<S14>/Supervisor' */
  uint8_T is_active_c5_RA3;            /* '<S13>/Supervisor' */
  uint8_T is_c5_RA3;                   /* '<S13>/Supervisor' */
  boolean_T isStable;                  /* '<S15>/Supervisor' */
  boolean_T isStable_m;                /* '<S14>/Supervisor' */
  boolean_T isStable_b;                /* '<S13>/Supervisor' */
  boolean_T Controller_MODE;           /* '<Root>/Controller' */
} DW_RA3_T;

/* Backward compatible GRT Identifiers */
#define rtB                            RA3_B
#define BlockIO                        B_RA3_T
#define rtP                            RA3_P
#define Parameters                     P_RA3_T
#define rtDWork                        RA3_DW
#define D_Work                         DW_RA3_T

/* Parameters (auto storage) */
struct P_RA3_T_ {
  real_T DiscreteDerivative_ICPrevScaled;/* Mask Parameter: DiscreteDerivative_ICPrevScaled
                                          * Referenced by: '<S23>/UD'
                                          */
  real_T DiscreteDerivative_ICPrevScal_k;/* Mask Parameter: DiscreteDerivative_ICPrevScal_k
                                          * Referenced by: '<S32>/UD'
                                          */
  real_T DiscreteDerivative_ICPrevScal_h;/* Mask Parameter: DiscreteDerivative_ICPrevScal_h
                                          * Referenced by: '<S42>/UD'
                                          */
  real_T CompareToConstant_const;      /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S11>/Constant'
                                        */
  real_T Solenoid_Y0;                  /* Expression: 0
                                        * Referenced by: '<S1>/Solenoid'
                                        */
  real_T ReferenceR_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/Reference R'
                                        */
  real_T Gain_Gain;                    /* Expression: 0
                                        * Referenced by: '<S3>/Gain'
                                        */
  real_T ReferenceX_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/Reference X'
                                        */
  real_T Gain_Gain_e;                  /* Expression: 0
                                        * Referenced by: '<S4>/Gain'
                                        */
  real_T ReferenceZ_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/Reference Z'
                                        */
  real_T Gain_Gain_l;                  /* Expression: 0
                                        * Referenced by: '<S5>/Gain'
                                        */
  real_T FeedforwardR_Value;           /* Expression: 0
                                        * Referenced by: '<S1>/Feedforward R'
                                        */
  real_T FeedforwardX_Value;           /* Expression: 0
                                        * Referenced by: '<S1>/Feedforward X'
                                        */
  real_T FeedforwardZ_Value;           /* Expression: 0.1
                                        * Referenced by: '<S1>/Feedforward Z'
                                        */
  real_T ReferenceSolenoid_Value;      /* Expression: 0
                                        * Referenced by: '<S1>/Reference Solenoid'
                                        */
  real_T SFunction_P1_Size[2];         /* Computed Parameter: SFunction_P1_Size
                                        * Referenced by: '<S6>/S-Function'
                                        */
  real_T SFunction_P1;                 /* Expression: 4096
                                        * Referenced by: '<S6>/S-Function'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S7>/Constant4'
                                        */
  real_T Constant3_Value;              /* Expression: 2000
                                        * Referenced by: '<S7>/Constant3'
                                        */
  real_T HomingRunningSwitch_Threshold;/* Expression: 0.5
                                        * Referenced by: '<S13>/Homing Running Switch'
                                        */
  real_T HomingRunningSwitch_Threshold_l;/* Expression: 0.5
                                          * Referenced by: '<S14>/Homing Running Switch'
                                          */
  real_T HomingRunningSwitch_Threshold_i;/* Expression: 0.5
                                          * Referenced by: '<S15>/Homing Running Switch'
                                          */
  real_T ec_Ebox_P1_Size[2];           /* Computed Parameter: ec_Ebox_P1_Size
                                        * Referenced by: '<S9>/ec_Ebox'
                                        */
  real_T ec_Ebox_P1;                   /* Expression: link_id
                                        * Referenced by: '<S9>/ec_Ebox'
                                        */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S13>/Discrete-Time Integrator'
                                         */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S13>/Discrete-Time Integrator'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S18>/Constant1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_e;/* Computed Parameter: DiscreteTimeIntegrator_gainva_e
                                          * Referenced by: '<S18>/Discrete-Time Integrator'
                                          */
  real_T Gain_Gain_n;                  /* Expression: 1/4000*9/150*2*pi
                                        * Referenced by: '<S7>/Gain'
                                        */
  real_T Constant_Value;               /* Expression: 0.05
                                        * Referenced by: '<S13>/Constant'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S8>/Unit Delay'
                                        */
  real_T DiscreteTimeIntegrator_gainva_n;/* Computed Parameter: DiscreteTimeIntegrator_gainva_n
                                          * Referenced by: '<S14>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_IC_k;  /* Expression: 0
                                        * Referenced by: '<S14>/Discrete-Time Integrator'
                                        */
  real_T Constant1_Value_g;            /* Expression: 0
                                        * Referenced by: '<S26>/Constant1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_d;/* Computed Parameter: DiscreteTimeIntegrator_gainva_d
                                          * Referenced by: '<S26>/Discrete-Time Integrator'
                                          */
  real_T Gain1_Gain;                   /* Expression: -1/4000*9/100*2*pi
                                        * Referenced by: '<S7>/Gain1'
                                        */
  real_T Constant_Value_c;             /* Expression: -0.1
                                        * Referenced by: '<S14>/Constant'
                                        */
  real_T DiscreteTimeIntegrator_gainva_j;/* Computed Parameter: DiscreteTimeIntegrator_gainva_j
                                          * Referenced by: '<S15>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_IC_p;  /* Expression: 0
                                        * Referenced by: '<S15>/Discrete-Time Integrator'
                                        */
  real_T Constant1_Value_i;            /* Expression: 0
                                        * Referenced by: '<S36>/Constant1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_k;/* Computed Parameter: DiscreteTimeIntegrator_gainva_k
                                          * Referenced by: '<S36>/Discrete-Time Integrator'
                                          */
  real_T ec_Ebox_P1_Size_b[2];         /* Computed Parameter: ec_Ebox_P1_Size_b
                                        * Referenced by: '<S10>/ec_Ebox'
                                        */
  real_T ec_Ebox_P1_p;                 /* Expression: link_id
                                        * Referenced by: '<S10>/ec_Ebox'
                                        */
  real_T Gain2_Gain;                   /* Expression: 1/4000*9/100*2*pi
                                        * Referenced by: '<S7>/Gain2'
                                        */
  real_T Constant_Value_f;             /* Expression: 0.1
                                        * Referenced by: '<S15>/Constant'
                                        */
  real_T Constant_Value_p;             /* Expression: 1
                                        * Referenced by: '<S12>/Constant'
                                        */
  real_T Constant_Value_k;             /* Expression: 2.5
                                        * Referenced by: '<S7>/Constant'
                                        */
  real_T Constant1_Value_b;            /* Expression: 2.5
                                        * Referenced by: '<S7>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S7>/Constant2'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 2000
                                        * Referenced by: '<S7>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;        /* Computed Parameter: PulseGenerator_Period
                                        * Referenced by: '<S7>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty;          /* Computed Parameter: PulseGenerator_Duty
                                        * Referenced by: '<S7>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<S7>/Pulse Generator'
                                        */
  real_T Dctintegrator_P1_Size[2];     /* Computed Parameter: Dctintegrator_P1_Size
                                        * Referenced by: '<S13>/Dctintegrator'
                                        */
  real_T Dctintegrator_P1[2];          /* Expression: [f_num 0.001]
                                        * Referenced by: '<S13>/Dctintegrator'
                                        */
  real_T Gain1_Gain_j;                 /* Expression: 1
                                        * Referenced by: '<S16>/Gain1'
                                        */
  real_T Dctpd_P1_Size[2];             /* Computed Parameter: Dctpd_P1_Size
                                        * Referenced by: '<S16>/Dctpd'
                                        */
  real_T Dctpd_P1[3];                  /* Expression: [kp kv 0.001]
                                        * Referenced by: '<S16>/Dctpd'
                                        */
  real_T Dctnotch_P1_Size[2];          /* Computed Parameter: Dctnotch_P1_Size
                                        * Referenced by: '<S16>/Dctnotch'
                                        */
  real_T Dctnotch_P1[5];               /* Expression: [f_num b_num f_den b_den 0.001]
                                        * Referenced by: '<S16>/Dctnotch'
                                        */
  real_T Dct2lowpass_P1_Size[2];       /* Computed Parameter: Dct2lowpass_P1_Size
                                        * Referenced by: '<S16>/Dct2lowpass'
                                        */
  real_T Dct2lowpass_P1[3];            /* Expression: [f_den b_den 0.001]
                                        * Referenced by: '<S16>/Dct2lowpass'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 0.7
                                        * Referenced by: '<S13>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -0.7
                                        * Referenced by: '<S13>/Saturation'
                                        */
  real_T Gain1_Gain_o;                 /* Expression: 1
                                        * Referenced by: '<S17>/Gain1'
                                        */
  real_T Dctpd_P1_Size_c[2];           /* Computed Parameter: Dctpd_P1_Size_c
                                        * Referenced by: '<S17>/Dctpd'
                                        */
  real_T Dctpd_P1_h[3];                /* Expression: [kp kv 0.001]
                                        * Referenced by: '<S17>/Dctpd'
                                        */
  real_T Dctnotch_P1_Size_p[2];        /* Computed Parameter: Dctnotch_P1_Size_p
                                        * Referenced by: '<S17>/Dctnotch'
                                        */
  real_T Dctnotch_P1_k[5];             /* Expression: [f_num b_num f_den b_den 0.001]
                                        * Referenced by: '<S17>/Dctnotch'
                                        */
  real_T Dct2lowpass_P1_Size_n[2];     /* Computed Parameter: Dct2lowpass_P1_Size_n
                                        * Referenced by: '<S17>/Dct2lowpass'
                                        */
  real_T Dct2lowpass_P1_j[3];          /* Expression: [f_den b_den 0.001]
                                        * Referenced by: '<S17>/Dct2lowpass'
                                        */
  real_T Saturation_UpperSat_p;        /* Expression: 5
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real_T Saturation_LowerSat_d;        /* Expression: 0
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real_T Dctintegrator_P1_Size_i[2];   /* Computed Parameter: Dctintegrator_P1_Size_i
                                        * Referenced by: '<S15>/Dctintegrator'
                                        */
  real_T Dctintegrator_P1_i[2];        /* Expression: [f_num 0.001]
                                        * Referenced by: '<S15>/Dctintegrator'
                                        */
  real_T Gain1_Gain_p;                 /* Expression: 1
                                        * Referenced by: '<S35>/Gain1'
                                        */
  real_T Dctpd_P1_Size_i[2];           /* Computed Parameter: Dctpd_P1_Size_i
                                        * Referenced by: '<S35>/Dctpd'
                                        */
  real_T Dctpd_P1_k[3];                /* Expression: [kp kv 0.001]
                                        * Referenced by: '<S35>/Dctpd'
                                        */
  real_T Dctnotch_P1_Size_h[2];        /* Computed Parameter: Dctnotch_P1_Size_h
                                        * Referenced by: '<S35>/Dctnotch'
                                        */
  real_T Dctnotch_P1_b[5];             /* Expression: [f_num b_num f_den b_den 0.001]
                                        * Referenced by: '<S35>/Dctnotch'
                                        */
  real_T Dct2lowpass_P1_Size_d[2];     /* Computed Parameter: Dct2lowpass_P1_Size_d
                                        * Referenced by: '<S35>/Dct2lowpass'
                                        */
  real_T Dct2lowpass_P1_h[3];          /* Expression: [f_den b_den 0.001]
                                        * Referenced by: '<S35>/Dct2lowpass'
                                        */
  real_T Gain1_Gain_a;                 /* Expression: 1
                                        * Referenced by: '<S34>/Gain1'
                                        */
  real_T Dctpd_P1_Size_n[2];           /* Computed Parameter: Dctpd_P1_Size_n
                                        * Referenced by: '<S34>/Dctpd'
                                        */
  real_T Dctpd_P1_hn[3];               /* Expression: [kp kv 0.001]
                                        * Referenced by: '<S34>/Dctpd'
                                        */
  real_T Dctnotch_P1_Size_d[2];        /* Computed Parameter: Dctnotch_P1_Size_d
                                        * Referenced by: '<S34>/Dctnotch'
                                        */
  real_T Dctnotch_P1_bw[5];            /* Expression: [f_num b_num f_den b_den 0.001]
                                        * Referenced by: '<S34>/Dctnotch'
                                        */
  real_T Dct2lowpass_P1_Size_e[2];     /* Computed Parameter: Dct2lowpass_P1_Size_e
                                        * Referenced by: '<S34>/Dct2lowpass'
                                        */
  real_T Dct2lowpass_P1_g[3];          /* Expression: [f_den b_den 0.001]
                                        * Referenced by: '<S34>/Dct2lowpass'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 5
                                        * Referenced by: '<S7>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S7>/Saturation2'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: 5
                                        * Referenced by: '<S7>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S7>/Saturation3'
                                        */
  real_T Dctintegrator_P1_Size_o[2];   /* Computed Parameter: Dctintegrator_P1_Size_o
                                        * Referenced by: '<S14>/Dctintegrator'
                                        */
  real_T Dctintegrator_P1_p[2];        /* Expression: [f_num 0.001]
                                        * Referenced by: '<S14>/Dctintegrator'
                                        */
  real_T Gain1_Gain_os;                /* Expression: 1
                                        * Referenced by: '<S24>/Gain1'
                                        */
  real_T Dctpd_P1_Size_b[2];           /* Computed Parameter: Dctpd_P1_Size_b
                                        * Referenced by: '<S24>/Dctpd'
                                        */
  real_T Dctpd_P1_i[3];                /* Expression: [kp kv 0.001]
                                        * Referenced by: '<S24>/Dctpd'
                                        */
  real_T Dctnotch_P1_Size_p5[2];       /* Computed Parameter: Dctnotch_P1_Size_p5
                                        * Referenced by: '<S24>/Dctnotch'
                                        */
  real_T Dctnotch_P1_j[5];             /* Expression: [f_num b_num f_den b_den 0.001]
                                        * Referenced by: '<S24>/Dctnotch'
                                        */
  real_T Dct2lowpass_P1_Size_a[2];     /* Computed Parameter: Dct2lowpass_P1_Size_a
                                        * Referenced by: '<S24>/Dct2lowpass'
                                        */
  real_T Dct2lowpass_P1_n[3];          /* Expression: [f_den b_den 0.001]
                                        * Referenced by: '<S24>/Dct2lowpass'
                                        */
  real_T Gain1_Gain_h;                 /* Expression: 1
                                        * Referenced by: '<S25>/Gain1'
                                        */
  real_T Dctpd_P1_Size_l[2];           /* Computed Parameter: Dctpd_P1_Size_l
                                        * Referenced by: '<S25>/Dctpd'
                                        */
  real_T Dctpd_P1_d[3];                /* Expression: [kp kv 0.001]
                                        * Referenced by: '<S25>/Dctpd'
                                        */
  real_T Dctnotch_P1_Size_i[2];        /* Computed Parameter: Dctnotch_P1_Size_i
                                        * Referenced by: '<S25>/Dctnotch'
                                        */
  real_T Dctnotch_P1_a[5];             /* Expression: [f_num b_num f_den b_den 0.001]
                                        * Referenced by: '<S25>/Dctnotch'
                                        */
  real_T Dct2lowpass_P1_Size_h[2];     /* Computed Parameter: Dct2lowpass_P1_Size_h
                                        * Referenced by: '<S25>/Dct2lowpass'
                                        */
  real_T Dct2lowpass_P1_a[3];          /* Expression: [f_den b_den 0.001]
                                        * Referenced by: '<S25>/Dct2lowpass'
                                        */
  real_T SaturationX_UpperSat;         /* Expression: 5
                                        * Referenced by: '<S7>/SaturationX'
                                        */
  real_T SaturationX_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S7>/SaturationX'
                                        */
  real_T Switch_Threshold;             /* Expression: .5
                                        * Referenced by: '<S7>/Switch'
                                        */
  real_T ResetEncoderR_P1_Size[2];     /* Computed Parameter: ResetEncoderR_P1_Size
                                        * Referenced by: '<S13>/Reset EncoderR'
                                        */
  real_T ResetEncoderR_P1;             /* Expression: link_id
                                        * Referenced by: '<S13>/Reset EncoderR'
                                        */
  real_T ResetEncoderR_P2_Size[2];     /* Computed Parameter: ResetEncoderR_P2_Size
                                        * Referenced by: '<S13>/Reset EncoderR'
                                        */
  real_T ResetEncoderR_P2;             /* Expression: chan_id
                                        * Referenced by: '<S13>/Reset EncoderR'
                                        */
  real_T LimitSpeed_RisingLim;         /* Computed Parameter: LimitSpeed_RisingLim
                                        * Referenced by: '<S18>/Limit Speed'
                                        */
  real_T LimitSpeed_FallingLim;        /* Computed Parameter: LimitSpeed_FallingLim
                                        * Referenced by: '<S18>/Limit Speed'
                                        */
  real_T LimitSpeed_IC;                /* Expression: 0
                                        * Referenced by: '<S18>/Limit Speed'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S23>/TSamp'
                                        */
  real_T LimitAcceleration_RisingLim;  /* Computed Parameter: LimitAcceleration_RisingLim
                                        * Referenced by: '<S18>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_FallingLim; /* Computed Parameter: LimitAcceleration_FallingLim
                                        * Referenced by: '<S18>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_IC;         /* Expression: 0
                                        * Referenced by: '<S18>/Limit Acceleration'
                                        */
  real_T ResetEncoderX_P1_Size[2];     /* Computed Parameter: ResetEncoderX_P1_Size
                                        * Referenced by: '<S14>/Reset EncoderX'
                                        */
  real_T ResetEncoderX_P1;             /* Expression: link_id
                                        * Referenced by: '<S14>/Reset EncoderX'
                                        */
  real_T ResetEncoderX_P2_Size[2];     /* Computed Parameter: ResetEncoderX_P2_Size
                                        * Referenced by: '<S14>/Reset EncoderX'
                                        */
  real_T ResetEncoderX_P2;             /* Expression: chan_id
                                        * Referenced by: '<S14>/Reset EncoderX'
                                        */
  real_T LimitSpeed_RisingLim_b;       /* Computed Parameter: LimitSpeed_RisingLim_b
                                        * Referenced by: '<S26>/Limit Speed'
                                        */
  real_T LimitSpeed_FallingLim_e;      /* Computed Parameter: LimitSpeed_FallingLim_e
                                        * Referenced by: '<S26>/Limit Speed'
                                        */
  real_T LimitSpeed_IC_i;              /* Expression: 0
                                        * Referenced by: '<S26>/Limit Speed'
                                        */
  real_T TSamp_WtEt_g;                 /* Computed Parameter: TSamp_WtEt_g
                                        * Referenced by: '<S32>/TSamp'
                                        */
  real_T LimitAcceleration_RisingLim_g;/* Computed Parameter: LimitAcceleration_RisingLim_g
                                        * Referenced by: '<S26>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_FallingLim_o;/* Computed Parameter: LimitAcceleration_FallingLim_o
                                         * Referenced by: '<S26>/Limit Acceleration'
                                         */
  real_T LimitAcceleration_IC_k;       /* Expression: 0
                                        * Referenced by: '<S26>/Limit Acceleration'
                                        */
  real_T ResetEncoderZ_P1_Size[2];     /* Computed Parameter: ResetEncoderZ_P1_Size
                                        * Referenced by: '<S15>/Reset EncoderZ'
                                        */
  real_T ResetEncoderZ_P1;             /* Expression: link_id
                                        * Referenced by: '<S15>/Reset EncoderZ'
                                        */
  real_T ResetEncoderZ_P2_Size[2];     /* Computed Parameter: ResetEncoderZ_P2_Size
                                        * Referenced by: '<S15>/Reset EncoderZ'
                                        */
  real_T ResetEncoderZ_P2;             /* Expression: chan_id
                                        * Referenced by: '<S15>/Reset EncoderZ'
                                        */
  real_T LimitSpeed_RisingLim_h;       /* Computed Parameter: LimitSpeed_RisingLim_h
                                        * Referenced by: '<S36>/Limit Speed'
                                        */
  real_T LimitSpeed_FallingLim_h;      /* Computed Parameter: LimitSpeed_FallingLim_h
                                        * Referenced by: '<S36>/Limit Speed'
                                        */
  real_T LimitSpeed_IC_f;              /* Expression: 0
                                        * Referenced by: '<S36>/Limit Speed'
                                        */
  real_T TSamp_WtEt_d;                 /* Computed Parameter: TSamp_WtEt_d
                                        * Referenced by: '<S42>/TSamp'
                                        */
  real_T LimitAcceleration_RisingLim_a;/* Computed Parameter: LimitAcceleration_RisingLim_a
                                        * Referenced by: '<S36>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_FallingLim_m;/* Computed Parameter: LimitAcceleration_FallingLim_m
                                         * Referenced by: '<S36>/Limit Acceleration'
                                         */
  real_T LimitAcceleration_IC_n;       /* Expression: 0
                                        * Referenced by: '<S36>/Limit Acceleration'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_RA3_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[27];
    SimStruct *childSFunctionPtrs[27];
    struct _ssBlkInfo2 blkInfo2[27];
    struct _ssSFcnModelMethods2 methods2[27];
    struct _ssSFcnModelMethods3 methods3[27];
    struct _ssStatesInfo2 statesInfo2[27];
    ssPeriodicStatesInfo periodicStatesInfo[27];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[8];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      real_T const *UPtrs0[2];
      real_T const *UPtrs1[2];
      real_T const *UPtrs2[8];
      struct _ssPortOutputs outputPortInfo[3];
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      real_T const *UPtrs0[2];
      real_T const *UPtrs1[2];
      real_T const *UPtrs2[8];
      struct _ssPortOutputs outputPortInfo[3];
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn8;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn9;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn10;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn11;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn12;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn13;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn14;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn15;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn16;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn17;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn18;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn19;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn20;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn21;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn22;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn23;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      uint_T attribs[2];
      mxArray *params[2];
    } Sfcn24;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      uint_T attribs[2];
      mxArray *params[2];
    } Sfcn25;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      uint_T attribs[2];
      mxArray *params[2];
    } Sfcn26;
  } NonInlinedSFcns;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    void *blockIO;
    const void *constBlockIO;
    void *defaultParam;
    ZCSigState *prevZCSigState;
    real_T *contStates;
    int_T *periodicContStateIndices;
    real_T *periodicContStateRanges;
    real_T *derivs;
    void *zcSignalValues;
    void *inputs;
    void *outputs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
    void *dwork;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_RA3_T RA3_P;

/* Block signals (auto storage) */
extern B_RA3_T RA3_B;

/* Block states (auto storage) */
extern DW_RA3_T RA3_DW;

/* External data declarations for dependent source files */
extern const real_T RA3_RGND;          /* real_T ground */

/* Model entry point functions */
extern void RA3_initialize(void);
extern void RA3_output(void);
extern void RA3_update(void);
extern void RA3_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern RA3_rtModel *RA3(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_RA3_T *const RA3_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'RA3'
 * '<S1>'   : 'RA3/Controller'
 * '<S2>'   : 'RA3/Robot Arm'
 * '<S3>'   : 'RA3/Controller/Controller R'
 * '<S4>'   : 'RA3/Controller/Controller X'
 * '<S5>'   : 'RA3/Controller/Controller Z'
 * '<S6>'   : 'RA3/Controller/RTScope'
 * '<S7>'   : 'RA3/Robot Arm/IO'
 * '<S8>'   : 'RA3/Robot Arm/Supervisor'
 * '<S9>'   : 'RA3/Robot Arm/IO/E-box'
 * '<S10>'  : 'RA3/Robot Arm/IO/E-box1'
 * '<S11>'  : 'RA3/Robot Arm/Supervisor/Compare To Constant'
 * '<S12>'  : 'RA3/Robot Arm/Supervisor/HomingBusyCheck'
 * '<S13>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller R'
 * '<S14>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller X'
 * '<S15>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller Z'
 * '<S16>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller R/ControllerR'
 * '<S17>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller R/ControllerR1'
 * '<S18>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller R/Point-to-point trajectory'
 * '<S19>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller R/Selector'
 * '<S20>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller R/Selector1'
 * '<S21>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller R/Selector2'
 * '<S22>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller R/Supervisor'
 * '<S23>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller R/Point-to-point trajectory/Discrete Derivative'
 * '<S24>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller X/ControllerX'
 * '<S25>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller X/ControllerX1'
 * '<S26>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller X/Point-to-point trajectory'
 * '<S27>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller X/Selector'
 * '<S28>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller X/Selector1'
 * '<S29>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller X/Selector2'
 * '<S30>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller X/Selector3'
 * '<S31>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller X/Supervisor'
 * '<S32>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller X/Point-to-point trajectory/Discrete Derivative'
 * '<S33>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller Z/Angle2Z'
 * '<S34>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller Z/Controller1'
 * '<S35>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller Z/Controller2'
 * '<S36>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller Z/Point-to-point trajectory'
 * '<S37>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller Z/Selector'
 * '<S38>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller Z/Selector1'
 * '<S39>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller Z/Selector2'
 * '<S40>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller Z/Selector3'
 * '<S41>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller Z/Supervisor'
 * '<S42>'  : 'RA3/Robot Arm/Supervisor/Supervisory Controller Z/Point-to-point trajectory/Discrete Derivative'
 */
#endif                                 /* RTW_HEADER_RA3_h_ */
