/* Include files */

#include <stddef.h>
#include "blas.h"
#include "RA2_sfun.h"
#include "c6_RA2.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "RA2_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c_with_debugger(S, sfGlobalDebugInstanceStruct);

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization);
static void chart_debug_initialize_data_addresses(SimStruct *S);
static const mxArray* sf_opaque_get_hover_data_for_msg(void *chartInstance,
  int32_T msgSSID);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c6_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)
#define c6_IN_AirbagLeft               ((uint8_T)1U)
#define c6_IN_AirbagRight              ((uint8_T)2U)
#define c6_IN_DisableOutputs           ((uint8_T)3U)
#define c6_IN_EnableRunAndSafety       ((uint8_T)4U)
#define c6_IN_Homing                   ((uint8_T)5U)
#define c6_IN_MovetoX0                 ((uint8_T)6U)
#define c6_IN_ResetEnc                 ((uint8_T)7U)
#define c6_IN_WaitForRest              ((uint8_T)8U)
#define c6_IN_WaitForZ                 ((uint8_T)9U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;

/* Function Declarations */
static void c6_durationReferenceTimeUpdater(SFc6_RA2InstanceStruct
  *chartInstance);
static void initialize_c6_RA2(SFc6_RA2InstanceStruct *chartInstance);
static void initialize_params_c6_RA2(SFc6_RA2InstanceStruct *chartInstance);
static void enable_c6_RA2(SFc6_RA2InstanceStruct *chartInstance);
static void disable_c6_RA2(SFc6_RA2InstanceStruct *chartInstance);
static void c6_update_debugger_state_c6_RA2(SFc6_RA2InstanceStruct
  *chartInstance);
static void ext_mode_exec_c6_RA2(SFc6_RA2InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c6_RA2(SFc6_RA2InstanceStruct *chartInstance);
static void set_sim_state_c6_RA2(SFc6_RA2InstanceStruct *chartInstance, const
  mxArray *c6_st);
static void c6_set_sim_state_side_effects_c6_RA2(SFc6_RA2InstanceStruct
  *chartInstance);
static void finalize_c6_RA2(SFc6_RA2InstanceStruct *chartInstance);
static void sf_gateway_c6_RA2(SFc6_RA2InstanceStruct *chartInstance);
static void mdl_start_c6_RA2(SFc6_RA2InstanceStruct *chartInstance);
static void c6_chartstep_c6_RA2(SFc6_RA2InstanceStruct *chartInstance);
static void initSimStructsc6_RA2(SFc6_RA2InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c6_machineNumber, uint32_T
  c6_chartNumber, uint32_T c6_instanceNumber);
static const mxArray *c6_sf_marshallOut(void *chartInstanceVoid, void *c6_inData);
static int32_T c6_emlrt_marshallIn(SFc6_RA2InstanceStruct *chartInstance, const
  mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static const mxArray *c6_b_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData);
static real_T c6_b_emlrt_marshallIn(SFc6_RA2InstanceStruct *chartInstance, const
  mxArray *c6_b_jogSpeed, const char_T *c6_identifier);
static real_T c6_c_emlrt_marshallIn(SFc6_RA2InstanceStruct *chartInstance, const
  mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static const mxArray *c6_c_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData);
static uint8_T c6_d_emlrt_marshallIn(SFc6_RA2InstanceStruct *chartInstance,
  const mxArray *c6_b_is_active_c6_RA2, const char_T *c6_identifier);
static uint8_T c6_e_emlrt_marshallIn(SFc6_RA2InstanceStruct *chartInstance,
  const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static uint16_T c6_f_emlrt_marshallIn(SFc6_RA2InstanceStruct *chartInstance,
  const mxArray *c6_b_temporalCounter_i1, const char_T *c6_identifier);
static uint16_T c6_g_emlrt_marshallIn(SFc6_RA2InstanceStruct *chartInstance,
  const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static const mxArray *c6_h_emlrt_marshallIn(SFc6_RA2InstanceStruct
  *chartInstance, const mxArray *c6_b_setSimStateSideEffectsInfo, const char_T
  *c6_identifier);
static const mxArray *c6_i_emlrt_marshallIn(SFc6_RA2InstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static const mxArray *sf_get_hover_data_for_msg(SFc6_RA2InstanceStruct
  *chartInstance, int32_T c6_ssid);
static void c6_init_sf_message_store_memory(SFc6_RA2InstanceStruct
  *chartInstance);
static void init_dsm_address_info(SFc6_RA2InstanceStruct *chartInstance);
static void init_simulink_io_address(SFc6_RA2InstanceStruct *chartInstance);

/* Function Definitions */
static void c6_durationReferenceTimeUpdater(SFc6_RA2InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void initialize_c6_RA2(SFc6_RA2InstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc6_RA2(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  *chartInstance->c6_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c6_doSetSimStateSideEffects = 0U;
  chartInstance->c6_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c6_temporalCounter_i1 = 0U;
  *chartInstance->c6_temporalCounter_i1 = 0U;
  *chartInstance->c6_temporalCounter_i1 = 0U;
  *chartInstance->c6_temporalCounter_i1 = 0U;
  *chartInstance->c6_temporalCounter_i1 = 0U;
  *chartInstance->c6_is_active_c6_RA2 = 0U;
  *chartInstance->c6_is_c6_RA2 = c6_IN_NO_ACTIVE_CHILD;
  if (!(sf_get_output_port_reusable(chartInstance->S, 1) != 0)) {
    *chartInstance->c6_jogSpeed = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c6_jogSpeed, 3U, 1U, 2U,
                          *chartInstance->c6_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 2) != 0)) {
    *chartInstance->c6_toPoint = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c6_toPoint, 4U, 1U, 2U,
                          *chartInstance->c6_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 3) != 0)) {
    *chartInstance->c6_homeControllerEnabled = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c6_homeControllerEnabled, 5U, 1U, 2U, *
                          chartInstance->c6_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 4) != 0)) {
    *chartInstance->c6_resetEnc = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c6_resetEnc, 6U, 1U, 2U,
                          *chartInstance->c6_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 5) != 0)) {
    *chartInstance->c6_homingBusy = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c6_homingBusy, 7U, 1U, 2U,
                          *chartInstance->c6_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 6) != 0)) {
    *chartInstance->c6_airBagEnabled = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c6_airBagEnabled, 8U, 1U, 2U,
                          *chartInstance->c6_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 7) != 0)) {
    *chartInstance->c6_airBagRef = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c6_airBagRef, 9U, 1U, 2U,
                          *chartInstance->c6_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 8) != 0)) {
    *chartInstance->c6_controlEnabled = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c6_controlEnabled, 10U, 1U, 2U,
                          *chartInstance->c6_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 9) != 0)) {
    *chartInstance->c6_Ready = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c6_Ready, 11U, 1U, 2U,
                          *chartInstance->c6_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 10) != 0)) {
    *chartInstance->c6_StopSim = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c6_StopSim, 12U, 1U, 2U,
                          *chartInstance->c6_sfEvent, false);
  }
}

