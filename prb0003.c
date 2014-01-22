#include <stdio.h>

#define MIN_PRIME 2

int main(void) {
    long cnt_num = MIN_PRIME;
    long problem = 600851475143;

    while (cnt_num < problem) {
        while (problem % cnt_num == 0) {
            problem /= cnt_num;
        }
        cnt_num++;

        // 素数の求め方に問題あり。
        // 1. 素数のリストを作る
        // 2. 素数を確定する際に無駄な処理を実行しない。
        for (long search_prime = MIN_PRIME; search_prime < cnt_num; search_prime++) {
            if (cnt_num % search_prime == 0) {
                cnt_num++;
                continue;
            }
        }
    }

    printf("answer = %ld\n", problem);
    return 0;
}
