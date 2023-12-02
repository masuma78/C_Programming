/*Write a program in C to show the sum of the right diagonal, transpose*/
#include<stdio.h>
int main(){
    int A[3][3], B[3][3];
    int i, j, sum = 0;

    printf("Enter elements of matrix A is : \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i == j){
                sum += A[i][j];
            }
        }
    }
        printf("Sum of diagonal elements of matrix A is : %d\n", sum);
        printf("-------------------------------------------------------\n");

        // Find the transpose of matrix
        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                B[i][j] = A[j][i];
            }
        }
// print the orginal matrix of A
    printf("The original matrix A is : \n");
    printf("\n-------------------------------------------------------\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

// print the transpose matrix
printf("The transpose matrix of A :  \n");
printf("-------------------------------------------------------\n");
for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
        printf("%d\t", B[i][j]);
    }
    printf("\n");
}
    



    return 0;
}
