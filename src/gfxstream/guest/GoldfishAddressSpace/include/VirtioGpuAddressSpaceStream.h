/*
 * Copyright 2023 Google
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include "AddressSpaceStream.h"
#include <iostream>

AddressSpaceStream* createVirtioGpuAddressSpaceStream(enum VirtGpuCapset capset);
