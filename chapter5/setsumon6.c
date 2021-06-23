#include <stdio.h>

int main(void) {
    double a;
    int b;
    a = b = 1.5;
    printf("a: %f\n", a);
    printf("b: %d\n", b);
    printf("まずbに1.5を代入しようとするが，\nbはint型のため小数点以下が切り捨てられて1が代入される．\n次にaにbが代入されるためaも1が入る．\n");

    return 0;
}

