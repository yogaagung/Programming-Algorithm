#include <stdio.h>
#include <stdlib.h>
int pembagian(int a, int b);
int tambah(int a, int b);
int kurang(int a, int b);

int main()
{
    int a,b;
    printf("Masukkan angka ke - 1 : "); scanf("%d",&a);
    printf("Masukkan angka ke - 2 : "); scanf("%d",&b);
    printf("Hasil pembagian      : %d\n",pembagian(a,b));
    printf("Hasil tambah         : %d\n",tambah(a,b));
    printf("Hasil kurang         : %d\n",kurang(a,b));
    printf("Hasil kali           : %d\n",kali(a,b));
    printf("Hasil faktorial      : %d\n",faktorial(a));
    printf("Hasil pangkat        : %d\n",pangkat(a,b));
    return 0;
}

int pembagian(int a, int b)
{
    if(a<b)
    {
        return 0;
    }
    else
    {
        return pembagian(a-b,b)+1;
    }
}
int tambah(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return tambah(a,b-1)+1;
    }
}
int kurang(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return kurang(a,b-1)-1;
    }
}
int kali(int a, int b)
{
    if(a==0)
    {
        return 0;
    }
    else
    {
        return kali(a-1,b)+b;
    }
}
int faktorial(int a)
{
    if(a==0)
    {
        return 1;
    }
    else
    {
        return faktorial(a-1)*a;
    }
}
int pangkat(int a, int b)
{
    if(b==0)
    {
        return 1;
    }
    else
    {
        return pangkat(a,b-1)*a;
    }
}
