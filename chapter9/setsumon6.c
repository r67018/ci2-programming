#include <stdio.h>

#define N 256

int str_chnum(const char s[], int c) {
    int i = 0, count = 0;
    while (s[i]) {
        if (s[i] == c) {
            count++;
        }
        i++;
    }
    return count;
}

int main(void) {
    char s[N];
    int c;

    scanf("%s", s);
    getchar();
    c = getchar();

    printf("%d\n", str_chnum(s, c));

    return 0;
}

