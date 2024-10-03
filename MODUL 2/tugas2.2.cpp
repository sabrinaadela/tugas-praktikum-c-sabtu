#include <stdio.h>
#include <math.h>

int main() 
{ 
    float diameter = 15.0;
    float jari_jari;
    float volume;

    jari_jari = diameter / 2;

    volume = (4.0 / 3.0) * M_PI * pow(jari_jari, 3);

    printf("Volume bola dengan diameter %.2f cm adalah %.2f cm³\n", diameter, volume);

    return 0;
}

