#include <stdio.h>

int main() {
    int arr[10], i, n, elem;

    printf("Enter the size of Array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &elem);

    int found = 0; 

    for (i = 0; i < n; i++) {
        if (arr[i] == elem) {
            found = 1;
            break; 
        }
    }

    if (found) {
        printf("Element Found\n");
    } else {
        printf("Element not Found\n");
    }

    return 0;
}
