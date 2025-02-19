#include <stdio.h>

int findMissingElement(int arr[], int size, int lower, int upper) {
    int expectedSum = (upper - lower + 1) * (lower + upper) / 2;
    int actualSum = 0;
    
    // Calculate actual sum of elements in the array
    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }

    // Find and return the missing element
    return expectedSum - actualSum;
}

int main() {
    int arr[] = {1, 3, 4, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int lower = 1;
    int upper = 8;
    
    int missingElement = findMissingElement(arr, size, lower, upper);
    printf("The missing element is: %d\n", missingElement);
    
    return 0;
}
