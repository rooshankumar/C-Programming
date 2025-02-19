#include<stdio.h>
int maze(int cr, int cc, int er, int ec){
    int rightWays  = 0;
    int downWays = 0;
    if(cr==er && cc==ec) return 1;
    if(cr==er ){  // only rightWays calls
      rightWays += maze( cr, cc+1, er, ec);
    }
    if(cc==ec){   // only downWays calls
       downWays += maze( cr+1, cc, er, ec );
     }
    if(cr<er && cc<ec){
          rightWays += maze( cr, cc+1, er, ec);
          downWays += maze( cr+1, cc, er, ec );
    }
     int totalWays =  rightWays + downWays ;
     return totalWays;
}
int main(){
    int n;
    printf("Enter no of rows of maze : ");
    scanf("%d",&n);
    int m;
    printf("Enter no of columns of the maze : ");
    scanf("%d",&m);
    int noOfways = maze(1,1,n,m);
    printf("%d ", noOfways);

    return 0;
}