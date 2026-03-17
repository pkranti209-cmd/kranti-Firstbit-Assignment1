//3. Write a program to check whether a given year is a leap year.
#include<stdio.h>



void main()
{
    int year = 2024;

    if (year % 400 == 0)
        printf("%d year is leap\n", year);

    else if (year % 100 == 0)
        printf("%d year is not leap\n", year);

    else if (year % 4 == 0)
        printf("%d year is leap\n", year);

    else
        printf("%d year is not leap\n", year);
}