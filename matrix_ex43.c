#include <stdio.h>


int main(){ // Level03 | EX:43
    printf("------The Zero Sub-Matrix Counter------\n");
    int n, m;
    printf("Enter the line of the matrice(A):");
    scanf("%d", &n);
    printf("Enter the colomn of the matrice(A):");
    scanf("%d", &m);
    if (n <= 0 || m <= 0) {
        printf("You can't beat my program, hahahaha.\n");
        return 0;
    }
    __int64_t a[n][m];
    printf("Fill in matrix (A):\n");
    printf("Enter just two tipe numbers only 0 & 1\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("line%d | colomn%d:", i, j);
            scanf("%ld", &a[i][j]);
            if (a[i][j] != 0 && a[i][j] != 1) {
                printf("Oops, This program only accept 0 & 1\n");
                return 0;
            }
        }
    }
    printf("The Matrice(A):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%ld", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    int flag = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m - 1; j++) {
            if (a[i][j] + a[i][j + 1] == 0 && a[i + 1][j] + a[i + 1][j + 1] == 0) {
                flag++;
            }
        }
    }
    if (flag == 0) {
        printf("there are no zero matrix\n");
    } else {
        printf("there is %d zero matrix 2*2\n", flag);
    }
    return 0;
}
