#include<stdio.h>

void india(); // Function prototype for india()

void england(){
    printf("You are in England\n");
    return;
}

void australia(){
    printf("You are in Australia\n");
    england(); // calling england
    return;
}

void india(){
    printf("You are in India\n");
    australia(); // calling australia
    return;
}

int main(){
    india(); // calling India
    return 0;
}
 