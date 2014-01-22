#include <stdio.h>

int main(void) {

    int sq_of_sum = 0;
    int sum_of_sq = 0;
    int ans = 0;

    for (int num = 1; num <= 100; num++) {
        sum_of_sq += num * num;
        sq_of_sum += num; 
    }
    sq_of_sum *= sq_of_sum;

    if (sum_of_sq < sq_of_sum) {
        ans = sq_of_sum - sum_of_sq;
    } else {
        ans = sum_of_sq - sq_of_sum;
    }

    printf("answer = %d\n", ans);
}
