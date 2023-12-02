// Function to print Hello
// #include<stdio.h>
// //function declaration/prototype
// void printHello();
// int main() {
// //function call
// printHello();
// return 

// //function definition

//     printf("Hello!\n");
// };

/* ----- Normal c code ----- 
#include<stdio.h>

int a, cube;
int main() {
    printf("Enter the number : ");
    scanf("%d",&a);
    cube = a * a * a;
    printf("The cube of %d is %d",a,cube);

    return 0;


} */

/**
 * C program to find cube of any number using function
 */
#include <stdio.h>

/* Function declaration */
double cube(double num);

int main()
{
    int num;
    double c;
    
    /* Input number to find cube from user */
    printf("Enter any number: ");
    scanf("%d", &num);
    
    c = cube(num);

    printf("Cube of %d is %.2f", num, c); 
    
    return 0;
}

/**
 * Function to find cube of any number
 */
double cube(double num)
{
    return (num * num * num);
}


