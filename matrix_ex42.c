#include <stdio.h>

int main(){ // Level03 | EX:42
    printf("------Matrix Mode / Most Frequent Element------\n");
    int n, m;
    printf("Enter the line of the matrice(A):");
    scanf("%d", &n);
    printf("Enter the colomn of the matrice(A):");
    scanf("%d", &m);
    if (n < 0 || m < 0) {
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
    int start_y;
    int max_repeat = 0;
    int number_repeat;
    int number = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            number_repeat = 0;
            for (int x = i; x < n; x++) {
                start_y = (x == i) ? (j + 1) : 0;
                for (int y = start_y; y < m; y++) {
                    if (a[i][j] == a[x][y]) {
                        number_repeat++;
                    }
                }
            }
            if (number_repeat > max_repeat) {
                max_repeat = number_repeat;
                number = a[i][j];
            }
        }
    }
    if (max_repeat == 0) {
        printf("There'r no number repeated\n");
    } else {
        printf("the most number repeats is %d \n", number);
        printf("and repeated %d times\n", max_repeat);
    }
    return 0;
}
