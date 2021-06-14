#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int res = 1;
    while (res <= n) {
        printf("%d ", res);
        res *= 2;
    }
    printf("\n");

    return 0;
}

