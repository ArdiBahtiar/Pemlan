#include<stdio.h>

int main()
{
	int angka[5] = {6,9,10,8,7};
	int i,j;
	
	printf("sebelum sorting\n\n");
	
	for(i=0; i<5; i++)
	{
		printf("%d ", angka[i]);
	}
	
	for(i=1; i<5; i++)
	{
		for(j=i; j>0 && angka[j-1] < angka[j]; j--) // pake && biar syaratnya terlengkapi semua
		{
			int temp = angka[j-1];
			angka[j-1] = angka[j];
			angka[j] = temp;
		}
	}
	
		printf("\n\nsebelum sorting\n");
	for(i=0; i<5; i++)
	{
		printf("%d ", angka[i]);
	}
	return 0;
}
