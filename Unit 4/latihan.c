#include <stdio.h>

int sisi;

void KelilingPersegi () {
    float keliling;
    keliling = 4 * sisi;
    printf("Keliling persegi adalah: %f\n", keliling);
}

void LuasPersegi () {
    float luas;
    luas = sisi * sisi;
    printf("Luas persegi adalah: %f\n", luas);
}

void Kubus () {
    float kubus;
    kubus = sisi * sisi * sisi;
    printf("Kubus adalah: %f", kubus);
}

int main () {
    printf("masukkan sisi: ");
    scanf("%d", &sisi);

    KelilingPersegi ();
    LuasPersegi ();
    Kubus ();

    return 0;
}

