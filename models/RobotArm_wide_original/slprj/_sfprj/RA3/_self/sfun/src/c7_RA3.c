/* Include files */

#include <stddef.h>
#include "blas.h"
#include "RA3_sfun.h"
#include "c7_RA3.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "RA3_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c_with_debugger(S, sfGlobalDebugInstanceStruct);

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization);
static void chart_debug_initialize_data_addresses(SimStruct *S);
static const mxArray* sf_opaque_get_hover_data_for_msg(void *chartInstance,
  int32_T msgSSID);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c7_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)
#define c7_IN_AirbagLeft               ((uint8_T)1U)
#define c7_IN_AirbagRight              ((uint8_T)2U)
#define c7_IN_DisableOutputs           ((uint8_T)3U)
#define c7_IN_EnableRunAndSafety       ((uint8_T)4U)
#define c7_IN_Homing                   ((uint8_T)5U)
#define c7_IN_MovetoX0                 ((uint8_T)6U)
#define c7_IN_ResetEnc                 ((uint8_T)7U)
#define c7_IN_WaitForRest              ((uint8_T)8U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;

/* Function Declarations */
static void c7_durationReferenceTimeUpdater(SFc7_RA3InstanceStruct
  *chartInstance);
static void initialize_c7_RA3(SFc7_RA3InstanceStruct *chartInstance);
static void initialize_params_c7_RA3(SFc7_RA3InstanceStruct *chartInstance);
static void enable_c7_RA3(SFc7_RA3InstanceStruct *chartInstance);
static void disable_c7_RA3(SFc7_RA3InstanceStruct *chartInstance);
static void c7_update_debugger_state_c7_RA3(SFc7_RA3InstanceStruct
  *chartInstance);
static void ext_mode_exec_c7_RA3(SFc7_RA3InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c7_RA3(SFc7_RA3InstanceStruct *chartInstance);
static void set_sim_state_c7_RA3(SFc7_RA3InstanceStruct *chartInstance, const
  mxArray *c7_st);
static void c7_set_sim_state_side_effects_c7_RA3(SFc7_RA3InstanceStruct
  *chartInstance);
static void finalize_c7_RA3(SFc7_RA3InstanceStruct *chartInstance);
static void sf_gateway_c7_RA3(SFc7_RA3InstanceStruct *chartInstance);
static void mdl_start_c7_RA3(SFc7_RA3InstanceStruct *chartInstance);
static void c7_chartstep_c7_RA3(SFc7_RA3InstanceStruct *chartInstance);
static void initSimStructsc7_RA3(SFc7_RA3InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c7_machineNumber, uint32_T
  c7_chartNumber, uint32_T c7_instanceNumber);
static const mxArray *c7_sf_marshallOut(void *chartInstanceVoid, void *c7_inData);
static int32_T c7_emlrt_marshallIn(SFc7_RA3InstanceStruct *chartInstance, const
  mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId);
static void c7_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c7_mxArrayInData, const char_T *c7_varName, void *c7_outData);
static const mxArray *c7_b_sf_marshallOut(void *chartInstanceVoid, void
  *c7_inData);
static real_T c7_b_emlrt_marshallIn(SFc7_RA3InstanceStruct *chartInstance, const
  mxArray *c7_b_jogSpeed, const char_T *c7_identifier);
static real_T c7_c_emlrt_marshallIn(SFc7_RA3InstanceStruct *chartInstance, const
  mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId);
static void c7_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c7_mxArrayInData, const char_T *c7_varName, void *c7_outData);
static const mxArray *c7_c_sf_marshallOut(void *chartInstanceVoid, void
  *c7_inData);
static uint8_T c7_d_emlrt_marshallIn(SFc7_RA3InstanceStruct *chartInstance,
  const mxArray *c7_b_is_active_c7_RA3, const char_T *c7_identifier);
static uint8_T c7_e_emlrt_marshallIn(SFc7_RA3InstanceStruct *chartInstance,
  const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId);
static uint16_T c7_f_emlrt_marshallIn(SFc7_RA3InstanceStruct *chartInstance,
  const mxArray *c7_b_temporalCounter_i1, const char_T *c7_identifier);
static uint16_T c7_g_emlrt_marshallIn(SFc7_RA3InstanceStruct *chartInstance,
  const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId);
static const mxArray *c7_h_emlrt_marshallIn(SFc7_RA3InstanceStruct
  *chartInstance, const mxArray *c7_b_setSimStateSideEffectsInfo, const char_T
  *c7_identifier);
static const mxArray *c7_i_emlrt_marshallIn(SFc7_RA3InstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId);
static const mxArray *sf_get_hover_data_for_msg(SFc7_RA3InstanceStruct
  *chartInstance, int32_T c7_ssid);
static void c7_init_sf_message_store_memory(SFc7_RA3InstanceStruct
  *chartInstance);
static void init_dsm_address_info(SFc7_RA3InstanceStruct *chartInstance);
static void init_simulink_io_address(SFc7_RA3InstanceStruct *chartInstance);

/* Function Definitions */
static void c7_durationReferenceTimeUpdater(SFc7_RA3InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void initialize_c7_RA3(SFc7_RA3InstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc7_RA3(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  *chartInstance->c7_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c7_doSetSimStateSideEffects = 0U;
  chartInstance->c7_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c7_temporalCounter_i1 = 0U;
  *chartInstance->c7_temporalCounter_i1 = 0U;
  *chartInstance->c7_temporalCounter_i1 = 0U;
  *chartInstance->c7_temporalCounter_i1 = 0U;
  *chartInstance->c7_is_active_c7_RA3 = 0U;
  *chartInstance->c7_is_c7_RA3 = c7_IN_NO_ACTIVE_CHILD;
  *chartInstance->c7_currentcarPos = 0.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c7_currentcarPos, 0U, 1U, 3U,
                        *chartInstance->c7_sfEvent, false);
  if (!(sf_get_output_port_reusable(chartInstance->S, 1) != 0)) {
    *chartInstance->c7_jogSpeed = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c7_jogSpeed, 5U, 1U, 3U,
                          *chartInstance->c7_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 2) != 0)) {
    *chartInstance->c7_toPoint = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c7_toPoint, 6U, 1U, 3U,
                          *chartInstance->c7_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 3) != 0)) {
    *chartInstance->c7_homeControllerEnabled = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c7_homeControllerEnabled, 7U, 1U, 3U, *
                          chartInstance->c7_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 4) != 0)) {
    *chartInstance->c7_resetEnc = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c7_resetEnc, 8U, 1U, 3U,
                          *chartInstance->c7_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 5) != 0)) {
    *chartInstance->c7_homingBusy = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c7_homingBusy, 9U, 1U, 3U,
                          *chartInstance->c7_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 6) != 0)) {
    *chartInstance->c7_airBagEnabled = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c7_airBagEnabled, 10U, 1U, 3U,
                          *chartInstance->c7_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 7) != 0)) {
    *chartInstance->c7_airBagRef = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c7_airBagRef, 11U, 1U, 3U,
                          *chartInstance->c7_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 8) != 0)) {
    *chartInstance->c7_controlEnabled = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c7_controlEnabled, 12U, 1U, 3U,
                          *chartInstance->c7_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 9) != 0)) {
    *chartInstance->c7_Ready = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c7_Ready, 13U, 1U, 3U,
                          *chartInstance->c7_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 10) != 0)) {
    *chartInstance->c7_StopSim = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c7_StopSim, 14U, 1U, 3U,
                          *chartInstance->c7_sfEvent, false);
  }
}

