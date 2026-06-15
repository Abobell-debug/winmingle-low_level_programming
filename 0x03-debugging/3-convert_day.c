#include "main.h"

int convert_day(int month, int day)
{
    /* Array containing days in each month for common years */
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;
    int total_days = 0;

    for (i = 1; i < month; i++){
        total_days += days_in_month[i];
        printf("Checking month %d... total days so far is %d\n", i, total_days);
    }
    return (total_days + day);
}
