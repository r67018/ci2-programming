#include <stdio.h>

#define N 256

int str_char(const char s[], int c) {
    int i = 0;
    while (s[i]) {
        if (s[i] == c) {
            return i;
        }
        i++;
    }
    return -1;
}

int main(void) {
    char s[N];
    int c;

    scanf("%s", s);
    getchar();
    c = getchar();

    printf("%d\n", str_char(s, c));

    return 0;
}

