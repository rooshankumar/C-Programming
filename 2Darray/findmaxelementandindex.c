#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);

    int matrix[n][m];

    // Input for the matrix
    printf("Enter elements for the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Initialize variables for maximum and minimum values and their indices
    int maxElement = matrix[0][0];
    int minElement = matrix[0][0];
    int maxRowIndex = 0, maxColIndex = 0;
    int minRowIndex = 0, minColIndex = 0;

    // Find maximum and minimum elements and their indices
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
                maxRowIndex = i;
                maxColIndex = j;
            }
            if(matrix[i][j] < minElement) {
                minElement = matrix[i][j];
                minRowIndex = i;
                minColIndex = j;
            }
        }
    }

    // Output the results
    printf("Maximum Element: %d\n", maxElement);
    printf("Maximum Element Index: [%d][%d]\n", maxRowIndex, maxColIndex);
    printf("Minimum Element: %d\n", minElement);
    printf("Minimum Element Index: [%d][%d]\n", minRowIndex, minColIndex);

    return 0;
}
