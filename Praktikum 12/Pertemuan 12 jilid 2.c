#include<stdio.h>

struct Alamat
{
    char namaJalan[32];
    int nomor;
    int gang;
};

struct Mahasiswa
{
    char nama[50];
    char nim[15];
    struct Alamat alamat;
};


int main()
{
    struct Mahasiswa mu;
    printf("Input NIM   = "); gets(mu.nim);
    printf("Input Nama  = "); gets(mu.nama);
    printf("Input Jalan = "); gets(mu.alamat.namaJalan);
    printf("Input Nomor = "); scanf("%d",&mu.alamat.nomor);
    printf("Input Gang  = "); scanf("%d",&mu.alamat.gang);

   return 0;
}
