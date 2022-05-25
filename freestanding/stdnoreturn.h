// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

// Copyright (C) May 2022, Belmont Computing, Inc. -- All Rights Reserved
// Licensed under the BCI License. See LICENSE for details.

#ifndef OPENTITAN_SW_DEVICE_LIB_BASE_FREESTANDING_STDNORETURN_H_
#define OPENTITAN_SW_DEVICE_LIB_BASE_FREESTANDING_STDNORETURN_H_

/**
 * @file
 * @brief C library _Noreturn (Freestanding)
 *
 * This header implements the stdnoreturn.h standard header, as required by C11
 * S4p6. This header is specified in detail in S7.23 of the same.
 */

#define noreturn _Noreturn

#endif  // OPENTITAN_SW_DEVICE_LIB_BASE_FREESTANDING_STDNORETURN_H_
