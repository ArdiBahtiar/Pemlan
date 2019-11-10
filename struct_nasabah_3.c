#include<stdio.h>
#include<stlib.h>
#include<math.h>
#include<string.h>
#include<conio.h>

struct alamat{
	char nam_jal[20];
	char kota[20];
	char prov[20];
};

struct tgl_lahir{
	int tanggal;
	int bulan;
	int tahun;
};

struct nasabah{
	char no_rek[10];
	char nama[20];
	char nam_bank[20];
	long int saldo;
	struct tgl_lahir tgl;
	struct alamat alamat;
};

int main()
{
	int pilihan,terbesar,terkecil,total,ulang,data,data2,umur;
	char cari_rek[10];

while (ulang==1){
	printf("SELAMAT DATANG DI BANK DUNIA LAIN\n");
	printf("Apa yang akan anda lakukan?\n");
	printf("1. Masukkan Data\n");
	printf("2. Tunjukkan Data Nasabah\n");
	printf("3. Cari Data Nasabah\n");
	printf("4. Total Saldo semua Nasabah\n");
	printf("5. Tampilkan Saldo Nasabah > 19 Tahun\n");
	printf("6. Saldo Tertinggi dan Terendah\n");
	printf("Pilihan Anda??\n");
	scanf("%d",&pilihan);

	switch(pilihan){

		case 1:
			printf("Masukkan Nomor Rekening Anda :\n");
			gets(nasabah[data].no_rek);
			printf("Masukkan Nama Anda :\n");
			gets(nasabah[data].nama);
			printf("Nama Bank Anda adalah :\n");
			gets(nasabah[data].nam_bank);
			printf("Saldo anda?\n");
			gets(nasabah[data].saldo);
			printf("Tanggal Lahir\n\n");
			printf("Tanggal?\n");
			gets(nasabah[data].tgl.tanggal);
			printf("Bulan?\n");
			gets(nasabah[data].tgl.bulan);
			printf("Tahun?\n");
			gets(nasabah[data].tgl.tahun);
			printf("Alamat Nasabah\n\n");
			printf("Nama Jalan?\n");
			gets(nasabah[data].alamat.nam_jal);
			printf("Kota?\n");
			gets(nasabah[data].alamat.kota);
			printf("Provinsi?\n");
			gets(nasabah[data].alamat.prov);
			break;
			
			case 2:
				for(data2=0;data2<data;data2++)
				{
					printf("Nomor Rekening			:%s\n",nasabah[data].no_rek);
					printf("Nama					:%s\n",nasabah[data].nama);
					printf("Nama Bank				:%s\n",nasabah[data].nam_bank);
					printf("Saldo					:%d\n",nasabah[data].saldo);
					printf("Tgl Lahir				:%d, %d, %d",nasabah[data].tgl.tanggal, nasabah[data].tgl.bulan, nasabah[data].tgl.tahun);
					printf("Alamat					:%s, %s, %s",nasabah[data].alamat.nam_jal, nasabah[data].alamat.kota, nasabah[data].alamat.prov);
				} break;
				
				case 3:
					printf("Nomor Rekening Nasabah yang dicari	:\n");
					gets(cari_rek);
					
					
				
					case 4:
						for(data2=0;data2;data2++)
						{
							total = total + nasabah[data2].saldo;
						}
							printf("Total Saldo adalah %d",total);
							break;
							
							case 5:
								for(data2=0;data2<data;data2++){
								umur = 2019-nasabah[data2].tgl.tahun;
								if(umur < 19)
								{
								printf("Nomor Rekening			: %s\n", nasabah[data2].no_rek);
								printf("Nama					: %s\n", nasabah[data2].nama);
								printf("Nama bank				: %s\n", nasabah[data2].nam_bank);
								printf("Saldo					: %f\n", nasabah[data2].saldo;
								printf("Tanggal lahir			: %d, %d, %d\n", nasabah[data2].tgl.tanggal, nasabah[data2].tgl.bulan, nasabah[data2].tgl.tahun);
								printf("Alamat					: %s %s %s\n", nasabah[data2].alamat.nam_jal, nasabah[data2].alamat.kota, nasabah[data2].alamat.prov);
								}
								}break;
	





}return 0;
