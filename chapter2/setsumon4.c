#include <stdio.h>

int main(void) {
    int a = 5, b = 8;
    double c = 3.14;

    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);
    printf("%d + %f = %f\n", a, c, a+c);
    printf("%d - %f = %f\n", a, c, a-c);
    printf("%d * %f = %f\n", a, c, a*c);
    printf("%d / %f = %f\n", a, c, a/c);

    return 0;
}

