#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
    int total_days = 0, remaining_days = 0;
    int days_in_months[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        if (month > 2)
            total_days++;
        total_days += day + days_in_months[month - 1] + 1;
        remaining_days = 366 - total_days;
        printf("Day of the year: %d\n", total_days);
        printf("Remaining days: %d\n", remaining_days);
    }
    else
    {
        total_days += day + days_in_months[month - 1];
        remaining_days = 365 - total_days;
        printf("Day of the year: %d\n", total_days);
        printf("Remaining days: %d\n", remaining_days);
    }
}

