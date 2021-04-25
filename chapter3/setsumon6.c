#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int x = a < b ? a : b;
    printf("%d\n", a < x ? a : x);

    return 0;
}
