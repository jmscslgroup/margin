//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: margin.cpp
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
#include "margin.h"
#include "margin_private.h"

// Block signals (default storage)
B_margin_T margin_B;

// Block states (default storage)
DW_margin_T margin_DW;

// Real-time model
RT_MODEL_margin_T margin_M_ = RT_MODEL_margin_T();
RT_MODEL_margin_T *const margin_M = &margin_M_;

// Model step function
void margin_step(void)
{
  SL_Bus_margin_std_msgs_Float64 b_varargout_2;
  SL_Bus_margin_std_msgs_Float64 rtb_BusAssignment1;
  real_T value;
  boolean_T b_varargout_1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S2>/SourceBlock' incorporates:
  //   Inport: '<S5>/In1'

  b_varargout_1 = Sub_margin_5.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S2>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S5>/Enable'

  if (b_varargout_1) {
    margin_B.In1 = b_varargout_2;
  }

  // End of MATLABSystem: '<S2>/SourceBlock'
  // End of Outputs for SubSystem: '<S2>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // MATLABSystem: '<Root>/Get Parameter'
  ParamGet_margin_7.get_parameter(&value);

  // BusAssignment: '<S1>/Bus Assignment1' incorporates:
  //   MATLABSystem: '<Root>/Get Parameter'
  //   Sum: '<Root>/Subtract1'

  rtb_BusAssignment1.Data = margin_B.In1.Data - value;

  // Outputs for Atomic SubSystem: '<S1>/Publish1'
  // MATLABSystem: '<S4>/SinkBlock'
  Pub_margin_12.publish(&rtb_BusAssignment1);

  // End of Outputs for SubSystem: '<S1>/Publish1'
}

// Model initialize function
void margin_initialize(void)
{
  {
    int32_T i;
    char_T b_zeroDelimTopic_0[20];
    char_T b_zeroDelimTopic[10];
    char_T b_zeroDelimName[7];
    static const char_T tmp[9] = { 'l', 'e', 'a', 'd', '_', 'd', 'i', 's', 't' };

    static const char_T tmp_0[19] = { 'e', 'f', 'f', 'e', 'c', 't', 'i', 'v',
      'e', '_', 'l', 'e', 'a', 'd', '_', 'd', 'i', 's', 't' };

    static const char_T tmp_1[6] = { 'm', 'a', 'r', 'g', 'i', 'n' };

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S2>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S5>/Out1' incorporates:
    //   Inport: '<S5>/In1'

    margin_B.In1 = margin_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S2>/Enabled Subsystem'

    // Start for MATLABSystem: '<S2>/SourceBlock'
    margin_DW.obj_l.matlabCodegenIsDeleted = false;
    margin_DW.obj_l.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      b_zeroDelimTopic[i] = tmp[i];
    }

    b_zeroDelimTopic[9] = '\x00';
    Sub_margin_5.createSubscriber(&b_zeroDelimTopic[0], 1);
    margin_DW.obj_l.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<S1>/Publish1'
    // Start for MATLABSystem: '<S4>/SinkBlock'
    margin_DW.obj_j.matlabCodegenIsDeleted = false;
    margin_DW.obj_j.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      b_zeroDelimTopic_0[i] = tmp_0[i];
    }

    b_zeroDelimTopic_0[19] = '\x00';
    Pub_margin_12.createPublisher(&b_zeroDelimTopic_0[0], 1);
    margin_DW.obj_j.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S4>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Publish1'

    // Start for MATLABSystem: '<Root>/Get Parameter'
    margin_DW.obj.matlabCodegenIsDeleted = false;
    margin_DW.obj.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      b_zeroDelimName[i] = tmp_1[i];
    }

    b_zeroDelimName[6] = '\x00';
    ParamGet_margin_7.initialize(&b_zeroDelimName[0]);
    ParamGet_margin_7.initialize_error_codes(0, 1, 2, 3);
    ParamGet_margin_7.set_initial_value(30.0);
    margin_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<Root>/Get Parameter'
  }
}

// Model terminate function
void margin_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S2>/SourceBlock'
  if (!margin_DW.obj_l.matlabCodegenIsDeleted) {
    margin_DW.obj_l.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for MATLABSystem: '<Root>/Get Parameter'
  if (!margin_DW.obj.matlabCodegenIsDeleted) {
    margin_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<Root>/Get Parameter'

  // Terminate for Atomic SubSystem: '<S1>/Publish1'
  // Terminate for MATLABSystem: '<S4>/SinkBlock'
  if (!margin_DW.obj_j.matlabCodegenIsDeleted) {
    margin_DW.obj_j.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S4>/SinkBlock'
  // End of Terminate for SubSystem: '<S1>/Publish1'
}

//
// File trailer for generated code.
//
// [EOF]
//