static void initialize_params_c6_RA2(SFc6_RA2InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c6_RA2(SFc6_RA2InstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c6_RA2(SFc6_RA2InstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c6_update_debugger_state_c6_RA2(SFc6_RA2InstanceStruct
  *chartInstance)
{
  uint32_T c6_prevAniVal;
  c6_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c6_is_active_c6_RA2 == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 2U, *chartInstance->c6_sfEvent);
  }

  if (*chartInstance->c6_is_c6_RA2 == c6_IN_Homing) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c6_sfEvent);
  }

  if (*chartInstance->c6_is_c6_RA2 == c6_IN_MovetoX0) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c6_sfEvent);
  }

  if (*chartInstance->c6_is_c6_RA2 == c6_IN_ResetEnc) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c6_sfEvent);
  }

  if (*chartInstance->c6_is_c6_RA2 == c6_IN_DisableOutputs) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c6_sfEvent);
  }

  if (*chartInstance->c6_is_c6_RA2 == c6_IN_EnableRunAndSafety) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c6_sfEvent);
  }

  if (*chartInstance->c6_is_c6_RA2 == c6_IN_AirbagLeft) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c6_sfEvent);
  }

  if (*chartInstance->c6_is_c6_RA2 == c6_IN_AirbagRight) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c6_sfEvent);
  }

  if (*chartInstance->c6_is_c6_RA2 == c6_IN_WaitForZ) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c6_sfEvent);
  }

  if (*chartInstance->c6_is_c6_RA2 == c6_IN_WaitForRest) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c6_sfEvent);
  }

  _SFD_SET_ANIMATION(c6_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c6_RA2(SFc6_RA2InstanceStruct *chartInstance)
{
  c6_update_debugger_state_c6_RA2(chartInstance);
}

static const mxArray *get_sim_state_c6_RA2(SFc6_RA2InstanceStruct *chartInstance)
{
  const mxArray *c6_st;
  const mxArray *c6_y = NULL;
  real_T c6_hoistedGlobal;
  real_T c6_u;
  const mxArray *c6_b_y = NULL;
  real_T c6_b_hoistedGlobal;
  real_T c6_b_u;
  const mxArray *c6_c_y = NULL;
  real_T c6_c_hoistedGlobal;
  real_T c6_c_u;
  const mxArray *c6_d_y = NULL;
  real_T c6_d_hoistedGlobal;
  real_T c6_d_u;
  const mxArray *c6_e_y = NULL;
  real_T c6_e_hoistedGlobal;
  real_T c6_e_u;
  const mxArray *c6_f_y = NULL;
  real_T c6_f_hoistedGlobal;
  real_T c6_f_u;
  const mxArray *c6_g_y = NULL;
  real_T c6_g_hoistedGlobal;
  real_T c6_g_u;
  const mxArray *c6_h_y = NULL;
  real_T c6_h_hoistedGlobal;
  real_T c6_h_u;
  const mxArray *c6_i_y = NULL;
  real_T c6_i_hoistedGlobal;
  real_T c6_i_u;
  const mxArray *c6_j_y = NULL;
  real_T c6_j_hoistedGlobal;
  real_T c6_j_u;
  const mxArray *c6_k_y = NULL;
  uint8_T c6_k_hoistedGlobal;
  uint8_T c6_k_u;
  const mxArray *c6_l_y = NULL;
  uint8_T c6_l_hoistedGlobal;
  uint8_T c6_l_u;
  const mxArray *c6_m_y = NULL;
  uint16_T c6_m_hoistedGlobal;
  uint16_T c6_m_u;
  const mxArray *c6_n_y = NULL;
  c6_st = NULL;
  c6_st = NULL;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_createcellmatrix(13, 1), false);
  c6_hoistedGlobal = *chartInstance->c6_Ready;
  c6_u = c6_hoistedGlobal;
  c6_b_y = NULL;
  sf_mex_assign(&c6_b_y, sf_mex_create("y", &c6_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 0, c6_b_y);
  c6_b_hoistedGlobal = *chartInstance->c6_StopSim;
  c6_b_u = c6_b_hoistedGlobal;
  c6_c_y = NULL;
  sf_mex_assign(&c6_c_y, sf_mex_create("y", &c6_b_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 1, c6_c_y);
  c6_c_hoistedGlobal = *chartInstance->c6_airBagEnabled;
  c6_c_u = c6_c_hoistedGlobal;
  c6_d_y = NULL;
  sf_mex_assign(&c6_d_y, sf_mex_create("y", &c6_c_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 2, c6_d_y);
  c6_d_hoistedGlobal = *chartInstance->c6_airBagRef;
  c6_d_u = c6_d_hoistedGlobal;
  c6_e_y = NULL;
  sf_mex_assign(&c6_e_y, sf_mex_create("y", &c6_d_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 3, c6_e_y);
  c6_e_hoistedGlobal = *chartInstance->c6_controlEnabled;
  c6_e_u = c6_e_hoistedGlobal;
  c6_f_y = NULL;
  sf_mex_assign(&c6_f_y, sf_mex_create("y", &c6_e_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 4, c6_f_y);
  c6_f_hoistedGlobal = *chartInstance->c6_homeControllerEnabled;
  c6_f_u = c6_f_hoistedGlobal;
  c6_g_y = NULL;
  sf_mex_assign(&c6_g_y, sf_mex_create("y", &c6_f_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 5, c6_g_y);
  c6_g_hoistedGlobal = *chartInstance->c6_homingBusy;
  c6_g_u = c6_g_hoistedGlobal;
  c6_h_y = NULL;
  sf_mex_assign(&c6_h_y, sf_mex_create("y", &c6_g_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 6, c6_h_y);
  c6_h_hoistedGlobal = *chartInstance->c6_jogSpeed;
  c6_h_u = c6_h_hoistedGlobal;
  c6_i_y = NULL;
  sf_mex_assign(&c6_i_y, sf_mex_create("y", &c6_h_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 7, c6_i_y);
  c6_i_hoistedGlobal = *chartInstance->c6_resetEnc;
  c6_i_u = c6_i_hoistedGlobal;
  c6_j_y = NULL;
  sf_mex_assign(&c6_j_y, sf_mex_create("y", &c6_i_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 8, c6_j_y);
  c6_j_hoistedGlobal = *chartInstance->c6_toPoint;
  c6_j_u = c6_j_hoistedGlobal;
  c6_k_y = NULL;
  sf_mex_assign(&c6_k_y, sf_mex_create("y", &c6_j_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 9, c6_k_y);
  c6_k_hoistedGlobal = *chartInstance->c6_is_active_c6_RA2;
  c6_k_u = c6_k_hoistedGlobal;
  c6_l_y = NULL;
  sf_mex_assign(&c6_l_y, sf_mex_create("y", &c6_k_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 10, c6_l_y);
  c6_l_hoistedGlobal = *chartInstance->c6_is_c6_RA2;
  c6_l_u = c6_l_hoistedGlobal;
  c6_m_y = NULL;
  sf_mex_assign(&c6_m_y, sf_mex_create("y", &c6_l_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 11, c6_m_y);
  c6_m_hoistedGlobal = *chartInstance->c6_temporalCounter_i1;
  c6_m_u = c6_m_hoistedGlobal;
  c6_n_y = NULL;
  sf_mex_assign(&c6_n_y, sf_mex_create("y", &c6_m_u, 5, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 12, c6_n_y);
  sf_mex_assign(&c6_st, c6_y, false);
  return c6_st;
}

static void set_sim_state_c6_RA2(SFc6_RA2InstanceStruct *chartInstance, const
  mxArray *c6_st)
{
  const mxArray *c6_u;
  c6_u = sf_mex_dup(c6_st);
  *chartInstance->c6_Ready = c6_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("Ready", c6_u, 0)), "Ready");
  *chartInstance->c6_StopSim = c6_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("StopSim", c6_u, 1)), "StopSim");
  *chartInstance->c6_airBagEnabled = c6_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("airBagEnabled", c6_u, 2)), "airBagEnabled");
  *chartInstance->c6_airBagRef = c6_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("airBagRef", c6_u, 3)), "airBagRef");
  *chartInstance->c6_controlEnabled = c6_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("controlEnabled", c6_u, 4)), "controlEnabled");
  *chartInstance->c6_homeControllerEnabled = c6_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("homeControllerEnabled", c6_u, 5)),
    "homeControllerEnabled");
  *chartInstance->c6_homingBusy = c6_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("homingBusy", c6_u, 6)), "homingBusy");
  *chartInstance->c6_jogSpeed = c6_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("jogSpeed", c6_u, 7)), "jogSpeed");
  *chartInstance->c6_resetEnc = c6_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("resetEnc", c6_u, 8)), "resetEnc");
  *chartInstance->c6_toPoint = c6_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("toPoint", c6_u, 9)), "toPoint");
  *chartInstance->c6_is_active_c6_RA2 = c6_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_c6_RA2", c6_u, 10)), "is_active_c6_RA2");
  *chartInstance->c6_is_c6_RA2 = c6_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("is_c6_RA2", c6_u, 11)), "is_c6_RA2");
  *chartInstance->c6_temporalCounter_i1 = c6_f_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("temporalCounter_i1", c6_u, 12)),
    "temporalCounter_i1");
  sf_mex_assign(&chartInstance->c6_setSimStateSideEffectsInfo,
                c6_h_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "setSimStateSideEffectsInfo", c6_u, 13)), "setSimStateSideEffectsInfo"),
                true);
  sf_mex_destroy(&c6_u);
  chartInstance->c6_doSetSimStateSideEffects = 1U;
  c6_update_debugger_state_c6_RA2(chartInstance);
  sf_mex_destroy(&c6_st);
}

