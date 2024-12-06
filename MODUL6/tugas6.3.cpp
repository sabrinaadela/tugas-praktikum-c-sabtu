#include <stdio.h>
int main()
{
    int i;
    printf("Deret: 1 2 4 8 16 32 64 128 256 512 1024 \n");
    for(i = 1; i <= 1024; i *= 2) {
        printf("%4i", i);
    }
    
    return 0;
}

