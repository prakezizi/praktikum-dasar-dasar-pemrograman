#include <stdio.h>

int main() {
    char karakter;

    printf("Ketikkan satu huruf lalu tekan Enter: ");
    // getchar() digunakan untuk mengambil satu karakter
    karakter = getchar();

    printf("Karakter yang Anda masukkan adalah: ");
    // putchar() digunakan untuk menampilkan satu karakter
    putchar(karakter);
    printf("\n");

    return 0;
}