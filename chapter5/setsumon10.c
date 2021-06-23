#include <stdio.h>
#define ENGLISH 0
#define MATH    1

int main(void) {
    int i, j;
    int score[6][2];
    int english_sum = 0, math_sum = 0;

    for (i = 0; i < 6; i++) {
        scanf("%d", &score[i][ENGLISH]);
        english_sum += score[i][ENGLISH];
    }
    for (i = 0; i < 6; i++) {
        scanf("%d", &score[i][MATH]);
        math_sum += score[i][MATH];
    }

    printf("%d %.1f\n", english_sum, english_sum / 6.0);
    printf("%d %.1f\n", math_sum, math_sum / 6.0);
    for (i = 0; i < 6; i++) {
        int sum = score[i][ENGLISH] + score[i][MATH];
        printf("%d %.1f\n", sum, sum / 2.0);
    }

    return 0;
}
