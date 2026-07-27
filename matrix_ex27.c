#include <stdio.h>


int main(){ // Level02 | EX:27
    printf("---2x2 Matrix Determinant---\n");
    int a[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("line%d | colomn%d:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The Matrice(A):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    int determinant = 0;
    determinant = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
    printf("Determinant(A) = %d\n", determinant);
    return 0;
}
