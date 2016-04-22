/* Include files */

#include "RA3_sfun.h"
#include "RA3_sfun_debug_macros.h"
#include "c5_RA3.h"
#include "c6_RA3.h"
#include "c7_RA3.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _RA3MachineNumber_;

/* Function Declarations */

/* Function Definitions */
void RA3_initializer(void)
{
}

void RA3_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_RA3_method_dispatcher(SimStruct *simstructPtr, unsigned int
  chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==5) {
    c5_RA3_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==6) {
    c6_RA3_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==7) {
    c7_RA3_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

extern void sf_RA3_uses_exported_functions(int nlhs, mxArray * plhs[], int nrhs,
  const mxArray * prhs[])
{
  plhs[0] = mxCreateLogicalScalar(0);
}

unsigned int sf_RA3_process_testpoint_info_call( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  char machineName[128];
  if (nrhs < 3 || !mxIsChar(prhs[0]) || !mxIsChar(prhs[1]))
    return 0;

  /* Possible call to get testpoint info. */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_testpoint_info"))
    return 0;
  mxGetString(prhs[1], machineName, sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (!strcmp(machineName, "RA3")) {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
    switch (chartFileNumber) {
     case 5:
      {
        extern mxArray *sf_c5_RA3_get_testpoint_info(void);
        plhs[0] = sf_c5_RA3_get_testpoint_info();
        break;
      }

     case 6:
      {
        extern mxArray *sf_c6_RA3_get_testpoint_info(void);
        plhs[0] = sf_c6_RA3_get_testpoint_info();
        break;
      }

     case 7:
      {
        extern mxArray *sf_c7_RA3_get_testpoint_info(void);
        plhs[0] = sf_c7_RA3_get_testpoint_info();
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }

    return 1;
  }

  return 0;

#else

  return 0;

#endif

}

unsigned int sf_RA3_process_check_sum_call( int nlhs, mxArray * plhs[], int nrhs,
  const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3391070293U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1956730699U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2468961525U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(161450788U);
    } else if (!strcmp(commandName,"exportedFcn")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 5:
        {
          extern void sf_c5_RA3_get_check_sum(mxArray *plhs[]);
          sf_c5_RA3_get_check_sum(plhs);
          break;
        }

       case 6:
        {
          extern void sf_c6_RA3_get_check_sum(mxArray *plhs[]);
          sf_c6_RA3_get_check_sum(plhs);
          break;
        }

       case 7:
        {
          extern void sf_c7_RA3_get_check_sum(mxArray *plhs[]);
          sf_c7_RA3_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2169004646U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4184909527U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3222334434U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4290633589U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(336410284U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2987541329U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(392407906U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1301646620U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_RA3_autoinheritance_info( int nlhs, mxArray * plhs[], int nrhs,
  const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  char aiChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the autoinheritance_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_autoinheritance_info"))
    return 0;
  mxGetString(prhs[2], aiChksum,sizeof(aiChksum)/sizeof(char));
  aiChksum[(sizeof(aiChksum)/sizeof(char)-1)] = '\0';

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 5:
      {
        if (strcmp(aiChksum, "DNtSvKK0rbxJTuChfBaHVF") == 0) {
          extern mxArray *sf_c5_RA3_get_autoinheritance_info(void);
          plhs[0] = sf_c5_RA3_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 6:
      {
        if (strcmp(aiChksum, "DNtSvKK0rbxJTuChfBaHVF") == 0) {
          extern mxArray *sf_c6_RA3_get_autoinheritance_info(void);
          plhs[0] = sf_c6_RA3_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 7:
      {
        if (strcmp(aiChksum, "BiQG36GXLgLd00Nav4vpDG") == 0) {
          extern mxArray *sf_c7_RA3_get_autoinheritance_info(void);
          plhs[0] = sf_c7_RA3_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_RA3_get_eml_resolved_functions_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  if (nrhs<2 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 5:
      {
        extern const mxArray *sf_c5_RA3_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c5_RA3_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 6:
      {
        extern const mxArray *sf_c6_RA3_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c6_RA3_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 7:
      {
        extern const mxArray *sf_c7_RA3_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c7_RA3_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_RA3_third_party_uses_info( int nlhs, mxArray * plhs[], int nrhs,
  const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the third_party_uses_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_third_party_uses_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 5:
      {
        if (strcmp(tpChksum, "sSQVJI6KLFizr7YEQXrQdQH") == 0) {
          extern mxArray *sf_c5_RA3_third_party_uses_info(void);
          plhs[0] = sf_c5_RA3_third_party_uses_info();
          break;
        }
      }

     case 6:
      {
        if (strcmp(tpChksum, "sBoGuA6RAIvFNw1mMUZaoQC") == 0) {
          extern mxArray *sf_c6_RA3_third_party_uses_info(void);
          plhs[0] = sf_c6_RA3_third_party_uses_info();
          break;
        }
      }

     case 7:
      {
        if (strcmp(tpChksum, "sRPsVQw9XSVF1y3SlLfhk8") == 0) {
          extern mxArray *sf_c7_RA3_third_party_uses_info(void);
          plhs[0] = sf_c7_RA3_third_party_uses_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_RA3_jit_fallback_info( int nlhs, mxArray * plhs[], int nrhs,
  const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the jit_fallback_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_jit_fallback_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 5:
      {
        if (strcmp(tpChksum, "sSQVJI6KLFizr7YEQXrQdQH") == 0) {
          extern mxArray *sf_c5_RA3_jit_fallback_info(void);
          plhs[0] = sf_c5_RA3_jit_fallback_info();
          break;
        }
      }

     case 6:
      {
        if (strcmp(tpChksum, "sBoGuA6RAIvFNw1mMUZaoQC") == 0) {
          extern mxArray *sf_c6_RA3_jit_fallback_info(void);
          plhs[0] = sf_c6_RA3_jit_fallback_info();
          break;
        }
      }

     case 7:
      {
        if (strcmp(tpChksum, "sRPsVQw9XSVF1y3SlLfhk8") == 0) {
          extern mxArray *sf_c7_RA3_jit_fallback_info(void);
          plhs[0] = sf_c7_RA3_jit_fallback_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_RA3_updateBuildInfo_args_info( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the updateBuildInfo_args_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_updateBuildInfo_args_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 5:
      {
        if (strcmp(tpChksum, "sSQVJI6KLFizr7YEQXrQdQH") == 0) {
          extern mxArray *sf_c5_RA3_updateBuildInfo_args_info(void);
          plhs[0] = sf_c5_RA3_updateBuildInfo_args_info();
          break;
        }
      }

     case 6:
      {
        if (strcmp(tpChksum, "sBoGuA6RAIvFNw1mMUZaoQC") == 0) {
          extern mxArray *sf_c6_RA3_updateBuildInfo_args_info(void);
          plhs[0] = sf_c6_RA3_updateBuildInfo_args_info();
          break;
        }
      }

     case 7:
      {
        if (strcmp(tpChksum, "sRPsVQw9XSVF1y3SlLfhk8") == 0) {
          extern mxArray *sf_c7_RA3_updateBuildInfo_args_info(void);
          plhs[0] = sf_c7_RA3_updateBuildInfo_args_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

void sf_RA3_get_post_codegen_info( int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[] )
{
  unsigned int chartFileNumber = (unsigned int) mxGetScalar(prhs[0]);
  char tpChksum[64];
  mxGetString(prhs[1], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  switch (chartFileNumber) {
   case 5:
    {
      if (strcmp(tpChksum, "sSQVJI6KLFizr7YEQXrQdQH") == 0) {
        extern mxArray *sf_c5_RA3_get_post_codegen_info(void);
        plhs[0] = sf_c5_RA3_get_post_codegen_info();
        return;
      }
    }
    break;

   case 6:
    {
      if (strcmp(tpChksum, "sBoGuA6RAIvFNw1mMUZaoQC") == 0) {
        extern mxArray *sf_c6_RA3_get_post_codegen_info(void);
        plhs[0] = sf_c6_RA3_get_post_codegen_info();
        return;
      }
    }
    break;

   case 7:
    {
      if (strcmp(tpChksum, "sRPsVQw9XSVF1y3SlLfhk8") == 0) {
        extern mxArray *sf_c7_RA3_get_post_codegen_info(void);
        plhs[0] = sf_c7_RA3_get_post_codegen_info();
        return;
      }
    }
    break;

   default:
    break;
  }

  plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
}

void RA3_debug_initialize(struct SfDebugInstanceStruct* debugInstance)
{
  _RA3MachineNumber_ = sf_debug_initialize_machine(debugInstance,"RA3","sfun",0,
    4,0,0,0);
  sf_debug_set_machine_event_thresholds(debugInstance,_RA3MachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(debugInstance,_RA3MachineNumber_,0);
}

void RA3_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
mxArray* load_RA3_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info("RA3", "RA3");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_RA3_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