static void initialize_params_c7_RA3(SFc7_RA3InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c7_RA3(SFc7_RA3InstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c7_RA3(SFc7_RA3InstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c7_update_debugger_state_c7_RA3(SFc7_RA3InstanceStruct
  *chartInstance)
{
  uint32_T c7_prevAniVal;
  c7_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c7_is_active_c7_RA3 == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 3U, *chartInstance->c7_sfEvent);
  }

  if (*chartInstance->c7_is_c7_RA3 == c7_IN_Homing) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c7_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c7_sfEvent);
  }

  if (*chartInstance->c7_is_c7_RA3 == c7_IN_MovetoX0) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c7_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c7_sfEvent);
  }

  if (*chartInstance->c7_is_c7_RA3 == c7_IN_ResetEnc) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c7_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c7_sfEvent);
  }

  if (*chartInstance->c7_is_c7_RA3 == c7_IN_DisableOutputs) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c7_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c7_sfEvent);
  }

  if (*chartInstance->c7_is_c7_RA3 == c7_IN_EnableRunAndSafety) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c7_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c7_sfEvent);
  }

  if (*chartInstance->c7_is_c7_RA3 == c7_IN_AirbagLeft) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c7_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c7_sfEvent);
  }

  if (*chartInstance->c7_is_c7_RA3 == c7_IN_AirbagRight) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c7_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c7_sfEvent);
  }

  if (*chartInstance->c7_is_c7_RA3 == c7_IN_WaitForRest) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c7_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c7_sfEvent);
  }

  _SFD_SET_ANIMATION(c7_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c7_RA3(SFc7_RA3InstanceStruct *chartInstance)
{
  c7_update_debugger_state_c7_RA3(chartInstance);
}

static const mxArray *get_sim_state_c7_RA3(SFc7_RA3InstanceStruct *chartInstance)
{
  const mxArray *c7_st;
  const mxArray *c7_y = NULL;
  real_T c7_hoistedGlobal;
  real_T c7_u;
  const mxArray *c7_b_y = NULL;
  real_T c7_b_hoistedGlobal;
  real_T c7_b_u;
  const mxArray *c7_c_y = NULL;
  real_T c7_c_hoistedGlobal;
  real_T c7_c_u;
  const mxArray *c7_d_y = NULL;
  real_T c7_d_hoistedGlobal;
  real_T c7_d_u;
  const mxArray *c7_e_y = NULL;
  real_T c7_e_hoistedGlobal;
  real_T c7_e_u;
  const mxArray *c7_f_y = NULL;
  real_T c7_f_hoistedGlobal;
  real_T c7_f_u;
  const mxArray *c7_g_y = NULL;
  real_T c7_g_hoistedGlobal;
  real_T c7_g_u;
  const mxArray *c7_h_y = NULL;
  real_T c7_h_hoistedGlobal;
  real_T c7_h_u;
  const mxArray *c7_i_y = NULL;
  real_T c7_i_hoistedGlobal;
  real_T c7_i_u;
  const mxArray *c7_j_y = NULL;
  real_T c7_j_hoistedGlobal;
  real_T c7_j_u;
  const mxArray *c7_k_y = NULL;
  real_T c7_k_hoistedGlobal;
  real_T c7_k_u;
  const mxArray *c7_l_y = NULL;
  uint8_T c7_l_hoistedGlobal;
  uint8_T c7_l_u;
  const mxArray *c7_m_y = NULL;
  uint8_T c7_m_hoistedGlobal;
  uint8_T c7_m_u;
  const mxArray *c7_n_y = NULL;
  uint16_T c7_n_hoistedGlobal;
  uint16_T c7_n_u;
  const mxArray *c7_o_y = NULL;
  c7_st = NULL;
  c7_st = NULL;
  c7_y = NULL;
  sf_mex_assign(&c7_y, sf_mex_createcellmatrix(14, 1), false);
  c7_hoistedGlobal = *chartInstance->c7_Ready;
  c7_u = c7_hoistedGlobal;
  c7_b_y = NULL;
  sf_mex_assign(&c7_b_y, sf_mex_create("y", &c7_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c7_y, 0, c7_b_y);
  c7_b_hoistedGlobal = *chartInstance->c7_StopSim;
  c7_b_u = c7_b_hoistedGlobal;
  c7_c_y = NULL;
  sf_mex_assign(&c7_c_y, sf_mex_create("y", &c7_b_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c7_y, 1, c7_c_y);
  c7_c_hoistedGlobal = *chartInstance->c7_airBagEnabled;
  c7_c_u = c7_c_hoistedGlobal;
  c7_d_y = NULL;
  sf_mex_assign(&c7_d_y, sf_mex_create("y", &c7_c_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c7_y, 2, c7_d_y);
  c7_d_hoistedGlobal = *chartInstance->c7_airBagRef;
  c7_d_u = c7_d_hoistedGlobal;
  c7_e_y = NULL;
  sf_mex_assign(&c7_e_y, sf_mex_create("y", &c7_d_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c7_y, 3, c7_e_y);
  c7_e_hoistedGlobal = *chartInstance->c7_controlEnabled;
  c7_e_u = c7_e_hoistedGlobal;
  c7_f_y = NULL;
  sf_mex_assign(&c7_f_y, sf_mex_create("y", &c7_e_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c7_y, 4, c7_f_y);
  c7_f_hoistedGlobal = *chartInstance->c7_homeControllerEnabled;
  c7_f_u = c7_f_hoistedGlobal;
  c7_g_y = NULL;
  sf_mex_assign(&c7_g_y, sf_mex_create("y", &c7_f_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c7_y, 5, c7_g_y);
  c7_g_hoistedGlobal = *chartInstance->c7_homingBusy;
  c7_g_u = c7_g_hoistedGlobal;
  c7_h_y = NULL;
  sf_mex_assign(&c7_h_y, sf_mex_create("y", &c7_g_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c7_y, 6, c7_h_y);
  c7_h_hoistedGlobal = *chartInstance->c7_jogSpeed;
  c7_h_u = c7_h_hoistedGlobal;
  c7_i_y = NULL;
  sf_mex_assign(&c7_i_y, sf_mex_create("y", &c7_h_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c7_y, 7, c7_i_y);
  c7_i_hoistedGlobal = *chartInstance->c7_resetEnc;
  c7_i_u = c7_i_hoistedGlobal;
  c7_j_y = NULL;
  sf_mex_assign(&c7_j_y, sf_mex_create("y", &c7_i_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c7_y, 8, c7_j_y);
  c7_j_hoistedGlobal = *chartInstance->c7_toPoint;
  c7_j_u = c7_j_hoistedGlobal;
  c7_k_y = NULL;
  sf_mex_assign(&c7_k_y, sf_mex_create("y", &c7_j_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c7_y, 9, c7_k_y);
  c7_k_hoistedGlobal = *chartInstance->c7_currentcarPos;
  c7_k_u = c7_k_hoistedGlobal;
  c7_l_y = NULL;
  sf_mex_assign(&c7_l_y, sf_mex_create("y", &c7_k_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c7_y, 10, c7_l_y);
  c7_l_hoistedGlobal = *chartInstance->c7_is_active_c7_RA3;
  c7_l_u = c7_l_hoistedGlobal;
  c7_m_y = NULL;
  sf_mex_assign(&c7_m_y, sf_mex_create("y", &c7_l_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c7_y, 11, c7_m_y);
  c7_m_hoistedGlobal = *chartInstance->c7_is_c7_RA3;
  c7_m_u = c7_m_hoistedGlobal;
  c7_n_y = NULL;
  sf_mex_assign(&c7_n_y, sf_mex_create("y", &c7_m_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c7_y, 12, c7_n_y);
  c7_n_hoistedGlobal = *chartInstance->c7_temporalCounter_i1;
  c7_n_u = c7_n_hoistedGlobal;
  c7_o_y = NULL;
  sf_mex_assign(&c7_o_y, sf_mex_create("y", &c7_n_u, 5, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c7_y, 13, c7_o_y);
  sf_mex_assign(&c7_st, c7_y, false);
  return c7_st;
}

static void set_sim_state_c7_RA3(SFc7_RA3InstanceStruct *chartInstance, const
  mxArray *c7_st)
{
  const mxArray *c7_u;
  c7_u = sf_mex_dup(c7_st);
  *chartInstance->c7_Ready = c7_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("Ready", c7_u, 0)), "Ready");
  *chartInstance->c7_StopSim = c7_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("StopSim", c7_u, 1)), "StopSim");
  *chartInstance->c7_airBagEnabled = c7_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("airBagEnabled", c7_u, 2)), "airBagEnabled");
  *chartInstance->c7_airBagRef = c7_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("airBagRef", c7_u, 3)), "airBagRef");
  *chartInstance->c7_controlEnabled = c7_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("controlEnabled", c7_u, 4)), "controlEnabled");
  *chartInstance->c7_homeControllerEnabled = c7_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("homeControllerEnabled", c7_u, 5)),
    "homeControllerEnabled");
  *chartInstance->c7_homingBusy = c7_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("homingBusy", c7_u, 6)), "homingBusy");
  *chartInstance->c7_jogSpeed = c7_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("jogSpeed", c7_u, 7)), "jogSpeed");
  *chartInstance->c7_resetEnc = c7_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("resetEnc", c7_u, 8)), "resetEnc");
  *chartInstance->c7_toPoint = c7_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("toPoint", c7_u, 9)), "toPoint");
  *chartInstance->c7_currentcarPos = c7_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("currentcarPos", c7_u, 10)), "currentcarPos");
  *chartInstance->c7_is_active_c7_RA3 = c7_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_c7_RA3", c7_u, 11)), "is_active_c7_RA3");
  *chartInstance->c7_is_c7_RA3 = c7_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("is_c7_RA3", c7_u, 12)), "is_c7_RA3");
  *chartInstance->c7_temporalCounter_i1 = c7_f_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("temporalCounter_i1", c7_u, 13)),
    "temporalCounter_i1");
  sf_mex_assign(&chartInstance->c7_setSimStateSideEffectsInfo,
                c7_h_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "setSimStateSideEffectsInfo", c7_u, 14)), "setSimStateSideEffectsInfo"),
                true);
  sf_mex_destroy(&c7_u);
  chartInstance->c7_doSetSimStateSideEffects = 1U;
  c7_update_debugger_state_c7_RA3(chartInstance);
  sf_mex_destroy(&c7_st);
}

