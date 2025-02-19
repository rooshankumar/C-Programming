#include <stdio.h>

void printMultiplication(int num) {
    int i;
    for(i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num*i);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printMultiplication(num);
    return 0;
}
