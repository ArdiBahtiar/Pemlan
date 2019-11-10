#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int pangkat(int x, int y)
{
	if (y == 0) {
		return 1;
	}
	else {
		return x * pangkat (x,y-1);
	}
}

int main()
{
	int x,y;
	//int ha = 1;
	//int i;
	
	printf("Masukkan Bilangan yang akan dipangkat :\n ");
	scanf("%d",&x);
	printf("Dipangkat berapa? \n");
	scanf("%d",&y);
	
	printf("Hasil perpangkatannya adalah : \n %d", pangkat(x,y)); //rekursif
	
	
	
	/*for(i=0;i<y;i++){
		ha=ha*x;
	}*/
	
	//iterasi
	
	return 0;
}
