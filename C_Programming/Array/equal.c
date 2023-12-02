#include<stdio.h>
int main(){
    int A[3][3];
    int B[3][3];
    int i,j;
    int isEqual;

    printf("Enter the elements of 'A' matrix is : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&A[i][j]);
        }
    }

    printf("Enter the elements of 'B' matrix is : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&B[i][j]);
        }
    }
   isEqual = 1;
   for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        if(A[i][j] != B[i][j]){
            isEqual = 0;
            break;
        }
    }
   }

   if(isEqual == 1){
       printf("Matrix A is equal to Matrix B.\n");
   }
   else{
       printf("Matrix A is not equal to Matrix B.\n");
   }

    return 0;

}
