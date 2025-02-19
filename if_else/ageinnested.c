// if the ages of ram,shyam and ajay are input through the 
// keyboard, wap to determine the youngest of the three.
#include<stdio.h
int main (){
    int ram;
    printf("age of ram ;);
    scanf("%d",&ram);

    int shyam;
    printf("age of shyam ;);
    scanf("%d",&shyam);

    int ajay;
    printf("age of ajay ;);
    scanf("%d",&ajay);

    if (ram<shyam ){
        if (ram<ajay)
        printf("%d is youngest",ram);
        else  
            printf("%d is not youngest",ajay);
    }
    else { if (shyam<ram)
        printnf("%d is youngest",shyam);
        else 
            printf("%d is youngest",ajay);
        
    }
    return 0;
}



