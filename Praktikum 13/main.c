#include <stdio.h>
#include <stdlib.h>
#include "string.h"

typedef struct
{
    char genre;
    int jml_file;
}files;

typedef struct
{
    int size;
    files file;
}folder;

typedef struct
{
    int hari;
    int bulan;
    int tahun;
}tanggal;
tanggal buatTanggal(int hr, int bln, int thn);
void cetakTanggal(tanggal tgl);
void inputFolder (folder *f);

int main()
{
    folder musik;
//    musik.size=30;
//    musik.file.jml_file=4;
//    strcpy{musik.file.genre="barat"};

 /*   int i;
    for(i=0;i<3;i++)
    {
        printf("Size folder = "); scanf("%d",&musik[i].size);
        printf("Jumlah file = "); scanf("%d",&musik[i].file.jml_file);
        fflush(stdin);
        printf("Genre musik = "); gets(musik[i].file.genre);
        printf("\n\n");
    }
    for(i=0;i<3;i++)
    {
        printf("------------- Detail ----------------------");
        printf("Size folder = %d\n",&musik[i].size);
        printf("Jumlah file = %d\n",&musik[i].file.jml_file);
        fflush(stdin);
        printf("Genre musik = %s\n",musik[i].file.genre);
        printf("\n\n");
    }
*/
    tanggal tg;
    tg=buatTanggal(12,12,2016);
    cetakTanggal(tg);

    inputFolder(&musik);
    printf("Size folder = %d\n",&musik.size);
    printf("Jumlah file = %d\n",&musik.file.jml_file);
    fflush(stdin);
    printf("Genre musik = %s\n",musik.file.genre);

    return 0;
}
tanggal buatTanggal(int hr, int bln, int thn)
{
    tanggal date;
    date.hari=hr;
    date.bulan=bln;
    date.tahun=thn;
    return date;
}
void cetakTanggal(tanggal tgl)
{
    printf("%d - %d - %d\n",tgl.hari,tgl.bulan,tgl.tahun);
}
void inputFolder (folder *f)
{
    printf("Size folder = "); scanf("%d",&(*f).size);
    printf("Jumlah file = "); scanf("%d",&(*f).file.jml_file);
    fflush(stdin);
    printf("Genre musik = "); gets((f).file.genre);
}
