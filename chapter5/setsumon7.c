#include <stdio.h>
#define MAX_N 256

int main(void) {
    int n, i;
    scanf("%d", &n);

    int v[MAX_N];
    for (i = 0; i < n; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    printf("{");
    for (i = 0; i < n; i++) {
        printf("%d", v[i]);
        if (i != n-1) {
            printf(", ");
        }
    }
    printf("}\n");

    return 0;
}

