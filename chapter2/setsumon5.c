#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    double ans = 100.0 * a / b;
    printf("%f%%\n", ans);

    return 0;
}

