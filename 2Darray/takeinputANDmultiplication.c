#include<stdio.h>
int main(){
    // 1st matrix order
    int m;
    printf("Enter no of rows of 1st matrix :");
    scanf("%d",&m);
      int n;
    printf("Enter no of columns of 1st matrix :");
    scanf("%d",&n);
    int arr[m][n];
    // input the 1st matrix
    printf("\n Enter elements of 1st matrix :");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // 2nd matrix order
    int p;
    printf("Enter no of rows of 2nd matrix :");
    scanf("%d",&p);
      int q;
    printf("Enter no of columns of 2nd matrix :");
    scanf("%d",&q);
    int brr[p][q];
    // input the 1st matrix
    printf("\n Enter elements of 2nd matrix :");
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            scanf("%d",&brr[i][j]);
        }
    }
      // check
    if(n!=p){
        printf("The matrix cannot be multiplied");
    }
    else{
        // multiplication
        int res[m][q];
        for( int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                res[i][j] = 0;
                // i row of a , j column of b
                for(int k=0; k<n; k++){
                    res[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }
    // print
      printf("The resultant matric is : \n");
      for( int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                printf("%d ",res[i][j]);
            }
             printf("\n");
      }
        }
    return 0;
}