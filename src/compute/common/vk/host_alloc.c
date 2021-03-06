/*
 * Copyright 2018 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 *
 */

//
//
//

#include <stdlib.h>

//
//
//

#include "host_alloc.h"

//
//
//

void *
vk_host_alloc(VkAllocationCallbacks const * allocator, size_t size)
{
  return malloc(size);
}

void *
vk_host_realloc(VkAllocationCallbacks const * allocator, void * ptr, size_t new_size)
{
  return realloc(ptr,new_size);
}

void
vk_host_free(VkAllocationCallbacks const * allocator, void * ptr)
{
  free(ptr);
}

//
//
//
