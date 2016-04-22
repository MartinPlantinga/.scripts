/* Include files */

#include <stddef.h>
#include "blas.h"
#include "RA3_sfun.h"
#include "c5_RA3.h"
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
#define c5_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)
#define c5_IN_AirbagLeft               ((uint8_T)1U)
#define c5_IN_AirbagRight              ((uint8_T)2U)
#define c5_IN_CheckRobotIsON           ((uint8_T)3U)
#define c5_IN_DisableOutputs           ((uint8_T)4U)
#define c5_IN_EnableRunAndSafety       ((uint8_T)5U)
#define c5_IN_Homing                   ((uint8_T)6U)
#define c5_IN_MovetoX0                 ((uint8_T)7U)
#define c5_IN_ResetEnc                 ((uint8_T)8U)
#define c5_IN_RobotIsON                ((uint8_T)9U)
#define c5_IN_STOPRobotIsOFF           ((uint8_T)10U)
#define c5_IN_WaitForRest              ((uint8_T)11U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;

/* Function Declarations */
static void c5_durationReferenceTimeUpdater(SFc5_RA3InstanceStruct
  *chartInstance);
static void initialize_c5_RA3(SFc5_RA3InstanceStruct *chartInstance);
static void initialize_params_c5_RA3(SFc5_RA3InstanceStruct *chartInstance);
static void enable_c5_RA3(SFc5_RA3InstanceStruct *chartInstance);
static void disable_c5_RA3(SFc5_RA3InstanceStruct *chartInstance);
static void c5_update_debugger_state_c5_RA3(SFc5_RA3InstanceStruct
  *chartInstance);
static void ext_mode_exec_c5_RA3(SFc5_RA3InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c5_RA3(SFc5_RA3InstanceStruct *chartInstance);
static void set_sim_state_c5_RA3(SFc5_RA3InstanceStruct *chartInstance, const
  mxArray *c5_st);
static void c5_set_sim_state_side_effects_c5_RA3(SFc5_RA3InstanceStruct
  *chartInstance);
static void finalize_c5_RA3(SFc5_RA3InstanceStruct *chartInstance);
static void sf_gateway_c5_RA3(SFc5_RA3InstanceStruct *chartInstance);
static void mdl_start_c5_RA3(SFc5_RA3InstanceStruct *chartInstance);
static void c5_chartstep_c5_RA3(SFc5_RA3InstanceStruct *chartInstance);
static void initSimStructsc5_RA3(SFc5_RA3InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c5_machineNumber, uint32_T
  c5_chartNumber, uint32_T c5_instanceNumber);
static const mxArray *c5_sf_marshallOut(void *chartInstanceVoid, void *c5_inData);
static int32_T c5_emlrt_marshallIn(SFc5_RA3InstanceStruct *chartInstance, const
  mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static void c5_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData);
static const mxArray *c5_b_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData);
static real_T c5_b_emlrt_marshallIn(SFc5_RA3InstanceStruct *chartInstance, const
  mxArray *c5_b_jogSpeed, const char_T *c5_identifier);
static real_T c5_c_emlrt_marshallIn(SFc5_RA3InstanceStruct *chartInstance, const
  mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static void c5_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData);
static const mxArray *c5_c_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData);
static uint8_T c5_d_emlrt_marshallIn(SFc5_RA3InstanceStruct *chartInstance,
  const mxArray *c5_b_is_active_c5_RA3, const char_T *c5_identifier);
static uint8_T c5_e_emlrt_marshallIn(SFc5_RA3InstanceStruct *chartInstance,
  const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static uint16_T c5_f_emlrt_marshallIn(SFc5_RA3InstanceStruct *chartInstance,
  const mxArray *c5_b_temporalCounter_i1, const char_T *c5_identifier);
static uint16_T c5_g_emlrt_marshallIn(SFc5_RA3InstanceStruct *chartInstance,
  const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static const mxArray *c5_h_emlrt_marshallIn(SFc5_RA3InstanceStruct
  *chartInstance, const mxArray *c5_b_setSimStateSideEffectsInfo, const char_T
  *c5_identifier);
static const mxArray *c5_i_emlrt_marshallIn(SFc5_RA3InstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static const mxArray *sf_get_hover_data_for_msg(SFc5_RA3InstanceStruct
  *chartInstance, int32_T c5_ssid);
static void c5_init_sf_message_store_memory(SFc5_RA3InstanceStruct
  *chartInstance);
static void init_dsm_address_info(SFc5_RA3InstanceStruct *chartInstance);
static void init_simulink_io_address(SFc5_RA3InstanceStruct *chartInstance);

/* Function Definitions */
static void c5_durationReferenceTimeUpdater(SFc5_RA3InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void initialize_c5_RA3(SFc5_RA3InstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc5_RA3(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  *chartInstance->c5_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c5_doSetSimStateSideEffects = 0U;
  chartInstance->c5_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c5_temporalCounter_i1 = 0U;
  *chartInstance->c5_temporalCounter_i1 = 0U;
  *chartInstance->c5_temporalCounter_i1 = 0U;
  *chartInstance->c5_temporalCounter_i1 = 0U;
  *chartInstance->c5_temporalCounter_i1 = 0U;
  *chartInstance->c5_is_active_c5_RA3 = 0U;
  *chartInstance->c5_is_c5_RA3 = c5_IN_NO_ACTIVE_CHILD;
  if (!(sf_get_output_port_reusable(chartInstance->S, 1) != 0)) {
    *chartInstance->c5_jogSpeed = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_jogSpeed, 3U, 1U, 1U,
                          *chartInstance->c5_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 2) != 0)) {
    *chartInstance->c5_toPoint = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_toPoint, 4U, 1U, 1U,
                          *chartInstance->c5_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 3) != 0)) {
    *chartInstance->c5_homeControllerEnabled = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_homeControllerEnabled, 5U, 1U, 1U, *
                          chartInstance->c5_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 4) != 0)) {
    *chartInstance->c5_resetEnc = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_resetEnc, 6U, 1U, 1U,
                          *chartInstance->c5_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 5) != 0)) {
    *chartInstance->c5_homingBusy = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_homingBusy, 7U, 1U, 1U,
                          *chartInstance->c5_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 6) != 0)) {
    *chartInstance->c5_airBagEnabled = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_airBagEnabled, 8U, 1U, 1U,
                          *chartInstance->c5_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 7) != 0)) {
    *chartInstance->c5_airBagRef = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_airBagRef, 9U, 1U, 1U,
                          *chartInstance->c5_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 8) != 0)) {
    *chartInstance->c5_controlEnabled = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_controlEnabled, 10U, 1U, 1U,
                          *chartInstance->c5_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 9) != 0)) {
    *chartInstance->c5_Ready = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_Ready, 11U, 1U, 1U,
                          *chartInstance->c5_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 10) != 0)) {
    *chartInstance->c5_StopSim = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_StopSim, 12U, 1U, 1U,
                          *chartInstance->c5_sfEvent, false);
  }
}

