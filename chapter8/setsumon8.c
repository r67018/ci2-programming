#include <stdio.h>

#define SWAP(x, y) do { \
    int temp = (x); \
    (x) = (y); \
    (y) = temp; \
} while (0)

int gcd(int x, int y) {
    if (y == 0) return x;
    if (x < y) SWAP(x, y);
    int r = x % y;
    return gcd(y, r);
}

int main(void) {
    int x, y;
    scanf("%d%d", &x, &y);

    printf("%d\n", gcd(x, y));

    return 0;
}
