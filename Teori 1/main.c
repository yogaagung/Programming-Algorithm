#include <stdio.h>
#include <stdlib.h>

int tambah(int c, int d);
int kali(int a, int b);
int kurang(int x, int y);

int main()
{
    int a,b;
    printf("Input a = "); scanf("%d",&a);
    printf("Input b = "); scanf("%d",&b);
    printf("\nHasil tambah = %d ",tambah(a,b));
    printf("\nHasil kali   = %d ",kali(a,b));
    printf("\nHasil kurang = %d ",kurang(kali(a,b),tambah(a,b)));

    return 0;
}

int tambah(int c, int d)
{
    return(c+d);
}
int kali(int a, int b)
{
    return(a*b);
}
int kurang(int x, int y)
{
    return(x-y);
}
