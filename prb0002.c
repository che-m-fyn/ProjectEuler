#include <stdio.h>

void main (int argc, char *argv[]) {
    
    int term1 = 1;
    int term2 = 2;
    int tmp_term2 = 0;
    int sum = 0;

    while (term2 < (4 * 1000 * 1000)) {
        if (term2%2 == 0) {
            sum += term2;
        }
        tmp_term2 = term2; 
        term2 = term1 + term2;
        term1 = tmp_term2;
    }

    printf("sum of even terms = %d\n", sum);
    return;
}
