#include <stdio.h>

int array[100];
int elemen, i;
int total = 0;

int main () {

    printf("masukkan jumlah elemen pada array: ");
    scanf("%d", &elemen);

    for (i = 0; i < elemen; i++){
        scanf("%d", &array[i]);
    }

    for (i = 0; i < elemen; i++){
        total = total + array[i];
    }

        printf ("total array adalah %d", total);

    return 0;
}