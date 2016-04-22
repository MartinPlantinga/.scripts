/*
 * Robot_mid.h
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
 *
 * SOURCES: Robot_sf.c
 */

#include "simstruc.h"
#include "Robot_sf.h"
#if defined(MATLAB_MEX_FILE) || defined(RT_MALLOC)

static int_T RegNumInputPorts(SimStruct *S, int_T nInputPorts)
{
  _ssSetNumInputPorts(S,nInputPorts);
  return true;
}

static int_T RegNumOutputPorts(SimStruct *S, int_T nOutputPorts)
{
  _ssSetNumOutputPorts(S,nOutputPorts);
  return true;
}

static int_T FcnSetErrorStatus(const SimStruct *S, DTypeId arg2)
{
  static char msg[256];
  if (strlen(ssGetModelName(S)) < 128) {
    sprintf(msg,
            "S-function %s does not have a tlc file. It cannot use macros that access regDataType field in simstruct.",
            ssGetModelName(S));
  } else {
    sprintf(msg,
            "A S-function does not have a tlc file. It cannot use macros that access regDataType field in simstruct.");
  }

  ssSetErrorStatus(S, msg);
  UNUSED_PARAMETER(arg2);
  return 0;
}

#endif

/* Instance data for model: Robot */
void *Robot_malloc(SimStruct *rts)
{
  /* Local SimStruct for the generated S-Function */
  LocalS *lS = (LocalS *) malloc(sizeof(LocalS));
  ss_VALIDATE_MEMORY(rts,lS);
  (void) memset((char *) lS, 0,
                sizeof(LocalS));
  ssSetUserData(rts, lS);

  /* block I/O */
  {
    void *b = malloc(sizeof(B_Robot_T));
    ss_VALIDATE_MEMORY(rts,b);
    ssSetLocalBlockIO(rts, b);
    (void) memset(b, 0,
                  sizeof(B_Robot_T));

    {
      int32_T i;
      for (i = 0; i < 8; i++) {
        ((B_Robot_T *) ssGetLocalBlockIO(rts))->ec_Ebox_o3[i] = 0.0;
      }

      for (i = 0; i < 8; i++) {
        ((B_Robot_T *) ssGetLocalBlockIO(rts))->ec_Ebox_o3_h[i] = 0.0;
      }

      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Sum = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->ec_Ebox_o1[0] = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->ec_Ebox_o1[1] = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->ec_Ebox_o2[0] = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->ec_Ebox_o2[1] = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Gain = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Sum2 = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Sum_g = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Gain1 = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Sum2_a = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Sum_i = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->ec_Ebox_o1_h[0] = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->ec_Ebox_o1_h[1] = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->ec_Ebox_o2_f[0] = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->ec_Ebox_o2_f[1] = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Gain2 = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Sum2_f = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->PulseGenerator = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Dctintegrator = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Dctpd = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Dctnotch = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Dct2lowpass = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Saturation = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Sum1 = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Dctpd_o = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Dctnotch_k = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Dct2lowpass_p = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Saturation_g = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Dctintegrator_b = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Dctpd_c = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Dctnotch_e = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Dct2lowpass_m = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Product = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Sum1_a = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Dctpd_h = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Dctnotch_f = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Dct2lowpass_l = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Saturation2 = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Dctintegrator_f = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Dctpd_h3 = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Dctnotch_l = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Dct2lowpass_n = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Product_j = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Sum1_i = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Dctpd_m = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Dctnotch_ft = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Dct2lowpass_i = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->SaturationX = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Switch = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Add = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->TSamp = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->LimitAcceleration = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->TSamp_j = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->LimitAcceleration_g = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->TSamp_o = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->LimitAcceleration_a = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->jogSpeed = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->toPoint = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->homeControllerEnabled = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->resetEnc = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->homingBusy = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->airBagEnabled = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->airBagRef = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->controlEnabled = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Ready = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->StopSim = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->y = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->jogSpeed_g = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->toPoint_b = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->homeControllerEnabled_e = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->resetEnc_l = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->homingBusy_g = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->airBagEnabled_i = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->airBagRef_d = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->controlEnabled_g = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Ready_a = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->StopSim_g = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->jogSpeed_k = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->toPoint_g = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->homeControllerEnabled_p = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->resetEnc_o = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->homingBusy_e = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->airBagEnabled_d = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->airBagRef_i = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->controlEnabled_e = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->Ready_m = 0.0;
      ((B_Robot_T *) ssGetLocalBlockIO(rts))->StopSim_l = 0.0;
    }
  }

  _ssSetConstBlockIO(rts, &Robot_Invariant);

  /* model checksums */
  ssSetChecksumVal(rts, 0, 1729000626U);
  ssSetChecksumVal(rts, 1, 99127517U);
  ssSetChecksumVal(rts, 2, 4012009723U);
  ssSetChecksumVal(rts, 3, 103324907U);

  {
    /* child S-Function registration */
    ssSetNumSFunctions(rts, 26);

    /* register each child */
    {
      SimStruct *childSFunctions;
      SimStruct **childSFunctionPtrs;
      childSFunctions = (SimStruct *) malloc(26 * sizeof(SimStruct));
      ss_VALIDATE_MEMORY(rts,childSFunctions);
      (void) memset((void *)childSFunctions, 0,
                    26*sizeof(SimStruct));
      childSFunctionPtrs = (SimStruct **) malloc(26 * sizeof(SimStruct *));
      ss_VALIDATE_MEMORY(rts,childSFunctionPtrs);
      _ssSetSFunctions(rts, childSFunctionPtrs);

      {
        int_T i;
        for (i = 0; i < 26; i++) {
          _ssSetSFunction(rts, i, &childSFunctions[i]);
        }
      }

      /* Level2 S-Function Block: Robot/<S4>/ec_Ebox (ec_Ebox) */
      {
        SimStruct *childS = ssGetSFunction(rts, 0);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(3, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 3);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(2 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->Saturation_g;
            sfcnUPtrs[1] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->SaturationX;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 2);
          }

          /* port 1 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(2 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->PulseGenerator;
            sfcnUPtrs[1] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->Switch;
            _ssSetInputPortSignalPtrs(childS, 1, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 1, 1);
            ssSetInputPortWidth(childS, 1, 2);
          }

          /* port 2 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(8 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) (real_T*)&Robot_sf_RGND;
            sfcnUPtrs[1] = (real_T const *) (real_T*)&Robot_sf_RGND;
            sfcnUPtrs[2] = (real_T const *) (real_T*)&Robot_sf_RGND;
            sfcnUPtrs[3] = (real_T const *) (real_T*)&Robot_sf_RGND;
            sfcnUPtrs[4] = (real_T const *) (real_T*)&Robot_sf_RGND;
            sfcnUPtrs[5] = (real_T const *) (real_T*)&Robot_sf_RGND;
            sfcnUPtrs[6] = (real_T const *) (real_T*)&Robot_sf_RGND;
            sfcnUPtrs[7] = (real_T const *) (real_T*)&Robot_sf_RGND;
            _ssSetInputPortSignalPtrs(childS, 2, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 2, 1);
            ssSetInputPortWidth(childS, 2, 8);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(3, sizeof(struct _ssPortOutputs));
          ss_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 3);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 2);
            _ssSetOutputPortSignal(childS, 0, ((real_T *) ((B_Robot_T *)
              ssGetLocalBlockIO(rts))->ec_Ebox_o1));
          }

          /* port 1 */
          {
            _ssSetOutputPortNumDimensions(childS, 1, 1);
            ssSetOutputPortWidth(childS, 1, 2);
            _ssSetOutputPortSignal(childS, 1, ((real_T *) ((B_Robot_T *)
              ssGetLocalBlockIO(rts))->ec_Ebox_o2));
          }

          /* port 2 */
          {
            _ssSetOutputPortNumDimensions(childS, 2, 1);
            ssSetOutputPortWidth(childS, 2, 8);
            _ssSetOutputPortSignal(childS, 2, ((real_T *) ((B_Robot_T *)
              ssGetLocalBlockIO(rts))->ec_Ebox_o3));
          }
        }

        /* path info */
        _ssSetModelName(childS, "ec_Ebox");
        _ssSetPath(childS, "Robot/Robot Arm/IO/E-box/ec_Ebox");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,1,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) &Robot_ConstP.pooled5;
            for (i = 0; i < 1; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.pooled4);
          }

