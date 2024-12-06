#include <stdio.h>
int main()
{
    int i;
    printf("Pengurangan 5 dari 100 hingga 55\n");
    for(i = 100; i >= 55; i -= 5) {
        printf("%4i", i);
    }
    
    return 0;
}

