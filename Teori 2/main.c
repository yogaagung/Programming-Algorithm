#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gol,jml_anak,gaji;
    printf("Input golongan    = "); scanf("%d",&gol);
    printf("Input jumlah anak = "); scanf("%d",&jml_anak);
    if(gol==1)
    {
        gaji = 3000000;
        gaji += 300000;
    }
    else if(gol==2)
    {
        gaji = 2000000;
        gaji += 200000;
    }
    else if(gol==3)
    {
        gaji = 1000000;
        gaji += 0;
    }
    if(jml_anak==1)
    {
        gaji += 100000;
    }
    else if(jml_anak==2)
    {
        gaji += 200000;
    }
    else if(jml_anak==3)
    {
        gaji += 300000;
    }
    printf("Gaji total = %d",gaji);

    return 0;
}
