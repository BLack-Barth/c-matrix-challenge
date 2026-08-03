#include <stdio.h>


int main(){ // Level02 | EX:30 | Final Boss
    printf("---Matrix Multiplication---\n");
    int n, m;
    printf("Enter the line of the matrice(A):");
    scanf("%d", &n);
    printf("Enter the colomn of the matrice(A):");
    scanf("%d", &m);
    if (n < 0 || m < 0) {
        printf("You can't beat my program, hahahaha.\n");
        return 0;
    }
    int p, q;
    printf("Enter the line of the matrix(B):");
    scanf("%d", &p);
    printf("Enter the colomn of the matrix (B):");
    scanf("%d", &q);
    if (p < 0 || q < 0) {
        printf("You can't beat my program, hahahaha.\n");
        return 0;
    }
    if (m != p) {
        printf("the program cannot calculate this opiration! because %d != %d\n", m, p);
        return 0;
    }
    int a[n][m];
    int b[p][q];
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
    printf("Fill in matrix (B):\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("line%d | colomn%d:", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("The Matrice(B):\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d", b[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    int c[n][q];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            c[i][j] = 0;
            for (int k = 0; k < m; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("A * B =\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d", c[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
