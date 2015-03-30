#include "utl.h"
#include <stdio.h>
#include <stdlib.h>

void utl_get_prime(unsigned int number, Array *data)
{
    unsigned int prime_factor = MIN_PRIME;
    
    while (prime_factor < number) {
        while (number % prime_factor == 0) {
            number /= prime_factor;
        }
        utl_array_push(&data, prime_factor);
    }
    return;
}

void utl_make_prime_list(unsigned int number, Array *data) {

    unsigned int prime_factor = MIN_PRIME;
    unsigned int n = 0;

    for (unsigned int i = 0; i < number; i++) {

        while (n < i) {
            if (prime_factor % data->arr[n] == 0) {
                prime_factor++;
                n = 0;
            } else {
                n++;
            }
        }

        utl_array_push(&data, prime_factor);
    }

    return;
}

void utl_array_push(Array **data, unsigned int elem)
{
    (*data)->arr[(*data)->num] = elem;
    (*data)->num++;
    return;
}

int utl_array_pop(Array **data) {
    (*data)->num--;
    if ((*data)->num < 0) {
        (*data)->num = 0;
        return NG;
    }
    return OK;
}
