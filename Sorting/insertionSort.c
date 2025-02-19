#include<stdio.h>

int main() {
    int arr[5] = {3,13,54,66,0};
    int n = 5;
    printf("The unsorted Array is:\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Insertion Sort Algorithm
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    printf("\n\nThe sorted Array using Insertion Sort is:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
