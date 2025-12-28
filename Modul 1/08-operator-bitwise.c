#include <stdio.h>

int main() {
    int a = 6;  // Dalam biner: 0110
    int b = 3;  // Dalam biner: 0011

    printf("A = %d, B = %d\n", a, b);
    printf("A & B (Bitwise AND) : %d\n", a & b); // Hasil: 0010 (2)
    printf("A | B (Bitwise OR)  : %d\n", a | b); // Hasil: 0111 (7)
    printf("A ^ B (Bitwise XOR) : %d\n", a ^ b); // Hasil: 0101 (5)
    printf("A << 1 (Shift Left) : %d\n", a << 1); // Hasil: 1100 (12)
    printf("B >> 1 (Shift Right): %d\n", b >> 1); // Hasil: 0001 (1)

    return 0;
}