static void c6_set_sim_state_side_effects_c6_RA2(SFc6_RA2InstanceStruct
  *chartInstance)
{
  if (chartInstance->c6_doSetSimStateSideEffects != 0) {
    if (*chartInstance->c6_is_c6_RA2 == c6_IN_AirbagLeft) {
      if (sf_mex_sub(chartInstance->c6_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 2) == 0.0) {
        *chartInstance->c6_temporalCounter_i1 = 0U;
      }
    }

    if (*chartInstance->c6_is_c6_RA2 == c6_IN_AirbagRight) {
      if (sf_mex_sub(chartInstance->c6_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 3) == 0.0) {
        *chartInstance->c6_temporalCounter_i1 = 0U;
      }
    }

    if (*chartInstance->c6_is_c6_RA2 == c6_IN_MovetoX0) {
      if (sf_mex_sub(chartInstance->c6_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 7) == 0.0) {
        *chartInstance->c6_temporalCounter_i1 = 0U;
      }
    }

    if (*chartInstance->c6_is_c6_RA2 == c6_IN_ResetEnc) {
      if (sf_mex_sub(chartInstance->c6_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 8) == 0.0) {
        *chartInstance->c6_temporalCounter_i1 = 0U;
      }
    }

    if (*chartInstance->c6_is_c6_RA2 == c6_IN_WaitForZ) {
      if (sf_mex_sub(chartInstance->c6_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 10) == 0.0) {
        *chartInstance->c6_temporalCounter_i1 = 0U;
      }
    }

    chartInstance->c6_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c6_RA2(SFc6_RA2InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c6_setSimStateSideEffectsInfo);
}

static void sf_gateway_c6_RA2(SFc6_RA2InstanceStruct *chartInstance)
{
  c6_set_sim_state_side_effects_c6_RA2(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  c6_durationReferenceTimeUpdater(chartInstance);
  if (*chartInstance->c6_temporalCounter_i1 < 32767U) {
    (*chartInstance->c6_temporalCounter_i1)++;
  }

  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 2U, *chartInstance->c6_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_AllReady, 2U, 1U, 0U,
                        *chartInstance->c6_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c6_carPos, 1U, 1U, 0U,
                        *chartInstance->c6_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_homeSwitch, 0U, 1U, 0U,
                        *chartInstance->c6_sfEvent, false);
  *chartInstance->c6_sfEvent = CALL_EVENT;
  c6_chartstep_c6_RA2(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_RA2MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c6_RA2(SFc6_RA2InstanceStruct *chartInstance)
{
  c6_init_sf_message_store_memory(chartInstance);
}

static void c6_chartstep_c6_RA2(SFc6_RA2InstanceStruct *chartInstance)
{
  boolean_T c6_temp;
  boolean_T c6_out;
  boolean_T c6_b_temp;
  boolean_T c6_b_out;
  boolean_T c6_c_out;
  boolean_T c6_d_out;
  boolean_T c6_e_out;
  boolean_T c6_c_temp;
  boolean_T c6_f_out;
  boolean_T c6_d_temp;
  boolean_T c6_g_out;
  boolean_T c6_h_out;
  boolean_T c6_e_temp;
  boolean_T c6_i_out;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 2U, *chartInstance->c6_sfEvent);
  if (*chartInstance->c6_is_active_c6_RA2 == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 2U, *chartInstance->c6_sfEvent);
    *chartInstance->c6_is_active_c6_RA2 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c6_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c6_sfEvent);
    *chartInstance->c6_is_c6_RA2 = c6_IN_WaitForZ;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c6_sfEvent);
    *chartInstance->c6_temporalCounter_i1 = 0U;
    *chartInstance->c6_toPoint = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c6_toPoint, 4U, 4U, 8U,
                          *chartInstance->c6_sfEvent, false);
    *chartInstance->c6_Ready = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c6_Ready, 11U, 4U, 8U,
                          *chartInstance->c6_sfEvent, false);
    *chartInstance->c6_homingBusy = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c6_homingBusy, 7U, 4U, 8U,
                          *chartInstance->c6_sfEvent, false);
    *chartInstance->c6_jogSpeed = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c6_jogSpeed, 3U, 4U, 8U,
                          *chartInstance->c6_sfEvent, false);
  } else {
    switch (*chartInstance->c6_is_c6_RA2) {
     case c6_IN_AirbagLeft:
      CV_CHART_EVAL(2, 0, 1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                   *chartInstance->c6_sfEvent);
      c6_temp = (_SFD_CCP_CALL(7U, 0, 1 != 0U, *chartInstance->c6_sfEvent) != 0);
      if (c6_temp) {
        c6_temp = (_SFD_CCP_CALL(7U, 1, *chartInstance->c6_temporalCounter_i1 >=
                    20480U != 0U, *chartInstance->c6_sfEvent) != 0);
      }

      c6_out = (CV_TRANSITION_EVAL(7U, (int32_T)c6_temp) != 0);
      if (c6_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c6_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c6_sfEvent);
        *chartInstance->c6_is_c6_RA2 = c6_IN_DisableOutputs;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c6_sfEvent);
        *chartInstance->c6_controlEnabled = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c6_controlEnabled, 10U, 4U, 2U,
                              *chartInstance->c6_sfEvent, false);
        *chartInstance->c6_StopSim = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c6_StopSim, 12U, 4U, 2U,
                              *chartInstance->c6_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                     *chartInstance->c6_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c6_sfEvent);
      break;

     case c6_IN_AirbagRight:
      CV_CHART_EVAL(2, 0, 2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                   *chartInstance->c6_sfEvent);
      c6_b_temp = (_SFD_CCP_CALL(6U, 0, 1 != 0U, *chartInstance->c6_sfEvent) !=
                   0);
      if (c6_b_temp) {
        c6_b_temp = (_SFD_CCP_CALL(6U, 1, *chartInstance->c6_temporalCounter_i1 >=
          20480U != 0U, *chartInstance->c6_sfEvent) != 0);
      }

      c6_b_out = (CV_TRANSITION_EVAL(6U, (int32_T)c6_b_temp) != 0);
      if (c6_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, *chartInstance->c6_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c6_sfEvent);
        *chartInstance->c6_is_c6_RA2 = c6_IN_DisableOutputs;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c6_sfEvent);
        *chartInstance->c6_controlEnabled = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c6_controlEnabled, 10U, 4U, 2U,
                              *chartInstance->c6_sfEvent, false);
        *chartInstance->c6_StopSim = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c6_StopSim, 12U, 4U, 2U,
                              *chartInstance->c6_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                     *chartInstance->c6_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c6_sfEvent);
      break;

     case c6_IN_DisableOutputs:
      CV_CHART_EVAL(2, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   *chartInstance->c6_sfEvent);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c6_sfEvent);
      break;

     case c6_IN_EnableRunAndSafety:
      CV_CHART_EVAL(2, 0, 4);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                   *chartInstance->c6_sfEvent);
      c6_c_out = (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4U, 0,
        CV_RELATIONAL_EVAL(5U, 4U, 0, *chartInstance->c6_carPos, -0.1, -1, 2U,
                           *chartInstance->c6_carPos < -0.1) != 0U,
        *chartInstance->c6_sfEvent)) != 0);
      if (c6_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c6_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c6_sfEvent);
        *chartInstance->c6_is_c6_RA2 = c6_IN_AirbagLeft;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c6_sfEvent);
        *chartInstance->c6_temporalCounter_i1 = 0U;
        *chartInstance->c6_airBagEnabled = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c6_airBagEnabled, 8U, 4U, 0U,
                              *chartInstance->c6_sfEvent, false);
        *chartInstance->c6_airBagRef = -0.1;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c6_airBagRef, 9U, 4U, 0U,
                              *chartInstance->c6_sfEvent, false);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                     *chartInstance->c6_sfEvent);
        c6_d_out = (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5U, 0,
          CV_RELATIONAL_EVAL(5U, 5U, 0, *chartInstance->c6_carPos, 1.15, -1, 4U,
                             *chartInstance->c6_carPos > 1.15) != 0U,
          *chartInstance->c6_sfEvent)) != 0);
        if (c6_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, *chartInstance->c6_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c6_sfEvent);
          *chartInstance->c6_is_c6_RA2 = c6_IN_AirbagRight;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c6_sfEvent);
          *chartInstance->c6_temporalCounter_i1 = 0U;
          *chartInstance->c6_airBagEnabled = 1.0;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c6_airBagEnabled, 8U, 4U, 1U,
                                *chartInstance->c6_sfEvent, false);
          *chartInstance->c6_airBagRef = 1.13;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c6_airBagRef, 9U, 4U, 1U,
                                *chartInstance->c6_sfEvent, false);
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                       *chartInstance->c6_sfEvent);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c6_sfEvent);
      break;

     case c6_IN_Homing:
      CV_CHART_EVAL(2, 0, 5);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   *chartInstance->c6_sfEvent);
      c6_e_out = (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0,
        *chartInstance->c6_homeSwitch != 0U, *chartInstance->c6_sfEvent)) != 0);
      if (c6_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c6_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c6_sfEvent);
        *chartInstance->c6_is_c6_RA2 = c6_IN_MovetoX0;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c6_sfEvent);
        *chartInstance->c6_temporalCounter_i1 = 0U;
        *chartInstance->c6_jogSpeed = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c6_jogSpeed, 3U, 4U, 5U,
                              *chartInstance->c6_sfEvent, false);
        *chartInstance->c6_toPoint = 0.3708572;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c6_toPoint, 4U, 4U, 5U,
                              *chartInstance->c6_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                     *chartInstance->c6_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, *chartInstance->c6_sfEvent);
      break;

     case c6_IN_MovetoX0:
      CV_CHART_EVAL(2, 0, 6);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   *chartInstance->c6_sfEvent);
      c6_c_temp = (_SFD_CCP_CALL(2U, 0, 1 != 0U, *chartInstance->c6_sfEvent) !=
                   0);
      if (c6_c_temp) {
        c6_c_temp = (_SFD_CCP_CALL(2U, 1, *chartInstance->c6_temporalCounter_i1 >=
          28672U != 0U, *chartInstance->c6_sfEvent) != 0);
      }

      c6_f_out = (CV_TRANSITION_EVAL(2U, (int32_T)c6_c_temp) != 0);
      if (c6_f_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c6_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c6_sfEvent);
        *chartInstance->c6_is_c6_RA2 = c6_IN_WaitForRest;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c6_sfEvent);
        *chartInstance->c6_Ready = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c6_Ready, 11U, 4U, 7U,
                              *chartInstance->c6_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U,
                     *chartInstance->c6_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, *chartInstance->c6_sfEvent);
      break;

     case c6_IN_ResetEnc:
      CV_CHART_EVAL(2, 0, 7);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                   *chartInstance->c6_sfEvent);
      c6_d_temp = (_SFD_CCP_CALL(3U, 0, 1 != 0U, *chartInstance->c6_sfEvent) !=
                   0);
      if (c6_d_temp) {
        c6_d_temp = (_SFD_CCP_CALL(3U, 1, *chartInstance->c6_temporalCounter_i1 >=
          41U != 0U, *chartInstance->c6_sfEvent) != 0);
      }

      c6_g_out = (CV_TRANSITION_EVAL(3U, (int32_T)c6_d_temp) != 0);
      if (c6_g_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c6_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c6_sfEvent);
        *chartInstance->c6_is_c6_RA2 = c6_IN_EnableRunAndSafety;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c6_sfEvent);
        *chartInstance->c6_resetEnc = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c6_resetEnc, 6U, 4U, 3U,
                              *chartInstance->c6_sfEvent, false);
        *chartInstance->c6_homingBusy = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c6_homingBusy, 7U, 4U, 3U,
                              *chartInstance->c6_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6U,
                     *chartInstance->c6_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, *chartInstance->c6_sfEvent);
      break;

     case c6_IN_WaitForRest:
      CV_CHART_EVAL(2, 0, 8);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U,
                   *chartInstance->c6_sfEvent);
      c6_h_out = (CV_TRANSITION_EVAL(9U, (int32_T)_SFD_CCP_CALL(9U, 0,
        *chartInstance->c6_AllReady != 0U, *chartInstance->c6_sfEvent)) != 0);
      if (c6_h_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, *chartInstance->c6_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c6_sfEvent);
        *chartInstance->c6_is_c6_RA2 = c6_IN_ResetEnc;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c6_sfEvent);
        *chartInstance->c6_temporalCounter_i1 = 0U;
        *chartInstance->c6_resetEnc = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c6_resetEnc, 6U, 4U, 6U,
                              *chartInstance->c6_sfEvent, false);
        *chartInstance->c6_homeControllerEnabled = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c6_homeControllerEnabled, 5U, 4U,
                              6U, *chartInstance->c6_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 7U,
                     *chartInstance->c6_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, *chartInstance->c6_sfEvent);
      break;

     case c6_IN_WaitForZ:
      CV_CHART_EVAL(2, 0, 9);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                   *chartInstance->c6_sfEvent);
      c6_e_temp = (_SFD_CCP_CALL(8U, 0, 1 != 0U, *chartInstance->c6_sfEvent) !=
                   0);
      if (c6_e_temp) {
        c6_e_temp = (_SFD_CCP_CALL(8U, 1, *chartInstance->c6_temporalCounter_i1 >=
          12288U != 0U, *chartInstance->c6_sfEvent) != 0);
      }

      c6_i_out = (CV_TRANSITION_EVAL(8U, (int32_T)c6_e_temp) != 0);
      if (c6_i_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, *chartInstance->c6_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c6_sfEvent);
        *chartInstance->c6_is_c6_RA2 = c6_IN_Homing;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c6_sfEvent);
        *chartInstance->c6_jogSpeed = -0.2;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c6_jogSpeed, 3U, 4U, 4U,
                              *chartInstance->c6_sfEvent, false);
        *chartInstance->c6_homeControllerEnabled = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c6_homeControllerEnabled, 5U, 4U,
                              4U, *chartInstance->c6_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 8U,
                     *chartInstance->c6_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, *chartInstance->c6_sfEvent);
      break;

     default:
      CV_CHART_EVAL(2, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c6_is_c6_RA2 = c6_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c6_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c6_sfEvent);
}

