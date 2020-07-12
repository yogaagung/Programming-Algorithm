#include <stdio.h>
#include <stdlib.h>

int volume_balok(int pjg, int lbr, int tinggi);
int faktorial(int a);
int panjang, lebar, tng, angka, a,b;
int pangkat(int a,int b);

int volume_balok(int pjg, int lbr, int tinggi)
{
    int hasil;
    hasil=pjg*lbr*tinggi;
    return hasil;

}
int faktorial (int a)
{
    int hasil;
    if(a==0)
    {
        hasil =1;
        return hasil;
    }
    else
    {
        hasil = a*faktorial(a-1);
        return hasil;
    }
}
int pangkat (int a,int b)
{
    int i, hasil;
    hasil=1;
    for(i=1;i<=a;i++)
    {
        hasil =hasil*b;
    }
    return hasil;
}
int main()
{
    printf("Masukkan panjang = ");
    scanf("%d", &panjang);
    printf("Masukkan lebar = ");
    scanf("%d", &lebar);
    printf("Masukkan tinggi = ");
    scanf("%d", &tng);
    printf("Volume balok = %d\n",volume_balok(panjang,lebar,tng));
    printf("Masukkan angka faktorial = ");
    scanf("%d", &angka);

    printf("Masukkan pangkat = "); scanf("%d",&a);
    printf("Masukkan bilangan = "); scanf("%d",&b);
    printf("Hasil pangkat = %d", pangkat(a,b));



    return 0;
}
