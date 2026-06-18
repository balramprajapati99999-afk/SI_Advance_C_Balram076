#include <stdio.h>

int main()
{
    int a[10][10];
    int m, n;
    int i, j;

    printf("Enter number of rows and columns: ");
    if (scanf("%d %d", &m, &n) != 2) {
        printf("Invalid input\n");
        return 1;
    }

    if (m <= 0 || n <= 0 || m > 10 || n > 10) {
        printf("Matrix size must be between 1 and 10 for both dimensions\n");
        return 1;
    }

    printf("Enter matrix elements:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Exterior boundary elements clockwise from top-left:\n");

    // Top row
    for (j = 0; j < n; j++) {
        printf("%d ", a[0][j]);
    }

    // Right column (excluding top element)
    for (i = 1; i < m; i++) {
        printf("%d ", a[i][n - 1]);
    }

    // Bottom row (excluding rightmost element)
    if (m > 1) {
        for (j = n - 2; j >= 0; j--) {
            printf("%d ", a[m - 1][j]);
        }
    }

    // Left column (excluding bottom and top elements)
    if (n > 1) {
        for (i = m - 2; i > 0; i--) {
            printf("%d ", a[i][0]);
        }
    }

    printf("\n");
    return 0;
}
