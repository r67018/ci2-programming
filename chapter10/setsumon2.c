#include <stdio.h>

int  get_days_count(int, int);
void decrement_date(int *, int *, int *);
void increment_date(int *, int *, int *);

int main(void) {
    int y, m, d;
    scanf("%d%d%d", &d, &m, &y);

    decrement_date(&y, &m, &d);
    printf("%02d/%02d/%04d\n", d, m, y);

    // revert date back
    increment_date(&y, &m, &d);

    increment_date(&y, &m, &d);
    printf("%02d/%02d/%04d\n", d, m, y);

    return 0;
}

int get_days_count(int y, int m) {
    switch (m) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;

        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
    }

    // February
    if (y % 400 == 0) {
        return 29;
    } else if ((y % 100 != 0) && (y % 4 == 0)) {
        return 29;
    }
    return 28;
}

void decrement_date(int *y, int *m, int *d) {
    (*d)--;
    if (*d < 1) {
        (*m)--;
        if (*m < 1) {
            (*y)--;
            *m = 12;
        }
        *d = get_days_count(*y, *m);
    }
}

void increment_date(int *y, int *m, int *d) {
    int days_count = get_days_count(*y, *m);
    (*d)++;
    if (*d > days_count) {
        (*m)++;
        *d = 1;
        if (*m > 12) {
            (*y)++;
            *m = 1;
        }
    }
}

