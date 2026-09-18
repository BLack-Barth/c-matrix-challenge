#include <stdio.h>


int main(){ // Level03 | EX:40

    printf("------The Matrix Shift-XOR Cipher------\n");
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
    printf("Initial Encryption:\n");
    int temp = 0;
    for (int i = 0; i < n; i++) {
        int l = m - 2;
        for (int j = m - 1; j > 0; j--) {
            temp = a[i][j];
            a[i][j] = a[i][l];
            a[i][l] = temp;
            l--;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%ld", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    int key_base;
    printf("Please enter the encryption key:");
    scanf("%d", &key_base);
    int count_key = key_base;
    printf("The encryption process is in progress.........\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] ^= count_key;
            count_key++;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%ld", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("The Encryption process was successful!\n");
    printf("--------------------------------------------------------------\n");
    printf("If you want to decrypt, please enter the encryption keys:\n");
    int lock;
    printf("key :");
    scanf("%d", &lock);
    if (key_base != lock) {
        printf("The process has been paused to protect the program.\n");
        return 0;
    }
    printf("Verification successful!\n");
    printf("Decryption process in progress....................\n");
    count_key = key_base;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] ^= count_key;
            count_key++;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++) {
            temp = a[i][j];
            a[i][j] = a[i][j + 1];
            a[i][j + 1] = temp;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%ld", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("The decryption process was successful.\n");
    return 0;
}
