/*Reverse a string.*/
/*
  C program to find reverse of a string using strrev() function
 */
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    printf("Original string = %s\n", str);

    /* Find the reverse of string */
    strrev(str);

    printf("Reverse string = %s", str);

    return 0;
}