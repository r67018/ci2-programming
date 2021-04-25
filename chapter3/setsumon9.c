#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a == b && b == c) {
        puts("All of them");
    } else if (a == b || b == c || c == a) {
        puts("2 of them");
    } else {
        puts("none of them");
    }

    return 0;
}

