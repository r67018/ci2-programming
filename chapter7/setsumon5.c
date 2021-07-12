#include <stdio.h>

unsigned set(unsigned x, int pos) {
    return x | (1<<pos);
}

int main(void) {
    unsigned x;
    int pos;

    scanf("%u%d", &x, &pos);

    unsigned y = set(x, pos);
    printf("%u\n", y);

    return 0;
}
