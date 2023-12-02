/*Write a program in C to show the simple structure of a function.*/
#include<stdio.h>
// function declaration
int sum (int a, int b); 

int main(){
 int a, b, d,c; 
 printf("Enter two numbers: ");
 scanf("%d %d", &a, &b);
//  function call and store other variable.
 d = sum(a, b);
 printf("Sum : %d", d);
 return 0;
}

// function defination

int sum (int a, int b){

    int c;
    c = a + b;
    return c;
}