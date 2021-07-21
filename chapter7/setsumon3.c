#include <stdio.h>

unsigned rrotate(unsigned x, int n) {
    return (x >> n) | (x << (32 - n));
}

void print_bits(unsigned x) {
    int i;
    for (i = 31; i >= 0; i--) {
        if (x & (1 << i)) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");
}

int main(void) {
    int n;
    unsigned x;
    scanf("%u%d", &x, &n);

    print_bits(rrotate(x, n));

    return 0;
}
