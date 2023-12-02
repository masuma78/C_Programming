/*Write a program in C to show the sum of rows.*/

#include<stdio.h>
int main(){

    int A[3][3];
    int i,j,sum=0;
    printf("Enter the elements of the matrix : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum=sum+A[i][j];
        }
        printf("The sum of rows %d : %d\n",i+1, sum);
        sum=0;
    }


    return 0;
}