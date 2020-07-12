#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x,y,n,tukar;
    n=0;
    int ar[n];
    printf("Banyak input = "); scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Input angka ke - %d : ",i); scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    for(x=0;x<n;x++)
    {
        for(y=0;y<n;y++)
        {
            if(ar[x]<ar[y])
            {
                tukar=ar[x];
                ar[x]=ar[y];
                ar[y]=tukar;
            }
        }
        printf("\n");
        for(i=0;i<n;i++)
        {
            printf("%d ",ar[i]);
        }
    }

    return 0;
}
