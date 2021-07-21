#include <stdio.h>

int main(void) {
    unsigned x;
    scanf("%u", &x);

    printf("左シフト: %u\n", (x<<1));
    printf("右シフト: %u\n", (x>>1));

    return 0;
}