static void initialize_params_c5_RA3(SFc5_RA3InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c5_RA3(SFc5_RA3InstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c5_RA3(SFc5_RA3InstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c5_update_debugger_state_c5_RA3(SFc5_RA3InstanceStruct
  *chartInstance)
{
  uint32_T c5_prevAniVal;
  c5_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c5_is_active_c5_RA3 == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 1U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_c5_RA3 == c5_IN_Homing) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_c5_RA3 == c5_IN_MovetoX0) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_c5_RA3 == c5_IN_ResetEnc) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_c5_RA3 == c5_IN_DisableOutputs) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_c5_RA3 == c5_IN_EnableRunAndSafety) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_c5_RA3 == c5_IN_AirbagLeft) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_c5_RA3 == c5_IN_AirbagRight) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_c5_RA3 == c5_IN_WaitForRest) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_c5_RA3 == c5_IN_CheckRobotIsON) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_c5_RA3 == c5_IN_STOPRobotIsOFF) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_c5_RA3 == c5_IN_RobotIsON) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c5_sfEvent);
  }

  _SFD_SET_ANIMATION(c5_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c5_RA3(SFc5_RA3InstanceStruct *chartInstance)
{
  c5_update_debugger_state_c5_RA3(chartInstance);
}

static const mxArray *get_sim_state_c5_RA3(SFc5_RA3InstanceStruct *chartInstance)
{
  const mxArray *c5_st;
  const mxArray *c5_y = NULL;
  real_T c5_hoistedGlobal;
  real_T c5_u;
  const mxArray *c5_b_y = NULL;
  real_T c5_b_hoistedGlobal;
  real_T c5_b_u;
  const mxArray *c5_c_y = NULL;
  real_T c5_c_hoistedGlobal;
  real_T c5_c_u;
  const mxArray *c5_d_y = NULL;
  real_T c5_d_hoistedGlobal;
  real_T c5_d_u;
  const mxArray *c5_e_y = NULL;
  real_T c5_e_hoistedGlobal;
  real_T c5_e_u;
  const mxArray *c5_f_y = NULL;
  real_T c5_f_hoistedGlobal;
  real_T c5_f_u;
  const mxArray *c5_g_y = NULL;
  real_T c5_g_hoistedGlobal;
  real_T c5_g_u;
  const mxArray *c5_h_y = NULL;
  real_T c5_h_hoistedGlobal;
  real_T c5_h_u;
  const mxArray *c5_i_y = NULL;
  real_T c5_i_hoistedGlobal;
  real_T c5_i_u;
  const mxArray *c5_j_y = NULL;
  real_T c5_j_hoistedGlobal;
  real_T c5_j_u;
  const mxArray *c5_k_y = NULL;
  uint8_T c5_k_hoistedGlobal;
  uint8_T c5_k_u;
  const mxArray *c5_l_y = NULL;
  uint8_T c5_l_hoistedGlobal;
  uint8_T c5_l_u;
  const mxArray *c5_m_y = NULL;
  uint16_T c5_m_hoistedGlobal;
  uint16_T c5_m_u;
  const mxArray *c5_n_y = NULL;
  c5_st = NULL;
  c5_st = NULL;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_createcellmatrix(13, 1), false);
  c5_hoistedGlobal = *chartInstance->c5_Ready;
  c5_u = c5_hoistedGlobal;
  c5_b_y = NULL;
  sf_mex_assign(&c5_b_y, sf_mex_create("y", &c5_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 0, c5_b_y);
  c5_b_hoistedGlobal = *chartInstance->c5_StopSim;
  c5_b_u = c5_b_hoistedGlobal;
  c5_c_y = NULL;
  sf_mex_assign(&c5_c_y, sf_mex_create("y", &c5_b_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 1, c5_c_y);
  c5_c_hoistedGlobal = *chartInstance->c5_airBagEnabled;
  c5_c_u = c5_c_hoistedGlobal;
  c5_d_y = NULL;
  sf_mex_assign(&c5_d_y, sf_mex_create("y", &c5_c_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 2, c5_d_y);
  c5_d_hoistedGlobal = *chartInstance->c5_airBagRef;
  c5_d_u = c5_d_hoistedGlobal;
  c5_e_y = NULL;
  sf_mex_assign(&c5_e_y, sf_mex_create("y", &c5_d_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 3, c5_e_y);
  c5_e_hoistedGlobal = *chartInstance->c5_controlEnabled;
  c5_e_u = c5_e_hoistedGlobal;
  c5_f_y = NULL;
  sf_mex_assign(&c5_f_y, sf_mex_create("y", &c5_e_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 4, c5_f_y);
  c5_f_hoistedGlobal = *chartInstance->c5_homeControllerEnabled;
  c5_f_u = c5_f_hoistedGlobal;
  c5_g_y = NULL;
  sf_mex_assign(&c5_g_y, sf_mex_create("y", &c5_f_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 5, c5_g_y);
  c5_g_hoistedGlobal = *chartInstance->c5_homingBusy;
  c5_g_u = c5_g_hoistedGlobal;
  c5_h_y = NULL;
  sf_mex_assign(&c5_h_y, sf_mex_create("y", &c5_g_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 6, c5_h_y);
  c5_h_hoistedGlobal = *chartInstance->c5_jogSpeed;
  c5_h_u = c5_h_hoistedGlobal;
  c5_i_y = NULL;
  sf_mex_assign(&c5_i_y, sf_mex_create("y", &c5_h_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 7, c5_i_y);
  c5_i_hoistedGlobal = *chartInstance->c5_resetEnc;
  c5_i_u = c5_i_hoistedGlobal;
  c5_j_y = NULL;
  sf_mex_assign(&c5_j_y, sf_mex_create("y", &c5_i_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 8, c5_j_y);
  c5_j_hoistedGlobal = *chartInstance->c5_toPoint;
  c5_j_u = c5_j_hoistedGlobal;
  c5_k_y = NULL;
  sf_mex_assign(&c5_k_y, sf_mex_create("y", &c5_j_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 9, c5_k_y);
  c5_k_hoistedGlobal = *chartInstance->c5_is_active_c5_RA3;
  c5_k_u = c5_k_hoistedGlobal;
  c5_l_y = NULL;
  sf_mex_assign(&c5_l_y, sf_mex_create("y", &c5_k_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 10, c5_l_y);
  c5_l_hoistedGlobal = *chartInstance->c5_is_c5_RA3;
  c5_l_u = c5_l_hoistedGlobal;
  c5_m_y = NULL;
  sf_mex_assign(&c5_m_y, sf_mex_create("y", &c5_l_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 11, c5_m_y);
  c5_m_hoistedGlobal = *chartInstance->c5_temporalCounter_i1;
  c5_m_u = c5_m_hoistedGlobal;
  c5_n_y = NULL;
  sf_mex_assign(&c5_n_y, sf_mex_create("y", &c5_m_u, 5, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 12, c5_n_y);
  sf_mex_assign(&c5_st, c5_y, false);
  return c5_st;
}

static void set_sim_state_c5_RA3(SFc5_RA3InstanceStruct *chartInstance, const
  mxArray *c5_st)
{
  const mxArray *c5_u;
  c5_u = sf_mex_dup(c5_st);
  *chartInstance->c5_Ready = c5_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("Ready", c5_u, 0)), "Ready");
  *chartInstance->c5_StopSim = c5_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("StopSim", c5_u, 1)), "StopSim");
  *chartInstance->c5_airBagEnabled = c5_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("airBagEnabled", c5_u, 2)), "airBagEnabled");
  *chartInstance->c5_airBagRef = c5_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("airBagRef", c5_u, 3)), "airBagRef");
  *chartInstance->c5_controlEnabled = c5_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("controlEnabled", c5_u, 4)), "controlEnabled");
  *chartInstance->c5_homeControllerEnabled = c5_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("homeControllerEnabled", c5_u, 5)),
    "homeControllerEnabled");
  *chartInstance->c5_homingBusy = c5_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("homingBusy", c5_u, 6)), "homingBusy");
  *chartInstance->c5_jogSpeed = c5_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("jogSpeed", c5_u, 7)), "jogSpeed");
  *chartInstance->c5_resetEnc = c5_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("resetEnc", c5_u, 8)), "resetEnc");
  *chartInstance->c5_toPoint = c5_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("toPoint", c5_u, 9)), "toPoint");
  *chartInstance->c5_is_active_c5_RA3 = c5_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_c5_RA3", c5_u, 10)), "is_active_c5_RA3");
  *chartInstance->c5_is_c5_RA3 = c5_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("is_c5_RA3", c5_u, 11)), "is_c5_RA3");
  *chartInstance->c5_temporalCounter_i1 = c5_f_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("temporalCounter_i1", c5_u, 12)),
    "temporalCounter_i1");
  sf_mex_assign(&chartInstance->c5_setSimStateSideEffectsInfo,
                c5_h_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "setSimStateSideEffectsInfo", c5_u, 13)), "setSimStateSideEffectsInfo"),
                true);
  sf_mex_destroy(&c5_u);
  chartInstance->c5_doSetSimStateSideEffects = 1U;
  c5_update_debugger_state_c5_RA3(chartInstance);
  sf_mex_destroy(&c5_st);
}

