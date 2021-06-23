#include <stdio.h>

#define NUMBER 80

int main(void) {
    int i, j;
    int num;
    int max_bunpu = 0;
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

    for (i = 0; i <= 10; i++) {
        if (bunpu[i] > max_bunpu) {
            max_bunpu = bunpu[i];
        }
    }

    puts("\n---分布グラフ---");

    for (i = max_bunpu; i >= 1; i--) {
        for (j = 0; j <= 10; j++) {
            if (bunpu[j] >= i) {
                printf(" * ");
            } else {
                printf("   ");
            }
        }
        putchar('\n');
    }

    puts("-----------------------------------");
    for (i = 0; i <= 10; i++) {
        printf(" %d", i * 10);
    }
    putchar('\n');

    return 0;
}
