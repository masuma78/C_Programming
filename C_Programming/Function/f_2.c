/*Write a program in C to find the square of any number using the function.*/

#include<stdio.h>

int square(int n);

int main(){
 int n;
 printf("Enter a number: ");
 scanf("%d",&n);

 n = square(n);
 printf("Square of number is : %d",n);

 return 0;

}

int square(int n){
    return n*n;
}