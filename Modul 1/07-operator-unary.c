#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;

    printf("Nilai awal x: %d\n", x);
    
    // Increment dan Decrement
    x++; // x = x + 1
    y--; // y = y - 1
    
    printf("Nilai x setelah x++: %d\n", x);
    printf("Nilai y setelah y--: %d\n", y);

    // Typecasting (Cast)
    // Merubah hasil pembagian integer menjadi float
    float hasil_bagi = (float)x / 3; 
    printf("Hasil x dibagi 3 (dengan cast): %.2f\n", hasil_bagi);

    // Sizeof: Mengetahui ukuran memori tipe data dalam byte
    printf("Ukuran int di memori: %zu byte\n", sizeof(int));

    return 0;
}