// Copyright (c) 2016 Nuxi, https://nuxi.nl/
//
// SPDX-License-Identifier: BSD-2-Clause

#include <common/clock.h>

#include <wasi/core.h>
#include <time.h>

const struct __clockid _CLOCK_PROCESS_CPUTIME_ID = {
    .id = __WASI_CLOCK_PROCESS_CPUTIME_ID,
};
