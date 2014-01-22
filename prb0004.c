#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int palindromic;

    for (int i=999; i >= 100; i--) {
        
        char buf[7];

        // make palaindromic number
        (void)sprintf(buf, "%d", i);
        for (int buf_num1=3, buf_num2=2; buf_num < 7; buf_num1++, buf_num2--) {
            if (buf_num2 < 0) {
                buf[buf_num1] = '\0'
            } else {
                buf[buf_num1] = buf[(buf_num2)];
            }
        }
        palindromic = atoi(buf);
        
        if (palindromic > 999 * 999) {
            continue;
        }

        for (int n=100; n < 1000; n++) {
            if (palindromic % n != 0) {
                continue;
            }
            if (palindromic / n < 1000) {
                printf("n = %d, m = %d\n", n, palindromic / n);
                printf("answer = %d\n", palindromic);
                return 0;
            }
        }
    }
}
