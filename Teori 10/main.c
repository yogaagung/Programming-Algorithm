#include <stdio.h>
#include <stdlib.h>
float luasSegitiga(float a, float t, float *luas);
float luasLingkaran(float r, float *luas);

int main()
{
    int s;
    int *luas;

    printf("Input sisi = ");scanf("%d",&s);
    printf("Luas = %d",luasPersegi(s,&luas));
    return 0;
}
int luasPersegi(int s,int *luas)
{
    *luas=s*s;
    return *luas;
}
float luasSegitiga(float a, float t, float *luas)
{
    *luas=(a*t)/2;
    return *luas;
}
float luasLingkaran(float r, float *luas)
{
    *luas=3.14*r*r;
    return *luas;
}