static void c7_set_sim_state_side_effects_c7_RA3(SFc7_RA3InstanceStruct
  *chartInstance)
{
  if (chartInstance->c7_doSetSimStateSideEffects != 0) {
    if (*chartInstance->c7_is_c7_RA3 == c7_IN_AirbagLeft) {
      if (sf_mex_sub(chartInstance->c7_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 2) == 0.0) {
        *chartInstance->c7_temporalCounter_i1 = 0U;
      }
    }

    if (*chartInstance->c7_is_c7_RA3 == c7_IN_AirbagRight) {
      if (sf_mex_sub(chartInstance->c7_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 3) == 0.0) {
        *chartInstance->c7_temporalCounter_i1 = 0U;
      }
    }

    if (*chartInstance->c7_is_c7_RA3 == c7_IN_MovetoX0) {
      if (sf_mex_sub(chartInstance->c7_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 7) == 0.0) {
        *chartInstance->c7_temporalCounter_i1 = 0U;
      }
    }

    if (*chartInstance->c7_is_c7_RA3 == c7_IN_ResetEnc) {
      if (sf_mex_sub(chartInstance->c7_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 8) == 0.0) {
        *chartInstance->c7_temporalCounter_i1 = 0U;
      }
    }

    chartInstance->c7_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c7_RA3(SFc7_RA3InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c7_setSimStateSideEffectsInfo);
}

static void sf_gateway_c7_RA3(SFc7_RA3InstanceStruct *chartInstance)
{
  c7_set_sim_state_side_effects_c7_RA3(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  c7_durationReferenceTimeUpdater(chartInstance);
  if (*chartInstance->c7_temporalCounter_i1 < 32767U) {
    (*chartInstance->c7_temporalCounter_i1)++;
  }

  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 3U, *chartInstance->c7_sfEvent);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c7_zcoordinate, 4U, 1U, 0U,
                        *chartInstance->c7_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c7_AllReady, 3U, 1U, 0U,
                        *chartInstance->c7_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c7_carPos, 2U, 1U, 0U,
                        *chartInstance->c7_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c7_homeSwitch, 1U, 1U, 0U,
                        *chartInstance->c7_sfEvent, false);
  *chartInstance->c7_sfEvent = CALL_EVENT;
  c7_chartstep_c7_RA3(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_RA3MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c7_RA3(SFc7_RA3InstanceStruct *chartInstance)
{
  c7_init_sf_message_store_memory(chartInstance);
}

static void c7_chartstep_c7_RA3(SFc7_RA3InstanceStruct *chartInstance)
{
  boolean_T c7_temp;
  boolean_T c7_out;
  boolean_T c7_b_temp;
  boolean_T c7_b_out;
  boolean_T c7_c_out;
  real_T c7_d0;
  boolean_T c7_d_out;
  boolean_T c7_e_out;
  boolean_T c7_c_temp;
  boolean_T c7_f_out;
  boolean_T c7_d_temp;
  boolean_T c7_g_out;
  boolean_T c7_h_out;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 3U, *chartInstance->c7_sfEvent);
  if (*chartInstance->c7_is_active_c7_RA3 == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 3U, *chartInstance->c7_sfEvent);
    *chartInstance->c7_is_active_c7_RA3 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c7_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c7_sfEvent);
    *chartInstance->c7_is_c7_RA3 = c7_IN_Homing;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c7_sfEvent);
    *chartInstance->c7_toPoint = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c7_toPoint, 6U, 4U, 4U,
                          *chartInstance->c7_sfEvent, false);
    *chartInstance->c7_Ready = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c7_Ready, 13U, 4U, 4U,
                          *chartInstance->c7_sfEvent, false);
    *chartInstance->c7_homingBusy = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c7_homingBusy, 9U, 4U, 4U,
                          *chartInstance->c7_sfEvent, false);
    *chartInstance->c7_jogSpeed = 0.2;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c7_jogSpeed, 5U, 4U, 4U,
                          *chartInstance->c7_sfEvent, false);
    *chartInstance->c7_homeControllerEnabled = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c7_homeControllerEnabled, 7U, 4U, 4U, *
                          chartInstance->c7_sfEvent, false);
  } else {
    switch (*chartInstance->c7_is_c7_RA3) {
     case c7_IN_AirbagLeft:
      CV_CHART_EVAL(3, 0, 1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                   *chartInstance->c7_sfEvent);
      c7_temp = (_SFD_CCP_CALL(7U, 0, 1 != 0U, *chartInstance->c7_sfEvent) != 0);
      if (c7_temp) {
        c7_temp = (_SFD_CCP_CALL(7U, 1, *chartInstance->c7_temporalCounter_i1 >=
                    20480U != 0U, *chartInstance->c7_sfEvent) != 0);
      }

      c7_out = (CV_TRANSITION_EVAL(7U, (int32_T)c7_temp) != 0);
      if (c7_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c7_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c7_sfEvent);
        *chartInstance->c7_is_c7_RA3 = c7_IN_DisableOutputs;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c7_sfEvent);
        *chartInstance->c7_controlEnabled = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c7_controlEnabled, 12U, 4U, 2U,
                              *chartInstance->c7_sfEvent, false);
        *chartInstance->c7_StopSim = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c7_StopSim, 14U, 4U, 2U,
                              *chartInstance->c7_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                     *chartInstance->c7_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c7_sfEvent);
      break;

     case c7_IN_AirbagRight:
      CV_CHART_EVAL(3, 0, 2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                   *chartInstance->c7_sfEvent);
      c7_b_temp = (_SFD_CCP_CALL(6U, 0, 1 != 0U, *chartInstance->c7_sfEvent) !=
                   0);
      if (c7_b_temp) {
        c7_b_temp = (_SFD_CCP_CALL(6U, 1, *chartInstance->c7_temporalCounter_i1 >=
          20480U != 0U, *chartInstance->c7_sfEvent) != 0);
      }

      c7_b_out = (CV_TRANSITION_EVAL(6U, (int32_T)c7_b_temp) != 0);
      if (c7_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, *chartInstance->c7_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c7_sfEvent);
        *chartInstance->c7_is_c7_RA3 = c7_IN_DisableOutputs;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c7_sfEvent);
        *chartInstance->c7_controlEnabled = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c7_controlEnabled, 12U, 4U, 2U,
                              *chartInstance->c7_sfEvent, false);
        *chartInstance->c7_StopSim = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c7_StopSim, 14U, 4U, 2U,
                              *chartInstance->c7_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                     *chartInstance->c7_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c7_sfEvent);
      break;

     case c7_IN_DisableOutputs:
      CV_CHART_EVAL(3, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   *chartInstance->c7_sfEvent);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c7_sfEvent);
      break;

     case c7_IN_EnableRunAndSafety:
      CV_CHART_EVAL(3, 0, 4);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                   *chartInstance->c7_sfEvent);
      c7_c_out = (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4U, 0,
        CV_RELATIONAL_EVAL(5U, 4U, 0, *chartInstance->c7_zcoordinate, -0.0225,
                           -1, 2U, *chartInstance->c7_zcoordinate < -0.0225) !=
        0U, *chartInstance->c7_sfEvent)) != 0);
      if (c7_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c7_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c7_sfEvent);
        *chartInstance->c7_is_c7_RA3 = c7_IN_AirbagLeft;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c7_sfEvent);
        *chartInstance->c7_temporalCounter_i1 = 0U;
        *chartInstance->c7_currentcarPos = *chartInstance->c7_carPos;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c7_currentcarPos, 0U, 4U, 0U,
                              *chartInstance->c7_sfEvent, false);
        *chartInstance->c7_airBagEnabled = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c7_airBagEnabled, 10U, 4U, 0U,
                              *chartInstance->c7_sfEvent, false);
        *chartInstance->c7_airBagRef = *chartInstance->c7_currentcarPos + 0.02;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c7_airBagRef, 11U, 4U, 0U,
                              *chartInstance->c7_sfEvent, false);
        c7_d0 = *chartInstance->c7_airBagRef;
        sf_mex_printf("%s =\\n", "airBagRef");
        sf_mex_call_debug(sfGlobalDebugInstanceStruct, "disp", 0U, 1U, 6, c7_d0);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                     *chartInstance->c7_sfEvent);
        c7_d_out = (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5U, 0,
          CV_RELATIONAL_EVAL(5U, 5U, 0, *chartInstance->c7_carPos, 0.5, -1, 4U, *
                             chartInstance->c7_carPos > 0.5) != 0U,
          *chartInstance->c7_sfEvent)) != 0);
        if (c7_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, *chartInstance->c7_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c7_sfEvent);
          *chartInstance->c7_is_c7_RA3 = c7_IN_AirbagRight;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c7_sfEvent);
          *chartInstance->c7_temporalCounter_i1 = 0U;
          *chartInstance->c7_airBagEnabled = 1.0;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c7_airBagEnabled, 10U, 4U, 1U,
                                *chartInstance->c7_sfEvent, false);
          *chartInstance->c7_airBagRef = 0.48;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c7_airBagRef, 11U, 4U, 1U,
                                *chartInstance->c7_sfEvent, false);
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                       *chartInstance->c7_sfEvent);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c7_sfEvent);
      break;

     case c7_IN_Homing:
      CV_CHART_EVAL(3, 0, 5);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   *chartInstance->c7_sfEvent);
      c7_e_out = (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0,
        *chartInstance->c7_homeSwitch != 0U, *chartInstance->c7_sfEvent)) != 0);
      if (c7_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c7_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c7_sfEvent);
        *chartInstance->c7_is_c7_RA3 = c7_IN_MovetoX0;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c7_sfEvent);
        *chartInstance->c7_temporalCounter_i1 = 0U;
        *chartInstance->c7_jogSpeed = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c7_jogSpeed, 5U, 4U, 5U,
                              *chartInstance->c7_sfEvent, false);
        *chartInstance->c7_toPoint = -0.7854;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c7_toPoint, 6U, 4U, 5U,
                              *chartInstance->c7_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                     *chartInstance->c7_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, *chartInstance->c7_sfEvent);
      break;

     case c7_IN_MovetoX0:
      CV_CHART_EVAL(3, 0, 6);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   *chartInstance->c7_sfEvent);
      c7_c_temp = (_SFD_CCP_CALL(2U, 0, 1 != 0U, *chartInstance->c7_sfEvent) !=
                   0);
      if (c7_c_temp) {
        c7_c_temp = (_SFD_CCP_CALL(2U, 1, *chartInstance->c7_temporalCounter_i1 >=
          28672U != 0U, *chartInstance->c7_sfEvent) != 0);
      }

      c7_f_out = (CV_TRANSITION_EVAL(2U, (int32_T)c7_c_temp) != 0);
      if (c7_f_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c7_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c7_sfEvent);
        *chartInstance->c7_is_c7_RA3 = c7_IN_WaitForRest;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c7_sfEvent);
        *chartInstance->c7_Ready = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c7_Ready, 13U, 4U, 7U,
                              *chartInstance->c7_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U,
                     *chartInstance->c7_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, *chartInstance->c7_sfEvent);
      break;

     case c7_IN_ResetEnc:
      CV_CHART_EVAL(3, 0, 7);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                   *chartInstance->c7_sfEvent);
      c7_d_temp = (_SFD_CCP_CALL(3U, 0, 1 != 0U, *chartInstance->c7_sfEvent) !=
                   0);
      if (c7_d_temp) {
        c7_d_temp = (_SFD_CCP_CALL(3U, 1, *chartInstance->c7_temporalCounter_i1 >=
          41U != 0U, *chartInstance->c7_sfEvent) != 0);
      }

      c7_g_out = (CV_TRANSITION_EVAL(3U, (int32_T)c7_d_temp) != 0);
      if (c7_g_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c7_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c7_sfEvent);
        *chartInstance->c7_is_c7_RA3 = c7_IN_EnableRunAndSafety;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c7_sfEvent);
        *chartInstance->c7_resetEnc = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c7_resetEnc, 8U, 4U, 3U,
                              *chartInstance->c7_sfEvent, false);
        *chartInstance->c7_homingBusy = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c7_homingBusy, 9U, 4U, 3U,
                              *chartInstance->c7_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6U,
                     *chartInstance->c7_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, *chartInstance->c7_sfEvent);
      break;

     case c7_IN_WaitForRest:
      CV_CHART_EVAL(3, 0, 8);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                   *chartInstance->c7_sfEvent);
      c7_h_out = (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8U, 0,
        *chartInstance->c7_AllReady != 0U, *chartInstance->c7_sfEvent)) != 0);
      if (c7_h_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, *chartInstance->c7_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c7_sfEvent);
        *chartInstance->c7_is_c7_RA3 = c7_IN_ResetEnc;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c7_sfEvent);
        *chartInstance->c7_temporalCounter_i1 = 0U;
        *chartInstance->c7_resetEnc = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c7_resetEnc, 8U, 4U, 6U,
                              *chartInstance->c7_sfEvent, false);
        *chartInstance->c7_homeControllerEnabled = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c7_homeControllerEnabled, 7U, 4U,
                              6U, *chartInstance->c7_sfEvent, false);
        *chartInstance->c7_Ready = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c7_Ready, 13U, 4U, 6U,
                              *chartInstance->c7_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 7U,
                     *chartInstance->c7_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, *chartInstance->c7_sfEvent);
      break;

     default:
      CV_CHART_EVAL(3, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c7_is_c7_RA3 = c7_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c7_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c7_sfEvent);
}

