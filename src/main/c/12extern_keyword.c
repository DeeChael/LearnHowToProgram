#include <stdio.h>

int a, b;

void give_value() {
    extern int a, b;
    a = 11;
    b = 47;
}

int main12() {
    give_value();
    extern int a, b;
    printf("Hello, world! %d, %d\n", a, b);
    return 0;
}