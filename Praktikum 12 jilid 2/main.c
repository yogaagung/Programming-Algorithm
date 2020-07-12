#include <stdio.h>
#include <stdlib.h>

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
    struct Mahasiswa mu[2];
    int c;
    for(c=0;c<3;c++)
    {
        fflush(stdin);
        printf("Input Nama  = "); gets(mu[c].nama);
        printf("Input NIM   = "); gets(mu[c].nim);
        printf("Input Jalan = "); gets(mu[c].alamat.namaJalan);
        printf("Input Nomor = "); scanf("%d",&mu[c].alamat.nomor);
        printf("Input Gang  = "); scanf("%d",&mu[c].alamat.gang);
        printf("----------------------------------------------\n");
        printf("Nama  = %s\n",mu[c].nama);
        printf("NIM   = %s\n",mu[c].nim);
        printf("Jalan = %s\n",mu[c].alamat.namaJalan);
        printf("Nomor = %d\n",mu[c].alamat.nomor);
        printf("Gang  = %d\n",mu[c].alamat.gang);
    }


   return 0;
}
