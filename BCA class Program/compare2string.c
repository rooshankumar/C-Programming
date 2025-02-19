// compare 2 strings
#include <stdio.h>

int compareStrings( char *str1,  char *str2) {
    while (*str1 && *str2 && *str1 == *str2) {
        str1++;
        str2++;
    }
    // return (*str1 - *str2);
}
int main() {
    char string1[100], string2[100];
    printf("Enter the first string: ");
    scanf("%s", string1);

    printf("Enter the second string: ");
    scanf("%s", string2);

    int result = compareStrings(string1, string2);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
