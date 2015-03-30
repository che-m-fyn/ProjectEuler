#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utl.h"

int main(void) {

    Array *data;  // array of prime

    data = (Array *)malloc(sizeof(Array));
    if (data == NULL) {
        printf("Fail to malloc\n");
        return -1;
    }    
    data->num = 0; 

    data->arr = malloc(sizeof(unsigned int) * 10001);
    if (data == NULL) {
        printf("Fail to malloc\n");
        return -1;
    }
    memset(data->arr, 0, sizeof(unsigned int) * 10001);

    utl_make_prime_list(10001, data);
    printf("answer=%u\n", data->arr[10000]);

    free(data);
    return 0;
}

