#include <stdio.h>

int main(void) {
    int n, i, j;
    scanf("%d", &n);

    for (i = n; i > 0; i--) {
        for (j = 0; j < n-i; j++) {
            printf(" ");
        }
        for (j = 0; j < (i*2-1); j++) {
            printf("%d", i%10);
        }
        printf("\n");
    }


    return 0;
}

