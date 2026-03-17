//Write a program to check given 3 digit number is pallindrome or not
#include<stdio.h>

void main()
{
	int num = 121;   // direct number
    int rev = 0;

    if (num >= 100 && num <= 999)
	 
        rev = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);

        if (num == rev)
            printf("Palindrome number\n");
        else
            printf("Not a palindrome number\n");
    } 
    
    
