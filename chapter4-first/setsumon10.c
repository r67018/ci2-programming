#include <stdio.h>

int main(void) {
    int start, end, increment;
    scanf("%d%d%d", &start, &end, &increment);

    for (int height = start; height <= end; height += increment) {
        double std_weight = (height - 100) * 0.9;
        printf("%d %.2f\n", height, std_weight);
    }

    return 0;
}

