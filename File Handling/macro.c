#include<stdio.h>
#define PI 3.14159265359
#define area(r) (PI*r*r)
// float area(float r){
//     return PI*r*r;
// }
int main(){

    // double x = 3.14159265359;
    // printf("%.15f",x);
    printf("%f",area(10));

    return 0;
}