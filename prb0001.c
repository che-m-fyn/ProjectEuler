#include <stdio.h>

void main(int argc, char *argv[]) {
    int sum = 0;
    int div3, div5, div15;
    int sum_cntr;

    div3 = 999 / 3;
    div5 = 999 / 5;
    div15 = 999 / 15;

    for (sum_cntr = 1; sum_cntr <= div3; sum_cntr++) {
        sum += 3 * sum_cntr;
    }

    for (sum_cntr = 1; sum_cntr <= div5; sum_cntr++) {
        sum += 5 * sum_cntr;
    }

    for (sum_cntr = 1; sum_cntr <= div15; sum_cntr++) {
        sum -= 15 * sum_cntr;
    }

    printf("The sum is %d\n", sum);
}
