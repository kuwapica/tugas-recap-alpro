#include <stdio.h>

int main(){

    int jarak1, waktu1;
    int kecepatan1, waktu2;
    int jarak2, kecepatan2;

    scanf("%d", &jarak1);
    scanf("%d", &waktu1);
    scanf("%d", &kecepatan1);
    scanf("%d", &waktu2);
    scanf("%d", &jarak2);
    scanf("%d", &kecepatan2);

    float kecepatan = (float) jarak1 / waktu1;
    float jarak = (float) kecepatan1 / waktu2;
    float waktu = (float) jarak2 / kecepatan2;

    printf("kecepatan = %f\n", kecepatan);
    printf("jarak = %f\n", jarak);
    printf("waktu = %f", waktu);

    return 0;
}


