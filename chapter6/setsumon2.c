#include <stdio.h>

int min3(int a, int b, int c) {
    if (a < b) {
        return a < c ? a : c;
    } else {
        return a < b ? a : b;
    }
}

int main(void) {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    printf("%d\n", min3(a, b, c));

    return 0;
}
