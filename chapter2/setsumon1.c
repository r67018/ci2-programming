#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    if (b == 0) {
        return 0;
    }

    int ans = 100 * a / b;
    printf("%d%%\n", ans);

    return 0;
}