static void c5_set_sim_state_side_effects_c5_RA3(SFc5_RA3InstanceStruct
  *chartInstance)
{
  if (chartInstance->c5_doSetSimStateSideEffects != 0) {
    if (*chartInstance->c5_is_c5_RA3 == c5_IN_AirbagLeft) {
      if (sf_mex_sub(chartInstance->c5_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 2) == 0.0) {
        *chartInstance->c5_temporalCounter_i1 = 0U;
      }
    }

    if (*chartInstance->c5_is_c5_RA3 == c5_IN_AirbagRight) {
      if (sf_mex_sub(chartInstance->c5_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 3) == 0.0) {
        *chartInstance->c5_temporalCounter_i1 = 0U;
      }
    }

    if (*chartInstance->c5_is_c5_RA3 == c5_IN_MovetoX0) {
      if (sf_mex_sub(chartInstance->c5_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 8) == 0.0) {
        *chartInstance->c5_temporalCounter_i1 = 0U;
      }
    }

    if (*chartInstance->c5_is_c5_RA3 == c5_IN_ResetEnc) {
      if (sf_mex_sub(chartInstance->c5_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 9) == 0.0) {
        *chartInstance->c5_temporalCounter_i1 = 0U;
      }
    }

    if (*chartInstance->c5_is_c5_RA3 == c5_IN_RobotIsON) {
      if (sf_mex_sub(chartInstance->c5_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 10) == 0.0) {
        *chartInstance->c5_temporalCounter_i1 = 0U;
      }
    }

    chartInstance->c5_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c5_RA3(SFc5_RA3InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c5_setSimStateSideEffectsInfo);
}

static void sf_gateway_c5_RA3(SFc5_RA3InstanceStruct *chartInstance)
{
  c5_set_sim_state_side_effects_c5_RA3(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  c5_durationReferenceTimeUpdater(chartInstance);
  if (*chartInstance->c5_temporalCounter_i1 < 65535U) {
    (*chartInstance->c5_temporalCounter_i1)++;
  }

  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 1U, *chartInstance->c5_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c5_AllReady, 2U, 1U, 0U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_carPos, 1U, 1U, 0U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c5_homeSwitch, 0U, 1U, 0U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_sfEvent = CALL_EVENT;
  c5_chartstep_c5_RA3(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_RA3MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c5_RA3(SFc5_RA3InstanceStruct *chartInstance)
{
  c5_init_sf_message_store_memory(chartInstance);
}

static void c5_chartstep_c5_RA3(SFc5_RA3InstanceStruct *chartInstance)
{
  boolean_T c5_temp;
  boolean_T c5_out;
  boolean_T c5_b_temp;
  boolean_T c5_b_out;
  boolean_T c5_c_out;
  boolean_T c5_d_out;
  boolean_T c5_e_out;
  boolean_T c5_f_out;
  real_T c5_d0;
  boolean_T c5_c_temp;
  boolean_T c5_g_out;
  boolean_T c5_d_temp;
  boolean_T c5_h_out;
  boolean_T c5_e_temp;
  boolean_T c5_i_out;
  boolean_T c5_j_out;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 1U, *chartInstance->c5_sfEvent);
  if (*chartInstance->c5_is_active_c5_RA3 == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 1U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_active_c5_RA3 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c5_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_c5_RA3 = c5_IN_Homing;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_Ready = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_Ready, 11U, 4U, 5U,
                          *chartInstance->c5_sfEvent, false);
    *chartInstance->c5_toPoint = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_toPoint, 4U, 4U, 5U,
                          *chartInstance->c5_sfEvent, false);
    *chartInstance->c5_homingBusy = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_homingBusy, 7U, 4U, 5U,
                          *chartInstance->c5_sfEvent, false);
    *chartInstance->c5_jogSpeed = 0.4;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_jogSpeed, 3U, 4U, 5U,
                          *chartInstance->c5_sfEvent, false);
    *chartInstance->c5_homeControllerEnabled = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_homeControllerEnabled, 5U, 4U, 5U, *
                          chartInstance->c5_sfEvent, false);
  } else {
    switch (*chartInstance->c5_is_c5_RA3) {
     case c5_IN_AirbagLeft:
      CV_CHART_EVAL(1, 0, 1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                   *chartInstance->c5_sfEvent);
      c5_temp = (_SFD_CCP_CALL(7U, 0, 1 != 0U, *chartInstance->c5_sfEvent) != 0);
      if (c5_temp) {
        c5_temp = (_SFD_CCP_CALL(7U, 1, *chartInstance->c5_temporalCounter_i1 >=
                    20480U != 0U, *chartInstance->c5_sfEvent) != 0);
      }

      c5_out = (CV_TRANSITION_EVAL(7U, (int32_T)c5_temp) != 0);
      if (c5_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c5_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_is_c5_RA3 = c5_IN_DisableOutputs;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_controlEnabled = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c5_controlEnabled, 10U, 4U, 3U,
                              *chartInstance->c5_sfEvent, false);
        *chartInstance->c5_StopSim = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c5_StopSim, 12U, 4U, 3U,
                              *chartInstance->c5_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                     *chartInstance->c5_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c5_sfEvent);
      break;

     case c5_IN_AirbagRight:
      CV_CHART_EVAL(1, 0, 2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                   *chartInstance->c5_sfEvent);
      c5_b_temp = (_SFD_CCP_CALL(6U, 0, 1 != 0U, *chartInstance->c5_sfEvent) !=
                   0);
      if (c5_b_temp) {
        c5_b_temp = (_SFD_CCP_CALL(6U, 1, *chartInstance->c5_temporalCounter_i1 >=
          20480U != 0U, *chartInstance->c5_sfEvent) != 0);
      }

      c5_b_out = (CV_TRANSITION_EVAL(6U, (int32_T)c5_b_temp) != 0);
      if (c5_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, *chartInstance->c5_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_is_c5_RA3 = c5_IN_DisableOutputs;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_controlEnabled = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c5_controlEnabled, 10U, 4U, 3U,
                              *chartInstance->c5_sfEvent, false);
        *chartInstance->c5_StopSim = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c5_StopSim, 12U, 4U, 3U,
                              *chartInstance->c5_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                     *chartInstance->c5_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c5_sfEvent);
      break;

     case c5_IN_CheckRobotIsON:
      CV_CHART_EVAL(1, 0, 3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                   *chartInstance->c5_sfEvent);
      c5_c_out = (CV_TRANSITION_EVAL(10U, (int32_T)_SFD_CCP_CALL(10U, 0,
        CV_RELATIONAL_EVAL(5U, 10U, 0, *chartInstance->c5_carPos, 0.1, -1, 2U,
                           *chartInstance->c5_carPos < 0.1) != 0U,
        *chartInstance->c5_sfEvent)) != 0);
      if (c5_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, *chartInstance->c5_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_is_c5_RA3 = c5_IN_STOPRobotIsOFF;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_StopSim = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c5_StopSim, 12U, 4U, 9U,
                              *chartInstance->c5_sfEvent, false);
      } else {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, *chartInstance->c5_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_is_c5_RA3 = c5_IN_RobotIsON;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_temporalCounter_i1 = 0U;
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c5_sfEvent);
      break;

     case c5_IN_DisableOutputs:
      CV_CHART_EVAL(1, 0, 4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                   *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c5_sfEvent);
      break;

     case c5_IN_EnableRunAndSafety:
      CV_CHART_EVAL(1, 0, 5);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                   *chartInstance->c5_sfEvent);
      c5_d_out = (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4U, 0,
        CV_RELATIONAL_EVAL(5U, 4U, 0, *chartInstance->c5_carPos, -1.4, -1, 2U,
                           *chartInstance->c5_carPos < -1.4) != 0U,
        *chartInstance->c5_sfEvent)) != 0);
      if (c5_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c5_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_is_c5_RA3 = c5_IN_AirbagLeft;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_temporalCounter_i1 = 0U;
        *chartInstance->c5_airBagEnabled = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c5_airBagEnabled, 8U, 4U, 0U,
                              *chartInstance->c5_sfEvent, false);
        *chartInstance->c5_airBagRef = -1.4;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c5_airBagRef, 9U, 4U, 0U,
                              *chartInstance->c5_sfEvent, false);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                     *chartInstance->c5_sfEvent);
        c5_e_out = (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5U, 0,
          CV_RELATIONAL_EVAL(5U, 5U, 0, *chartInstance->c5_carPos, 1.4, -1, 4U, *
                             chartInstance->c5_carPos > 1.4) != 0U,
          *chartInstance->c5_sfEvent)) != 0);
        if (c5_e_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, *chartInstance->c5_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c5_sfEvent);
          *chartInstance->c5_is_c5_RA3 = c5_IN_AirbagRight;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c5_sfEvent);
          *chartInstance->c5_temporalCounter_i1 = 0U;
          *chartInstance->c5_airBagEnabled = 1.0;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c5_airBagEnabled, 8U, 4U, 1U,
                                *chartInstance->c5_sfEvent, false);
          *chartInstance->c5_airBagRef = 1.4;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c5_airBagRef, 9U, 4U, 1U,
                                *chartInstance->c5_sfEvent, false);
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                       *chartInstance->c5_sfEvent);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, *chartInstance->c5_sfEvent);
      break;

     case c5_IN_Homing:
      CV_CHART_EVAL(1, 0, 6);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   *chartInstance->c5_sfEvent);
      c5_f_out = (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0,
        *chartInstance->c5_homeSwitch != 0U, *chartInstance->c5_sfEvent)) != 0);
      if (c5_f_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c5_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_is_c5_RA3 = c5_IN_MovetoX0;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_temporalCounter_i1 = 0U;
        *chartInstance->c5_jogSpeed = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c5_jogSpeed, 3U, 4U, 6U,
                              *chartInstance->c5_sfEvent, false);
        *chartInstance->c5_toPoint = -2.15;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c5_toPoint, 4U, 4U, 6U,
                              *chartInstance->c5_sfEvent, false);
        c5_d0 = *chartInstance->c5_toPoint;
        sf_mex_printf("%s =\\n", "toPoint");
        sf_mex_call_debug(sfGlobalDebugInstanceStruct, "disp", 0U, 1U, 6, c5_d0);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U,
                     *chartInstance->c5_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, *chartInstance->c5_sfEvent);
      break;

     case c5_IN_MovetoX0:
      CV_CHART_EVAL(1, 0, 7);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   *chartInstance->c5_sfEvent);
      c5_c_temp = (_SFD_CCP_CALL(2U, 0, 1 != 0U, *chartInstance->c5_sfEvent) !=
                   0);
      if (c5_c_temp) {
        c5_c_temp = (_SFD_CCP_CALL(2U, 1, *chartInstance->c5_temporalCounter_i1 >=
          2048U != 0U, *chartInstance->c5_sfEvent) != 0);
      }

      c5_g_out = (CV_TRANSITION_EVAL(2U, (int32_T)c5_c_temp) != 0);
      if (c5_g_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c5_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_is_c5_RA3 = c5_IN_CheckRobotIsON;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c5_sfEvent);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6U,
                     *chartInstance->c5_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, *chartInstance->c5_sfEvent);
      break;

     case c5_IN_ResetEnc:
      CV_CHART_EVAL(1, 0, 8);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                   *chartInstance->c5_sfEvent);
      c5_d_temp = (_SFD_CCP_CALL(3U, 0, 1 != 0U, *chartInstance->c5_sfEvent) !=
                   0);
      if (c5_d_temp) {
        c5_d_temp = (_SFD_CCP_CALL(3U, 1, *chartInstance->c5_temporalCounter_i1 >=
          41U != 0U, *chartInstance->c5_sfEvent) != 0);
      }

      c5_h_out = (CV_TRANSITION_EVAL(3U, (int32_T)c5_d_temp) != 0);
      if (c5_h_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c5_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_is_c5_RA3 = c5_IN_EnableRunAndSafety;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_resetEnc = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c5_resetEnc, 6U, 4U, 4U,
                              *chartInstance->c5_sfEvent, false);
        *chartInstance->c5_homingBusy = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c5_homingBusy, 7U, 4U, 4U,
                              *chartInstance->c5_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 7U,
                     *chartInstance->c5_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, *chartInstance->c5_sfEvent);
      break;

     case c5_IN_RobotIsON:
      CV_CHART_EVAL(1, 0, 9);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U,
                   *chartInstance->c5_sfEvent);
      c5_e_temp = (_SFD_CCP_CALL(9U, 0, 1 != 0U, *chartInstance->c5_sfEvent) !=
                   0);
      if (c5_e_temp) {
        c5_e_temp = (_SFD_CCP_CALL(9U, 1, *chartInstance->c5_temporalCounter_i1 >=
          36864U != 0U, *chartInstance->c5_sfEvent) != 0);
      }

      c5_i_out = (CV_TRANSITION_EVAL(9U, (int32_T)c5_e_temp) != 0);
      if (c5_i_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, *chartInstance->c5_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_is_c5_RA3 = c5_IN_WaitForRest;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_Ready = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c5_Ready, 11U, 4U, 10U,
                              *chartInstance->c5_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 8U,
                     *chartInstance->c5_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, *chartInstance->c5_sfEvent);
      break;

     case c5_IN_STOPRobotIsOFF:
      CV_CHART_EVAL(1, 0, 10);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 9U,
                   *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9U, *chartInstance->c5_sfEvent);
      break;

     case c5_IN_WaitForRest:
      CV_CHART_EVAL(1, 0, 11);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                   *chartInstance->c5_sfEvent);
      c5_j_out = (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8U, 0,
        *chartInstance->c5_AllReady != 0U, *chartInstance->c5_sfEvent)) != 0);
      if (c5_j_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, *chartInstance->c5_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_is_c5_RA3 = c5_IN_ResetEnc;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_temporalCounter_i1 = 0U;
        *chartInstance->c5_resetEnc = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c5_resetEnc, 6U, 4U, 7U,
                              *chartInstance->c5_sfEvent, false);
        *chartInstance->c5_homeControllerEnabled = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c5_homeControllerEnabled, 5U, 4U,
                              7U, *chartInstance->c5_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 10U,
                     *chartInstance->c5_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 10U, *chartInstance->c5_sfEvent);
      break;

     default:
      CV_CHART_EVAL(1, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c5_is_c5_RA3 = c5_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c5_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c5_sfEvent);
}

