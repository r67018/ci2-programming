#include <stdio.h>

int combination(int n, int r) {
    if (r == 0 || r == n) return 1;
    if (r == 1) return n;
    return combination(n - 1, r - 1) + combination(n - 1, r);
}

int main(void) {
    int n, r;
    scanf("%d%d", &n, &r);

    printf("%d\n", combination(n, r));

    return 0;
}

