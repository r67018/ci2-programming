#include <stdio.h>

int main(void) {
    char str[] = "ABC\0DEF";
    printf("文字列strは\"%s\"です。\n", str);
    puts("ナル文字まで文字列として読み込むので、ナル文字の後のDEFは表示されない。");

    return 0;
}

