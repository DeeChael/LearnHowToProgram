#include <stdio.h>


int main06() {
    int i = 22;
    if (i > 20) {
        printf("The integer is larger than 20\n");
    } else {
        printf("The integer is lower than or equal 20\n");
    }
    for (int a = 0; a < 10; a++) {
        printf("Repeat times: %d\n", a);
    }
    int b = 1;
    while (b < 10) {
        if (b % 5 == 0) {
            break;
        }
        printf("Repeated %d\n", b);
        b++;
    }
    printf("Hello, world!\n");
    return 0;
}

/*
 * Result:

The integer is larger than 20
Repeat times: 0
Repeat times: 1
Repeat times: 2
Repeat times: 3
Repeat times: 4
Repeat times: 5
Repeat times: 6
Repeat times: 7
Repeat times: 8
Repeat times: 9
Repeated 1
Repeated 2
Repeated 3
Repeated 4
Hello, world!
Process finished with exit code 0
 */