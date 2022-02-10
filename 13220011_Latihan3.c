// Nama     : Fitra Nurindra
// NIM      : 13220011
// Jurusan  : Teknik Elektro
// Latihan 3 Program Penentu Kehadiran Menggunakan Konsep Structure dan Array dengan Bahasa C

#include <stdio.h>

struct Mhs {
    char nama[80];
    int nim;
    float presensi;
};

struct Mhs kelas[40];

int main(){
    int n, i, count;
    printf("Masukkan Jumlah Mahasiswa : ");
    scanf("%d", &n);
    printf("\n");

    for(i = 0; i < n; i++){                                 // For loop untuk user memberikan input terkait data setiap mahasiswa
        printf("Masukkan Nama Mahasiswa ke-%d : ", i+1);
        scanf("%s", &kelas[i].nama);
        printf("Masukkan NIM Mahasiswa ke-%d : ", i+1);
        scanf("%d", &kelas[i].nim);
        printf("Masukkan Presensi Mahasiswa ke-%d : ", i+1);
        scanf("%f", &kelas[i].presensi);
        printf("\n");    
    }

    count = 0;
    printf("Nama dan NIM Mahasiswa yang Memiliki Kehadiran Kurang Dari 80 Persen Adalah : \n");
    for (i = 0; i < n; i++){
        if (kelas[i].presensi < 80){
            count = count + 1;
            printf("%d. Nama : %s, NIM : %d \n", count, kelas[i].nama, kelas[i].nim);
        }
    }   

    if (count == 0){
        printf("Tidak Ada Mahasiswa yang Memiliki Kehadiran Kurang Dari 80 Persen\n");
    } 

    printf("\n-----------------Program Selesai!-----------------\n");
    printf("--Tekan tombol apapun untuk keluar dari program!--");
    getch();
    return 0;
}