#include <stdio.h>

int main(void) {
    int a = 3.14;
    printf("%d\n", a);
    printf("int型は整数しか扱えないので, 実数値を代入するときに小数部分が切り捨てされる\n");

    return 0;
}