#endif

        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "ec_Ebox");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          ec_Ebox(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.0);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[0];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetInputPortConnected(childS, 1, 1);
        _ssSetInputPortConnected(childS, 2, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 1, 1);
        _ssSetOutputPortConnected(childS, 2, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);
        _ssSetOutputPortBeingMerged(childS, 1, 0);
        _ssSetOutputPortBeingMerged(childS, 2, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
        _ssSetInputPortBufferDstPort(childS, 1, -1);
        _ssSetInputPortBufferDstPort(childS, 2, -1);
      }

      /* Level2 S-Function Block: Robot/<S5>/ec_Ebox (ec_Ebox) */
      {
        SimStruct *childS = ssGetSFunction(rts, 1);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(3, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 3);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(2 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->Saturation2;
            sfcnUPtrs[1] = (real_T const *) (real_T*)&Robot_rtC(rts)
              ->Saturation3;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 2);
          }

          /* port 1 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(2 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) (real_T*)&Robot_sf_RGND;
            sfcnUPtrs[1] = (real_T const *) (real_T*)&Robot_sf_RGND;
            _ssSetInputPortSignalPtrs(childS, 1, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 1, 1);
            ssSetInputPortWidth(childS, 1, 2);
          }

          /* port 2 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(8 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) (real_T*)&Robot_sf_RGND;
            sfcnUPtrs[1] = (real_T const *) (real_T*)&Robot_sf_RGND;
            sfcnUPtrs[2] = (real_T const *) (real_T*)&Robot_sf_RGND;
            sfcnUPtrs[3] = (real_T const *) (real_T*)&Robot_sf_RGND;
            sfcnUPtrs[4] = (real_T const *) (real_T*)&Robot_sf_RGND;
            sfcnUPtrs[5] = (real_T const *) (real_T*)&Robot_sf_RGND;
            sfcnUPtrs[6] = (real_T const *) (real_T*)&Robot_sf_RGND;
            sfcnUPtrs[7] = (real_T const *) (real_T*)&Robot_sf_RGND;
            _ssSetInputPortSignalPtrs(childS, 2, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 2, 1);
            ssSetInputPortWidth(childS, 2, 8);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(3, sizeof(struct _ssPortOutputs));
          ss_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 3);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 2);
            _ssSetOutputPortSignal(childS, 0, ((real_T *) ((B_Robot_T *)
              ssGetLocalBlockIO(rts))->ec_Ebox_o1_h));
          }

          /* port 1 */
          {
            _ssSetOutputPortNumDimensions(childS, 1, 1);
            ssSetOutputPortWidth(childS, 1, 2);
            _ssSetOutputPortSignal(childS, 1, ((real_T *) ((B_Robot_T *)
              ssGetLocalBlockIO(rts))->ec_Ebox_o2_f));
          }

          /* port 2 */
          {
            _ssSetOutputPortNumDimensions(childS, 2, 1);
            ssSetOutputPortWidth(childS, 2, 8);
            _ssSetOutputPortSignal(childS, 2, ((real_T *) ((B_Robot_T *)
              ssGetLocalBlockIO(rts))->ec_Ebox_o3_h));
          }
        }

        /* path info */
        _ssSetModelName(childS, "ec_Ebox");
        _ssSetPath(childS, "Robot/Robot Arm/IO/E-box1/ec_Ebox");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,1,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) &Robot_ConstP.pooled7;
            for (i = 0; i < 1; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.pooled6);
          }

