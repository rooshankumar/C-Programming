// display this AP - 4,7,10,13,16 ... upto 'n'

#include<stdio.h>
int main(){

  int i, n,a=4; // n= n times loop chalega
  // we are going to use extra variables
  printf("Enter a number :");
  scanf("%d",&n);

  for (i=1;i<=n;i=i+1){
  printf("%d ",a);
  a = a +3;
}

    return 0;
}