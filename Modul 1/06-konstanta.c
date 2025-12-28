#include <stdio.h>

// Mendefinisikan konstanta dengan preprocessor directive
#define PI 3.14159

int main() {
    // Mendefinisikan konstanta dengan kata kunci const
    const int TAHUN_LAHIR = 1955;

    printf("--- Informasi Universitas ---\n");
    printf("Nilai PI         : %.5f\n", PI);
    printf("Tahun Berdiri    : %d\n", TAHUN_LAHIR);

    // TAHUN_LAHIR = 2024; // Baris ini akan error jika diaktifkan karena nilai const tidak bisa diubah
    
    return 0;
}