#include <stdio.h>

// To print out the binary format number
void print_bin(int num) {
    int bit = sizeof(num) * 8;
    int i;
    for (i = bit - 1; i >= 0; i--) {
        int bin = (num & (1 << i)) >> i;
        printf("%d", bin);
    }
    printf("\n");
}

int main12() {
    int a = 0b00110010; // the number starting with 0b is binary number format
    int b = 0b01101001; // Same as above
    int and = a & b; // If the numbers on the same position are both 1, the number on the position in the result will be 1, or else 0
    int or = a | b; // If the one of the numbers on the same position is 1, the number on the position in the result will be 1, or else 0
    int xor = a ^ b; // If the numbers on the same position are not same, the number on the position in the result will be 1, or else 0
    int a_r = ~a; // I don't know how to explain
    int b_r = ~b; // I don't know how to explain
    print_bin(a);
    print_bin(b);
    print_bin(and);
    print_bin(or);
    print_bin(xor);
    print_bin(a_r);
    print_bin(b_r);
    return 0;
}