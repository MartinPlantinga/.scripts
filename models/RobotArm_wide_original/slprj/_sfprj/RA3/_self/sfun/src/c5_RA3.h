#ifndef __c5_RA3_h__
#define __c5_RA3_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc5_RA3InstanceStruct
#define typedef_SFc5_RA3InstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c5_doSetSimStateSideEffects;
  const mxArray *c5_setSimStateSideEffectsInfo;
  int32_T *c5_sfEvent;
  boolean_T *c5_isStable;
  uint8_T *c5_is_active_c5_RA3;
  uint8_T *c5_is_c5_RA3;
  real_T *c5_jogSpeed;
  real_T *c5_toPoint;
  real_T *c5_homeControllerEnabled;
  real_T *c5_resetEnc;
  real_T *c5_homingBusy;
  boolean_T *c5_homeSwitch;
  real_T *c5_carPos;
  real_T *c5_airBagEnabled;
  real_T *c5_airBagRef;
  real_T *c5_controlEnabled;
  real_T *c5_Ready;
  boolean_T *c5_AllReady;
  real_T *c5_StopSim;
  uint16_T *c5_temporalCounter_i1;
} SFc5_RA3InstanceStruct;

#endif                                 /*typedef_SFc5_RA3InstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c5_RA3_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c5_RA3_get_check_sum(mxArray *plhs[]);
extern void c5_RA3_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
