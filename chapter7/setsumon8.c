#include <stdio.h>
#include <limits.h>

int main(void) {
    unsigned x;
    x = 10e8;
    x *= 10; // overflow
    printf("%u\n", x);
    printf("%llu\n", (long long)10e9 % ((long long)UINT_MAX + 1));

    return 0;
}
