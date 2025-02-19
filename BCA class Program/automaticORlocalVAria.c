#include <stdio.h>

void change() {
    int a = 50, b = 60;
    printf("\n%d", a);
    printf("\n%d", b);
    // calling the other change function
    another_change();
    printf("\n%d", a);
    // 'c' is not accessible here because it's declared in another_change() function
    // printf("\n%d", c);
}

void another_change() {
    int a = 100, b = 110, c = 25;
    printf("\n%d %d", a, b);
    printf("\n%d", c);
}

int main() {
    change();
    return 0;
}
