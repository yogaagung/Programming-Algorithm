#include <stdio.h>
#include <stdlib.h>

struct Nilai
{
    float uts;
    float uas;
    float tugas;
    float akhir;
};
struct Mahasiswa
{
    char nama[30];
    char nim[15];
    struct Nilai nilai;
};


int main()
{
    struct Mahasiswa io[3];
    int a;
    for(a=0;a<3;a++)
    {
        printf("Input Nama : "); gets(io[a].nama);
        printf("Input NIM  : "); gets(io[a].nim);
        fflush(stdin);
        printf("Input UTS  : "); scanf("%2.f",&io[a].nilai.uts);
        printf("Input UAS  : "); scanf("%2.f",&io[a].nilai.uas);
        printf("Input Tugas: "); scanf("%2.f",&io[a].nilai.tugas);
        fflush(stdin);
        io[a].nilai.akhir=0.3*io[a].nilai.tugas+0.3*io[a].nilai.uts+0.4*io[a].nilai.uas;
        printf("---------------------------------------------\n");
        fflush(stdin);
        printf("Nama  : %s\n",io[a].nama);
        printf("NIM   : %s\n",io[a].nim);
        printf("UTS   : %f\n",io[a].nilai.uts);
        printf("UAS   : %f\n",io[a].nilai.uas);
        printf("TUGAS : %f\n",io[a].nilai.tugas);
        printf("AKHIR : %f\n",io[a].nilai.akhir);
    }
    return 0;
}
