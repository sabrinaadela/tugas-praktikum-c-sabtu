#include <stdio.h>
#include <math.h>

int main() 
{
  int a, t;
  float alas, tinggi, miring;
  
  printf("Masukkan panjang alas: ");
  scanf("%d",&a);
  printf("Masukkan tinggi segitiga: ");
  scanf("%d",&t);
  
  miring = sqrt((a*a)+(t*t));
  
  printf("Panjang sisi segitiga adalah %2.f cm\n", miring);
}
