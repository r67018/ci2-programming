#include <stdio.h>

int main(void) {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    int x = a > b ? a : b;
    int y = c > d ? c : d;

    printf("%d\n", x > y ? x : y);

    return 0;
}

