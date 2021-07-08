//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: margin.h
//
// Code generated for Simulink model 'margin'.
//
// Model version                  : 1.2
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Wed Jul  7 20:36:45 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_margin_h_
#define RTW_HEADER_margin_h_
#include <stddef.h>
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "margin_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
struct B_margin_T {
  SL_Bus_margin_std_msgs_Float64 In1;  // '<S5>/In1'
};

// Block states (default storage) for system '<Root>'
struct DW_margin_T {
  ros_slros_internal_block_GetP_T obj; // '<Root>/Get Parameter'
  ros_slroscpp_internal_block_P_T obj_j;// '<S4>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_l;// '<S2>/SourceBlock'
};

// Parameters (default storage)
struct P_margin_T_ {
  SL_Bus_margin_std_msgs_Float64 Constant_Value;// Computed Parameter: Constant_Value
                                                   //  Referenced by: '<S3>/Constant'

  SL_Bus_margin_std_msgs_Float64 Out1_Y0;// Computed Parameter: Out1_Y0
                                            //  Referenced by: '<S5>/Out1'

  SL_Bus_margin_std_msgs_Float64 Constant_Value_l;// Computed Parameter: Constant_Value_l
                                                     //  Referenced by: '<S2>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_margin_T {
  const char_T *errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_margin_T margin_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_margin_T margin_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern struct DW_margin_T margin_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void margin_initialize(void);
  extern void margin_step(void);
  extern void margin_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_margin_T *const margin_M;

#ifdef __cplusplus

}
#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'margin'
//  '<S1>'   : 'margin/Publish EffectiveHeadway'
//  '<S2>'   : 'margin/Subscribe'
//  '<S3>'   : 'margin/Publish EffectiveHeadway/Blank Message1'
//  '<S4>'   : 'margin/Publish EffectiveHeadway/Publish1'
//  '<S5>'   : 'margin/Subscribe/Enabled Subsystem'

#endif                                 // RTW_HEADER_margin_h_

//
// File trailer for generated code.
//
// [EOF]
//
