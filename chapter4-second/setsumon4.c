#include <stdio.h>

int main(void) {
    int len;
    scanf("%d", &len);

    for (int i = len; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