#endif

        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "ec_Ebox");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          ec_Ebox(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.0);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[0];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetInputPortConnected(childS, 1, 1);
        _ssSetInputPortConnected(childS, 2, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 1, 1);
        _ssSetOutputPortConnected(childS, 2, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);
        _ssSetOutputPortBeingMerged(childS, 1, 0);
        _ssSetOutputPortBeingMerged(childS, 2, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
        _ssSetInputPortBufferDstPort(childS, 1, -1);
        _ssSetInputPortBufferDstPort(childS, 2, -1);
      }

      /* Level2 S-Function Block: Robot/<S8>/Dctintegrator (dweakint) */
      {
        SimStruct *childS = ssGetSFunction(rts, 2);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->Sum2;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          ss_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *) &((B_Robot_T *)
              ssGetLocalBlockIO(rts))->Dctintegrator));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dweakint");
        _ssSetPath(childS,
                   "Robot/Robot Arm/Supervisor/Supervisory Controller R/Dctintegrator");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,2,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) Robot_ConstP.pooled11;
            for (i = 0; i < 2; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.pooled10);
          }

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 16))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          ss_VALIDATE_MEMORY(rts,dWorkRecord);
          ss_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 2);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 16))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dweakint");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          dweakint(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.000244140625);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[1];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: Robot/<S11>/Dctpd (dpd) */
      {
        SimStruct *childS = ssGetSFunction(rts, 3);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->Dctintegrator;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          ss_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *) &((B_Robot_T *)
              ssGetLocalBlockIO(rts))->Dctpd));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dpd");
        _ssSetPath(childS,
                   "Robot/Robot Arm/Supervisor/Supervisory Controller R/ControllerR/Dctpd");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,3,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) Robot_ConstP.Dctpd_P1;
            for (i = 0; i < 3; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.Dctpd_P1_Size);
          }

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 17))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          ss_VALIDATE_MEMORY(rts,dWorkRecord);
          ss_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 2);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 17))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dpd");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          dpd(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.000244140625);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[1];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: Robot/<S11>/Dctnotch (dnotch) */
      {
        SimStruct *childS = ssGetSFunction(rts, 4);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->Dctpd;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          ss_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *) &((B_Robot_T *)
              ssGetLocalBlockIO(rts))->Dctnotch));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dnotch");
        _ssSetPath(childS,
                   "Robot/Robot Arm/Supervisor/Supervisory Controller R/ControllerR/Dctnotch");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,5,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) Robot_ConstP.pooled13;
            for (i = 0; i < 5; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.pooled12);
          }

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 18))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          ss_VALIDATE_MEMORY(rts,dWorkRecord);
          ss_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 4);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 18))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dnotch");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          dnotch(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.000244140625);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[1];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: Robot/<S11>/Dct2lowpass (dlowpass2) */
      {
        SimStruct *childS = ssGetSFunction(rts, 5);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->Dctnotch;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          ss_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *) &((B_Robot_T *)
              ssGetLocalBlockIO(rts))->Dct2lowpass));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dlowpass2");
        _ssSetPath(childS,
                   "Robot/Robot Arm/Supervisor/Supervisory Controller R/ControllerR/Dct2lowpass");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,3,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) Robot_ConstP.pooled15;
            for (i = 0; i < 3; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.pooled14);
          }

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 19))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          ss_VALIDATE_MEMORY(rts,dWorkRecord);
          ss_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 4);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 19))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dlowpass2");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          dlowpass2(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.000244140625);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[1];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: Robot/<S12>/Dctpd (dpd) */
      {
        SimStruct *childS = ssGetSFunction(rts, 6);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->Sum1;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          ss_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *) &((B_Robot_T *)
              ssGetLocalBlockIO(rts))->Dctpd_o));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dpd");
        _ssSetPath(childS,
                   "Robot/Robot Arm/Supervisor/Supervisory Controller R/ControllerR1/Dctpd");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,3,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) Robot_ConstP.Dctpd_P1_h;
            for (i = 0; i < 3; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.Dctpd_P1_Size_c);
          }

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 20))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          ss_VALIDATE_MEMORY(rts,dWorkRecord);
          ss_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 2);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 20))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dpd");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          dpd(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.000244140625);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[1];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: Robot/<S12>/Dctnotch (dnotch) */
      {
        SimStruct *childS = ssGetSFunction(rts, 7);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->Dctpd_o;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          ss_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *) &((B_Robot_T *)
              ssGetLocalBlockIO(rts))->Dctnotch_k));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dnotch");
        _ssSetPath(childS,
                   "Robot/Robot Arm/Supervisor/Supervisory Controller R/ControllerR1/Dctnotch");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,5,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) Robot_ConstP.pooled13;
            for (i = 0; i < 5; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.pooled12);
          }

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 21))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          ss_VALIDATE_MEMORY(rts,dWorkRecord);
          ss_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 4);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 21))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dnotch");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          dnotch(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.000244140625);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[1];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: Robot/<S12>/Dct2lowpass (dlowpass2) */
      {
        SimStruct *childS = ssGetSFunction(rts, 8);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->Dctnotch_k;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          ss_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *) &((B_Robot_T *)
              ssGetLocalBlockIO(rts))->Dct2lowpass_p));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dlowpass2");
        _ssSetPath(childS,
                   "Robot/Robot Arm/Supervisor/Supervisory Controller R/ControllerR1/Dct2lowpass");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,3,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) Robot_ConstP.pooled15;
            for (i = 0; i < 3; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.pooled14);
          }

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 22))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          ss_VALIDATE_MEMORY(rts,dWorkRecord);
          ss_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 4);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 22))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dlowpass2");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          dlowpass2(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.000244140625);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[1];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: Robot/<S10>/Dctintegrator (dweakint) */
      {
        SimStruct *childS = ssGetSFunction(rts, 9);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->Sum2_f;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          ss_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *) &((B_Robot_T *)
              ssGetLocalBlockIO(rts))->Dctintegrator_b));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dweakint");
        _ssSetPath(childS,
                   "Robot/Robot Arm/Supervisor/Supervisory Controller Z/Dctintegrator");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,2,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) Robot_ConstP.pooled11;
            for (i = 0; i < 2; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.pooled10);
          }

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 23))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          ss_VALIDATE_MEMORY(rts,dWorkRecord);
          ss_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 2);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 23))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dweakint");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          dweakint(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.000244140625);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[1];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: Robot/<S30>/Dctpd (dpd) */
      {
        SimStruct *childS = ssGetSFunction(rts, 10);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->Dctintegrator_b;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          ss_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *) &((B_Robot_T *)
              ssGetLocalBlockIO(rts))->Dctpd_c));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dpd");
        _ssSetPath(childS,
                   "Robot/Robot Arm/Supervisor/Supervisory Controller Z/Controller2/Dctpd");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,3,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) Robot_ConstP.pooled18;
            for (i = 0; i < 3; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.pooled17);
          }

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 24))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          ss_VALIDATE_MEMORY(rts,dWorkRecord);
          ss_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 2);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 24))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dpd");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          dpd(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.000244140625);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[1];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: Robot/<S30>/Dctnotch (dnotch) */
      {
        SimStruct *childS = ssGetSFunction(rts, 11);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->Dctpd_c;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          ss_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *) &((B_Robot_T *)
              ssGetLocalBlockIO(rts))->Dctnotch_e));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dnotch");
        _ssSetPath(childS,
                   "Robot/Robot Arm/Supervisor/Supervisory Controller Z/Controller2/Dctnotch");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,5,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) Robot_ConstP.pooled13;
            for (i = 0; i < 5; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.pooled12);
          }

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 25))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          ss_VALIDATE_MEMORY(rts,dWorkRecord);
          ss_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 4);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 25))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dnotch");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          dnotch(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.000244140625);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[1];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: Robot/<S30>/Dct2lowpass (dlowpass2) */
      {
        SimStruct *childS = ssGetSFunction(rts, 12);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->Dctnotch_e;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          ss_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *) &((B_Robot_T *)
              ssGetLocalBlockIO(rts))->Dct2lowpass_m));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dlowpass2");
        _ssSetPath(childS,
                   "Robot/Robot Arm/Supervisor/Supervisory Controller Z/Controller2/Dct2lowpass");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,3,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) Robot_ConstP.pooled20;
            for (i = 0; i < 3; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.pooled19);
          }

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 26))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          ss_VALIDATE_MEMORY(rts,dWorkRecord);
          ss_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 4);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 26))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dlowpass2");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          dlowpass2(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.000244140625);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[1];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: Robot/<S29>/Dctpd (dpd) */
      {
        SimStruct *childS = ssGetSFunction(rts, 13);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->Sum1_a;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          ss_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *) &((B_Robot_T *)
              ssGetLocalBlockIO(rts))->Dctpd_h));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dpd");
        _ssSetPath(childS,
                   "Robot/Robot Arm/Supervisor/Supervisory Controller Z/Controller1/Dctpd");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,3,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) Robot_ConstP.pooled18;
            for (i = 0; i < 3; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.pooled17);
          }

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 27))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          ss_VALIDATE_MEMORY(rts,dWorkRecord);
          ss_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 2);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 27))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dpd");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          dpd(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.000244140625);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[1];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: Robot/<S29>/Dctnotch (dnotch) */
      {
        SimStruct *childS = ssGetSFunction(rts, 14);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->Dctpd_h;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          ss_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *) &((B_Robot_T *)
              ssGetLocalBlockIO(rts))->Dctnotch_f));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dnotch");
        _ssSetPath(childS,
                   "Robot/Robot Arm/Supervisor/Supervisory Controller Z/Controller1/Dctnotch");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,5,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) Robot_ConstP.pooled13;
            for (i = 0; i < 5; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.pooled12);
          }

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 28))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          ss_VALIDATE_MEMORY(rts,dWorkRecord);
          ss_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 4);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 28))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dnotch");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          dnotch(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.000244140625);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[1];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: Robot/<S29>/Dct2lowpass (dlowpass2) */
      {
        SimStruct *childS = ssGetSFunction(rts, 15);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->Dctnotch_f;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          ss_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *) &((B_Robot_T *)
              ssGetLocalBlockIO(rts))->Dct2lowpass_l));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dlowpass2");
        _ssSetPath(childS,
                   "Robot/Robot Arm/Supervisor/Supervisory Controller Z/Controller1/Dct2lowpass");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,3,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) Robot_ConstP.pooled20;
            for (i = 0; i < 3; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.pooled19);
          }

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 29))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          ss_VALIDATE_MEMORY(rts,dWorkRecord);
          ss_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 4);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 29))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dlowpass2");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          dlowpass2(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.000244140625);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[1];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: Robot/<S9>/Dctintegrator (dweakint) */
      {
        SimStruct *childS = ssGetSFunction(rts, 16);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->Sum2_a;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          ss_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *) &((B_Robot_T *)
              ssGetLocalBlockIO(rts))->Dctintegrator_f));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dweakint");
        _ssSetPath(childS,
                   "Robot/Robot Arm/Supervisor/Supervisory Controller X/Dctintegrator");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,2,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) Robot_ConstP.pooled11;
            for (i = 0; i < 2; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.pooled10);
          }

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 30))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          ss_VALIDATE_MEMORY(rts,dWorkRecord);
          ss_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 2);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 30))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dweakint");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          dweakint(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.000244140625);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[1];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: Robot/<S19>/Dctpd (dpd) */
      {
        SimStruct *childS = ssGetSFunction(rts, 17);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->Dctintegrator_f;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          ss_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *) &((B_Robot_T *)
              ssGetLocalBlockIO(rts))->Dctpd_h3));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dpd");
        _ssSetPath(childS,
                   "Robot/Robot Arm/Supervisor/Supervisory Controller X/ControllerX/Dctpd");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,3,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) Robot_ConstP.pooled22;
            for (i = 0; i < 3; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.pooled21);
          }

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 31))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          ss_VALIDATE_MEMORY(rts,dWorkRecord);
          ss_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 2);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 31))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dpd");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          dpd(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.000244140625);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[1];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: Robot/<S19>/Dctnotch (dnotch) */
      {
        SimStruct *childS = ssGetSFunction(rts, 18);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->Dctpd_h3;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          ss_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *) &((B_Robot_T *)
              ssGetLocalBlockIO(rts))->Dctnotch_l));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dnotch");
        _ssSetPath(childS,
                   "Robot/Robot Arm/Supervisor/Supervisory Controller X/ControllerX/Dctnotch");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,5,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) Robot_ConstP.pooled13;
            for (i = 0; i < 5; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.pooled12);
          }

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 32))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          ss_VALIDATE_MEMORY(rts,dWorkRecord);
          ss_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 4);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 32))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dnotch");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          dnotch(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.000244140625);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[1];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: Robot/<S19>/Dct2lowpass (dlowpass2) */
      {
        SimStruct *childS = ssGetSFunction(rts, 19);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->Dctnotch_l;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          ss_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *) &((B_Robot_T *)
              ssGetLocalBlockIO(rts))->Dct2lowpass_n));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dlowpass2");
        _ssSetPath(childS,
                   "Robot/Robot Arm/Supervisor/Supervisory Controller X/ControllerX/Dct2lowpass");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,3,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) Robot_ConstP.pooled20;
            for (i = 0; i < 3; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.pooled19);
          }

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 33))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          ss_VALIDATE_MEMORY(rts,dWorkRecord);
          ss_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 4);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 33))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dlowpass2");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          dlowpass2(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.000244140625);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[1];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: Robot/<S20>/Dctpd (dpd) */
      {
        SimStruct *childS = ssGetSFunction(rts, 20);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->Sum1_i;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          ss_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *) &((B_Robot_T *)
              ssGetLocalBlockIO(rts))->Dctpd_m));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dpd");
        _ssSetPath(childS,
                   "Robot/Robot Arm/Supervisor/Supervisory Controller X/ControllerX1/Dctpd");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,3,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) Robot_ConstP.pooled22;
            for (i = 0; i < 3; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.pooled21);
          }

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 34))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          ss_VALIDATE_MEMORY(rts,dWorkRecord);
          ss_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 2);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 34))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dpd");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          dpd(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.000244140625);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[1];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: Robot/<S20>/Dctnotch (dnotch) */
      {
        SimStruct *childS = ssGetSFunction(rts, 21);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->Dctpd_m;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          ss_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *) &((B_Robot_T *)
              ssGetLocalBlockIO(rts))->Dctnotch_ft));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dnotch");
        _ssSetPath(childS,
                   "Robot/Robot Arm/Supervisor/Supervisory Controller X/ControllerX1/Dctnotch");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,5,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) Robot_ConstP.pooled13;
            for (i = 0; i < 5; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.pooled12);
          }

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 35))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          ss_VALIDATE_MEMORY(rts,dWorkRecord);
          ss_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 4);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 35))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dnotch");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          dnotch(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.000244140625);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[1];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: Robot/<S20>/Dct2lowpass (dlowpass2) */
      {
        SimStruct *childS = ssGetSFunction(rts, 22);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->Dctnotch_ft;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* outputs */
        {
          struct _ssPortOutputs *outputPortInfo = (struct _ssPortOutputs *)
            calloc(1, sizeof(struct _ssPortOutputs));
          ss_VALIDATE_MEMORY(rts,outputPortInfo);
          ssSetPortInfoForOutputs(childS, &outputPortInfo[0]);
          _ssSetNumOutputPorts(childS, 1);

          /* port 0 */
          {
            _ssSetOutputPortNumDimensions(childS, 0, 1);
            ssSetOutputPortWidth(childS, 0, 1);
            _ssSetOutputPortSignal(childS, 0, ((real_T *) &((B_Robot_T *)
              ssGetLocalBlockIO(rts))->Dct2lowpass_i));
          }
        }

        /* path info */
        _ssSetModelName(childS, "dlowpass2");
        _ssSetPath(childS,
                   "Robot/Robot Arm/Supervisor/Supervisory Controller X/ControllerX1/Dct2lowpass");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(1 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 1);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(1, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          1 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,3,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) Robot_ConstP.pooled20;
            for (i = 0; i < 3; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.pooled19);
          }

