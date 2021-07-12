#include <stdio.h>

unsigned rrotate(unsigned x, int n) {
    int i;
    unsigned y = 0;
    for (i = 0; i < 32; i++) {
        if (x & (1<<i)) {
            y |= 1<<((i-n+32) % 32);
        }
    }
    return y;
}

int main(void) {
    int n;
    unsigned x;
    scanf("%u%d", &x, &n);

    unsigned y = rrotate(x, n);
    printf("%u\n", y);

    return 0;
}
