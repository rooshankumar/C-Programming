#include <stdio.h>

int decimalToBinary(int n) {
    int binaryNumber = 0;
    int base = 1;
    while (n) {
        int lastDigit = n % 2;
        n = n / 2;
        binaryNumber += lastDigit * base;
        base = base * 10;
    }
    return binaryNumber;
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("Binary number: %d", decimalToBinary(num));
    return 0;
}
