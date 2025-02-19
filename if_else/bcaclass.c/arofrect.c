#include<stdio.h>
int main(){
  float length, breadth, radius;
  printf("Enter length :");
  scanf("%f",&length);

   printf("Enter breadth :");
  scanf("%f",&breadth);

   printf("Enter radius :");
  scanf("%f",&radius);

  printf("\nArea of rectangle : %f", length*breadth);
  printf("\nPerimeter of rectangle is : %f", 2*(length+breadth));
  printf("\nArea of circle is : %f", 3.14*radius*radius);



   

    return 0;
}