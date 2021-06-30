#include <stdio.h>

void rev_intary(int v[], int n) {
    int i;
    int v_copy[n];
    for (i = 0; i < n; i++) {
        v_copy[i] = v[i];
    }
    for (i = 0; i < n; i++) {
        v[i] = v_copy[n-i-1];
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
        printf("%d\n", v[i]);
    }

    return 0;
}
