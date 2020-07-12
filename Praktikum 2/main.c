#include <stdio.h>
#include <stdlib.h>
int cekgenap(int n);
int cekganjil(int n);
int cekprima(int n);
int sumderet(int n);

int main()
{
    int angka;
    printf("Masukkan angka = "); scanf("%d",&angka);
    printf("\nApakah %d genap ? %d",angka,cekgenap(angka));
    printf("\nApakah %d ganjil ? %d",angka,cekganjil(angka));
    printf("\nApakah %d prima ? %d",angka,cekprima(angka));
    printf("\nHasil jumlah %d adalah = %d",angka,sumderet(angka));
    printganjil(angka);

    return 0;
}

int cekgenap(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int cekganjil(int n)
{
    if(n%2!=0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int cekprima(int n)
{
    int i,counter;
    counter=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            counter++;
        }
    }
        if(counter==2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
}
int sumderet(int n)
{
    int i;
    int hasil =0;
    for(i=1;i<=n;i++)
    {
        hasil=hasil+i;
    }
    return hasil;
}

void printganjil(int n)
{
    int i;
    int hasil =1;
    printf("\nTampil ganjil dari deret bil %d adalah = ",n);
    for(i=1;i<=n;i++)
    {
        if(cekganjil(i)==1 && cekprima(i)==1)
        {
            printf("%d,",i);
            hasil*=i;
        }
    }
    printf("\nHasil = %d",hasil);
}

