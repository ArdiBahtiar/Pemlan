#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct mahasiswa{
	char nama[10];
	char NPM[3];
	int IPK;
}mhs[5];


int main(int argc, char** argv)
{
	int n;
	
	for(n=0;n<5;n++)
	{
		printf("\nNama?\n");
		scanf("%s",&mhs[n].nama);
		printf("NPM?\n");
		scanf("%s",&mhs[n].NPM);
		printf("IPK?\n");
		scanf("%i",&mhs[n].IPK);
	}
	
	printf("\n\n\n");
	
	printf("Mahasiswa yang mendapat IPK lebih dari 3 adalah");
	for(n=0;n<5;n++)
	{
		if(mhs[n].IPK>3)
			printf("\n %s\n\n",mhs[n].nama);
		//	printf(")
	}
	printf("Mahasiswa yang mendapat IPK kurang dari 3 adalah");
			for(n=0;n<5;n++)
			{
				if (mhs[n].IPK<3)
			printf("%s\n\n",mhs[n].nama);
			}	
				
	return 0;

}