#endif

        }

        /* work vectors */
        _ssSetRWork(childS, (real_T *) &((real_T*) ssGetDWork(rts, 36))[0]);

        {
          struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *) malloc
            (1 * sizeof(struct _ssDWorkRecord));
          struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
            calloc(1, sizeof(struct _ssDWorkAuxRecord));
          ss_VALIDATE_MEMORY(rts,dWorkRecord);
          ss_VALIDATE_MEMORY(rts,dWorkAuxRecord);
          ssSetSFcnDWork(childS, dWorkRecord);
          ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
          _ssSetNumDWork(childS, 1);

          /* RWORK */
          ssSetDWorkWidth(childS, 0, 4);
          ssSetDWorkDataType(childS, 0,SS_DOUBLE);
          ssSetDWorkComplexSignal(childS, 0, 0);
          _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 36))[0]);
        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "dlowpass2");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          dlowpass2(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.000244140625);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[1];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);
        _ssSetOutputPortConnected(childS, 0, 1);
        _ssSetOutputPortBeingMerged(childS, 0, 0);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: Robot/<S8>/Reset EncoderR (ec_EboxResetEnc) */
      {
        SimStruct *childS = ssGetSFunction(rts, 23);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->resetEnc_o;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* path info */
        _ssSetModelName(childS, "ec_EboxResetEnc");
        _ssSetPath(childS,
                   "Robot/Robot Arm/Supervisor/Supervisory Controller R/Reset EncoderR");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(2 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 2);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(2, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          2 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,1,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) &Robot_ConstP.pooled5;
            for (i = 0; i < 1; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
            param = mxCreateDoubleMatrix(1,1,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) &Robot_ConstP.pooled5;
            for (i = 0; i < 1; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 1, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.pooled4);
            _ssSetSFcnParam(childS, 1, (mxArray*)Robot_ConstP.pooled4);
          }

#endif

        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "ec_EboxResetEnc");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          ec_EboxResetEnc(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.0);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[0];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: Robot/<S9>/Reset EncoderX (ec_EboxResetEnc) */
      {
        SimStruct *childS = ssGetSFunction(rts, 24);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->resetEnc_l;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* path info */
        _ssSetModelName(childS, "ec_EboxResetEnc");
        _ssSetPath(childS,
                   "Robot/Robot Arm/Supervisor/Supervisory Controller X/Reset EncoderX");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(2 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 2);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(2, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          2 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,1,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) &Robot_ConstP.pooled5;
            for (i = 0; i < 1; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
            param = mxCreateDoubleMatrix(1,1,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) &Robot_ConstP.pooled7;
            for (i = 0; i < 1; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 1, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.pooled4);
            _ssSetSFcnParam(childS, 1, (mxArray*)Robot_ConstP.pooled6);
          }

#endif

        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "ec_EboxResetEnc");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          ec_EboxResetEnc(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.0);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[0];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }

      /* Level2 S-Function Block: Robot/<S10>/Reset EncoderZ (ec_EboxResetEnc) */
      {
        SimStruct *childS = ssGetSFunction(rts, 25);

        /* timing info */
        time_T *sfcnPeriod;
        time_T *sfcnOffset;
        int_T *sfcnTsMap;
        sfcnPeriod = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnPeriod);
        sfcnOffset = (time_T *) malloc(1 * sizeof(time_T));
        ss_VALIDATE_MEMORY(rts,sfcnOffset);
        sfcnTsMap = (int_T *) malloc(1 * sizeof(int_T ));
        ss_VALIDATE_MEMORY(rts,sfcnTsMap);
        (void) memset((void*)sfcnPeriod, 0,
                      sizeof(time_T)*1);
        (void) memset((void*)sfcnOffset, 0,
                      sizeof(time_T)*1);
        ssSetSampleTimePtr(childS, &sfcnPeriod[0]);
        ssSetOffsetTimePtr(childS, &sfcnOffset[0]);
        _ssSetSampleTimeTaskIDPtr(childS, sfcnTsMap);

        /* Set up the mdlInfo pointer */
