#ifndef SEAL_FUNCS_IMPL_H
#define SEAL_FUNCS_IMPL_H

#include "seal-funcs.h"

#include <stdio.h>

typedef unsigned int u32;

/* import: 'seal0' 'seal_hash_blake2_256' */
static void _seal0Z_seal_hash_blake2_256Z_viii(u32 a1, u32 a2, u32 a3) {
    printf("calling %s", "seal_hash_blake2_256");
}

/* import: 'seal0' 'seal_set_storage' */
static void _seal0Z_seal_set_storageZ_viii(u32 a1, u32 a2, u32 a3) {
    printf("calling %s", "seal_set_storage");
}

/* import: 'seal0' 'seal_value_transferred' */
static void _seal0Z_seal_value_transferredZ_vii(u32 a1, u32 a2) {
    printf("calling %s", "seal_value_transferred");
}

/* import: 'seal0' 'seal_caller' */
static void _seal0Z_seal_callerZ_vii(u32 a1, u32 a2) {
    printf("calling %s", "seal_caller");
}

/* import: 'seal0' 'seal_debug_message' */
static u32 _seal0Z_seal_debug_messageZ_iii(u32 a1, u32 a2) {
    printf("calling %s", "seal_debug_message");

    u32 ret = 0;
    return ret;
}

/* import: 'seal0' 'seal_clear_storage' */
static void _seal0Z_seal_clear_storageZ_vi(u32 a1) {
    printf("calling %s", "seal_clear_storage");
}

/* import: 'seal0' 'seal_get_storage' */
static u32 _seal0Z_seal_get_storageZ_iiii(u32 a1, u32 a2, u32 a3) {
    printf("calling %s", "seal_get_storage");

    u32 ret = 0;
    return ret;
}

/* import: 'seal0' 'seal_input' */
static void _seal0Z_seal_inputZ_vii(u32 a1, u32 a2) {
    printf("calling %s", "seal_input");
}

/* import: 'seal0' 'seal_return' */
static void _seal0Z_seal_returnZ_viii(u32 a1, u32 a2, u32 a3) {
    printf("calling %s", "seal_return");
}

static void (*Z_seal0Z_seal_hash_blake2_256Z_viii)(u32 a1, u32 a2, u32 a3);
static void (*Z_seal0Z_seal_set_storageZ_viii)(u32 a1, u32 a2, u32 a3);
static void (*Z_seal0Z_seal_value_transferredZ_vii)(u32 a1, u32 a2);
static void (*Z_seal0Z_seal_callerZ_vii)(u32 a1, u32 a2);
static u32 (*Z_seal0Z_seal_debug_messageZ_iii)(u32 a1, u32 a2);
static void (*Z_seal0Z_seal_clear_storageZ_vi)(u32 a1);
static u32 (*Z_seal0Z_seal_get_storageZ_iiii)(u32 a1, u32 a2, u32 a3);
static void (*Z_seal0Z_seal_inputZ_vii)(u32 a1, u32 a2);
static void (*Z_seal0Z_seal_returnZ_viii)(u32 a1, u32 a2, u32 a3);


#endif