static void initSimStructsc6_RA2(SFc6_RA2InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c6_machineNumber, uint32_T
  c6_chartNumber, uint32_T c6_instanceNumber)
{
  (void)c6_machineNumber;
  (void)c6_chartNumber;
  (void)c6_instanceNumber;
}

const mxArray *sf_c6_RA2_get_eml_resolved_functions_info(void)
{
  const mxArray *c6_nameCaptureInfo = NULL;
  c6_nameCaptureInfo = NULL;
  sf_mex_assign(&c6_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c6_nameCaptureInfo;
}

static const mxArray *c6_sf_marshallOut(void *chartInstanceVoid, void *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  int32_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_RA2InstanceStruct *chartInstance;
  chartInstance = (SFc6_RA2InstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(int32_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, false);
  return c6_mxArrayOutData;
}

static int32_T c6_emlrt_marshallIn(SFc6_RA2InstanceStruct *chartInstance, const
  mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  int32_T c6_y;
  int32_T c6_i0;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_i0, 1, 6, 0U, 0, 0U, 0);
  c6_y = c6_i0;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_b_sfEvent;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  int32_T c6_y;
  SFc6_RA2InstanceStruct *chartInstance;
  chartInstance = (SFc6_RA2InstanceStruct *)chartInstanceVoid;
  c6_b_sfEvent = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_y = c6_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_sfEvent), &c6_thisId);
  sf_mex_destroy(&c6_b_sfEvent);
  *(int32_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

static const mxArray *c6_b_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  real_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_RA2InstanceStruct *chartInstance;
  chartInstance = (SFc6_RA2InstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(real_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, false);
  return c6_mxArrayOutData;
}

static real_T c6_b_emlrt_marshallIn(SFc6_RA2InstanceStruct *chartInstance, const
  mxArray *c6_b_jogSpeed, const char_T *c6_identifier)
{
  real_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_y = c6_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_jogSpeed),
    &c6_thisId);
  sf_mex_destroy(&c6_b_jogSpeed);
  return c6_y;
}

