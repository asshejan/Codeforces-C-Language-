#include <stdio.h>

int main()
{
    int n, i, j;
    
    scanf("%d", &n);

    int matrix[n][n];

    

    // Taking input of matrix elements
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Checking if the matrix is a unit matrix or not
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j && matrix[i][j] != 1) {
                printf("NO\n");
                return 0;
            } else if (i != j && matrix[i][j] != 0) {
                printf("NO\n");
                return 0;
            }
        }
    }

    printf("YES\n");

    return 0;
}