static void initSimStructsc5_RA3(SFc5_RA3InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c5_machineNumber, uint32_T
  c5_chartNumber, uint32_T c5_instanceNumber)
{
  (void)c5_machineNumber;
  (void)c5_chartNumber;
  (void)c5_instanceNumber;
}

const mxArray *sf_c5_RA3_get_eml_resolved_functions_info(void)
{
  const mxArray *c5_nameCaptureInfo = NULL;
  c5_nameCaptureInfo = NULL;
  sf_mex_assign(&c5_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c5_nameCaptureInfo;
}

static const mxArray *c5_sf_marshallOut(void *chartInstanceVoid, void *c5_inData)
{
  const mxArray *c5_mxArrayOutData = NULL;
  int32_T c5_u;
  const mxArray *c5_y = NULL;
  SFc5_RA3InstanceStruct *chartInstance;
  chartInstance = (SFc5_RA3InstanceStruct *)chartInstanceVoid;
  c5_mxArrayOutData = NULL;
  c5_u = *(int32_T *)c5_inData;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", &c5_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c5_mxArrayOutData, c5_y, false);
  return c5_mxArrayOutData;
}

static int32_T c5_emlrt_marshallIn(SFc5_RA3InstanceStruct *chartInstance, const
  mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  int32_T c5_y;
  int32_T c5_i0;
  (void)chartInstance;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_i0, 1, 6, 0U, 0, 0U, 0);
  c5_y = c5_i0;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static void c5_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData)
{
  const mxArray *c5_b_sfEvent;
  const char_T *c5_identifier;
  emlrtMsgIdentifier c5_thisId;
  int32_T c5_y;
  SFc5_RA3InstanceStruct *chartInstance;
  chartInstance = (SFc5_RA3InstanceStruct *)chartInstanceVoid;
  c5_b_sfEvent = sf_mex_dup(c5_mxArrayInData);
  c5_identifier = c5_varName;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_y = c5_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_sfEvent), &c5_thisId);
  sf_mex_destroy(&c5_b_sfEvent);
  *(int32_T *)c5_outData = c5_y;
  sf_mex_destroy(&c5_mxArrayInData);
}

