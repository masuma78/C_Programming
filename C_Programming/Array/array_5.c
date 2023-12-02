/*Write a program in C to show sum of all elements*/
#include<stdio.h>
int main(){
    int A[3][3];
    int i,j,sum=0;

    printf("Enter the elements of matrix A is : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&A[i][j]);
        }
    }

        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                sum += A[i][j];
            }
        }
    printf("Sum of all elements of matrix A is : %d",sum);
        
   return 0;
    
}