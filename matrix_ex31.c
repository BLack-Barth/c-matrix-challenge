#include <stdio.h>


int main(){ // Level03 | EX:31
    printf("---Matrix Encryption - Caesar Cipher Style---\n");
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
    int key;
    printf("Enter the Encryption key:");
    scanf("%d", &key);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] += key;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("ُEncrypted successfuly!\n");
    printf("----------------------------------\n");
    int swich;
    printf("If you want to decrypt, Enter the key:");
    scanf("%d", &swich);
    if (key == swich) {
        printf("The key is correct. Decryption process is underway..........\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                a[i][j] -= key;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                printf("%d", a[i][j]);
                printf("\t");
            }
            printf("\n");
        }
        printf("The data has been decrypted.\n");
    } else {
        printf("The key is not correct.\n");
        printf("The program has been shut down for security reasons!!.\n");
        return 0;
    }
    return 0;
}
