#include <stdio.h>

int pow4(int x) {
    return x * x * x * x;
}

int main(void) {
    int x;
    scanf("%d", &x);

    printf("%d\n", pow4(x));

    return 0;
}
