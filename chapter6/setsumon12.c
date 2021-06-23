#include <stdio.h>
#define N 100

int main(void) {
    int i;
    static double a[N];

    for (i = 0; i < N; i++) {
        printf("%.1f\n", a[i]);
    }

    return 0;
}
