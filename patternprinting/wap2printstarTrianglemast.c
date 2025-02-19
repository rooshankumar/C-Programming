#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    int nst = n;
    int nsp = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= nsp; j++) { // spaces
            printf(" ");
        }

        for (int k = 1; k <= nst; k++) { // stars
            printf("*");
        }

        nsp++; // Increase the number of spaces
        nst--; // Decrease the number of stars

        printf("\n");
    }

    return 0;
}
