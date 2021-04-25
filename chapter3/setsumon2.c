#include <stdio.h>

int main(void) {
    double a;
    scanf("%lf", &a);

    if (a >= 0) {
        printf("%f\n", a);
    } else {
        printf("%f\n" , -a);
    }

    return 0;
}

