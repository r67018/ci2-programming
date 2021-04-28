#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("*");
        if (i % 5 == 0) printf("\n");
    }

    return 0;
}