# ifdef USE_RTMODEL

        {
          struct _ssBlkInfo2 *blkInfo2 = (struct _ssBlkInfo2 *) malloc(sizeof(
              struct _ssBlkInfo2));
          ss_VALIDATE_MEMORY(rts,blkInfo2);
          ssSetBlkInfo2Ptr(childS, blkInfo2);
        }

        ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

        _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

        /* Allocate memory of model methods 2 */
        {
          struct _ssSFcnModelMethods2 *methods2 = (struct _ssSFcnModelMethods2 *)
            malloc(sizeof(struct _ssSFcnModelMethods2));
          ss_VALIDATE_MEMORY(rts,methods2);
          ssSetModelMethods2(childS, methods2);
        }

        /* Allocate memory of model methods 3 */
        {
          struct _ssSFcnModelMethods3 *methods3 = (struct _ssSFcnModelMethods3 *)
            malloc(sizeof(struct _ssSFcnModelMethods3));
          ss_VALIDATE_MEMORY(rts,methods3);
          ssSetModelMethods3(childS, methods3);
        }

        /* Allocate memory for states auxilliary information */
        {
          struct _ssStatesInfo2 *statesInfo2 = (struct _ssStatesInfo2 *) malloc
            (sizeof(struct _ssStatesInfo2));
          ssPeriodicStatesInfo* periodicStatesInfo = (ssPeriodicStatesInfo*)
            malloc(sizeof(ssPeriodicStatesInfo));
          ss_VALIDATE_MEMORY(rts,statesInfo2);
          ssSetStatesInfo2(childS, statesInfo2);
          ss_VALIDATE_MEMORY(rts,periodicStatesInfo);
          ssSetPeriodicStatesInfo(childS, periodicStatesInfo);
        }

        ssSetRegNumInputPortsFcn(childS, (_ssRegNumInputPortsFcn)
          RegNumInputPorts);
        ssSetRegNumInputPortsFcnArg(childS,childS);

        /* inputs */
        {
          struct _ssPortInputs *inputPortInfo =
            (struct _ssPortInputs *) calloc(1, sizeof(struct _ssPortInputs));
          ss_VALIDATE_MEMORY(rts,inputPortInfo);
          _ssSetNumInputPorts(childS, 1);
          ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

          /* port 0 */
          {
            real_T const **sfcnUPtrs = (real_T const **)
              malloc(1 * sizeof(real_T *));
            ss_VALIDATE_MEMORY(rts,sfcnUPtrs);
            sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
              (rts))->resetEnc;
            _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
            _ssSetInputPortNumDimensions(childS, 0, 1);
            ssSetInputPortWidth(childS, 0, 1);
          }
        }

        ssSetRegNumOutputPortsFcn(childS, (_ssRegNumOutputPortsFcn)
          RegNumOutputPorts);
        ssSetRegNumOutputPortsFcnArg(childS,childS);

        /* path info */
        _ssSetModelName(childS, "ec_EboxResetEnc");
        _ssSetPath(childS,
                   "Robot/Robot Arm/Supervisor/Supervisory Controller Z/Reset EncoderZ");
        if (ssGetRTModel(rts) == (NULL)) {
          _ssSetParentSS(childS, rts);
          _ssSetRootSS(childS, ssGetRootSS(rts));
        } else {
          ssSetRTModel(childS,ssGetRTModel(rts));
          _ssSetParentSS(childS, (NULL));
          _ssSetRootSS(childS, childS);
        }

        ssSetVersion(childS, SIMSTRUCT_VERSION_LEVEL2);

        /* parameters */
        {
          mxArray **sfcnParams = (mxArray **) malloc(2 * sizeof(mxArray *));
          ss_VALIDATE_MEMORY(rts,sfcnParams);
          _ssSetSFcnParamsCount(childS, 2);
          _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

          {
            uint_T *attribs;
            attribs = (uint_T *) mxCalloc(2, sizeof(uint_T));
            mexMakeMemoryPersistent(attribs);
            ssSetSFcnParamAttribsPtr(childS, &attribs[0]);
            (void) memset((void *)&attribs[0], 0,
                          2 * sizeof(uint_T));
          }

#endif

#if defined(MATLAB_MEX_FILE)

          {
            mxArray *param;
            int_T i;
            real_T *vals;
            param = mxCreateDoubleMatrix(1,1,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) &Robot_ConstP.pooled7;
            for (i = 0; i < 1; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 0, param);
            param = mxCreateDoubleMatrix(1,1,mxREAL);
            mexMakeArrayPersistent(param);
            vals = (real_T *) &Robot_ConstP.pooled5;
            for (i = 0; i < 1; i++) {
              mxGetPr(param)[i] = vals[i];
            }

            _ssSetSFcnParam(childS, 1, param);
          }

#else

          {
            _ssSetSFcnParam(childS, 0, (mxArray*)Robot_ConstP.pooled6);
            _ssSetSFcnParam(childS, 1, (mxArray*)Robot_ConstP.pooled4);
          }

#endif

        }

        (childS)->regDataType.arg1 = ((void *)(childS));
        (childS)->regDataType.registerFcn = ((OldRegisterDataType)
          FcnSetErrorStatus);
        (childS)->regDataType.getSizeFcn = ((GetDataTypeSize)FcnSetErrorStatus);
        (childS)->regDataType.getZeroFcn = ((GetDataTypeZero)FcnSetErrorStatus);
        (childS)->regDataType.getNameFcn = ((GetDataTypeName)FcnSetErrorStatus);
        (childS)->regDataType.getIdFcn = ((GetDataTypeId)FcnSetErrorStatus);

        /* registration */
