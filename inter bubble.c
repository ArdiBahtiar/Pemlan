#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int interpolation(int awal, int akhir, int cari, int angka[10])
{
	int posisi;
	posisi = (cari - angka[awal]) / (angka[akhir] - angka[awal]) * (akhir - awal) + awal;
	
	if(angka[posisi] == cari)
	{
		printf("Ada di data ke-%d", data[posisi]);
	}
	
	else if(angka[posisi] > cari)
	{
		interpolation(awal, akhir = posisi-1, cari, angka[10]);
	}
	
	else if(angka[posisi] < cari)
	{
		interpolation(awal = posisi+1, akhir, cari, angka[10]);
	}
	
	else
	{
		printf("Data tidak ada");
	}
}



int bubblesortAscending()
{
	for(int i=0; i<9; i++)
	{
		for(int j=0; j<9; j++)
		{
			if(angka[j+1] < angka[j])
			{
				int temp = angka[j];
				angka[j] = angka[j+1];
				angka[j+1] temp;
			}
		}
	}
}

int bubblesortDescending()
{
	for(int i=0; i<9; i++)
	{
		for(int j=0; j<9; j++)
		{
			if(angka[j+1] > angka[j])
			{
				int temp = angka[j];
				angka[j] = angka[j+1];
				angka[j+1] = temp;
			}
		}
	}
}

int main()
{
	int angka[10] = {5,9,6,8,10,11,13,14,7,12};
	int awal = 0;
	int akhir = 9;
	int cari, temp;
	int a;
	
	for(a=0; a<10; a++)
	{
		printf("%d ", angka[a]);
	}
	
	bubblesortAscending();
	printf("\nSetelah Bubble Sort Ascending\n\n");
	for(a=0; a<10; a++)
	{
		printf("%d ", angka[a]);
	}
	
	printf("\nIngin mencari Angka Berapa?\n");
	scanf("%d", &cari);
	interpolation(awal, akhir, cari, angka[10]);
}
