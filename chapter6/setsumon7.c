#include <stdio.h>

int min_of(const int v[], int n) {
    int i;
    int minv = v[0];
    for (i = 1; i < n; i++) {
        if (v[i] < minv) {
            minv = v[i];
        }
    }
    return minv;
}

int main(void) {
    int i;
    int n;
    scanf("%d", &n);

    int v[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    printf("%d\n", min_of(v, n));

    return 0;
}
