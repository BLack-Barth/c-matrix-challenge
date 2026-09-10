#include <stdio.h>


int main(){ // Level02 | EX:23
    printf("---Sparse Matrix Check----\n");
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
    printf("The Matrice:\n");
    int zero = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", a[i][j]);
            printf("\t");
            if (a[i][j] == 0) {
                zero++;
            }
        }
        printf("\n");
    }
    int space = n * m;
    if (zero >= space / 2) {
        printf("The matrix is a Sparse Matrix.\n");
    } else {
        printf("The matrix is NOT a Sparse Matrix.\n");
    }
    return 0;
}
