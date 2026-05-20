/**
  ******************************************************************************
  * @file    network_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    2026-05-19T21:49:17-0400
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "network_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_network_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_network_weights_array_u64[29] = {
  0x73a491a481a5b7a1U, 0x81eadcd36750ced9U, 0x47bd18f2477f8c82U, 0x42fd0481d03ae143U,
  0x8150d9a1c6c97ee1U, 0xb0c2beb699b24181U, 0xfffffa4900000000U, 0x0U,
  0x0U, 0x7d7c73a7fed10fbU, 0x81bfe4e381d11b59U, 0xffffd00a00007219U,
  0xffffd0d0U, 0x7fa47f36f6816769U, 0x81779281057f4726U, 0xf35b41500000b087U,
  0xf8ba4d60U, 0xf8a3e820U, 0xe40b00e200000000U, 0x9eb0fdce31b2723U,
  0xbd814fa1d0203e2U, 0x4f1d7d7e3daf623U, 0x1901f61e0618de29U, 0x394bf51ffeeff4f7U,
  0x4000000002fc7f23U, 0x4000000040000000U, 0x3fffffc040000000U, 0x3fffffc040000000U,
  0x681a8U,
};


ai_handle g_network_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_network_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

