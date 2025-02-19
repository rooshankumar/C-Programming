#include <stdio.h>

int main() {
    int choice, num, i;
    unsigned long int fact;
    char ch;

    do {
        printf(" 1. Factorial :\n");
        printf(" 2. Prime :\n");
        printf(" 3. Even/odd :\n");
        printf(" 4. Exit :\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter number: ");
                scanf("%d", &num);
                fact = 1;
                for (i = 2; i <= num; i++) {
                    fact = fact* i;
                }
                printf("\n factorial = %lu", fact);
                break;

            case 2:
                printf("Enter number: ");
                scanf("%d", &num);
              
                    for(i=1;i<num;i++){
                    
                        if(num%i==0) {
                     
                    printf("\n %d is not prime",num);
                    break;
        }
    }
                     if(i==num){
                        printf("\n %d is prime",num);
                     }
                     break;
            case 3:
                printf("Enter number: ");
                scanf("%d", &num);
                if (num % 2 == 0) {
                    printf("\n %d is even", num);
                } else {
                    printf("\n %d is odd", num);
                }
                break;

            case 4:
                printf("\n bye bye ");
                break;

            default : printf("Invalid User Choice");
        }

        printf("\nDo you want to run more : ");
        scanf(" %c", &ch); 
    } 
    while (ch == 'Y' || ch == 'y');

    return 0;
}
