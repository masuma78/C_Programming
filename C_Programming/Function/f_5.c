/*Write a program using a function to calculate the average of five numbers*/
// user input base
/*
#include<stdio.h>
#define MAX_SIZE 5

double avg(int arr[],int n);

int main(){
    int arr[MAX_SIZE];
    int i, n;
    double average;

    //  Input size of the array 
    printf("Enter size of the array: ");
    scanf("%d", &n);

    // Input elements in array 
    printf("Enter %d elements in the array: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // function call
    average = avg(arr, n);
    printf("Average of the number is: %.2lf", average);

    return 0;
}

double avg(int arr[],int n){
    int i, sum;
    double avg;

    sum = 0;
    for(i=0; i<n; i++)
    {
        sum += arr[i];
    }
    avg = sum/n;
    return avg;
} */

#include<stdio.h>

int avg(int a, int b, int c, int d, int e);
int main(){

int a, b, c, d, e;
double average;
printf("Enter 5 numbers: ");
scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
average = avg(a, b, c, d, e);

printf("Average of the numbers is: %.2lf", average);
return 0;

}


int avg(int a, int b, int c, int d, int e){
   int sum;
   double avg;

   sum = a + b + c + d + e;
   avg = sum/5;
   return avg;
}
