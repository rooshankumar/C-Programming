#include<stdio.h>

int main() {
   int a[30], i, num, smallest,position;

   printf("\nEnter no of elements :");
   scanf("%d", &num);
   
    printf("Enter the elements of Array:");
   for (i = 0; i < num; i++){
      scanf("%d", &a[i]);
      }

   smallest = a[0];
   position = 0;

   for (i = 0; i < num; i++) {
      if (a[i] < smallest) {
         smallest = a[i];
         position = i;
      }
   }

   printf("\nSmallest Element : %d", smallest);
   printf("\nPosition of  Element : %d", position);

   return 0;
}