#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter number of integers you want :");
    scanf("%d",&n);
    // int arr[n]; // n*4
    // for( int i=0; i<n; i++){
    //     scanf("%d",&arr[i]);
    // }
    //  for( int i=0; i<n; i++){
    //     printf("\nResult :%d",arr[i]);
    // }

    int* ptr = (int*) malloc(n*sizeof(int));
    int* p = ptr;
    for( int i=1; i<=n; i++){
        scanf("%d",&(*ptr));
        ptr++;
    }
    for( int i=1; i<=n; i++){
        printf("\nResult : %d\n",(*p));
        p++;
    }

    return 0;
}