static void initSimStructsc7_RA3(SFc7_RA3InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c7_machineNumber, uint32_T
  c7_chartNumber, uint32_T c7_instanceNumber)
{
  (void)c7_machineNumber;
  (void)c7_chartNumber;
  (void)c7_instanceNumber;
}

const mxArray *sf_c7_RA3_get_eml_resolved_functions_info(void)
{
  const mxArray *c7_nameCaptureInfo = NULL;
  c7_nameCaptureInfo = NULL;
  sf_mex_assign(&c7_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c7_nameCaptureInfo;
}

static const mxArray *c7_sf_marshallOut(void *chartInstanceVoid, void *c7_inData)
{
  const mxArray *c7_mxArrayOutData = NULL;
  int32_T c7_u;
  const mxArray *c7_y = NULL;
  SFc7_RA3InstanceStruct *chartInstance;
  chartInstance = (SFc7_RA3InstanceStruct *)chartInstanceVoid;
  c7_mxArrayOutData = NULL;
  c7_u = *(int32_T *)c7_inData;
  c7_y = NULL;
  sf_mex_assign(&c7_y, sf_mex_create("y", &c7_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c7_mxArrayOutData, c7_y, false);
  return c7_mxArrayOutData;
}

static int32_T c7_emlrt_marshallIn(SFc7_RA3InstanceStruct *chartInstance, const
  mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId)
{
  int32_T c7_y;
  int32_T c7_i0;
  (void)chartInstance;
  sf_mex_import(c7_parentId, sf_mex_dup(c7_u), &c7_i0, 1, 6, 0U, 0, 0U, 0);
  c7_y = c7_i0;
  sf_mex_destroy(&c7_u);
  return c7_y;
}

static void c7_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c7_mxArrayInData, const char_T *c7_varName, void *c7_outData)
{
  const mxArray *c7_b_sfEvent;
  const char_T *c7_identifier;
  emlrtMsgIdentifier c7_thisId;
  int32_T c7_y;
  SFc7_RA3InstanceStruct *chartInstance;
  chartInstance = (SFc7_RA3InstanceStruct *)chartInstanceVoid;
  c7_b_sfEvent = sf_mex_dup(c7_mxArrayInData);
  c7_identifier = c7_varName;
  c7_thisId.fIdentifier = c7_identifier;
  c7_thisId.fParent = NULL;
  c7_thisId.bParentIsCell = false;
  c7_y = c7_emlrt_marshallIn(chartInstance, sf_mex_dup(c7_b_sfEvent), &c7_thisId);
  sf_mex_destroy(&c7_b_sfEvent);
  *(int32_T *)c7_outData = c7_y;
  sf_mex_destroy(&c7_mxArrayInData);
}

static const mxArray *c7_b_sf_marshallOut(void *chartInstanceVoid, void
  *c7_inData)
{
  const mxArray *c7_mxArrayOutData = NULL;
  real_T c7_u;
  const mxArray *c7_y = NULL;
  SFc7_RA3InstanceStruct *chartInstance;
  chartInstance = (SFc7_RA3InstanceStruct *)chartInstanceVoid;
  c7_mxArrayOutData = NULL;
  c7_u = *(real_T *)c7_inData;
  c7_y = NULL;
  sf_mex_assign(&c7_y, sf_mex_create("y", &c7_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c7_mxArrayOutData, c7_y, false);
  return c7_mxArrayOutData;
}

static real_T c7_b_emlrt_marshallIn(SFc7_RA3InstanceStruct *chartInstance, const
  mxArray *c7_b_jogSpeed, const char_T *c7_identifier)
{
  real_T c7_y;
  emlrtMsgIdentifier c7_thisId;
  c7_thisId.fIdentifier = c7_identifier;
  c7_thisId.fParent = NULL;
  c7_thisId.bParentIsCell = false;
  c7_y = c7_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c7_b_jogSpeed),
    &c7_thisId);
  sf_mex_destroy(&c7_b_jogSpeed);
  return c7_y;
}

