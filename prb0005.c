#include <stdio.h>
#include <math.h>

int main(void) {

    int ans_num = 1;
    int product_num = 2;

    while (product_num < 20) {

        int exp_num;
        int exp_ans = 1;

        for (exp_num = 1; exp_num < 20; exp_num++) {
            for (int i = 0; i < exp_num; i++) {
                exp_ans *= product_num;
                if (exp_ans > 20) { 
                    exp_ans /= product_num; 
                    goto exp;
                }
            }
        }
exp:
        printf("exp_ans=%d\n", exp_ans);

        ans_num *= exp_ans;
        product_num++;
        
        // search next prime number
        for (int i = 2; i < product_num; i++) {
            if (product_num % i == 0) {
                product_num++;
                continue;
            } 
        }
    }

    printf("answer = %d\n", ans_num);
    return 0;
}
