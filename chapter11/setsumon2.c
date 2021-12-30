#include <stdio.h>

int main(void) {
    int i;
    char a[][5] = { "LISP", "C", "Ada" };
    char *p[] = { "PAUL", "X", "MAC" };

    int a_num = sizeof(a) / sizeof(a[0]);
    int p_num = sizeof(p) / sizeof(p[0]);

    for (i = 0; i < a_num; i++) {
        printf("a[%d] = %s\n", i, a[i]);
    }

    for (i = 0; i < p_num; i++) {
        printf("p[%d] = %s\n", i, p[i]);
    }

    return 0;
}