static const mxArray *c5_b_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData)
{
  const mxArray *c5_mxArrayOutData = NULL;
  real_T c5_u;
  const mxArray *c5_y = NULL;
  SFc5_RA3InstanceStruct *chartInstance;
  chartInstance = (SFc5_RA3InstanceStruct *)chartInstanceVoid;
  c5_mxArrayOutData = NULL;
  c5_u = *(real_T *)c5_inData;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", &c5_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c5_mxArrayOutData, c5_y, false);
  return c5_mxArrayOutData;
}

static real_T c5_b_emlrt_marshallIn(SFc5_RA3InstanceStruct *chartInstance, const
  mxArray *c5_b_jogSpeed, const char_T *c5_identifier)
{
  real_T c5_y;
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_y = c5_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_jogSpeed),
    &c5_thisId);
  sf_mex_destroy(&c5_b_jogSpeed);
  return c5_y;
}

static real_T c5_c_emlrt_marshallIn(SFc5_RA3InstanceStruct *chartInstance, const
  mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  real_T c5_y;
  real_T c5_d1;
  (void)chartInstance;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_d1, 1, 0, 0U, 0, 0U, 0);
  c5_y = c5_d1;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static void c5_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData)
{
  const mxArray *c5_b_jogSpeed;
  const char_T *c5_identifier;
  emlrtMsgIdentifier c5_thisId;
  real_T c5_y;
  SFc5_RA3InstanceStruct *chartInstance;
  chartInstance = (SFc5_RA3InstanceStruct *)chartInstanceVoid;
  c5_b_jogSpeed = sf_mex_dup(c5_mxArrayInData);
  c5_identifier = c5_varName;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_y = c5_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_jogSpeed),
    &c5_thisId);
  sf_mex_destroy(&c5_b_jogSpeed);
  *(real_T *)c5_outData = c5_y;
  sf_mex_destroy(&c5_mxArrayInData);
}

