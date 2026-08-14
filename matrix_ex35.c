#include <stdio.h>


int main(){ // Level03 | EX:35
    printf("---Matrix 90 Degree Rotation---\n");
    int n, m;
    printf("Enter the line of the matrice(A):");
    scanf("%d", &n);
    printf("Enter the colomn of the matrice(A):");
    scanf("%d", &m);
    if (n < 0 || m < 0) {
        printf("You can't beat my program, hahahaha.\n");
        return 0;
    }
    int a[n][m];
    printf("Fill in matrix (A):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("line%d | colomn%d:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The Matrice(A):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    int b[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            b[i][j] = a[j][i];
        }
    }
    int temp = 0;
    for (int i = 0; i < m; i++) {
        int l = n - 1;
        for (int j = 0; j * 2 < n; j++) {
            temp = b[i][j];
            b[i][j] = b[i][l];
            b[i][l] = temp;
            l--;
        }
    }
    printf("Matrix flipping in progress..............\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", b[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("Transpose seccefuly!!\n");
    return 0;
}
