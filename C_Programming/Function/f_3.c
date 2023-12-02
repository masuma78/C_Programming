/*Write a C program using a function to add 5 numbers.*/

#include<stdio.h>

int add(int a, int b, int c, int d, int e);
int main(){
    int a,b,c,d,e;
    printf("Enter the value of a,b,c,d,e: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    int sum = add(a,b,c,d,e);
    printf("Sum is: %d",sum);
    return 0;

}

int add(int a, int b, int c, int d, int e){
    int sum;
    sum = a + b + c + d + e;
    return sum;
}