#include <stdio.h>

int main() 
{
	int jari;
	float luas, keliling;
	
	printf("Input jari-jari lingkaran: "); 
	scanf("%i", &jari);
	
	luas = 3.14* jari*jari; 
	keliling = 2 * 3.14 * jari;
	
	printf("LUAS dan KELILING LINGKARAN"); 
	printf("\nJari-jari = %i", jari); printf("\nLUAS = %.3f", luas); printf("\nKELILING = %.2f", keliling);
	return 0;
}
