#include <stdio.h>

#define max(x, y) (((x)>(y)) ? (x) : (y))

int main(void) {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    int max1 = max(max(a, b), max(c, d));
    int max2 = max(max(max(a, b), c), d);

    printf("上の式はまずaとb、cとdのうちそれぞれ大きい方(%d, %d)が選ばれ、最終的にその選ばれた2つのうち大きい方に展開され、%dになる\n", max(a, b), max(c, d), max1);
    printf("下の式は1つ目のmaxでaとbの大きい方(%d)が選ばれ、2つ目で1つ目で選ばれたものとcの大きい方(%d)が選ばれ、3つ目で2つ目で選ばれたものとdの大きい方が選ばれて%dになる\n", max(a, b), max(max(a, b), c), max2);

    return 0;
}