static real_T c6_c_emlrt_marshallIn(SFc6_RA2InstanceStruct *chartInstance, const
  mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  real_T c6_y;
  real_T c6_d0;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_d0, 1, 0, 0U, 0, 0U, 0);
  c6_y = c6_d0;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_b_jogSpeed;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  real_T c6_y;
  SFc6_RA2InstanceStruct *chartInstance;
  chartInstance = (SFc6_RA2InstanceStruct *)chartInstanceVoid;
  c6_b_jogSpeed = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_y = c6_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_jogSpeed),
    &c6_thisId);
  sf_mex_destroy(&c6_b_jogSpeed);
  *(real_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

static const mxArray *c6_c_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  boolean_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_RA2InstanceStruct *chartInstance;
  chartInstance = (SFc6_RA2InstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(boolean_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, false);
  return c6_mxArrayOutData;
}

static uint8_T c6_d_emlrt_marshallIn(SFc6_RA2InstanceStruct *chartInstance,
  const mxArray *c6_b_is_active_c6_RA2, const char_T *c6_identifier)
{
  uint8_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_y = c6_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_is_active_c6_RA2),
    &c6_thisId);
  sf_mex_destroy(&c6_b_is_active_c6_RA2);
  return c6_y;
}

static uint8_T c6_e_emlrt_marshallIn(SFc6_RA2InstanceStruct *chartInstance,
  const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  uint8_T c6_y;
  uint8_T c6_u0;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_u0, 1, 3, 0U, 0, 0U, 0);
  c6_y = c6_u0;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static uint16_T c6_f_emlrt_marshallIn(SFc6_RA2InstanceStruct *chartInstance,
  const mxArray *c6_b_temporalCounter_i1, const char_T *c6_identifier)
{
  uint16_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_y = c6_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_temporalCounter_i1),
    &c6_thisId);
  sf_mex_destroy(&c6_b_temporalCounter_i1);
  return c6_y;
}

