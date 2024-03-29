#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


typedef struct {
    int year;
    int month;
} Date;


int calFirstDayOfMonth(const Date* const);
int getDays(const Date* const);
void printCalendar(const Date* const);


int main(void) {
    Date* date = (Date*)malloc(sizeof(Date));
    printf("year : ");
    scanf("%d", &date->year);
    printf("month : ");
    scanf("%d", &date->month);

    if (date->month < 1 || 12 < date->month) {
        return 1;
    }

    printCalendar(date);

    free(date);

    return 0;
}


// ツェラーの公式で朔日の曜日を求める
int calFirstDayOfMonth(const Date* const date) {
    int y = date->year;
    int m = date->month;
    int d = 1;
    if (m <= 2) {
        y--;
        m += 12;
    }

    int h = (y + y/4 - y/100 + y/400 + (13 * m + 8)/5 + d) % 7; // 日曜日が0

    return h;
}


// その月の日数を求める
int getDays(const Date* const date) {
    assert(1 <= date->month && date->month <= 12);
    switch (date->month) {
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

        case 2:
            {
                // 閏年かどうか
                int y = date->year;
                if (y % 400 == 0) {
                    return 29;
                } else if ((y % 100 != 0) && (y % 4 == 0)) {
                    return 29;
                }

                return 28;
            }
    }
}


// カレンダーを表示
void printCalendar(const Date* const date) {
    static const char* month_of_year[] = {
        "January",
        "Februay",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    int i;
    const int days = getDays(date);
    const int first_day = calFirstDayOfMonth(date);

    printf("\n%s %d\n", month_of_year[date->month-1], date->year);
    printf("Su Mo Tu We Th Fr Sa\n");
    for (i = 0; i < first_day; i++) {
        printf("   ");
    }
    for (i = 1; i <= days; i++) {
        printf("%2d ", i);
        if ((i + first_day) % 7 == 0) {
            printf("\n");
        } else if (i == days) {
            printf("\n");
        }
    }
    printf("\n");
}
