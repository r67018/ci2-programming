#include <stdio.h>

int main(void) {
    int height;
    scanf("%d", &height);

    double std_weight = (height - 100) * 0.9;
    printf("%.1f\n", std_weight);

    return 0;
}

