#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mahasiswa{
	char nama[10];
	char npm[10];
	int nilai[10];
	float ipk;
};

int main()
{
	struct mahasiswa mhs[10];
	int data1,data2;
	char matkul[10][15]={"sisdig","pemdas","matdis","alin","algodas"};
	int loop=1,show1,show2;
	float sks[10]={3,4,3,3,2};
	int pilihan,nilai1,nilai2;
	float nilai_tot,sks_tot;
	
	while(loop==1)
{
	printf("1. Input Data\n");
	printf("2. Cek Data dan Nilai\n");
	printf("Anda Mau Apa?\n");
	scanf("%d",pilihan);
	
	switch(pilihan){
		case 1:
			{
					printf("Masukkan Nama\n");
					scanf("%s",&mhs[data1].nama);
					printf("Masukkan NPM\n");
					scanf("%s",&mhs[data1].npm);
					
						printf("----------------------------\n\n");
					for(nilai1=0;nilai1<5;nilai1++)
					{
					printf("Masukkan nilai %s\n",matkul[nilai1]);
					scanf("%d",&mhs[data1].nilai[nilai1]);
					}
					
					for(nilai2=0;nilai2<5;nilai2++)
					{
						nilai_tot = nilai_tot + ((mhs[data1].nilai[nilai2]) * (sks[nilai2]));
						sks_tot = sks_tot + sks[nilai2];
					}
					mhs[data1].ipk = nilai_tot/sks_tot;
					
					data1++;
					break;
		}
		case 2:
			{
				if(data1==0)
				{
					printf("Lho kok ngga ada ilang");
				}
				
				else
				{
					for(show1=0;show1<data1;show1++)
					{
						printf("Nama Mahasiswa		= %s",mhs[show1].nama);
						printf("NPM Mahasiswa		= %s",mhs[show1].npm);
					}
					for(show2=0;show2<5;show2++)
					{
						printf("Mata Kuliah %s adalah %d",matkul[show2], mhs[show1].nilai[show2]);
					}
					printf("%f",mhs[show1].ipk);
					break;
				}
			}
	}
} return 0;
}
