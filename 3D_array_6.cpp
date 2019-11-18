#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
	int ukuran[3][3][3]={{{3,4,6},{6,2,5},{2,2,8}},{{3,3,3},{2,4,2},{3,4,5}},{{1,2,8},{1,5,7},{9,4,4}}};
	float hasil;
	int x,y,z;
	
	printf("Angka : ");
	
	for(x=0;x<3;x++){
		printf("\ndata ke-%d\n",x+1);
		
		for(y=0;y<3;y++){
			printf("\nbaris ke-%d :",y+1);
			
			for(z=0;z<3;z++){
				printf("  %d", ukuran[x][y][z]);
			}
			
			printf("\n");
		}
		printf("=======================");
		printf("=    Press any key    =");
		printf("=======================");
		getch();
	}
	
	for(x=0; x<3; x++){
		for(y=1; y<3; y++){
			hasil = hasil + sqrt((pow((ukuran[x][y][0]-ukuran[x][y-1][0]),2))+(pow((ukuran[x][y][1]-ukuran[x][y-1][1]),2))+(pow((ukuran[x][y][2]-ukuran[x][y-1][2]),2)));
		}
		printf("\nPanjang ke-%i : %f\n", x+1, hasil);
		hasil=0;
	}
}
