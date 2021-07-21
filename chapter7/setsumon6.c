#include <stdio.h>

unsigned reset(unsigned x, int pos) {
    return x & ~(1<<pos);
}

void print_bits(unsigned x) {
    int i;
    for (i = 31; i >= 0; i--) {
        if (x & (1<<i)) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");
}

int main(void) {
    unsigned x;
    int pos;

    scanf("%u%d", &x, &pos);

    print_bits(reset(x, pos));

    return 0;
}