static real_T c7_c_emlrt_marshallIn(SFc7_RA3InstanceStruct *chartInstance, const
  mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId)
{
  real_T c7_y;
  real_T c7_d1;
  (void)chartInstance;
  sf_mex_import(c7_parentId, sf_mex_dup(c7_u), &c7_d1, 1, 0, 0U, 0, 0U, 0);
  c7_y = c7_d1;
  sf_mex_destroy(&c7_u);
  return c7_y;
}

static void c7_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c7_mxArrayInData, const char_T *c7_varName, void *c7_outData)
{
  const mxArray *c7_b_jogSpeed;
  const char_T *c7_identifier;
  emlrtMsgIdentifier c7_thisId;
  real_T c7_y;
  SFc7_RA3InstanceStruct *chartInstance;
  chartInstance = (SFc7_RA3InstanceStruct *)chartInstanceVoid;
  c7_b_jogSpeed = sf_mex_dup(c7_mxArrayInData);
  c7_identifier = c7_varName;
  c7_thisId.fIdentifier = c7_identifier;
  c7_thisId.fParent = NULL;
  c7_thisId.bParentIsCell = false;
  c7_y = c7_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c7_b_jogSpeed),
    &c7_thisId);
  sf_mex_destroy(&c7_b_jogSpeed);
  *(real_T *)c7_outData = c7_y;
  sf_mex_destroy(&c7_mxArrayInData);
}

