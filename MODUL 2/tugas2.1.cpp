#include <stdio.h>

int main() 
{
    int alas = 8.0;
    int tinggi = 5.0;
    float luas;

    luas = 0.5 * alas * tinggi;

    printf("Luas segitiga dengan alas %.2f cm dan tinggi %.2f cm adalah %.2f cm²\n", alas, tinggi, luas);

    return 0;
}

