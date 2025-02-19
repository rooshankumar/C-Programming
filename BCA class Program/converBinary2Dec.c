#include <stdio.h>

int binaryToDecimal(int n) {
    int decimalNumber = 0;
    int base = 1;
    while (n) {
        int lastDigit = n % 10;
        n = n / 10;
        decimalNumber += lastDigit * base;
        base = base * 2;
    }
    return decimalNumber;
}

int main() {
    int num;
    printf("Enter a binary number: ");
    scanf("%d", &num);
    printf("Decimal number: %d", binaryToDecimal(num));
    return 0;
}
