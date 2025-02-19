#include <stdio.h>

int reverseNumber(int num) {
    int reversedNumber = 0;
    while(num != 0) {
        int digit = num % 10;
        reversedNumber = reversedNumber * 10 + digit;
        num /= 10;
    }
    return reversedNumber;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reversed Number: %d", reverseNumber(num));
    return 0;
}
