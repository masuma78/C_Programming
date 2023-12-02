/*Write a program using a function to add numbers according to users' wants*/

#include <stdio.h>
#define MAX_SIZE 100
// function declraration
int sum(int arr[], int n);

int main()
{
    int arr[MAX_SIZE];
    int i, n, add;

    /* Input size of the array */
    printf("Enter size of the array: ");
    scanf("%d", &n);

    /* Input elements in array */
    printf("Enter %d elements in the array: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // function call
    add = sum(arr, n);

    printf("Sum of all elements of array = %d", add);

    return 0;
}
// function defination
int sum(int arr[], int n){
    int i, sum=0;
    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
