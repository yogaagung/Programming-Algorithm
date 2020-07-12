#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Tambah : %d\n",tambah(3,2));
    printf("Faktorial : %d\n",faktorial(4));
    printf("Kali : %d\n",kali(4,3));
    printf("Kurang : %d\n",kurang(4,2));
    printf("Pangkat : %d\n",pangkat(4,3));
    return 0;
}

int tambah(int a, int b)
{
   if(a==0) //Basis
   {
       return b;
   }
   else
   {
       return tambah(a-1,b)+1; // rekruetment
   }
}
int faktorial(int angka)
{
    if(angka==0)
    {
        return 1;
    }
    else
    {
        return faktorial(angka-1)* angka;
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
