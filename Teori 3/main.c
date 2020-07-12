#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b,c;
    for(i=5;i<=9;i+=2)
    {
        for(a=1;a<=2;a++)
        {
            printf("%d %d\n",i,a);
        }
    }
    printf("\n");
    for(b=6;b<=8;b+=2)
    {
        for(c=2;c<=4;c+=2)
        {
            printf("%d %d\n",b,c);
        }
    }
    return 0;
}
