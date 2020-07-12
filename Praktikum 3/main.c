#include <stdio.h>
#include <stdlib.h>

#define arrSize 5

// Prototype
void readData(int data[], int n);
int maxData(int data[], int n);
void selectionSort(int data[], int n);
int jumlahMinMax(int data[], int n);

int main()
{
    int dataArr[arrSize] = {2,1,4,5,7};
    readData(dataArr, arrSize);
    printf("\n MaxData = %d", maxData(dataArr,arrSize));
    selectionSort(dataArr,5);
    printf("\n");
    readData(dataArr, arrSize);
    printf("\n Tampilkan Nilai Min dan Max = %d",jumlahMinMax(dataArr,arrSize));
    return 0;
}
// Deklarasi
void readData(int data[], int n)
{
    int i;
    for(i=0; i<n ; i++)
    {
        printf("[%d] - ",data[i]);
    }
}

int maxData(int data[], int n)
{
    int i,maks;
    maks = data[0];
    for(i=1; i<n;i++ )
    {
        if(maks < data[i])
        {
            maks = data[i];
        }
    }
    return maks;
}

void selectionSort(int data[], int n)
{
    int i; // loop luar
    int j; // loop dalam
    int idxmin; // Menampung index array terkecil
    int temp; // Menampung data sementara

    for(i=0; i<n; i++)
    {
        idxmin = i;
        for(j=i+1; j<n; j++)
        {
            if(data[idxmin]>data[j])
            {
                idxmin = j;
            }
        }
        // Proses menukar data
        temp        = data[i];
        data[i]     = data[idxmin];
        data[idxmin]= temp;
    }
}

int jumlahMinMax(int data[], int n)
{
    int Min, Max;
    int i,hasil;
    Min = data[0];
    Max = data[0];
    for(i=1;i<n;i++)
    {
        if(Min>data[i])
        {
            Min = data[i];
        }
        if(Max<data[i])
        {
            Max = data[i];
        }
    }
    return Max + Min;

}