static uint16_T c6_g_emlrt_marshallIn(SFc6_RA2InstanceStruct *chartInstance,
  const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  uint16_T c6_y;
  uint16_T c6_u1;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_u1, 1, 5, 0U, 0, 0U, 0);
  c6_y = c6_u1;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static const mxArray *c6_h_emlrt_marshallIn(SFc6_RA2InstanceStruct
  *chartInstance, const mxArray *c6_b_setSimStateSideEffectsInfo, const char_T
  *c6_identifier)
{
  const mxArray *c6_y = NULL;
  emlrtMsgIdentifier c6_thisId;
  c6_y = NULL;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  sf_mex_assign(&c6_y, c6_i_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c6_b_setSimStateSideEffectsInfo), &c6_thisId), false);
  sf_mex_destroy(&c6_b_setSimStateSideEffectsInfo);
  return c6_y;
}

static const mxArray *c6_i_emlrt_marshallIn(SFc6_RA2InstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  const mxArray *c6_y = NULL;
  (void)chartInstance;
  (void)c6_parentId;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_duplicatearraysafe(&c6_u), false);
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static const mxArray *sf_get_hover_data_for_msg(SFc6_RA2InstanceStruct
  *chartInstance, int32_T c6_ssid)
{
  (void)chartInstance;
  (void)c6_ssid;
  return NULL;
}

static void c6_init_sf_message_store_memory(SFc6_RA2InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_dsm_address_info(SFc6_RA2InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc6_RA2InstanceStruct *chartInstance)
{
  chartInstance->c6_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 0);
  chartInstance->c6_isStable = (boolean_T *)ssGetDWork_wrapper(chartInstance->S,
    1);
  chartInstance->c6_is_active_c6_RA2 = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 2);
  chartInstance->c6_is_c6_RA2 = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    3);
  chartInstance->c6_jogSpeed = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c6_toPoint = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c6_homeControllerEnabled = (real_T *)
    ssGetOutputPortSignal_wrapper(chartInstance->S, 3);
  chartInstance->c6_resetEnc = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c6_homingBusy = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c6_homeSwitch = (boolean_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c6_carPos = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c6_airBagEnabled = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c6_airBagRef = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 7);
  chartInstance->c6_controlEnabled = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 8);
  chartInstance->c6_Ready = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 9);
  chartInstance->c6_AllReady = (boolean_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c6_StopSim = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 10);
  chartInstance->c6_temporalCounter_i1 = (uint16_T *)ssGetDWork_wrapper
    (chartInstance->S, 4);
}

