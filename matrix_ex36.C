#include <stdio.h>

int main(){ // Level03 | EX:36
    printf("---Row-Based Key Encryption---\n");
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
    int key[n];
    printf("Please enter the encryption keys:\n");
    for (int i = 0; i < n; i++) {
        printf("key %d:", i);
        scanf("%d", &key[i]);
    }
    printf("The encryption process is in progress.........\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] += key[i];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("The Encryption process was successful!\n");
    printf("--------------------------------------------------------------\n");
    printf("If you want to decrypt, please enter the encryption keys:\n");
    for (int i = 0; i < n; i++) {
        int lock;
      /*I used a single variable for the validation because I could have used another array, but I didn't want to use more memory for the validation process.*/
        printf("key %d:", i);
        scanf("%d", &lock);
        if (key[i] != lock) {
            printf("The process has been paused to protect the program.\n");
            return 0;
        }
    }
    printf("Verification successful!\n");
    printf("Decryption process in progress....................\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] -= key[i];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("The decryption process was successful.\n");
    return 0;
}
