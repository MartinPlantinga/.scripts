#ifndef __c7_RA2_h__
#define __c7_RA2_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc7_RA2InstanceStruct
#define typedef_SFc7_RA2InstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c7_doSetSimStateSideEffects;
  const mxArray *c7_setSimStateSideEffectsInfo;
  int32_T *c7_sfEvent;
  boolean_T *c7_isStable;
  uint8_T *c7_is_active_c7_RA2;
  uint8_T *c7_is_c7_RA2;
  real_T *c7_jogSpeed;
  real_T *c7_toPoint;
  real_T *c7_homeControllerEnabled;
  real_T *c7_resetEnc;
  real_T *c7_homingBusy;
  boolean_T *c7_homeSwitch;
  real_T *c7_carPos;
  real_T *c7_airBagEnabled;
  real_T *c7_airBagRef;
  real_T *c7_controlEnabled;
  real_T *c7_Ready;
  boolean_T *c7_AllReady;
  real_T *c7_StopSim;
  real_T *c7_zcoordinate;
  real_T *c7_currentcarPos;
  uint16_T *c7_temporalCounter_i1;
} SFc7_RA2InstanceStruct;

#endif                                 /*typedef_SFc7_RA2InstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c7_RA2_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c7_RA2_get_check_sum(mxArray *plhs[]);
extern void c7_RA2_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
