#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "log2_lshift16.h"

/*
 * Btrfs use 128Kb max block size for compress data
 * So for more accuracy, lets precompute args for range:
 * 1/1024*1024*1024 - 1024*1024*1024/1024*1024*1024
 */
const uint32_t SIZE = 1024*1024*1024;     // emulate 1024MB of input bytes
const uint32_t log_return_mpl = 1 << 6;
const uint32_t fraction_shift = 1 << 16;

int main(int argc, char *argv[]){
    int32_t old_log_val = 0;
    bool gen = atoi(argv[1]);
    uint32_t i;
    uint32_t fraction_lshift16_old = 0;
    if (gen) {
        printf("/*\n");
        printf(" * Precalculated log2 values\n");
        printf(" * Shifting used for avoiding floating point\n");
        printf(" * Fraction must be left shifted by 16\n");
        printf(" * Return of log are left shifted by 6\n");
        printf(" */\n");
        printf("int log2_lshift16(long long unsigned lshift16){\n");
        for (i = 1; i < SIZE; i++) {
            double fraction = (double) i/ (double) SIZE;
            uint32_t fraction_lshift16 = fraction*fraction_shift;

            int32_t new_log_val = log2(fraction)*log_return_mpl;

            if (old_log_val != new_log_val) {
                if (fraction_lshift16 != fraction_lshift16_old) {
                    printf("\tif (lshift16 < %u)\n", fraction_lshift16);
                    printf("\t\treturn %i;\n", old_log_val);
                    fraction_lshift16_old = fraction_lshift16;
                }
                old_log_val = new_log_val;
                if (old_log_val == 0)
                    break;
            }
        }
        printf("\treturn 0;\n");
        printf("}\n");
    } else {
        printf("fraction fraction*%u log2() == log2_lshift16()\n", fraction_shift);
        for (i = 1; i < SIZE; i++) {
            double fraction = (double) i/ (double) SIZE;
            int32_t new_log_val = log2(fraction)*log_return_mpl;
            if (old_log_val != new_log_val) {
                old_log_val = new_log_val;
                printf("%i/%i %f %i == %i\n", i, SIZE, fraction*fraction_shift, new_log_val, log2_lshift16(fraction*fraction_shift));
                if (old_log_val == 0)
                    break;
            }
        }
    }
}