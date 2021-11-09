#include <stdio.h>

void ary_set(int v[], int n, int val) {
    int i;

    for (i = 0; i < n; i++) {
        v[i] = val;
    }
}

int main(void) {
    int i;
    int a[] = { 1, 2, 3, 4, 5 };

    ary_set(&a[2], 2, 99);

    for (i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    printf("aというのは配列の最初の要素のアドレスを指す。そのため、ary_set(a, 5, 99)とすると0~4の要素が99になる。\nary_set(&a[2], 2, 99)とすると2番目の要素のアドレスから、2つの要素が99になるため2, 3番目だけ99になる。");

    return 0;
}

