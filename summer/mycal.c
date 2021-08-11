#include <stdio.h>
#include <stdbool.h>


int zeller(const int year, const int month, const int day);
int getDays(const int year, const int month);
void printCalendar(const int year, const int month, const int first_day, const int days);


int main() {
    int year, month;
    printf("year : ");
    scanf("%d", &year);
    printf("month : ");
    scanf("%d", &month);

    if (month < 1 || 12 < month) {
        return 1;
    }

    const int days = getDays(year, month);
    const int first_day = zeller(year, month, 1);
    printCalendar(year, month, first_day, days);

    return 0;
}


int zeller(const int year, const int month, const int day) {
    int y = year;
    int m = month;
    int d = day;
    if (m <= 2) {
        y--;
        m += 12;
    }
    int C, Y, gamma, h;
    C = y / 100;
    Y = y % 100;
    gamma = 5 * C + C / 4;
    h = (d + (26 * (m + 1)) / 10 + Y + Y / 4 + gamma + 6) % 7; // 日曜日が0になるように調整
    return h;
}

int getDays(const int year, const int month) {
    switch (month) {
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
                bool is_leap = false;
                if (year % 4 == 0) {
                    is_leap = true;
                    if (year % 100 == 0 && year % 400 == 0) {
                        is_leap = false;
                    }
                }
                if (is_leap) {
                    return 29;
                } else {
                    return 28;
                }
            }
    }
}

void printCalendar(const int year, const int month, const int first_day, const int days) {
    static const char *month_of_year[] = {
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

    printf("\n%s %d\n", month_of_year[month-1], year);
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
