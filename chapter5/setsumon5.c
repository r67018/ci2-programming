#include <stdio.h>
#define N 7

int main(void) {
    int i;
    int x[N];

    for (i = 0; i < 7; i++) {
        scanf("%d", &x[i]);
    }

    for (i = 0; i < 3; i++) {
        int temp = x[i];
        x[i] = x[6 - i];
        x[6 - i] = temp;
    }

    puts("反転しました。");
    for (i = 0; i < 7; i++) {
        printf("x[%d] = %d\n", i, x[i]);
    }

    return 0;
}
