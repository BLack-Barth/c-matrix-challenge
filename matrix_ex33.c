#include <stdio.h>


int main(){ // Level03 | EX:33
    printf("---Matrix line up Shift---\n");
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
    int temp = 0;
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n - 1; i++) {
            temp = a[i][j];
            a[i][j] = a[i + 1][j];
            a[i + 1][j] = temp;
        }
    }
    printf("Array encryption by line shift...........\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("Encrypted seccefuly!!\n");

    return 0;
}
