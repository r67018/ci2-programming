#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d%d", &n, &m);

    if (n > m) {
        int tmp = n;
        n = m;
        m = tmp;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

