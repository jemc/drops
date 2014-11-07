/*  =========================================================================
    drops - another protocol for sharing stuff

    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of zbroker, the ZeroMQ broker project.

    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

#ifndef __DROPS_H_INCLUDED__
#define __DROPS_H_INCLUDED__

#ifdef __cplusplus
extern "C" {
#endif

//  Include the library file with typdefs, public includes and public constants    
#include "drops_library.h"

//  @interface
//  Constructor, creates a new drops agent
CZMQ_EXPORT drops_t *
    drops_new (const char *path);

//  Destructor, ends and destroys a drops service
CZMQ_EXPORT void
    drops_destroy (drops_t **self_p);

//  Receive next message from drops agent
CZMQ_EXPORT zmsg_t *
    drops_recv (drops_t *self);

//  Return handle to the drops agent, for polling
CZMQ_EXPORT void *
    drops_socket (drops_t *self);

//  Self test of this class
CZMQ_EXPORT void
    drops_test (bool verbose);
//  @end

#ifdef __cplusplus
}
#endif

#endif