static const mxArray *c7_c_sf_marshallOut(void *chartInstanceVoid, void
  *c7_inData)
{
  const mxArray *c7_mxArrayOutData = NULL;
  boolean_T c7_u;
  const mxArray *c7_y = NULL;
  SFc7_RA3InstanceStruct *chartInstance;
  chartInstance = (SFc7_RA3InstanceStruct *)chartInstanceVoid;
  c7_mxArrayOutData = NULL;
  c7_u = *(boolean_T *)c7_inData;
  c7_y = NULL;
  sf_mex_assign(&c7_y, sf_mex_create("y", &c7_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c7_mxArrayOutData, c7_y, false);
  return c7_mxArrayOutData;
}

static uint8_T c7_d_emlrt_marshallIn(SFc7_RA3InstanceStruct *chartInstance,
  const mxArray *c7_b_is_active_c7_RA3, const char_T *c7_identifier)
{
  uint8_T c7_y;
  emlrtMsgIdentifier c7_thisId;
  c7_thisId.fIdentifier = c7_identifier;
  c7_thisId.fParent = NULL;
  c7_thisId.bParentIsCell = false;
  c7_y = c7_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c7_b_is_active_c7_RA3),
    &c7_thisId);
  sf_mex_destroy(&c7_b_is_active_c7_RA3);
  return c7_y;
}

static uint8_T c7_e_emlrt_marshallIn(SFc7_RA3InstanceStruct *chartInstance,
  const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId)
{
  uint8_T c7_y;
  uint8_T c7_u0;
  (void)chartInstance;
  sf_mex_import(c7_parentId, sf_mex_dup(c7_u), &c7_u0, 1, 3, 0U, 0, 0U, 0);
  c7_y = c7_u0;
  sf_mex_destroy(&c7_u);
  return c7_y;
}

static uint16_T c7_f_emlrt_marshallIn(SFc7_RA3InstanceStruct *chartInstance,
  const mxArray *c7_b_temporalCounter_i1, const char_T *c7_identifier)
{
  uint16_T c7_y;
  emlrtMsgIdentifier c7_thisId;
  c7_thisId.fIdentifier = c7_identifier;
  c7_thisId.fParent = NULL;
  c7_thisId.bParentIsCell = false;
  c7_y = c7_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c7_b_temporalCounter_i1),
    &c7_thisId);
  sf_mex_destroy(&c7_b_temporalCounter_i1);
  return c7_y;
}