/* SFunction Glue Code */
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

static uint32_T* sf_get_sfun_dwork_checksum(void);
void sf_c6_RA2_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(509184855U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2167663048U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(148566867U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2875089339U);
}

mxArray* sf_c6_RA2_get_post_codegen_info(void);
mxArray *sf_c6_RA2_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("DNtSvKK0rbxJTuChfBaHVF");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,3,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,10,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,4,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,5,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,5,"type",mxType);
    }

    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,6,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,6,"type",mxType);
    }

    mxSetField(mxData,6,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,7,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,7,"type",mxType);
    }

    mxSetField(mxData,7,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,8,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,8,"type",mxType);
    }

    mxSetField(mxData,8,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,9,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,9,"type",mxType);
    }

    mxSetField(mxData,9,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo = sf_c6_RA2_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c6_RA2_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c6_RA2_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("early");
  mxArray *fallbackReason = mxCreateString("ext_mode");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c6_RA2_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c6_RA2_get_post_codegen_info(void)
{
  const char* fieldNames[] = { "exportedFunctionsUsedByThisChart",
    "exportedFunctionsChecksum" };

  mwSize dims[2] = { 1, 1 };

  mxArray* mxPostCodegenInfo = mxCreateStructArray(2, dims, sizeof(fieldNames)/
    sizeof(fieldNames[0]), fieldNames);

  {
    mxArray* mxExportedFunctionsChecksum = mxCreateString("");
    mwSize exp_dims[2] = { 0, 1 };

    mxArray* mxExportedFunctionsUsedByThisChart = mxCreateCellArray(2, exp_dims);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsUsedByThisChart",
               mxExportedFunctionsUsedByThisChart);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsChecksum",
               mxExportedFunctionsChecksum);
  }

  return mxPostCodegenInfo;
}

