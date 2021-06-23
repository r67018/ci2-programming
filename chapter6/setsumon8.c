#include <stdio.h>

void rev_intary(int v[], int n) {
    int i;
    int v_cp[n];
    for (i = 0; i < n; i++) {
        v_cp[i] = v[i];
    }
    for (i = 0; i < n; i++) {
        v[i] = v_cp[n-i-1];
    }
}

int main(void) {
    int i;
    int n;
    scanf("%d", &n);

    int v[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    rev_intary(v, n);

    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    putchar('\n');

    return 0;
}
