#include <stdio.h>

int is_palindrome(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        if (arr[start] != arr[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Palindrome
}

int main() {
    int input_array[] = {1, 2, 3, 2, 1};
    int size = sizeof(input_array) / sizeof(input_array[0]);
    
    if (is_palindrome(input_array, size)) {
        printf("The given array is a palindrome.\n");
    } else {
        printf("The given array is not a palindrome.\n");
    }
    return 0;
}