static const mxArray *sf_get_sim_state_info_c6_RA2(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[114],T\"Ready\",},{M[1],M[118],T\"StopSim\",},{M[1],M[69],T\"airBagEnabled\",},{M[1],M[70],T\"airBagRef\",},{M[1],M[80],T\"controlEnabled\",},{M[1],M[60],T\"homeControllerEnabled\",},{M[1],M[2],T\"homingBusy\",},{M[1],M[1],T\"jogSpeed\",},{M[1],M[63],T\"resetEnc\",},{M[1],M[53],T\"toPoint\",}}",
    "100 S1x3'type','srcId','name','auxInfo'{{M[8],M[0],T\"is_active_c6_RA2\",},{M[9],M[0],T\"is_c6_RA2\",},{M[11],M[0],T\"temporalCounter_i1\",S'et','os','ct'{{T\"at\",M1x5[71 19 58 74 107],M[1]}}}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 13, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c6_RA2_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const mxArray* sf_opaque_get_hover_data_for_msg(void* chartInstance,
  int32_T msgSSID)
{
  return sf_get_hover_data_for_msg( (SFc6_RA2InstanceStruct *) chartInstance,
    msgSSID);
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc6_RA2InstanceStruct *chartInstance = (SFc6_RA2InstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _RA2MachineNumber_,
           6,
           9,
           10,
           0,
           13,
           0,
           0,
           0,
           0,
           0,
           &(chartInstance->chartNumber),
           &(chartInstance->instanceNumber),
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_RA2MachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_RA2MachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _RA2MachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"homeSwitch");
          _SFD_SET_DATA_PROPS(1,1,1,0,"carPos");
          _SFD_SET_DATA_PROPS(2,1,1,0,"AllReady");
          _SFD_SET_DATA_PROPS(3,2,0,1,"jogSpeed");
          _SFD_SET_DATA_PROPS(4,2,0,1,"toPoint");
          _SFD_SET_DATA_PROPS(5,2,0,1,"homeControllerEnabled");
          _SFD_SET_DATA_PROPS(6,2,0,1,"resetEnc");
          _SFD_SET_DATA_PROPS(7,2,0,1,"homingBusy");
          _SFD_SET_DATA_PROPS(8,2,0,1,"airBagEnabled");
          _SFD_SET_DATA_PROPS(9,2,0,1,"airBagRef");
          _SFD_SET_DATA_PROPS(10,2,0,1,"controlEnabled");
          _SFD_SET_DATA_PROPS(11,2,0,1,"Ready");
          _SFD_SET_DATA_PROPS(12,2,0,1,"StopSim");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(6,0,0);
          _SFD_STATE_INFO(7,0,0);
          _SFD_STATE_INFO(8,0,0);
          _SFD_CH_SUBSTATE_COUNT(9);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_CH_SUBSTATE_INDEX(4,4);
          _SFD_CH_SUBSTATE_INDEX(5,5);
          _SFD_CH_SUBSTATE_INDEX(6,6);
          _SFD_CH_SUBSTATE_INDEX(7,7);
          _SFD_CH_SUBSTATE_INDEX(8,8);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(7,0);
          _SFD_ST_SUBSTATE_COUNT(8,0);
        }

        _SFD_CV_INIT_CHART(9,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(3,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(4,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(5,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(6,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(7,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(8,0,0,0,0,0,NULL,NULL);
        }

        {
          static unsigned int sStartGuardMap[] = { 8, 0 };

          static unsigned int sEndGuardMap[] = { 11, 12 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(7,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 8, 0 };

          static unsigned int sEndGuardMap[] = { 11, 12 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(6,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 12 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 2 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(4,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 8, 0 };

          static unsigned int sEndGuardMap[] = { 11, 12 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(8,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 12 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 4 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(5,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 40 };

          static unsigned int sEndGuardMap[] = { 50 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 31, 23 };

          static unsigned int sEndGuardMap[] = { 34, 35 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(2,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 11, 0 };

          static unsigned int sEndGuardMap[] = { 14, 15 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(3,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(9,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_b_sf_marshallOut,(MexInFcnForType)c6_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_b_sf_marshallOut,(MexInFcnForType)c6_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_b_sf_marshallOut,(MexInFcnForType)c6_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_b_sf_marshallOut,(MexInFcnForType)c6_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_b_sf_marshallOut,(MexInFcnForType)c6_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_b_sf_marshallOut,(MexInFcnForType)c6_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_b_sf_marshallOut,(MexInFcnForType)c6_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_b_sf_marshallOut,(MexInFcnForType)c6_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_b_sf_marshallOut,(MexInFcnForType)c6_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_b_sf_marshallOut,(MexInFcnForType)c6_b_sf_marshallIn);
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _RA2MachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc6_RA2InstanceStruct *chartInstance = (SFc6_RA2InstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c6_jogSpeed);
        _SFD_SET_DATA_VALUE_PTR(4U, chartInstance->c6_toPoint);
        _SFD_SET_DATA_VALUE_PTR(5U, chartInstance->c6_homeControllerEnabled);
        _SFD_SET_DATA_VALUE_PTR(6U, chartInstance->c6_resetEnc);
        _SFD_SET_DATA_VALUE_PTR(7U, chartInstance->c6_homingBusy);
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c6_homeSwitch);
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c6_carPos);
        _SFD_SET_DATA_VALUE_PTR(8U, chartInstance->c6_airBagEnabled);
        _SFD_SET_DATA_VALUE_PTR(9U, chartInstance->c6_airBagRef);
        _SFD_SET_DATA_VALUE_PTR(10U, chartInstance->c6_controlEnabled);
        _SFD_SET_DATA_VALUE_PTR(11U, chartInstance->c6_Ready);
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c6_AllReady);
        _SFD_SET_DATA_VALUE_PTR(12U, chartInstance->c6_StopSim);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sBoGuA6RAIvFNw1mMUZaoQC";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_RA2_optimization_info();
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 6, "dworkChecksum");
    if (mxRTWDWorkChecksum != NULL) {
      double *pr = mxGetPr(mxRTWDWorkChecksum);
      if ((uint32_T)pr[0] != sfunDWorkChecksum[0] ||
          (uint32_T)pr[1] != sfunDWorkChecksum[1] ||
          (uint32_T)pr[2] != sfunDWorkChecksum[2] ||
          (uint32_T)pr[3] != sfunDWorkChecksum[3]) {
        sf_mex_error_message("Code generation and simulation targets registered different sets of persistent variables for the block. "
                             "External or Rapid Accelerator mode simulation requires code generation and simulation targets to "
                             "register the same set of persistent variables for this block. "
                             "This discrepancy is typically caused by MATLAB functions that have different code paths for "
                             "simulation and code generation targets where these code paths define different sets of persistent variables. "
                             "Please identify these code paths in the offending block and rewrite the MATLAB code so that "
                             "the set of persistent variables is the same between simulation and code generation.");
      }
    }
  }
}

static void sf_opaque_initialize_c6_RA2(void *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc6_RA2InstanceStruct*) chartInstanceVar)->S);
  chart_debug_initialization(((SFc6_RA2InstanceStruct*) chartInstanceVar)->S,0);
  initialize_params_c6_RA2((SFc6_RA2InstanceStruct*) chartInstanceVar);
  initialize_c6_RA2((SFc6_RA2InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c6_RA2(void *chartInstanceVar)
{
  enable_c6_RA2((SFc6_RA2InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c6_RA2(void *chartInstanceVar)
{
  disable_c6_RA2((SFc6_RA2InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c6_RA2(void *chartInstanceVar)
{
  sf_gateway_c6_RA2((SFc6_RA2InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c6_RA2(void *chartInstanceVar)
{
  ext_mode_exec_c6_RA2((SFc6_RA2InstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c6_RA2(SimStruct* S)
{
  return get_sim_state_c6_RA2((SFc6_RA2InstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c6_RA2(SimStruct* S, const mxArray *st)
{
  set_sim_state_c6_RA2((SFc6_RA2InstanceStruct*)sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c6_RA2(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc6_RA2InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_RA2_optimization_info();
    }

    finalize_c6_RA2((SFc6_RA2InstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc6_RA2((SFc6_RA2InstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c6_RA2(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c6_RA2((SFc6_RA2InstanceStruct*)sf_get_chart_instance_ptr
      (S));
  }
}

mxArray *sf_c6_RA2_get_testpoint_info(void)
{
  const char *infoEncStr[] = {
    "100 S1x2'varName','path'{{T\"is_active_c6_RA2\",T\"is_active_c6_RA2\"},{T\"is_c6_RA2\",T\"is_c6_RA2\"}}"
  };

  mxArray *mxTpInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  return mxTpInfo;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x5'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size','local_queue_dwork_idx','local_queue_id'{{T\"int32\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"boolean\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint16\",,,,,,,M[0],M[],M[-1],M[-1]}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 5, 10);
}

static uint32_T* sf_get_sfun_dwork_checksum()
{
  static uint32_T checksum[4] = { 3945362440U, 962753234U, 3338428000U,
    3582990550U };

  return checksum;
}

static void mdlSetWorkWidths_c6_RA2(SimStruct *S)
{
  ssMdlUpdateIsEmpty(S, 1);
  ssSetModelReferenceSampleTimeDisallowInheritance(S);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_RA2_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,6);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,6,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 6);
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,6);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,6,3);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,6,10);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=10; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 3; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,6);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(443389942U));
  ssSetChecksum1(S,(3201673119U));
  ssSetChecksum2(S,(926094102U));
  ssSetChecksum3(S,(1104911879U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c6_RA2(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c6_RA2(SimStruct *S)
{
  SFc6_RA2InstanceStruct *chartInstance;
  chartInstance = (SFc6_RA2InstanceStruct *)utMalloc(sizeof
    (SFc6_RA2InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc6_RA2InstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c6_RA2;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c6_RA2;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c6_RA2;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c6_RA2;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c6_RA2;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c6_RA2;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c6_RA2;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c6_RA2;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c6_RA2;
  chartInstance->chartInfo.mdlStart = mdlStart_c6_RA2;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c6_RA2;
  chartInstance->chartInfo.callGetHoverDataForMsg =
    sf_opaque_get_hover_data_for_msg;
  chartInstance->chartInfo.extModeExec = sf_opaque_ext_mode_exec_c6_RA2;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.debugInstance = sfGlobalDebugInstanceStruct;
  chartInstance->S = S;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  chart_debug_initialization(S,1);
  mdl_start_c6_RA2(chartInstance);
}

void c6_RA2_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c6_RA2(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c6_RA2(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c6_RA2(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c6_RA2_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
