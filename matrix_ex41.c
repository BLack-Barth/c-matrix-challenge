#include <stdio.h>


int main(){ // Level03 | EX:41

    printf("------Matrix XOR Pair Search------\n");
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
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("line%d | colomn%d:", i, j);
            scanf("%ld", &a[i][j]);
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
    int target;
    printf("Enter The Encryption Key:");
    scanf("%d", &target);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] ^= target;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%ld", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    int flage = 0;
    int start_y;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int x = i; x < n; x++) {
                start_y = (x == i) ? (j + 1) : 0;
                for (int y = start_y; y < m; y++) {
                    if ((a[i][j] ^ a[x][y]) == target) {
                        printf("The numbers %ld & %ld thier XOR equal target %d\n", a[i][j], a[x][y], target);
                        flage++;
                    }
                }
            }
        }
    }
    if (flage == 0) {
        printf("There are'nt processes that confirmed to us that the key is %d\n", target);
    } else {
        printf("There are'nt %d processes that confirmed to us that the key is %d\n", flage, target);
    }
    return 0;
}
