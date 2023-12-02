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
        sum += A[i][j];
        }
        printf("Sum of elements of Row %d = %d\n", i+1, sum);
    }

  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
        sum += A[j][i];
        }
        printf("Sum of elements of Column %d = %d\n", i+1, sum);
    }

    return 0;
}
