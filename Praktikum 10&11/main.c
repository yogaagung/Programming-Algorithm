#include <stdio.h>
#include <stdlib.h>

void Luas(int s,int*L);
void countofDigit(int digit, int x, int *jml);

int main()
{
    int LuasP=0;
    int sisi;
    int jml;
    sisi=5;
    int *n;
    /// Sebelum pemanggilan prosedur
    printf("Luas persegi dengan sisi %d = %d",sisi,LuasP);
    /// Setelah pemanggilan prosedur
    Luas(sisi,&LuasP);
    printf("\nLuas persegi dengan sisi %d = %d\n",sisi,LuasP);
    countofDigit(67892,9,&jml);
    printf("Banyak kemunculan x = ");
    return 0;
}
void Luas(int s,int*L)
{
    *L=s*s;
}
void countofDigit(int digit, int x, int *jml)
{
    int y;
    while(digit!=0)
    {
        x=digit%10;
        if(y==x)
        {
            *jml+=1;
        }
        digit=digit/10;
    }
}
