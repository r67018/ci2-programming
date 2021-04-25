#include <stdio.h>

int main(void) {
    int a[5];
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &a[i]);
    }

    int max = -2e9;
    for (int i = 0; i < 5; ++i) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    printf("%d\n", max);

    return 0;
}

