#include <stdio.h>

// Don't add ; at the end of the definition!
#define PI 3.1415926535


int main08() {
    int radius = 7;
    double perimeter = 2 * radius * PI;
    double area = radius * radius * PI;
    printf("Perimeter %.2f, Area %.2f\n", perimeter, area);
    return 0;
}