#include <stdio.h>
#include <string.h>

int main()
{
	char nim[7];
	char nama[30];
	int nilai;
	
	strcpy(nim, "2441083");
	strcpy(nama, "Sabrina Adela Ramlan");
	nilai = 99;
	
	printf("NIM : %s", nim);
	printf("NAMA : %s", nama);
	printf("NILAI : %i", nilai);
	
	return 0;
}
