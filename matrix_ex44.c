#include <stdio.h>


int main(){ // Level04 | EX:44
    printf("------The Radar Intrusion Simulator-----\n");
    int n, m;
    printf("Enter the line of the matrice(A):");
    scanf("%d", &n);
    printf("Enter the colomn of the matrice(A):");
    scanf("%d", &m);
    if (n <= 0 || m <= 0) {
        printf("You can't beat my program, hahahaha.\n");
        return 0;
    }
    if (n != m) {
        printf("This matrix should be square, n = m\n");
        return 0;
    }
    if (n % 2 == 0) {
        printf("you should intput odd number\n");
        return 0;
    }
    __int64_t a[n][m];
    printf("Fill in matrix (A):\n");
    printf("Enter just two tipe numbers only 0 & 9\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("line%d | colomn%d:", i, j);
            scanf("%ld", &a[i][j]);
            if (a[i][j] != 0 && a[i][j] != 9) {
                printf("Oops, This program only accept 0 & 9\n");
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
    int radar_i = n / 2;
    int radar_j = m / 2;
    int target_i = 0;
    int target_j = 0;
    printf("Tracking is in progress.....\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 9) {
                printf("Found attacker in line %d and colomn %d\n", i, j);
                target_i = i;
                target_j = j;
            }
        }
    }
    int diff_i = radar_i - target_i;
    int diff_j = radar_j - target_j;
    if (diff_i > 0 && diff_j > 0) {
        printf("The attacker in North-West\n");
    } else if (diff_i > 0 && diff_j < 0) {
        printf("The attacker in North-East\n");
    } else if (diff_i < 0 && diff_j > 0) {
        printf("The attacker in South-West\n");
    } else if (diff_i < 0 && diff_j < 0) {
        printf("The attacker in South-East\n");
    } else if (diff_i > 0 && diff_j == 0) {
        printf("The attacker in North\n");
    } else if (diff_i < 0 && diff_j == 0) {
        printf("The attacker in South\n");
    } else if (diff_i == 0 && diff_j > 0) {
        printf("The attacker in West\n");
    } else if (diff_i == 0 && diff_j < 0) {
        printf("The attacker in East\n");
    } else if (diff_i == 0 && diff_j == 0) {
        printf("The attacker is in the heart of the area, and we are cooked \n");
    }
    return 0;
}
