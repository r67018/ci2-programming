#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d%d", &a, &b);

    if ((a - b <= 10 && a - b >= 0) || (b - a <= 10 && b - a >= 0)) {
        printf("<=10");
    } else {
        printf(">10");
    }

    if (a < b) {
        printf(" A<B");
    }
    printf("\n");

    return 0;
}

