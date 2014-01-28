#include <stdio.h>

int main (void)
{
    int ans = 0;

    for (int i = 3; i < 1000; i++) {
        if ((i % 3 == 0) || (i % 5 == 0)) {
            ans += i;
        }
    }

    printf("answer=%d\n", ans);
    return 0;
}
