#include <stdio.h>

int total() {
    static int sum = 0;
    static int count = 0;

    count++;
    sum += count;
    return sum;
}

int main(void) {
    int i;
    int n, sum;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        sum = total();
    }

    printf("%d\n", sum);

    return 0;
}
