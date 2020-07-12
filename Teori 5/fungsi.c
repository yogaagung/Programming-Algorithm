#include "header.h"

int faktorial(int n)
{
    int a, f=1;
    for(a=1;a<=n;a++)
    {
        f=f*a;
    }
    return f;
}
float luas_tabung(float jari, float tinggi)
{
    float luas;
    float pi=3.14;
    luas=(2*(pi*jari*jari)+2*pi*jari*tinggi);
    return luas;
}
