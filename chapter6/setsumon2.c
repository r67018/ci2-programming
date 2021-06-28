#include <stdio.h>

int min3(int a, int b, int c) {
    int min;
    min = a < b ? a : b;
    min = min < c ? min : c;
    return min;
}

int main(void) {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    printf("%d\n", min3(a, b, c));

    return 0;
}
