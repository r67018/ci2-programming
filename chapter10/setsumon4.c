#include <stdio.h>

void set_idx(int *v, int n) {
    int i;
    for (i = 0; i < n; i++) {
        v[i] = i;
    }
}

int main(void) {
    int i;
    int a[10];

    int n;
    scanf("%d", &n);

    set_idx(a, n);

    for (i = 0; i < 10; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}