static uint16_T c7_g_emlrt_marshallIn(SFc7_RA3InstanceStruct *chartInstance,
  const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId)
{
  uint16_T c7_y;
  uint16_T c7_u1;
  (void)chartInstance;
  sf_mex_import(c7_parentId, sf_mex_dup(c7_u), &c7_u1, 1, 5, 0U, 0, 0U, 0);
  c7_y = c7_u1;
  sf_mex_destroy(&c7_u);
  return c7_y;
}

static const mxArray *c7_h_emlrt_marshallIn(SFc7_RA3InstanceStruct
  *chartInstance, const mxArray *c7_b_setSimStateSideEffectsInfo, const char_T
  *c7_identifier)
{
  const mxArray *c7_y = NULL;
  emlrtMsgIdentifier c7_thisId;
  c7_y = NULL;
  c7_thisId.fIdentifier = c7_identifier;
  c7_thisId.fParent = NULL;
  c7_thisId.bParentIsCell = false;
  sf_mex_assign(&c7_y, c7_i_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c7_b_setSimStateSideEffectsInfo), &c7_thisId), false);
  sf_mex_destroy(&c7_b_setSimStateSideEffectsInfo);
  return c7_y;
}

static const mxArray *c7_i_emlrt_marshallIn(SFc7_RA3InstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId)
{
  const mxArray *c7_y = NULL;
  (void)chartInstance;
  (void)c7_parentId;
  c7_y = NULL;
  sf_mex_assign(&c7_y, sf_mex_duplicatearraysafe(&c7_u), false);
  sf_mex_destroy(&c7_u);
  return c7_y;
}

static const mxArray *sf_get_hover_data_for_msg(SFc7_RA3InstanceStruct
  *chartInstance, int32_T c7_ssid)
{
  (void)chartInstance;
  (void)c7_ssid;
  return NULL;
}

static void c7_init_sf_message_store_memory(SFc7_RA3InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_dsm_address_info(SFc7_RA3InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc7_RA3InstanceStruct *chartInstance)
{
  chartInstance->c7_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 0);
  chartInstance->c7_isStable = (boolean_T *)ssGetDWork_wrapper(chartInstance->S,
    1);
  chartInstance->c7_is_active_c7_RA3 = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 2);
  chartInstance->c7_is_c7_RA3 = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    3);
  chartInstance->c7_jogSpeed = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c7_toPoint = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c7_homeControllerEnabled = (real_T *)
    ssGetOutputPortSignal_wrapper(chartInstance->S, 3);
  chartInstance->c7_resetEnc = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c7_homingBusy = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c7_homeSwitch = (boolean_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c7_carPos = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c7_airBagEnabled = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c7_airBagRef = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 7);
  chartInstance->c7_controlEnabled = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 8);
  chartInstance->c7_Ready = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 9);
  chartInstance->c7_AllReady = (boolean_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c7_StopSim = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 10);
  chartInstance->c7_zcoordinate = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c7_currentcarPos = (real_T *)ssGetDWork_wrapper
    (chartInstance->S, 4);
  chartInstance->c7_temporalCounter_i1 = (uint16_T *)ssGetDWork_wrapper
    (chartInstance->S, 5);
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
void sf_c7_RA3_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(723804940U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1069658181U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3720129544U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3438859240U);
}

mxArray* sf_c7_RA3_get_post_codegen_info(void);
mxArray *sf_c7_RA3_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("BiQG36GXLgLd00Nav4vpDG");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,4,3,dataFields);

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
    mxArray* mxPostCodegenInfo = sf_c7_RA3_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c7_RA3_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c7_RA3_jit_fallback_info(void)
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

