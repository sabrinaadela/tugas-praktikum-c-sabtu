#include <stdio.h>

int main() {
    int data[15] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int A[11]; 
    int i, j = 0;

    printf("Hasil Tugas A:\n");
    for (i = 0; i < 15 && j < 11 && data[i] != 999; i++) {
        A[j++] = data[i];
    }
    for (i = 0; i < j; i++) {
        printf("%4d", A[i]);
    }
    printf("\n");

    j = 0; 
    printf("Hasil Tugas B:\n");
    for (i = 0; i < 15 && j < 11 && data[i] != 999; i++) {
        if (data[i] > 9) {
            A[j++] = data[i];
        }
    }
    for (i = 0; i < j; i++) {
        printf("%4d", A[i]);
    }
    printf("\n");

    j = 0; 
    printf("Hasil Tugas C:\n");
    for (i = 0; i < 15 && j < 11 && data[i] != 999; i++) {
        if (data[i] > 9) {
            A[j++] = data[i];
        }
    }
    for (i = 0; i < j; i++) {
        printf("%4d", A[i]);
    }
    printf("\n");

    j = 0; 
    printf("Hasil Tugas D:\n");
    for (i = 0; i < 15 && j < 11 && data[i] != 999; i++) {
        if (data[i] % 2 != 0) {
            A[j++] = data[i];
        }
    }
    for (i = 0; i < j; i++) {
        printf("%4d", A[i]);
    }
    printf("\n");

    j = 0; 
    printf("Hasil Tugas E:\n");
    for (i = 0; i < 15 && j < 11 && data[i] != 999; i++) {
        if (data[i] % 2 != 0) {
            A[j++] = data[i];
        }
    }
    for (i = 0; i < j; i++) {
        printf("%4d", A[i]);
    }
    printf("\n");

    return 0;
}

