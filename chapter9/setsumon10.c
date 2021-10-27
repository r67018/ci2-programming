#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 256

void del_digit(char s[]) {
    int i = 0, tail = 0;
    while (s[i]) {
        if (!isdigit(s[i])) {
            s[tail] = s[i];
            tail++;
        }
        i++;
    }
    s[tail] = '\0';
}

int main(void) {
    char s[N];
    scanf("%s", s);

    del_digit(s);
    printf("%s\n", s);
}

