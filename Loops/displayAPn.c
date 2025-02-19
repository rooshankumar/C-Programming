// display this AP - 4,7,10,13,16 ... upto 'n'

#include<stdio.h>
int main(){

  int i, n;
  printf("Enter a number :");
  scanf("%d",&n);

  for (i=4;i<=(3*n+1);i=i+3)
  printf("%d ",i);


    return 0;
}