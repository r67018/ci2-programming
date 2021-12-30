#include <stdio.h>
#include <ctype.h>

#define LEN 256

void str_toupper(char *s) {
    while (*s) {
        *s = toupper(*s);
        ++s;
    }
}

void str_tolower(char *s) {
    while (*s) {
        *s = tolower(*s);
        ++s;
    }
}

int main(void) {
    char str[LEN];

    scanf("%s", str);

    str_toupper(str);
    printf("大文字：%s\n", str);

    str_tolower(str);
    printf("小文字：%s\n", str);

    return 0;
}

