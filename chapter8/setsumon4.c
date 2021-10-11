#include <stdio.h>

#define N 5

void bsort(int a[], int n) {
    int i, j;
    for (i = n - 1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if (a[j + 1] < a[j]) {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}

int main(void) {
    int i;
    int height[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &height[i]);
    }

    bsort(height, N);

    for (i = 0; i < N; i++) {
        printf("%d\n", height[i]);
    }

    return 0;
}
