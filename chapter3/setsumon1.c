#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d%d", &a, &b);

    if (b % a == 0) {
        puts("divisor");
    } else {
        puts("non-divisor");
    }

    return 0;
}

