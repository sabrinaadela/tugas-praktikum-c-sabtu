#include <stdio.h>

int main() {
    int number;

    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("GENAP\n");
    } else {
        printf("GANJIL\n");
    }

    return 0;
}
