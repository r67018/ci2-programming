#include <stdio.h>

#define N 256

void put_stringn(const char s[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%s",s);
    }
    printf("\n");
}

int main(void) {
    char s[N];
    int n;

    scanf("%s%d", s, &n);

    put_stringn(s, n);

    return 0;
}

