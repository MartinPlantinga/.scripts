#ifndef __c6_RA2_h__
#define __c6_RA2_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc6_RA2InstanceStruct
#define typedef_SFc6_RA2InstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c6_doSetSimStateSideEffects;
  const mxArray *c6_setSimStateSideEffectsInfo;
  int32_T *c6_sfEvent;
  boolean_T *c6_isStable;
  uint8_T *c6_is_active_c6_RA2;
  uint8_T *c6_is_c6_RA2;
  real_T *c6_jogSpeed;
  real_T *c6_toPoint;
  real_T *c6_homeControllerEnabled;
  real_T *c6_resetEnc;
  real_T *c6_homingBusy;
  boolean_T *c6_homeSwitch;
  real_T *c6_carPos;
  real_T *c6_airBagEnabled;
  real_T *c6_airBagRef;
  real_T *c6_controlEnabled;
  real_T *c6_Ready;
  boolean_T *c6_AllReady;
  real_T *c6_StopSim;
  uint16_T *c6_temporalCounter_i1;
} SFc6_RA2InstanceStruct;

#endif                                 /*typedef_SFc6_RA2InstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c6_RA2_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c6_RA2_get_check_sum(mxArray *plhs[]);
extern void c6_RA2_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
