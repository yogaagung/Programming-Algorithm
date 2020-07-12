#include <stdio.h>
#include <stdlib.h>

int tambah(int a, int b);
void rekarray(int a[], int b, int c);
int tambah_array(int data[], int indeks, int n);
int sum_array(int data[], int indeks, int n);
int nilai_max(int data[], int indeks, int n);

int main()
{
    int arr[]={1,4,5,6,8,12,13,14};
    int ukuran = sizeof(arr)/sizeof(int);
    printf("Hasil tambah = %d\n",tambah(4,5));
    printf("Data Dalam Array : ");
    rekarray(arr,0,ukuran);
    printf("\nHasil Tambah array : %d",tambah_array(arr,0,ukuran));
    printf("\nHasil Sum array :%d",sum_array(arr,0,ukuran));


    return 0;
}
int tambah(int a, int b)
{
    if(b==0)// Basis dari rekruisif
    {
        return a;
    }
    else
    {
        return tambah(a,b-1)+1;
    }
}

void rekarray(int a[], int b, int c)
{
    if(b==c-1) //Basis jika indeks = ukuran array
    {
        if(a[b]%2==0)
        {
            printf("%d",a[b]);
        }
    }
    else // Rekurens
    {
        if(a[b]%2==0)
        {
            printf("%d",a[b]);
        }
        b++;
        rekarray(a,b,c);
    }
}

int tambah_array(int data[], int indeks, int n)
{
    if(indeks==n-1)
    {
        return data[indeks];
    }
    else
    {
        return tambah_array(data,indeks+1,n)+data[indeks];
    }
}

int sum_array(int data[], int indeks, int n)
{
    if(indeks=n-1)
    {
        if(data[indeks]%4==0)
        {
            printf("%d",data[indeks]);
        }
    }
    else
    {
        return sum_array(data,indeks+1,n)+data[indeks];
    }
}

int nilai_max(int data[], int indeks, int n)
{
    if(indeks=n-1)
    {
        if(data[indeks]>n)
        {
            return data[indeks];
        }
    }
    else
    {
        if(data[indeks]>max)
        {
            return n;
        }
    }
}


