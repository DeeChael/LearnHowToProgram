#include <stdio.h>

int main04() {
    char* string = "DeeChael desu!";
    int i = 233;
    unsigned int ui = -11;
    double d = 22.333;
    /*
     * %s - string
     * %d - signed digit integer
     * %o - octonary format integer
     * %x - hex format integer
     * %u - unsigned integer
     * %f - float or double
     */
    printf("Hello, world! %s %d %o %x %u %f\n", string, i, i, i, ui, d);
    return 0;
}