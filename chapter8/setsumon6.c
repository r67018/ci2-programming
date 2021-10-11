#include <stdio.h>

int factorial(int n) {
    int i;
    int res = 1;
    for (i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main(void) {
    int n;
    scanf("%d", &n);

    printf("%d\n", factorial(n));

    return 0;
}
