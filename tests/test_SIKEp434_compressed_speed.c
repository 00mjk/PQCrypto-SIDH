/**********************************************************************************************
* SIDH: an efficient supersingular isogeny cryptography library
*
* Abstract: benchmarking/testing isogeny-based key encapsulation mechanism SIKEp434_compressed_speed
***********************************************************************************************/ 

#include <stdio.h>
#include <string.h>
#include "test_extras.h"
#define SCHEME_NAME    "SIKEp434_compressed_speed"
#include "../src/P434/P434_compressed_speed.c"



#define crypto_kem_keypair            crypto_kem_keypair_SIKEp434_compressed_speed
#define crypto_kem_enc                crypto_kem_enc_SIKEp434_compressed_speed
#define crypto_kem_dec                crypto_kem_dec_SIKEp434_compressed_speed

#include "test_sike.c"
