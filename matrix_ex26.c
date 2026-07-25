#include <stdio.h>


int main(){ // Level02 | EX:26

    printf("---Sum of Secondary Diagonal---\n");
    int n, m;
    printf("Enter the line of the matrice(A):");
    scanf("%d", &n);
    printf("Enter the colomn of the matrice(A):");
    scanf("%d", &m);
    if (n < 0 || m < 0) {
        printf("You can't beat my program, hahahaha.\n");
        return 0;
    }
    if (n != m) {
        printf("lines should be equal colomns\n");
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
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
        sum += a[i][n - 1 - i];
    }
    printf("Sum = %d\n", sum);
    return 0;
}