static const mxArray *c5_c_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData)
{
  const mxArray *c5_mxArrayOutData = NULL;
  boolean_T c5_u;
  const mxArray *c5_y = NULL;
  SFc5_RA3InstanceStruct *chartInstance;
  chartInstance = (SFc5_RA3InstanceStruct *)chartInstanceVoid;
  c5_mxArrayOutData = NULL;
  c5_u = *(boolean_T *)c5_inData;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", &c5_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c5_mxArrayOutData, c5_y, false);
  return c5_mxArrayOutData;
}

static uint8_T c5_d_emlrt_marshallIn(SFc5_RA3InstanceStruct *chartInstance,
  const mxArray *c5_b_is_active_c5_RA3, const char_T *c5_identifier)
{
  uint8_T c5_y;
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_y = c5_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_is_active_c5_RA3),
    &c5_thisId);
  sf_mex_destroy(&c5_b_is_active_c5_RA3);
  return c5_y;
}

static uint8_T c5_e_emlrt_marshallIn(SFc5_RA3InstanceStruct *chartInstance,
  const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  uint8_T c5_y;
  uint8_T c5_u0;
  (void)chartInstance;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_u0, 1, 3, 0U, 0, 0U, 0);
  c5_y = c5_u0;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static uint16_T c5_f_emlrt_marshallIn(SFc5_RA3InstanceStruct *chartInstance,
  const mxArray *c5_b_temporalCounter_i1, const char_T *c5_identifier)
{
  uint16_T c5_y;
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_y = c5_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_temporalCounter_i1),
    &c5_thisId);
  sf_mex_destroy(&c5_b_temporalCounter_i1);
  return c5_y;
}

