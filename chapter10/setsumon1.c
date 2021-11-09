#include <stdio.h>

void adjust_point(int *n) {
    if (*n < 100) {
        (*n)++;
    } else {
        *n = 100;
    }
}

int main(void) {
    int n;
    scanf("%d", &n);

    adjust_point(&n);

    printf("%d\n", n);

    return 0;
}

