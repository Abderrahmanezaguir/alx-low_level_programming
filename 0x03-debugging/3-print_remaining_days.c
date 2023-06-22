#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days_including_leap_years - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format (1-12)
 * @day: day of month (1-31)
 * @year: year (>= 0)
 * Return: void
 */
void print_remaining_days_including_leap_years(int month, int day, int year)
{
        // Check if the year is a leap year
    if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
    {
        // If it's a leap year and the date is after February 29th, add one day to account for the extra leap day
        if (month > 2 && day >= 60)
        {
            day++;
        }
        // Print the day of the year and the number of remaining days in the year
        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        // If it's not a leap year and the date is February 29th, print an error message
        if (month == 2 && day == 60)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        }
        else
        {
            // Print the day of the year and the number of remaining days in the year
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}
