#include <stdio.h> //belum beres ya allah
#include <conio.h>

int jumlah_transaksi, i, nominal, total;

int main(){
    
    printf("masukkan jumlah transaksi: ");
    scanf ("%d", &jumlah_transaksi);

    total = 0;
    for(i=1; i<=jumlah_transaksi; i++) {
    printf("Rp");
    scanf("%d", &nominal);
    total = total + nominal;    
    }
    
    if (total <= 0){
    printf("tidak ada pengeluaran hari ini.");
    } else
    printf("total pengeluaran hari ini adalah Rp%d", total);
    getch();

    return 0;
}