#include <stdio.h>
#include <stdlib.h>

typedef struct Mahasiswa
{
    char nama[50];
    char nim[15];
    float uts;
    float uas;
    float tugas;
    float akhir;
}MHS;
int main()
{
    MHS ku;
    printf("Input Nama        = "); gets(ku.nama);
    printf("Input NIM         = "); gets(ku.nim);
    printf("Input Nilai UTS   = "); scanf("%f",&ku.uts);
    printf("Input Nilai UAS   = "); scanf("%f",&ku.uas);
    printf("Input Nilai Tugas = "); scanf("%f",&ku.tugas);
    ku.akhir=0.3*ku.tugas+0.3*ku.uts+0.4*ku.uas;

    printf("Nama : %s\n",ku.nama);
    printf("NIM  : %s\n",ku.nim);
    printf("UTS  : %2.f\n",ku.uts);
    printf("UAS  : %2.f\n",ku.uas);
    printf("Tugas: %2.f\n",ku.tugas);
    printf("Akhir: %2.f\n",ku.akhir);

    return 0;
}
