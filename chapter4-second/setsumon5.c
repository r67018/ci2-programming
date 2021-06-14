#include <stdio.h>

int main(void) {
    int len;
    scanf("%d", &len);

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int j = 0; j < len - i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

