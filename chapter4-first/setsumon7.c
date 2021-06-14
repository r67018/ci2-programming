#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int digit = 0;
    while (n > 0) {
        n /= 10;
        digit++;
    }

    printf("%d\n", digit);

    return 0;
}

