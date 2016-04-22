/*
 * Robot_sid.h
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

/* statically allocated instance data for model: Robot */
{
  extern const ConstB_Robot_T Robot_Invariant;

  {
    /* Local SimStruct for the generated S-Function */
    static LocalS slS;
    LocalS *lS = &slS;
    ssSetUserData(rts, lS);

    /* block I/O */
    {
      static B_Robot_T sfcnB;
      void *b = (real_T *) &sfcnB;
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
        static SimStruct childSFunctions[26];
        static SimStruct *childSFunctionPtrs[26];
        (void) memset((void *)&childSFunctions[0], 0,
                      sizeof(childSFunctions));
        _ssSetSFunctions(rts, &childSFunctionPtrs[0]);

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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[3];
            _ssSetNumInputPorts(childS, 3);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[2];
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
              static real_T const *sfcnUPtrs[2];
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
              static real_T const *sfcnUPtrs[8];
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

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[3];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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

          /* registration */
          ec_Ebox(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[3];
            _ssSetNumInputPorts(childS, 3);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[2];
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
              static real_T const *sfcnUPtrs[2];
              sfcnUPtrs[0] = (real_T const *) (real_T*)&Robot_sf_RGND;
              sfcnUPtrs[1] = (real_T const *) (real_T*)&Robot_sf_RGND;
              _ssSetInputPortSignalPtrs(childS, 1, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 1, 1);
              ssSetInputPortWidth(childS, 1, 2);
            }

            /* port 2 */
            {
              static real_T const *sfcnUPtrs[8];
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

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[3];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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

          /* registration */
          ec_Ebox(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
                (rts))->Sum2;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 2);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 16))[0]);
          }

          /* registration */
          dweakint(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
                (rts))->Dctintegrator;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 2);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 17))[0]);
          }

          /* registration */
          dpd(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
                (rts))->Dctpd;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 4);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 18))[0]);
          }

          /* registration */
          dnotch(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
                (rts))->Dctnotch;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 4);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 19))[0]);
          }

          /* registration */
          dlowpass2(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
                (rts))->Sum1;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 2);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 20))[0]);
          }

          /* registration */
          dpd(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
                (rts))->Dctpd_o;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 4);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 21))[0]);
          }

          /* registration */
          dnotch(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
                (rts))->Dctnotch_k;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 4);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 22))[0]);
          }

          /* registration */
          dlowpass2(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
                (rts))->Sum2_f;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 2);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 23))[0]);
          }

          /* registration */
          dweakint(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
                (rts))->Dctintegrator_b;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 2);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 24))[0]);
          }

          /* registration */
          dpd(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
                (rts))->Dctpd_c;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 4);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 25))[0]);
          }

          /* registration */
          dnotch(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
                (rts))->Dctnotch_e;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 4);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 26))[0]);
          }

          /* registration */
          dlowpass2(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
                (rts))->Sum1_a;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 2);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 27))[0]);
          }

          /* registration */
          dpd(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
                (rts))->Dctpd_h;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 4);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 28))[0]);
          }

          /* registration */
          dnotch(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
                (rts))->Dctnotch_f;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 4);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 29))[0]);
          }

          /* registration */
          dlowpass2(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
                (rts))->Sum2_a;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 2);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 30))[0]);
          }

          /* registration */
          dweakint(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
                (rts))->Dctintegrator_f;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 2);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 31))[0]);
          }

          /* registration */
          dpd(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
                (rts))->Dctpd_h3;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 4);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 32))[0]);
          }

          /* registration */
          dnotch(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
                (rts))->Dctnotch_l;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 4);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 33))[0]);
          }

          /* registration */
          dlowpass2(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
                (rts))->Sum1_i;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 2);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 34))[0]);
          }

          /* registration */
          dpd(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
                (rts))->Dctpd_m;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 4);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 35))[0]);
          }

          /* registration */
          dnotch(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
                (rts))->Dctnotch_ft;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

          /* outputs */
          {
            static struct _ssPortOutputs outputPortInfo[1];
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
            static mxArray *sfcnParams[1];
            _ssSetSFcnParamsCount(childS, 1);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[1];
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
            static struct _ssDWorkRecord dWorkRecord[1];
            static struct _ssDWorkAuxRecord dWorkAuxRecord[1];
            ssSetSFcnDWork(childS, dWorkRecord);
            ssSetSFcnDWorkAux(childS, dWorkAuxRecord);
            _ssSetNumDWork(childS, 1);

            /* RWORK */
            ssSetDWorkWidth(childS, 0, 4);
            ssSetDWorkDataType(childS, 0,SS_DOUBLE);
            ssSetDWorkComplexSignal(childS, 0, 0);
            _ssSetDWork(childS, 0, &((real_T*) ssGetDWork(rts, 36))[0]);
          }

          /* registration */
          dlowpass2(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
                (rts))->resetEnc_o;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

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
            static mxArray *sfcnParams[2];
            _ssSetSFcnParamsCount(childS, 2);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[2];
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

          /* registration */
          ec_EboxResetEnc(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
                (rts))->resetEnc_l;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

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
            static mxArray *sfcnParams[2];
            _ssSetSFcnParamsCount(childS, 2);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[2];
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

          /* registration */
          ec_EboxResetEnc(childS);
          sfcnInitializeSizes(childS);
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
          static time_T sfcnPeriod[1];
          static time_T sfcnOffset[1];
          static int_T sfcnTsMap[1];
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
            static struct _ssBlkInfo2 _blkInfo2;
            struct _ssBlkInfo2 *blkInfo2 = &_blkInfo2;
            ssSetBlkInfo2Ptr(childS, blkInfo2);
          }

          ssSetRTWSfcnInfo(childS, ssGetRTWSfcnInfo(rts));

# else

          _ssSetMdlInfoPtr(childS, ssGetMdlInfoPtr(rts));

# endif                                /* USE_RTMODEL */

          /* Allocate memory of model methods 2 */
          {
            static struct _ssSFcnModelMethods2 methods2;
            ssSetModelMethods2(childS, &methods2);
          }

          /* Allocate memory of model methods 3 */
          {
            static struct _ssSFcnModelMethods3 methods3;
            ssSetModelMethods3(childS, &methods3);
          }

          /* Allocate memory for states auxilliary information */
          {
            static struct _ssStatesInfo2 statesInfo2;
            static ssPeriodicStatesInfo periodicStatesInfo;
            ssSetStatesInfo2(childS, &statesInfo2);
            ssSetPeriodicStatesInfo(childS, &periodicStatesInfo);
          }

          /* inputs */
          {
            static struct _ssPortInputs inputPortInfo[1];
            _ssSetNumInputPorts(childS, 1);
            ssSetPortInfoForInputs(childS, &inputPortInfo[0]);

            /* port 0 */
            {
              static real_T const *sfcnUPtrs[1];
              sfcnUPtrs[0] = (real_T const *) &((B_Robot_T *) ssGetLocalBlockIO
                (rts))->resetEnc;
              _ssSetInputPortSignalPtrs(childS, 0, (InputPtrsType)&sfcnUPtrs[0]);
              _ssSetInputPortNumDimensions(childS, 0, 1);
              ssSetInputPortWidth(childS, 0, 1);
            }
          }

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
            static mxArray *sfcnParams[2];
            _ssSetSFcnParamsCount(childS, 2);
            _ssSetSFcnParamsPtr(childS, &sfcnParams[0]);

#if defined(MATLAB_MEX_FILE)

            {
              static uint_T attribs[2];
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

          /* registration */
          ec_EboxResetEnc(childS);
          sfcnInitializeSizes(childS);
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
  }
}
