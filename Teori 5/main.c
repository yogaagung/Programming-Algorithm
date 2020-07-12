#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    int b;
    float r,t;
    printf("Input faktorial = "); scanf("%d",&b);
    printf("Hasil dari faktorial dari %d adalah %d", b,faktorial(b));
    printf("\nMasukkan jari - jari = "); scanf("%2f",&r);
    printf("Masukkan tinggi = "); scanf("%f",&t);
    printf("Luas permukaan tabung dengan jari - jari %2f dan tinggi %2f adalah %2f",r,t,luas_tabung(r,t));
    return 0;
}
