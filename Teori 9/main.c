#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int arr[6]={1,3,4,7,5};
    int arr1[9]={1,3,4,7,5,8,9,10};
    printf("Nilai jumlah = %d\n",jum(arr,5));
    printf("Jumlah angka = %d\n",jum_baris(arr1,8));
    printf("Masukkan angka : "); scanf("%d",&n);
    printf("FIB = %d",fib(n));
    return 0;
}

int fib(int x)
{
    if(x==0)
    {
        return 0;
    }
    else if(x==1)
    {
        return 1;
    }
    else
    {
        return fib(x-1)+fib(x-2);
    }
}
int jum(int arr[], int n)
{
    if(n<0)
    {
        return 0;
    }
    else
    {
        return jum(arr,n-1)+arr[n];
    }
}
int jum_baris(int arr[], int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return jum(arr,n-1)+arr[n]+1;
    }
}
