#ifndef SEAL_FUNCS_C
#define SEAL_FUNCS_C

#include "seal-funcs-impl.h";

// Called from main.c but implemented in nft.c
void init_seal_funcs() {
    Z_seal0Z_seal_hash_blake2_256Z_viii = &_seal0Z_seal_hash_blake2_256Z_viii;
    Z_seal0Z_seal_set_storageZ_viii = &_seal0Z_seal_set_storageZ_viii;
    Z_seal0Z_seal_value_transferredZ_vii = &_seal0Z_seal_value_transferredZ_vii;
    Z_seal0Z_seal_callerZ_vii = &_seal0Z_seal_callerZ_vii;
    Z_seal0Z_seal_debug_messageZ_iii = &_seal0Z_seal_debug_messageZ_iii;
    Z_seal0Z_seal_clear_storageZ_vi = &_seal0Z_seal_clear_storageZ_vi;
    Z_seal0Z_seal_get_storageZ_iiii = &_seal0Z_seal_get_storageZ_iiii;
    Z_seal0Z_seal_inputZ_vii = &_seal0Z_seal_inputZ_vii;
    Z_seal0Z_seal_returnZ_viii = &_seal0Z_seal_returnZ_viii;
}

#endif