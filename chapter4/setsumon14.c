#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d\n", i);
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}

