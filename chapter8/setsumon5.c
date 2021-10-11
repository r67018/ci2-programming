#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum COLOR {
    red,
    green,
    blue
};

void setColor(enum COLOR color) {
    switch(color) {
        case red:
            printf("\e[31m");
            break;
        case green:
            printf("\e[32m");
            break;
        case blue:
            printf("\e[34m");
            break;
    }
}

void resetColor(void) {
    printf("\e[39m");
}

int main(void) {
    srand((unsigned)time(NULL));

    enum COLOR color = rand() % 3;

    puts("この色は何色でしょう");
    setColor(color);
    puts("color");
    resetColor();

    printf("%d: 赤\n", red);
    printf("%d: 緑\n", green);
    printf("%d: 青\n", blue);

    enum COLOR res;
    printf("\n-> ");
    scanf("%u", &res);

    if (res == color) {
        puts("正解!!");
    } else {
        puts("不正解...");
    }

    return 0;
}

