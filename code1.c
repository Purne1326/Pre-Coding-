#include <stdio.h>
void printMatrix(int m, int n, int mat[m][n]) {
    printf("Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }
}
void spiralPrint(int m, int n, int mat[m][n]) {
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;
    printf("Output: ");
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++)
            printf("%d, ", mat[top][i]);
        top++;
        for (int i = top; i <= bottom; i++)
            printf("%d, ", mat[i][right]);
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                printf("%d, ", mat[bottom][i]);
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                printf("%d, ", mat[i][left]);
            left++;
        }
    }
    printf("\b\b \n");
}
int main() {
    int mat[4][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14, 15, 16}
    };
    printMatrix(4, 4, mat);
    spiralPrint(4, 4, mat);
    return 0;
}