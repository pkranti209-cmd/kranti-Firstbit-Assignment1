//Write a program to check whether a given character is uppercase or lowercase.
#include <stdio.h>

void main()
 {
    char ch = 'A';   // given character

    if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase letter\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase letter\n");
    else
        printf("Not an alphabet\n");

    
}