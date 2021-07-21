#include <stdio.h>

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
    unsigned x;
    scanf("%u", &x);
    print_bits(x);

    printf("%u\n", (x<<1));
    print_bits(x<<1);

    printf("%u\n", (x>>1));
    print_bits(x>>1);

    return 0;
}
