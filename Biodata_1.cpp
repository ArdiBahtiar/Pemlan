#include <stdio.h>
#include <stdlib.h>


int main()
{
	
	char nama[25];
	int umur;
	int tb;
	int bb;
	char alamat[30];
	
	
	
	printf("\t\t\t\t\t Selamat Datang Di Biodata\n");
	
	printf("Siapa nama anda				: ");
	scanf("%s",&nama);
	printf("Berapa usia anda			: ");
	scanf("%d",&umur);
	printf("Berapa Tinggi Badan Anda	: ");
	scanf("%d",&tb);
	printf("Berapa Berat Badan Anda		: ");
	scanf("%d",&bb);
	printf("Dimana Alamat Anda			: ");
	scanf("%s",&alamat);
	
	printf("\nBerikut Adalah Data yang Anda Berikan \n");
	printf(" Nama		 	: %s\n",nama);
	printf(" Usia		 	: %d\n",umur);
	printf(" Tinggi Badan	: %d\n",tb);
	printf(" Berat Badan 	: %d\n",bb);
	printf(" Alamat		 	: %s\n",alamat);
	printf("\n\n Terima Kasih Atas Informasinya");
	
	return 0;
}

