#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);

    if (x%4==0)
    {
        printf("Yes it's a Leap year");
    }

    else {
        printf("No it's not a leap year");
    }
    return 0;
}