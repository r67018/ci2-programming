#include <stdio.h>

int main(void) {
    int i;
    float x, sum_x = 0, sum_i = 0;

    for (x = 0; x <= 1.0; x += 0.01) {
        sum_x += x;
    }

    for (i = 0; i <= 100; i++) {
        sum_i += i / 100.0f;
    }

    printf("%f\nfloatで0.01ずつ足した方は，floatには誤差があるためその誤差が蓄積して正しい値から離れた値になる\n", sum_x);
    printf("%f\nintを100.0fで割ったものを足した方では，誤差が発生しないため正しい値に近いものを求めることができる", sum_i);

    return 0;
}
