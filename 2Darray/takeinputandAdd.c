#include<stdio.h>

int main() {
    int n = 0, m = 0;
    printf("Enter n number of rows:");
    scanf("%d", &n);
    printf("Enter m number of columns:");
    scanf("%d", &m);
    
    int arr[n][m], brr[n][m];

    // Input for arr matrix
    printf("Enter elements for matrix arr:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Input for brr matrix
    printf("Enter elements for matrix brr:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &brr[i][j]);
        }
    }

    // Adding matrices and printing the result
    printf("Resultant Matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", arr[i][j] + brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
