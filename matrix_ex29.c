#include <stdio.h>


int main(){ // Level02 | EX:29
    printf("---Invert Matrix Columns / Horizontal Flip---\n");
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
    int temp = 0;
    for (int i = 0; i < n; i++) {
        int k = m - 1;
        for (int j = 0; j * 2 < m; j++) {
            temp = a[i][j];
            a[i][j] = a[i][k];
            a[i][k] = temp;
            k--;
        }
    }
    printf("The Invert Matrice(A):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
