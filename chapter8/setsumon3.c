#include <stdio.h>

#define swap(type, a, b) do { \
    type tmp = a; \
    a = b; \
    b = tmp; \
} while (0);

int main(void) {
    int x, y;
    scanf("%d%d", &x, &y);

    swap(int, x, y);
    printf("%d %d", x, y);

    return 0;
}
