/**
  ******************************************************************************
  * @file    network_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    2026-05-19T23:09:59-0400
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
  0xf8ef897fd30fac4bU, 0xc97f3032b6bb2e31U, 0xad8198921029f312U, 0x456687f97f875f56U,
  0xb48a5c813b01dc6aU, 0xcc7fcc690d20ed65U, 0x6ba00000000U, 0x169e00000000U,
  0x1029fffffa79U, 0x61dd68a37f7c989dU, 0x816640af7f25267bU, 0xbc300001e69U,
  0xfffff12200000973U, 0x818d9c7f0181fe00U, 0x781dbeadf538178U, 0x81eeU,
  0x7d4U, 0xfffff797U, 0x88e435b00000000U, 0xed7f32067dd781e0U,
  0x61170412dda2637fU, 0x6d17fcd817858f5U, 0xc79f4deb7fb23f9cU, 0xbd9d91816f552162U,
  0x43b29e7fa9f4U, 0x2c67ffffff56U, 0xfffffc3600001e74U, 0x3422000003a9U,
  0x4ee8U,
};


ai_handle g_network_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_network_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

