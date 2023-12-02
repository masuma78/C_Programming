/*Write a program in C to show the sum of the left or minor or opposite diagonal*/
#include<stdio.h>
int main(){
    int A[3][3];
    int i, j, sum = 0;

    printf("Enter elements of matrix A is : \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i + j == 2){
                sum += A[i][j];
            }
        }
    }
        printf("Sum of diagonal elements of matrix A is : %d\n", sum);


    return 0;
}
