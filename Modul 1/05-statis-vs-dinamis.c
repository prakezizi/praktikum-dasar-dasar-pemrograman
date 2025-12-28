#include <stdio.h>

int main() {
    // STATIS: Nilai ditentukan oleh Programmer (Compile-time)
    int nilai_lulus = 75; 
    
    // DINAMIS: Nilai ditentukan oleh User (Run-time)
    int nilai_mhs;

    printf("Nilai Standar Kelulusan (Statis): %d\n", nilai_lulus);
    
    printf("Masukkan Nilai Ujian Anda (Dinamis): ");
    scanf("%d", &nilai_mhs);

    printf("\nPerbandingan:\n");
    printf("Standar: %d | Nilai Anda: %d\n", nilai_lulus, nilai_mhs);

    return 0;
}