#include <stdio.h>

int main(void) {
    int x;
    scanf("%d", &x);

    printf("左シフト: %d\n", (x<<1));
    printf("右シフト: %d\n", (x>>1));

    return 0;
}