static uint16_T c5_g_emlrt_marshallIn(SFc5_RA3InstanceStruct *chartInstance,
  const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  uint16_T c5_y;
  uint16_T c5_u1;
  (void)chartInstance;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_u1, 1, 5, 0U, 0, 0U, 0);
  c5_y = c5_u1;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static const mxArray *c5_h_emlrt_marshallIn(SFc5_RA3InstanceStruct
  *chartInstance, const mxArray *c5_b_setSimStateSideEffectsInfo, const char_T
  *c5_identifier)
{
  const mxArray *c5_y = NULL;
  emlrtMsgIdentifier c5_thisId;
  c5_y = NULL;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  sf_mex_assign(&c5_y, c5_i_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c5_b_setSimStateSideEffectsInfo), &c5_thisId), false);
  sf_mex_destroy(&c5_b_setSimStateSideEffectsInfo);
  return c5_y;
}

static const mxArray *c5_i_emlrt_marshallIn(SFc5_RA3InstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  const mxArray *c5_y = NULL;
  (void)chartInstance;
  (void)c5_parentId;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_duplicatearraysafe(&c5_u), false);
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static const mxArray *sf_get_hover_data_for_msg(SFc5_RA3InstanceStruct
  *chartInstance, int32_T c5_ssid)
{
  (void)chartInstance;
  (void)c5_ssid;
  return NULL;
}

static void c5_init_sf_message_store_memory(SFc5_RA3InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_dsm_address_info(SFc5_RA3InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc5_RA3InstanceStruct *chartInstance)
{
  chartInstance->c5_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 0);
  chartInstance->c5_isStable = (boolean_T *)ssGetDWork_wrapper(chartInstance->S,
    1);
  chartInstance->c5_is_active_c5_RA3 = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 2);
  chartInstance->c5_is_c5_RA3 = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    3);
  chartInstance->c5_jogSpeed = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c5_toPoint = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c5_homeControllerEnabled = (real_T *)
    ssGetOutputPortSignal_wrapper(chartInstance->S, 3);
  chartInstance->c5_resetEnc = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c5_homingBusy = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c5_homeSwitch = (boolean_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c5_carPos = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c5_airBagEnabled = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c5_airBagRef = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 7);
  chartInstance->c5_controlEnabled = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 8);
  chartInstance->c5_Ready = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 9);
  chartInstance->c5_AllReady = (boolean_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c5_StopSim = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 10);
  chartInstance->c5_temporalCounter_i1 = (uint16_T *)ssGetDWork_wrapper
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
void sf_c5_RA3_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3732506755U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3895467838U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3392172941U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4177453846U);
}

mxArray* sf_c5_RA3_get_post_codegen_info(void);
mxArray *sf_c5_RA3_get_autoinheritance_info(void)
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
    mxArray* mxPostCodegenInfo = sf_c5_RA3_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c5_RA3_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c5_RA3_jit_fallback_info(void)
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

