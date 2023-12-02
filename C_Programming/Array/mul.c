#include<stdio.h>
int main(){
    int A[3][3];
    int B[3][3];
    int C[3][3];

    int i,j;
    printf("Enter the elements of matrix A : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&A[i][j]);
        }

        }

        printf("Enter the elements of matrix B : \n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                scanf("%d",&B[i][j]);
            }

        }

        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                C[i][j]=A[i][j]*B[i][j];
            }
        }

        printf("The sum of matrix A and B is : \n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("%d\t",C[i][j]);
            }
            printf("\n");
        }

        return 0;
}
