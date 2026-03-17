//7. Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
//respectively.
#include<stdio.h>


void main()
{
    float basic = 4000, total;

    if (basic <= 5000)
        total = basic + basic*0.10 + basic*0.20 + basic*0.25;
    else
        total = basic + basic*0.15 + basic*0.25 + basic*0.30;

    printf("Total Salary = %.2f", total);
}