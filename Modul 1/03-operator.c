#include <stdio.h>

int main() {
    int angka1 = 10;
    int angka2 = 3;
    
    int jumlah = angka1 + angka2;
    int kali   = angka1 * angka2;
    float bagi = (float)angka1 / angka2;
    int sisa   = angka1 % angka2; 

    printf("Angka 1: %d, Angka 2: %d\n", angka1, angka2);
    printf("Hasil Penjumlahan : %d\n", jumlah);
    printf("Hasil Perkalian   : %d\n", kali);
    printf("Hasil Pembagian   : %.2f\n", bagi);
    printf("Sisa Bagi         : %d\n", sisa);

    return 0;
}