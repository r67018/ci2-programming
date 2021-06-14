#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d", i % 10);
    }
    printf("\n");

    return 0;
}

