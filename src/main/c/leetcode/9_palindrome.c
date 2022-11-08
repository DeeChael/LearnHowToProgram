#include <stdio.h>

typedef int bool;

bool true = 1;
bool false = 0;

int times(int original, int times) {
    int result = 1;
    for (int i = 0; i < times; i++) {
        result *= original;
    }
    return result;
}

bool isPalindrome(int x){
    if (x < 0)
        return false;
    int index = 1;
    while ((x / times(10, index)) > 0)
        index++;
    for (int i = 0; i < index / 2; i++) {
        int small = (x / times(10, i)) - ((x / times(10, i + 1)) * 10);
        int large = x / times(10, index - i - 1);
        if (small != large)
            return false;
        x -= small * times(10, i);
        x -= large * times(10, index - i - 1);
    }
    return true;
}

int mainLeet9() {
    for (int i = 0; i < 10000000; i++) {
        if (isPalindrome(i))
            printf("%i\n", i);
    }
    return 0;
}