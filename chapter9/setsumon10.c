#include <stdio.h>
#include <string.h>

#define N 256

void del_digit(char s[]) {
    int i = 0, tail = 0;
    while (s[i]) {
        if (s[i] < '0' || '9' < s[i]) {
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

