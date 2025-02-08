/*
 * Copyright 2024 Google LLC
 * SPDX-License-Identifier: MIT
 */

#include "GfxStreamRenderControl.h"
#include <cerrno>

GfxStreamTransportType renderControlGetTransport() {
    // return GFXSTREAM_TRANSPORT_VIRTIO_GPU_ADDRESS_SPACE;
    return GFXSTREAM_TRANSPORT_VIRTIO_GPU_PIPE;
}

int32_t renderControlInit(GfxStreamConnectionManager* mgr, void* vkInfo) { return -EINVAL; }
