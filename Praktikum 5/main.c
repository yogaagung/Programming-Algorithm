#include <stdio.h>
#include <stdlib.h>

// Prototype
int binarySearch(int data[], int K);
int sizeArr;
int main()
{
    int data[]={11,12,20,21,30,31};
    sizeArr=sizeof(data)/4;
    printf("Data ada pada indeks %d",binarySearch(data,20));
    return 0;
}
// Deklarasi fungsi
int binarySearch(int data[], int K)
{
    int n = sizeArr; // Menampung banyaknya array
    int L; // Variable Left
    int R; // variable Right
    int M; // variable Tengah
    L=0;
    R=n-1;

    while(L<=R)
    {
        M=(L+R)/2;

        if(K==data[M])
        {
            return M;
        }
        else if(K==data[M])
        {
            R=M-1;
        }
        else
        {
            L=M+1;
        }
    }
    return -1;
}
