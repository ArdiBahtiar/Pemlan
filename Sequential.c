#include <stdio.h>
#include <stdlib.h>


int main()
{
	int cari, pilihan, a, b, c, d;
	int arr[9];
	
	for(a=0;a<10;a++)
	{
		arr[a] = rand() %100+10;
	}
	
	for(b=0;b<10;b++)
	{
		printf("%i ",arr[b]);
	}
	

	int ketemu=0;
	printf("\n\n\n1. Sequential Search");
	printf("\n2. Sequential Search Sentinel\n");
	
	
	scanf("%d", &pilihan);
	
	switch(pilihan)
	{
		case 1:
			printf("Nomor Berapa?\n\n");
			scanf("%d",&cari);
			
			for(c=0;c<10;c++)
			{
			if(arr[c] == cari)
				{
				ketemu = 1;
				printf("Ada\n\n");
				break;
				}
			else if(ketemu == 0)
				printf("Tidak Ada\n");
				break;
			}
			
		
		case 2:
			printf("Nomor Berapa?\n\n");
			scanf("%d",&cari);
			
			arr[9] = cari;
			
			int d=0;
				while (d<9)
				{
					if (arr[d] == arr[9])
					{
						break;
					}
					d++;
				}
				
				if (d<9){
					printf("Ada");
				}
				else if (d=9){
					printf("Tidak Ada");
				}
				break;
		
			
	}
	
}
