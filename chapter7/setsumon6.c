#include <stdio.h>

unsigned reset(unsigned x, int pos) {
    return x & ~(1<<pos);
}

int main(void) {
    unsigned x;
    int pos;

    scanf("%u%d", &x, &pos);

    unsigned y = reset(x, pos);
    printf("%u\n", y);

    return 0;
}
