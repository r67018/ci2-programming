#include <stdio.h>

#define diff(x, y) ((x) - (y))

int main(void) {
    int x, y;
    scanf("%d%d", &x, &y);

    printf("%d\n", diff(x, y));

    return 0;
}

