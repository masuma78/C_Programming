// ID- 1282,1250

#include <stdio.h>

int main() {
    int A[3][3] = {{1, 3, 5}, {-4, 8, 2}, {7, 2, -1}};
    int B[3][3] = {{4, 3, 3}, {-4, -8, 2}, {7, 1, -1}};
    int result[3][3];

    printf("Orginal A matrix:\n");
        for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("After Transpose matrix A :\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("after adding B matrix with Transposed A:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = A[j][i] + B[i][j];
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}