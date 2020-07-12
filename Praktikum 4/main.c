#include <stdio.h>
#include <stdlib.h>

// Prototype
int seq_search(int data[], int array_size, int cari);
void cari_indeks(int data[], int array_size, int cari);

int main()
{
    int data[]={7,7,6,11,10};
    int array_size = sizeof(data)/sizeof(int);
    printf("Ukuran Array : %d\n", sizeof(data));
    printf("Ukuran Int   : %d\n", sizeof(int));
    printf("Data ketemu ? %d",seq_search(data,array_size,11));
    printf("\nJumlah : %d", seq_search(data,array_size,7));
    cari_indeks(data,array_size,11);

    return 0;
}
// Deklarasi
int seq_search(int data[], int array_size, int cari)
{
    int indeks; // Sebagai indeks sbg variable data
    int jumlah=0;

    for(indeks=0;indeks<array_size;indeks++)

    {
         if(data[indeks]==cari)
            jumlah++;
    }
    return jumlah;

}

void cari_indeks(int data[], int array_size, int cari)
{
    int indeks; // Variable indeks dari data Array

    indeks=0;
    while(indeks < array_size)
    {
        if(data[indeks]==cari)
        {
            break; // Menyudahi proses perulangan
        }
        indeks++;
    }
    if(indeks!=array_size)
    {
        printf("\nKetemu di Indeks : %d",indeks);
    }
    else
    {
        printf("\nNilai tidak Ketemu !");
    }

}
