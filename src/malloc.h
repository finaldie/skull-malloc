#ifndef SKULL_MALLOC_H
#define SKULL_MALLOC_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>

void* skull_malloc(size_t size);
void  skull_free(void* ptr);
void* skull_realloc(void* ptr, size_t size);
void* skull_calloc(size_t num, size_t size);

#ifdef __cplusplus
}
#endif

#endif