mxArray *sf_c7_RA3_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c7_RA3_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c7_RA3(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[90],T\"Ready\",},{M[1],M[95],T\"StopSim\",},{M[1],M[69],T\"airBagEnabled\",},{M[1],M[70],T\"airBagRef\",},{M[1],M[80],T\"controlEnabled\",},{M[1],M[60],T\"homeControllerEnabled\",},{M[1],M[2],T\"homingBusy\",},{M[1],M[1],T\"jogSpeed\",},{M[1],M[63],T\"resetEnc\",},{M[1],M[53],T\"toPoint\",}}",
    "100 S1x4'type','srcId','name','auxInfo'{{M[3],M[97],T\"currentcarPos\",},{M[8],M[0],T\"is_active_c7_RA3\",},{M[9],M[0],T\"is_c7_RA3\",},{M[11],M[0],T\"temporalCounter_i1\",S'et','os','ct'{{T\"at\",M1x4[71 19 58 74],M[1]}}}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 14, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c7_RA3_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const mxArray* sf_opaque_get_hover_data_for_msg(void* chartInstance,
  int32_T msgSSID)
{
  return sf_get_hover_data_for_msg( (SFc7_RA3InstanceStruct *) chartInstance,
    msgSSID);
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc7_RA3InstanceStruct *chartInstance = (SFc7_RA3InstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _RA3MachineNumber_,
           7,
           8,
           9,
           0,
           15,
           0,
           0,
           0,
           0,
           0,
           &(chartInstance->chartNumber),
           &(chartInstance->instanceNumber),
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_RA3MachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_RA3MachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _RA3MachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,0,0,0,"currentcarPos");
          _SFD_SET_DATA_PROPS(1,1,1,0,"homeSwitch");
          _SFD_SET_DATA_PROPS(2,1,1,0,"carPos");
          _SFD_SET_DATA_PROPS(3,1,1,0,"AllReady");
          _SFD_SET_DATA_PROPS(4,1,1,0,"zcoordinate");
          _SFD_SET_DATA_PROPS(5,2,0,1,"jogSpeed");
          _SFD_SET_DATA_PROPS(6,2,0,1,"toPoint");
          _SFD_SET_DATA_PROPS(7,2,0,1,"homeControllerEnabled");
          _SFD_SET_DATA_PROPS(8,2,0,1,"resetEnc");
          _SFD_SET_DATA_PROPS(9,2,0,1,"homingBusy");
          _SFD_SET_DATA_PROPS(10,2,0,1,"airBagEnabled");
          _SFD_SET_DATA_PROPS(11,2,0,1,"airBagRef");
          _SFD_SET_DATA_PROPS(12,2,0,1,"controlEnabled");
          _SFD_SET_DATA_PROPS(13,2,0,1,"Ready");
          _SFD_SET_DATA_PROPS(14,2,0,1,"StopSim");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(6,0,0);
          _SFD_STATE_INFO(7,0,0);
          _SFD_CH_SUBSTATE_COUNT(8);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_CH_SUBSTATE_INDEX(4,4);
          _SFD_CH_SUBSTATE_INDEX(5,5);
          _SFD_CH_SUBSTATE_INDEX(6,6);
          _SFD_CH_SUBSTATE_INDEX(7,7);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(7,0);
        }

        _SFD_CV_INIT_CHART(8,1,0,0);

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

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 8, 0 };

          static unsigned int sEndGuardMap[] = { 11, 12 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(7,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 8, 0 };

          static unsigned int sEndGuardMap[] = { 11, 12 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(6,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 40 };

          static unsigned int sEndGuardMap[] = { 50 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 20 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 20 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 2, 2 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(4,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 11 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 4, 4 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(5,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
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

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_b_sf_marshallOut,(MexInFcnForType)c7_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_b_sf_marshallOut,(MexInFcnForType)c7_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_b_sf_marshallOut,(MexInFcnForType)c7_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_b_sf_marshallOut,(MexInFcnForType)c7_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_b_sf_marshallOut,(MexInFcnForType)c7_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_b_sf_marshallOut,(MexInFcnForType)c7_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_b_sf_marshallOut,(MexInFcnForType)c7_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_b_sf_marshallOut,(MexInFcnForType)c7_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_b_sf_marshallOut,(MexInFcnForType)c7_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(13,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_b_sf_marshallOut,(MexInFcnForType)c7_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(14,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c7_b_sf_marshallOut,(MexInFcnForType)c7_b_sf_marshallIn);
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _RA3MachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc7_RA3InstanceStruct *chartInstance = (SFc7_RA3InstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(5U, chartInstance->c7_jogSpeed);
        _SFD_SET_DATA_VALUE_PTR(6U, chartInstance->c7_toPoint);
        _SFD_SET_DATA_VALUE_PTR(7U, chartInstance->c7_homeControllerEnabled);
        _SFD_SET_DATA_VALUE_PTR(8U, chartInstance->c7_resetEnc);
        _SFD_SET_DATA_VALUE_PTR(9U, chartInstance->c7_homingBusy);
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c7_homeSwitch);
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c7_carPos);
        _SFD_SET_DATA_VALUE_PTR(10U, chartInstance->c7_airBagEnabled);
        _SFD_SET_DATA_VALUE_PTR(11U, chartInstance->c7_airBagRef);
        _SFD_SET_DATA_VALUE_PTR(12U, chartInstance->c7_controlEnabled);
        _SFD_SET_DATA_VALUE_PTR(13U, chartInstance->c7_Ready);
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c7_AllReady);
        _SFD_SET_DATA_VALUE_PTR(14U, chartInstance->c7_StopSim);
        _SFD_SET_DATA_VALUE_PTR(4U, chartInstance->c7_zcoordinate);
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c7_currentcarPos);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sRPsVQw9XSVF1y3SlLfhk8";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_RA3_optimization_info();
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 7, "dworkChecksum");
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

static void sf_opaque_initialize_c7_RA3(void *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc7_RA3InstanceStruct*) chartInstanceVar)->S);
  chart_debug_initialization(((SFc7_RA3InstanceStruct*) chartInstanceVar)->S,0);
  initialize_params_c7_RA3((SFc7_RA3InstanceStruct*) chartInstanceVar);
  initialize_c7_RA3((SFc7_RA3InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c7_RA3(void *chartInstanceVar)
{
  enable_c7_RA3((SFc7_RA3InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c7_RA3(void *chartInstanceVar)
{
  disable_c7_RA3((SFc7_RA3InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c7_RA3(void *chartInstanceVar)
{
  sf_gateway_c7_RA3((SFc7_RA3InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c7_RA3(void *chartInstanceVar)
{
  ext_mode_exec_c7_RA3((SFc7_RA3InstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c7_RA3(SimStruct* S)
{
  return get_sim_state_c7_RA3((SFc7_RA3InstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c7_RA3(SimStruct* S, const mxArray *st)
{
  set_sim_state_c7_RA3((SFc7_RA3InstanceStruct*)sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c7_RA3(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc7_RA3InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_RA3_optimization_info();
    }

    finalize_c7_RA3((SFc7_RA3InstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc7_RA3((SFc7_RA3InstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c7_RA3(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c7_RA3((SFc7_RA3InstanceStruct*)sf_get_chart_instance_ptr
      (S));
  }
}

mxArray *sf_c7_RA3_get_testpoint_info(void)
{
  const char *infoEncStr[] = {
    "100 S1x2'varName','path'{{T\"is_active_c7_RA3\",T\"is_active_c7_RA3\"},{T\"is_c7_RA3\",T\"is_c7_RA3\"}}"
  };

  mxArray *mxTpInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  return mxTpInfo;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x6'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size','local_queue_dwork_idx','local_queue_id'{{T\"int32\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"boolean\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"double\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint16\",,,,,,,M[0],M[],M[-1],M[-1]}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 6, 10);
}

static uint32_T* sf_get_sfun_dwork_checksum()
{
  static uint32_T checksum[4] = { 56031994U, 1603997740U, 255368712U,
    1221469784U };

  return checksum;
}

static void mdlSetWorkWidths_c7_RA3(SimStruct *S)
{
  ssMdlUpdateIsEmpty(S, 1);
  ssSetModelReferenceSampleTimeDisallowInheritance(S);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_RA3_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,7);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,7,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 7);
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,7);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,7,4);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,7,10);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=10; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 4; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,7);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3423283103U));
  ssSetChecksum1(S,(4152238290U));
  ssSetChecksum2(S,(302136337U));
  ssSetChecksum3(S,(1360297392U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c7_RA3(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c7_RA3(SimStruct *S)
{
  SFc7_RA3InstanceStruct *chartInstance;
  chartInstance = (SFc7_RA3InstanceStruct *)utMalloc(sizeof
    (SFc7_RA3InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc7_RA3InstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c7_RA3;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c7_RA3;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c7_RA3;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c7_RA3;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c7_RA3;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c7_RA3;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c7_RA3;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c7_RA3;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c7_RA3;
  chartInstance->chartInfo.mdlStart = mdlStart_c7_RA3;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c7_RA3;
  chartInstance->chartInfo.callGetHoverDataForMsg =
    sf_opaque_get_hover_data_for_msg;
  chartInstance->chartInfo.extModeExec = sf_opaque_ext_mode_exec_c7_RA3;
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
  mdl_start_c7_RA3(chartInstance);
}

void c7_RA3_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c7_RA3(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c7_RA3(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c7_RA3(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c7_RA3_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
