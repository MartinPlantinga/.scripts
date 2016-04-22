/*
 * RA3_data.c
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

#include "RA3.h"
#include "RA3_private.h"

/* Block parameters (auto storage) */
P_RA3_T RA3_P = {
  0.0,                                 /* Mask Parameter: DiscreteDerivative_ICPrevScaled
                                        * Referenced by: '<S23>/UD'
                                        */
  0.0,                                 /* Mask Parameter: DiscreteDerivative_ICPrevScal_k
                                        * Referenced by: '<S32>/UD'
                                        */
  0.0,                                 /* Mask Parameter: DiscreteDerivative_ICPrevScal_h
                                        * Referenced by: '<S42>/UD'
                                        */
  3.0,                                 /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S11>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Solenoid'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Reference R'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Reference X'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Reference Z'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Feedforward R'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Feedforward X'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S1>/Feedforward Z'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Reference Solenoid'
                                        */

  /*  Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S6>/S-Function'
   */
  { 1.0, 1.0 },
  4096.0,                              /* Expression: 4096
                                        * Referenced by: '<S6>/S-Function'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Constant4'
                                        */
  2000.0,                              /* Expression: 2000
                                        * Referenced by: '<S7>/Constant3'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S13>/Homing Running Switch'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S14>/Homing Running Switch'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S15>/Homing Running Switch'
                                        */

  /*  Computed Parameter: ec_Ebox_P1_Size
   * Referenced by: '<S9>/ec_Ebox'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: link_id
                                        * Referenced by: '<S9>/ec_Ebox'
                                        */
  0.000244140625,                      /* Computed Parameter: DiscreteTimeIntegrator_gainval
                                        * Referenced by: '<S13>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S13>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S18>/Constant1'
                                        */
  0.000244140625,                      /* Computed Parameter: DiscreteTimeIntegrator_gainva_e
                                        * Referenced by: '<S18>/Discrete-Time Integrator'
                                        */
  9.4247779607693812E-5,               /* Expression: 1/4000*9/150*2*pi
                                        * Referenced by: '<S7>/Gain'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S13>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Unit Delay'
                                        */
  0.000244140625,                      /* Computed Parameter: DiscreteTimeIntegrator_gainva_n
                                        * Referenced by: '<S14>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S14>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S26>/Constant1'
                                        */
  0.000244140625,                      /* Computed Parameter: DiscreteTimeIntegrator_gainva_d
                                        * Referenced by: '<S26>/Discrete-Time Integrator'
                                        */
  -0.00014137166941154071,             /* Expression: -1/4000*9/100*2*pi
                                        * Referenced by: '<S7>/Gain1'
                                        */
  -0.1,                                /* Expression: -0.1
                                        * Referenced by: '<S14>/Constant'
                                        */
  0.000244140625,                      /* Computed Parameter: DiscreteTimeIntegrator_gainva_j
                                        * Referenced by: '<S15>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S15>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S36>/Constant1'
                                        */
  0.000244140625,                      /* Computed Parameter: DiscreteTimeIntegrator_gainva_k
                                        * Referenced by: '<S36>/Discrete-Time Integrator'
                                        */

  /*  Computed Parameter: ec_Ebox_P1_Size_b
   * Referenced by: '<S10>/ec_Ebox'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: link_id
                                        * Referenced by: '<S10>/ec_Ebox'
                                        */
  0.00014137166941154071,              /* Expression: 1/4000*9/100*2*pi
                                        * Referenced by: '<S7>/Gain2'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S15>/Constant'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S12>/Constant'
                                        */
  2.5,                                 /* Expression: 2.5
                                        * Referenced by: '<S7>/Constant'
                                        */
  2.5,                                 /* Expression: 2.5
                                        * Referenced by: '<S7>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Constant2'
                                        */
  2000.0,                              /* Expression: 2000
                                        * Referenced by: '<S7>/Pulse Generator'
                                        */
  4.0,                                 /* Computed Parameter: PulseGenerator_Period
                                        * Referenced by: '<S7>/Pulse Generator'
                                        */
  2.0,                                 /* Computed Parameter: PulseGenerator_Duty
                                        * Referenced by: '<S7>/Pulse Generator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Pulse Generator'
                                        */

  /*  Computed Parameter: Dctintegrator_P1_Size
   * Referenced by: '<S13>/Dctintegrator'
   */
  { 1.0, 2.0 },

  /*  Expression: [f_num 0.001]
   * Referenced by: '<S13>/Dctintegrator'
   */
  { 0.5, 0.001 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S16>/Gain1'
                                        */

  /*  Computed Parameter: Dctpd_P1_Size
   * Referenced by: '<S16>/Dctpd'
   */
  { 1.0, 3.0 },

  /*  Expression: [kp kv 0.001]
   * Referenced by: '<S16>/Dctpd'
   */
  { 60.0, 1.0, 0.001 },

  /*  Computed Parameter: Dctnotch_P1_Size
   * Referenced by: '<S16>/Dctnotch'
   */
  { 1.0, 5.0 },

  /*  Expression: [f_num b_num f_den b_den 0.001]
   * Referenced by: '<S16>/Dctnotch'
   */
  { 300.0, 0.1, 300.0, 0.1, 0.001 },

  /*  Computed Parameter: Dct2lowpass_P1_Size
   * Referenced by: '<S16>/Dct2lowpass'
   */
  { 1.0, 3.0 },

  /*  Expression: [f_den b_den 0.001]
   * Referenced by: '<S16>/Dct2lowpass'
   */
  { 120.0, 0.7, 0.001 },
  0.7,                                 /* Expression: 0.7
                                        * Referenced by: '<S13>/Saturation'
                                        */
  -0.7,                                /* Expression: -0.7
                                        * Referenced by: '<S13>/Saturation'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S17>/Gain1'
                                        */

  /*  Computed Parameter: Dctpd_P1_Size_c
   * Referenced by: '<S17>/Dctpd'
   */
  { 1.0, 3.0 },

  /*  Expression: [kp kv 0.001]
   * Referenced by: '<S17>/Dctpd'
   */
  { 50.0, 0.7, 0.001 },

  /*  Computed Parameter: Dctnotch_P1_Size_p
   * Referenced by: '<S17>/Dctnotch'
   */
  { 1.0, 5.0 },

  /*  Expression: [f_num b_num f_den b_den 0.001]
   * Referenced by: '<S17>/Dctnotch'
   */
  { 300.0, 0.1, 300.0, 0.1, 0.001 },

  /*  Computed Parameter: Dct2lowpass_P1_Size_n
   * Referenced by: '<S17>/Dct2lowpass'
   */
  { 1.0, 3.0 },

  /*  Expression: [f_den b_den 0.001]
   * Referenced by: '<S17>/Dct2lowpass'
   */
  { 120.0, 0.7, 0.001 },
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<S7>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Saturation'
                                        */

  /*  Computed Parameter: Dctintegrator_P1_Size_i
   * Referenced by: '<S15>/Dctintegrator'
   */
  { 1.0, 2.0 },

  /*  Expression: [f_num 0.001]
   * Referenced by: '<S15>/Dctintegrator'
   */
  { 0.5, 0.001 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S35>/Gain1'
                                        */

  /*  Computed Parameter: Dctpd_P1_Size_i
   * Referenced by: '<S35>/Dctpd'
   */
  { 1.0, 3.0 },

  /*  Expression: [kp kv 0.001]
   * Referenced by: '<S35>/Dctpd'
   */
  { 75.0, 0.5, 0.001 },

  /*  Computed Parameter: Dctnotch_P1_Size_h
   * Referenced by: '<S35>/Dctnotch'
   */
  { 1.0, 5.0 },

  /*  Expression: [f_num b_num f_den b_den 0.001]
   * Referenced by: '<S35>/Dctnotch'
   */
  { 300.0, 0.1, 300.0, 0.1, 0.001 },

  /*  Computed Parameter: Dct2lowpass_P1_Size_d
   * Referenced by: '<S35>/Dct2lowpass'
   */
  { 1.0, 3.0 },

  /*  Expression: [f_den b_den 0.001]
   * Referenced by: '<S35>/Dct2lowpass'
   */
  { 150.0, 0.5, 0.001 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S34>/Gain1'
                                        */

  /*  Computed Parameter: Dctpd_P1_Size_n
   * Referenced by: '<S34>/Dctpd'
   */
  { 1.0, 3.0 },

  /*  Expression: [kp kv 0.001]
   * Referenced by: '<S34>/Dctpd'
   */
  { 75.0, 0.5, 0.001 },

  /*  Computed Parameter: Dctnotch_P1_Size_d
   * Referenced by: '<S34>/Dctnotch'
   */
  { 1.0, 5.0 },

  /*  Expression: [f_num b_num f_den b_den 0.001]
   * Referenced by: '<S34>/Dctnotch'
   */
  { 300.0, 0.1, 300.0, 0.1, 0.001 },

  /*  Computed Parameter: Dct2lowpass_P1_Size_e
   * Referenced by: '<S34>/Dct2lowpass'
   */
  { 1.0, 3.0 },

  /*  Expression: [f_den b_den 0.001]
   * Referenced by: '<S34>/Dct2lowpass'
   */
  { 150.0, 0.5, 0.001 },
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<S7>/Saturation2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Saturation2'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<S7>/Saturation3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Saturation3'
                                        */

  /*  Computed Parameter: Dctintegrator_P1_Size_o
   * Referenced by: '<S14>/Dctintegrator'
   */
  { 1.0, 2.0 },

  /*  Expression: [f_num 0.001]
   * Referenced by: '<S14>/Dctintegrator'
   */
  { 0.5, 0.001 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S24>/Gain1'
                                        */

  /*  Computed Parameter: Dctpd_P1_Size_b
   * Referenced by: '<S24>/Dctpd'
   */
  { 1.0, 3.0 },

  /*  Expression: [kp kv 0.001]
   * Referenced by: '<S24>/Dctpd'
   */
  { 40.0, 0.45, 0.001 },

  /*  Computed Parameter: Dctnotch_P1_Size_p5
   * Referenced by: '<S24>/Dctnotch'
   */
  { 1.0, 5.0 },

  /*  Expression: [f_num b_num f_den b_den 0.001]
   * Referenced by: '<S24>/Dctnotch'
   */
  { 300.0, 0.1, 300.0, 0.1, 0.001 },

  /*  Computed Parameter: Dct2lowpass_P1_Size_a
   * Referenced by: '<S24>/Dct2lowpass'
   */
  { 1.0, 3.0 },

  /*  Expression: [f_den b_den 0.001]
   * Referenced by: '<S24>/Dct2lowpass'
   */
  { 150.0, 0.5, 0.001 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S25>/Gain1'
                                        */

  /*  Computed Parameter: Dctpd_P1_Size_l
   * Referenced by: '<S25>/Dctpd'
   */
  { 1.0, 3.0 },

  /*  Expression: [kp kv 0.001]
   * Referenced by: '<S25>/Dctpd'
   */
  { 40.0, 0.45, 0.001 },

  /*  Computed Parameter: Dctnotch_P1_Size_i
   * Referenced by: '<S25>/Dctnotch'
   */
  { 1.0, 5.0 },

  /*  Expression: [f_num b_num f_den b_den 0.001]
   * Referenced by: '<S25>/Dctnotch'
   */
  { 300.0, 0.1, 300.0, 0.1, 0.001 },

  /*  Computed Parameter: Dct2lowpass_P1_Size_h
   * Referenced by: '<S25>/Dct2lowpass'
   */
  { 1.0, 3.0 },

  /*  Expression: [f_den b_den 0.001]
   * Referenced by: '<S25>/Dct2lowpass'
   */
  { 150.0, 0.5, 0.001 },
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<S7>/SaturationX'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/SaturationX'
                                        */
  0.5,                                 /* Expression: .5
                                        * Referenced by: '<S7>/Switch'
                                        */

  /*  Computed Parameter: ResetEncoderR_P1_Size
   * Referenced by: '<S13>/Reset EncoderR'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: link_id
                                        * Referenced by: '<S13>/Reset EncoderR'
                                        */

  /*  Computed Parameter: ResetEncoderR_P2_Size
   * Referenced by: '<S13>/Reset EncoderR'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: chan_id
                                        * Referenced by: '<S13>/Reset EncoderR'
                                        */
  9.765625E-5,                         /* Computed Parameter: LimitSpeed_RisingLim
                                        * Referenced by: '<S18>/Limit Speed'
                                        */
  -9.765625E-5,                        /* Computed Parameter: LimitSpeed_FallingLim
                                        * Referenced by: '<S18>/Limit Speed'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S18>/Limit Speed'
                                        */
  4096.0,                              /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S23>/TSamp'
                                        */
  0.0001220703125,                     /* Computed Parameter: LimitAcceleration_RisingLim
                                        * Referenced by: '<S18>/Limit Acceleration'
                                        */
  -0.0001220703125,                    /* Computed Parameter: LimitAcceleration_FallingLim
                                        * Referenced by: '<S18>/Limit Acceleration'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S18>/Limit Acceleration'
                                        */

  /*  Computed Parameter: ResetEncoderX_P1_Size
   * Referenced by: '<S14>/Reset EncoderX'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: link_id
                                        * Referenced by: '<S14>/Reset EncoderX'
                                        */

  /*  Computed Parameter: ResetEncoderX_P2_Size
   * Referenced by: '<S14>/Reset EncoderX'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: chan_id
                                        * Referenced by: '<S14>/Reset EncoderX'
                                        */
  9.765625E-5,                         /* Computed Parameter: LimitSpeed_RisingLim_b
                                        * Referenced by: '<S26>/Limit Speed'
                                        */
  -9.765625E-5,                        /* Computed Parameter: LimitSpeed_FallingLim_e
                                        * Referenced by: '<S26>/Limit Speed'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S26>/Limit Speed'
                                        */
  4096.0,                              /* Computed Parameter: TSamp_WtEt_g
                                        * Referenced by: '<S32>/TSamp'
                                        */
  0.0001220703125,                     /* Computed Parameter: LimitAcceleration_RisingLim_g
                                        * Referenced by: '<S26>/Limit Acceleration'
                                        */
  -0.0001220703125,                    /* Computed Parameter: LimitAcceleration_FallingLim_o
                                        * Referenced by: '<S26>/Limit Acceleration'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S26>/Limit Acceleration'
                                        */

  /*  Computed Parameter: ResetEncoderZ_P1_Size
   * Referenced by: '<S15>/Reset EncoderZ'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: link_id
                                        * Referenced by: '<S15>/Reset EncoderZ'
                                        */

  /*  Computed Parameter: ResetEncoderZ_P2_Size
   * Referenced by: '<S15>/Reset EncoderZ'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: chan_id
                                        * Referenced by: '<S15>/Reset EncoderZ'
                                        */
  4.8828125E-5,                        /* Computed Parameter: LimitSpeed_RisingLim_h
                                        * Referenced by: '<S36>/Limit Speed'
                                        */
  -4.8828125E-5,                       /* Computed Parameter: LimitSpeed_FallingLim_h
                                        * Referenced by: '<S36>/Limit Speed'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S36>/Limit Speed'
                                        */
  4096.0,                              /* Computed Parameter: TSamp_WtEt_d
                                        * Referenced by: '<S42>/TSamp'
                                        */
  0.0001220703125,                     /* Computed Parameter: LimitAcceleration_RisingLim_a
                                        * Referenced by: '<S36>/Limit Acceleration'
                                        */
  -0.0001220703125,                    /* Computed Parameter: LimitAcceleration_FallingLim_m
                                        * Referenced by: '<S36>/Limit Acceleration'
                                        */
  0.0                                  /* Expression: 0
                                        * Referenced by: '<S36>/Limit Acceleration'
                                        */
};
