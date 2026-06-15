/**
Name: Abdulahi Abiodun Bello
Program: Winmingle Software Engineering
Description: Fixing print_remaining_days() to handle leap years correctly.
**/

#include <stdio.h>


/** void print_remaining_days(int month, int day, int year)
{
    if (year % 4 == 0 || (year % 100 == 0 && year % 400 == 0))
 
{
        if (month >= 2)  
            day = day + 2;

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 365 - day);
    }
    else
    {
        if (month == 2 && day == 60)
            printf("Invalid date: %02d/%02d/%04d\n", month, day, year); 
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 366 - day);
        }
    }
}
**/
void print_remaining_days(int month, int day, int year)
{
    /* The 400 Rule handles things correctly */
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        /* We only add a day for Feb 29th if we are past February */
        if (month > 2)
            day++;

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day); /* 366 for Leap */
    }
    else
    {
        /* Safety check: Feb 29 doesn't exist on common years */
        if (month == 2 && day == 60)
            printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day); /* 365 for Common */
        }
    }
}