mxArray *sf_c5_RA3_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c5_RA3_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c5_RA3(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[91],T\"Ready\",},{M[1],M[96],T\"StopSim\",},{M[1],M[69],T\"airBagEnabled\",},{M[1],M[70],T\"airBagRef\",},{M[1],M[80],T\"controlEnabled\",},{M[1],M[60],T\"homeControllerEnabled\",},{M[1],M[2],T\"homingBusy\",},{M[1],M[1],T\"jogSpeed\",},{M[1],M[63],T\"resetEnc\",},{M[1],M[53],T\"toPoint\",}}",
    "100 S1x3'type','srcId','name','auxInfo'{{M[8],M[0],T\"is_active_c5_RA3\",},{M[9],M[0],T\"is_c5_RA3\",},{M[11],M[0],T\"temporalCounter_i1\",S'et','os','ct'{{T\"at\",M1x5[19 71 58 74 102],M[1]}}}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 13, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c5_RA3_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const mxArray* sf_opaque_get_hover_data_for_msg(void* chartInstance,
  int32_T msgSSID)
{
  return sf_get_hover_data_for_msg( (SFc5_RA3InstanceStruct *) chartInstance,
    msgSSID);
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc5_RA3InstanceStruct *chartInstance = (SFc5_RA3InstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _RA3MachineNumber_,
           5,
           11,
           12,
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
          _SFD_STATE_INFO(9,0,0);
          _SFD_STATE_INFO(10,0,0);
          _SFD_CH_SUBSTATE_COUNT(11);
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
          _SFD_CH_SUBSTATE_INDEX(9,9);
          _SFD_CH_SUBSTATE_INDEX(10,10);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(7,0);
          _SFD_ST_SUBSTATE_COUNT(8,0);
          _SFD_ST_SUBSTATE_COUNT(9,0);
          _SFD_ST_SUBSTATE_COUNT(10,0);
        }

        _SFD_CV_INIT_CHART(11,1,0,0);

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
          _SFD_CV_INIT_STATE(9,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(10,0,0,0,0,0,NULL,NULL);
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

          static int sRelationalopType[] = { 2, 2 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(4,1,&(sStartRelationalopMap[0]),
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
          static unsigned int sStartGuardMap[] = { 33, 23 };

          static unsigned int sEndGuardMap[] = { 36, 37 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(2,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(10,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 11 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 2, 2 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(10,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(11,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 8, 0 };

          static unsigned int sEndGuardMap[] = { 11, 12 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(9,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
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

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_b_sf_marshallOut,(MexInFcnForType)c5_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_b_sf_marshallOut,(MexInFcnForType)c5_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_b_sf_marshallOut,(MexInFcnForType)c5_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_b_sf_marshallOut,(MexInFcnForType)c5_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_b_sf_marshallOut,(MexInFcnForType)c5_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_b_sf_marshallOut,(MexInFcnForType)c5_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_b_sf_marshallOut,(MexInFcnForType)c5_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_b_sf_marshallOut,(MexInFcnForType)c5_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_b_sf_marshallOut,(MexInFcnForType)c5_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_b_sf_marshallOut,(MexInFcnForType)c5_b_sf_marshallIn);
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
    SFc5_RA3InstanceStruct *chartInstance = (SFc5_RA3InstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c5_jogSpeed);
        _SFD_SET_DATA_VALUE_PTR(4U, chartInstance->c5_toPoint);
        _SFD_SET_DATA_VALUE_PTR(5U, chartInstance->c5_homeControllerEnabled);
        _SFD_SET_DATA_VALUE_PTR(6U, chartInstance->c5_resetEnc);
        _SFD_SET_DATA_VALUE_PTR(7U, chartInstance->c5_homingBusy);
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c5_homeSwitch);
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c5_carPos);
        _SFD_SET_DATA_VALUE_PTR(8U, chartInstance->c5_airBagEnabled);
        _SFD_SET_DATA_VALUE_PTR(9U, chartInstance->c5_airBagRef);
        _SFD_SET_DATA_VALUE_PTR(10U, chartInstance->c5_controlEnabled);
        _SFD_SET_DATA_VALUE_PTR(11U, chartInstance->c5_Ready);
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c5_AllReady);
        _SFD_SET_DATA_VALUE_PTR(12U, chartInstance->c5_StopSim);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sSQVJI6KLFizr7YEQXrQdQH";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_RA3_optimization_info();
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 5, "dworkChecksum");
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

static void sf_opaque_initialize_c5_RA3(void *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc5_RA3InstanceStruct*) chartInstanceVar)->S);
  chart_debug_initialization(((SFc5_RA3InstanceStruct*) chartInstanceVar)->S,0);
  initialize_params_c5_RA3((SFc5_RA3InstanceStruct*) chartInstanceVar);
  initialize_c5_RA3((SFc5_RA3InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c5_RA3(void *chartInstanceVar)
{
  enable_c5_RA3((SFc5_RA3InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c5_RA3(void *chartInstanceVar)
{
  disable_c5_RA3((SFc5_RA3InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c5_RA3(void *chartInstanceVar)
{
  sf_gateway_c5_RA3((SFc5_RA3InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c5_RA3(void *chartInstanceVar)
{
  ext_mode_exec_c5_RA3((SFc5_RA3InstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c5_RA3(SimStruct* S)
{
  return get_sim_state_c5_RA3((SFc5_RA3InstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c5_RA3(SimStruct* S, const mxArray *st)
{
  set_sim_state_c5_RA3((SFc5_RA3InstanceStruct*)sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c5_RA3(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc5_RA3InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_RA3_optimization_info();
    }

    finalize_c5_RA3((SFc5_RA3InstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc5_RA3((SFc5_RA3InstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c5_RA3(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c5_RA3((SFc5_RA3InstanceStruct*)sf_get_chart_instance_ptr
      (S));
  }
}

mxArray *sf_c5_RA3_get_testpoint_info(void)
{
  const char *infoEncStr[] = {
    "100 S1x2'varName','path'{{T\"is_active_c5_RA3\",T\"is_active_c5_RA3\"},{T\"is_c5_RA3\",T\"is_c5_RA3\"}}"
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

static void mdlSetWorkWidths_c5_RA3(SimStruct *S)
{
  ssMdlUpdateIsEmpty(S, 1);
  ssSetModelReferenceSampleTimeDisallowInheritance(S);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_RA3_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,5);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,5,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 5);
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,5);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,5,3);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,5,10);
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

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,5);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(4120818739U));
  ssSetChecksum1(S,(1148294986U));
  ssSetChecksum2(S,(241598257U));
  ssSetChecksum3(S,(990440830U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c5_RA3(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c5_RA3(SimStruct *S)
{
  SFc5_RA3InstanceStruct *chartInstance;
  chartInstance = (SFc5_RA3InstanceStruct *)utMalloc(sizeof
    (SFc5_RA3InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc5_RA3InstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c5_RA3;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c5_RA3;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c5_RA3;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c5_RA3;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c5_RA3;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c5_RA3;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c5_RA3;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c5_RA3;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c5_RA3;
  chartInstance->chartInfo.mdlStart = mdlStart_c5_RA3;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c5_RA3;
  chartInstance->chartInfo.callGetHoverDataForMsg =
    sf_opaque_get_hover_data_for_msg;
  chartInstance->chartInfo.extModeExec = sf_opaque_ext_mode_exec_c5_RA3;
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
  mdl_start_c5_RA3(chartInstance);
}

void c5_RA3_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c5_RA3(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c5_RA3(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c5_RA3(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c5_RA3_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
