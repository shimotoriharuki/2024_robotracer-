/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 * File: _coder_getServoEquationOfStateParameters_mex.c
 *
 * MATLAB Coder version            : 24.1
 * C/C++ source code generated on  : 2024/08/05 21:11:32
 */

/* Include Files */
#include "_coder_getServoEquationOfStateParameters_mex.h"
#include "_coder_getServoEquationOfStateParameters_api.h"

/* Function Definitions */
/*
 * Arguments    : int32_T nlhs
 *                mxArray *plhs[]
 *                int32_T nrhs
 *                const mxArray *prhs[]
 * Return Type  : void
 */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&getServoEquationOfStateParameters_atexit);
  /* Module initialization. */
  getServoEquationOfStateParameters_initialize();
  /* Dispatch the entry-point. */
  unsafe_getServoEquationOfStateParameters_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  getServoEquationOfStateParameters_terminate();
}

/*
 * Arguments    : void
 * Return Type  : emlrtCTX
 */
emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, "Shift_JIS", true);
  return emlrtRootTLSGlobal;
}

/*
 * Arguments    : int32_T nlhs
 *                mxArray *plhs[3]
 *                int32_T nrhs
 *                const mxArray *prhs[12]
 * Return Type  : void
 */
void unsafe_getServoEquationOfStateParameters_mexFunction(
    int32_T nlhs, mxArray *plhs[3], int32_T nrhs, const mxArray *prhs[12])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *b_prhs[12];
  const mxArray *outputs[3];
  int32_T i;
  int32_T i1;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 12) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 12, 4,
                        33, "getServoEquationOfStateParameters");
  }
  if (nlhs > 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 33,
                        "getServoEquationOfStateParameters");
  }
  /* Call the function. */
  for (i = 0; i < 12; i++) {
    b_prhs[i] = prhs[i];
  }
  c_getServoEquationOfStateParame(b_prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i1 = 1;
  } else {
    i1 = nlhs;
  }
  emlrtReturnArrays(i1, &plhs[0], &outputs[0]);
}

/*
 * File trailer for _coder_getServoEquationOfStateParameters_mex.c
 *
 * [EOF]
 */
