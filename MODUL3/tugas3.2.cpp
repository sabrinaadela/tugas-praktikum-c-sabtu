#include <stdio.h>

int main() {
    float celsius, fahrenheit, reamur;

    // Input suhu dalam Celcius
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%f", &celsius);

    // Konversi ke Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Konversi ke Reamur
    reamur = celsius * 4 / 5;

    // Tampilkan hasil konversi
    printf("Suhu dalam Fahrenheit: %.2f °F\n", fahrenheit);
    printf("Suhu dalam Reamur: %.2f °R\n", reamur);

    return 0;
}

