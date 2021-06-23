#include <stdio.h>

void intary_rcpy(int v1[], const int v2[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        v1[i] = v2[n-i-1];
    }
}

int main(void) {
    int i;
    int n;
    scanf("%d", &n);

    int v1[n], v2[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &v2[i]);
    }

    intary_rcpy(v1, v2, n);

    for (i = 0; i < n; i++) {
        printf("%d ", v1[i]);
    }
    putchar('\n');

    return 0;
}
