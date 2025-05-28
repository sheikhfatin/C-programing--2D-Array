#include <stdio.h>

int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    int matrix[n][n];
    int value = 1;
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;

    while (value <= n * n) {
        // Left to Right
        for (int j = left; j <= right; j++) {
            matrix[top][j] = value++;
        }
        top++;

        // Top to Bottom
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = value++;
        }
        right--;

        // Right to Left
        for (int j = right; j >= left; j--) {
            matrix[bottom][j] = value++;
        }
        bottom--;

        // Bottom to Top
        for (int i = bottom; i >= top; i--) {
            matrix[i][left] = value++;
        }
        left++;
    }

    // Print the resulting matrix
    printf("Spiral Matrix %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}