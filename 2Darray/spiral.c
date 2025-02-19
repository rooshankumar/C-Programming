#include<stdio.h>
int main(){
    int m;
    printf("Enter no of rows of  matrix :");
    scanf("%d",&m);
      int n;
    printf("Enter no of columns of  matrix :");
    scanf("%d",&n);
    int a[m][n];
    printf("\n Enter elements of  matrix :");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    // spiral print
    printf("\n");
     int minR = 0;
     int maxR = m-1;
     int minC = 0;
     int maxC = n-1;
     int totalEle = m*n;
     int count = 0;
     while(count < totalEle){
        // print the minimum row
        for( int j=minC; j<=maxC && count<totalEle; j++){
            printf("%d ",a[minR][j]);
            count++;
        }
        minR++;
        // if(count>=totalEle) break;
        // print the maximum column
        for( int i=minR; i<=maxR && count<totalEle; i++){
            printf("%d ",a[i][maxC]);
            count++;
        }
        maxC--;
        //  if(count>=totalEle) break;
        // print the maximum row
        for( int j=maxC; j>=minC && count<totalEle; j--){
            printf("%d ",a[maxR][j]);
            count++;
        }
        maxR--;
        //  if(count>=totalEle) break;
        // print the minimum column
        for( int i=maxR;i>=minR && count<totalEle; i--){
            printf("%d ",a[i][minC]);
            count++;
        }
        minC++;
        //  if(count>=totalEle) break;
     }

   
    return 0;
}