#include <stdio.h>

#define NUMBER 80

int main(void) {
    int i, j;
    int num;
    int tensu[NUMBER];
    int bunpu[11] = {0};

    do {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("\a1~%dで入力してください：", NUMBER);
    } while (num < 1 || num > NUMBER);

    for (i = 0; i < num; i++) {
        do {
            scanf("%d", &tensu[i]);
            if (tensu[i] < 0 || tensu[i] > 100) {
                printf("\a0~100で入力してください：");
            }
        } while (tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }

    puts("\n---分布グラフ---");

    for (i = 0; i <= 9; i++) {
        printf("%3d ～%3d：", i * 10, i * 10 + 9);
        for (j = 0; j < bunpu[i]; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    printf("      100：");
    for (j = 0; j < bunpu[10]; j++) {
        putchar('*');
    }
    putchar('\n');

    return 0;
}
