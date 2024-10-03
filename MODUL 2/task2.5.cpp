#include <stdio.h>
#include <string.h>

int main()
{
	char nim[7];
	char nama[30];
	int kehadiran, tugas, uts, uas;
	float nilai_akhir;
	
	strcpy(nim, "2441083");
	strcpy(nama, "Sabrina Adela Ramlan");
	kehadiran = 100;
	tugas = 99;
	uts= 98;
	uas= 100;
	
	nilai_akhir=(0.2*kehadiran)+(0.2*tugas)+(0.3*uts)+(0.4*uas);
	
	printf("NIM \t: %s", nim);
	printf("\n NAMA \t: %s", nama);
	printf("\n KEHADIRAN\t: %i", kehadiran);
	printf("\n TUGAS \t: %i", tugas);
	printf("\n UTS \t: %i", uts);
	printf("\n UAS \t: %i", uas);
	printf("\n NILAI AKHIR \t: %.2f", nilai_akhir);
	
	return 0;
} 
