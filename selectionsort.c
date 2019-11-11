#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int minimum;
	int i,j,temp;
	int angka[5] = {3, 5, 1, 2, 4};
	
	printf("Sebelum Sorting\n ");
	for(i=0; i<5; i++)
	{
		printf("%d ", angka[i]);
	}
	
	printf("\n\nSetelah Sorting\n ");
	for(i=0; i<5; i++)
	{
		minimum = i;
		for(j=i; j<5; j++)
		{
			if (angka[j] < angka[minimum])
			{
				minimum = j;
			}
		}
		temp = angka[i];
		angka[i] = angka[minimum];
		angka[minimum] = temp;
	}
	
	for(i=0; i<5; i++)
	{
		printf("%d ", angka[i]);
	}
	
	return 0;
}
