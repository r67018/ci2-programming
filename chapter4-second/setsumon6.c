#include <stdio.h>

int main(void) {
    int n, i, j;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n-i ; j++) {
            printf(" ");
        }
        for (j = 0; j < (i*2-1); j++) {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}

