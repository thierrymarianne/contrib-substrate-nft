#include <stdio.h>
#include <stdlib.h>

#include "nft.h"

/* import: 'seal0' 'seal_hash_blake2_256' */
void _seal0Z_seal_hash_blake2_256Z_viii(u32 a1, u32 a2, u32 a3) {
    printf("calling %s", "seal_hash_blake2_256");
}

/* import: 'seal0' 'seal_set_storage' */
void _seal0Z_seal_set_storageZ_viii(u32 a1, u32 a2, u32 a3) {
    printf("calling %s", "seal_set_storage");
}

/* import: 'seal0' 'seal_value_transferred' */
void _seal0Z_seal_value_transferredZ_vii(u32 a1, u32 a2) {
    printf("calling %s", "seal_value_transferred");
}

/* import: 'seal0' 'seal_caller' */
void _seal0Z_seal_callerZ_vii(u32 a1, u32 a2) {
    printf("calling %s", "seal_caller");
}

/* import: 'seal0' 'seal_debug_message' */
u32 _seal0Z_seal_debug_messageZ_iii(u32 a1, u32 a2) {
    printf("calling %s", "seal_debug_message");

    u32 ret = 0;
    return ret;
}

/* import: 'seal0' 'seal_clear_storage' */
void _seal0Z_seal_clear_storageZ_vi(u32 a1) {
    printf("calling %s", "seal_clear_storage");
}

/* import: 'seal0' 'seal_get_storage' */
u32 _seal0Z_seal_get_storageZ_iiii(u32 a1, u32 a2, u32 a3) {
    printf("calling %s", "seal_get_storage");

    u32 ret = 0;
    return ret;
}

/* import: 'seal0' 'seal_input' */
void _seal0Z_seal_inputZ_vii(u32 a1, u32 a2) {
    printf("calling %s", "seal_input");
}

/* import: 'seal0' 'seal_return' */
void _seal0Z_seal_returnZ_viii(u32 a1, u32 a2, u32 a3) {
}


int main(int argc, char** argv) {    
    Z_seal0Z_seal_hash_blake2_256Z_viii = &_seal0Z_seal_hash_blake2_256Z_viii;
    Z_seal0Z_seal_set_storageZ_viii = &_seal0Z_seal_set_storageZ_viii;
    Z_seal0Z_seal_value_transferredZ_vii = &_seal0Z_seal_value_transferredZ_vii;
    Z_seal0Z_seal_callerZ_vii = &_seal0Z_seal_callerZ_vii;
    Z_seal0Z_seal_debug_messageZ_iii = &_seal0Z_seal_debug_messageZ_iii;
    Z_seal0Z_seal_clear_storageZ_vi = &_seal0Z_seal_clear_storageZ_vi;
    Z_seal0Z_seal_get_storageZ_iiii = &_seal0Z_seal_get_storageZ_iiii;
    Z_seal0Z_seal_inputZ_vii = &_seal0Z_seal_inputZ_vii;
    Z_seal0Z_seal_returnZ_viii = &_seal0Z_seal_returnZ_viii;

    init();

	return 0;
}