#if defined(MATLAB_MEX_FILE)

        {
          int_T i;
          mxArray *plhs[1];
          mxArray *prhs[4];
          double *pr;
          volatile int_T *intS = (int_T *)&childS;
          int_T addrlen = sizeof(SimStruct *);
          int_T m = addrlen/sizeof(int_T) + 1;
          prhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[1] = mxCreateDoubleMatrix(m,1,mxREAL);
          pr = mxGetPr(prhs[1]);
          for (i = 0; i < m - 1; i++) {
            pr[i] = (double)intS[i];
          }

          pr[i] = (double)SIMSTRUCT_VERSION_LEVEL2;
          prhs[2] = mxCreateDoubleMatrix(0,0,mxREAL);
          prhs[3] = mxCreateDoubleMatrix(1,1,mxREAL);

          /* Reset port dimensions info functions because the S-function
           * and accelerator mex-files explicitly set their dimensions,
           * i.e., they are not dynamically sized. For this case, the
           * mex-file is responsible for the dimensions info memory
           * and Simulink should not free it. This is achieved by
           * setting the following two methods to NULL.
           */
          ssSetRegInputPortDimensionInfoFcn(childS, (NULL));
          ssSetRegOutputPortDimensionInfoFcn(childS, (NULL));

          /*
           * Setup function pointers and call mdlInitializeSizes via
           * simulink.c
           */
          mexCallMATLAB(1, plhs, 4, prhs, "ec_EboxResetEnc");
          mxDestroyArray(plhs[0]);
          mxDestroyArray(prhs[0]);
          mxDestroyArray(prhs[1]);
          mxDestroyArray(prhs[2]);
          mxDestroyArray(prhs[3]);
        }

#else

        {
          ec_EboxResetEnc(childS);
          sfcnInitializeSizes(childS);
        }

#endif

        sfcnInitializeSampleTimes(childS);

        /* adjust sample time */
        ssSetSampleTime(childS, 0, 0.0);
        ssSetOffsetTime(childS, 0, 0.0);
        sfcnTsMap[0] = ssGetSampleTimeTaskIDPtr(rts)[0];

        /* set compiled values of dynamic vector attributes */
        ssSetNumNonsampledZCs(childS, 0);

        /* Update connectivity flags for each port */
        _ssSetInputPortConnected(childS, 0, 1);

        /* Update the BufferDstPort flags for each input port */
        _ssSetInputPortBufferDstPort(childS, 0, -1);
      }
    }
  }

  return (NULL);
}
