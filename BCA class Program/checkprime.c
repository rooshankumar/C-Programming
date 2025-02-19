#include<stdio.h>

int main() {
    int num, isPrime = 1; // Assume the number is prime initially

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 2; i < num; i++) {
        if(num % i == 0) {
            isPrime = 0; 
            break; 
        }
    }

    if(isPrime) {
        printf("It is a prime number.\n");
    } else {
        printf("It is not a prime number.\n");
    }

    return 0;
}
