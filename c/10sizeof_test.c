#include <stdio.h>

int main10() {
    int i = 11;
    long l = 233333333L;
    long long ll = 222222222222222222L;
    printf("Int: %llu, Long: %llu, Long long: %llu\n", sizeof(i), sizeof(l), sizeof(ll));
    return 0;
}