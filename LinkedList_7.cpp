#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


//========================================================


struct node {
         int data;
    struct node *next;
};
typedef struct node node;


node *createNode(void);
void tambahAwal(node **head);
void tambahData(node **head);
void tranverse(node *head);
void insertNode(node **head, node *pPre, node *pNew);
void deleteNode(node **head, node *pPre, node *pCur);
void hapusData(node **head);
void deleteList(node *head);
void jumlahkan(node *head);
void hapusdataawal(node **head);
void hapusdataakhir(node **head);


//========================================================


int main()
{
  node *head;
  char pilih;


  head = NULL;
  do{
    //untuk membersihkan tampilan
    //untuk windows
    system("cls");
    //untuk linux
     //system("clear");
     
     printf("masukkan pilihan\n");
     printf("1. tambah data di awal\n");
     printf("2. tambah data di tengah list\n");
     printf("3. tambah data di akhir\n");
     printf("4. hapus data\n");
     printf("5. hapus data awal\n");
     printf("6. hapus data akhir\n");
	 printf("7. cetak isi list\n");
     printf("8. jumlahkan semua data\n");
     printf("MASUKKAN PILIHAN (tekan q untuk keluar) : ");
     fflush(stdin);
     scanf("%c", &pilih);
     if (pilih == '1')
                     tambahAwal(&head);
     else if (pilih == '2')
                        tambahData(&head);
     else if (pilih == '4')
                     hapusData(&head);
     else if (pilih == '7'){
                     tranverse(head);
         getch();
     }
     else if (pilih == '8'){
                     jumlahkan(head);
         getch();
     }
     else if (pilih == '5'){
     				hapusdataawal(&head);
     	 getch();
	 }
	 else if (pilih == '6'){
     				hapusdataakhir(&head);
     	 getch();
	 }
  } while (pilih != 'q');
  deleteList(head);
}


//========================================================


node *createNode(void){
  node *ptr;


  ptr = (node *)malloc(sizeof(node));
  return(ptr);
}


//========================================================


void tambahAwal(node **head){
  int bil;
  node *pTemp;


  //untuk membersihkan tampilan
  //untuk windows
  system("cls");
  //untuk linux
  //system("clear");
  fflush(stdin);
  printf("masukkan bilangan integer : ");
  fflush(stdin);
  scanf("%d", &bil);
  pTemp = (node *)malloc(sizeof(node));


  if (pTemp != NULL){
                  pTemp->data = bil;
      pTemp->next = NULL;
      insertNode(head, NULL, pTemp);
  }
  else{
      printf("Alokasi memori gagal");
      getch();
  }
}


//========================================================


void tambahData(node **head){
  int pos, bil;
  node *pTemp, *pCur;


  //untuk membersihkan tampilan
  //untuk windows
  system("cls");
  //untuk linux
  //system("clear");
  
  tranverse(*head);
  printf("\nposisi penyisipan setelah data bernilai : ");
  fflush(stdin);
  scanf("%d", &pos);
  printf("\nData yang disisipkan : ");
  fflush(stdin);
  scanf("%d", &bil);


  pCur = *head;
  while (pCur != NULL && pCur -> data != pos) {
    pCur = pCur -> next;
  }


  pTemp = (node *)malloc(sizeof(node));


  if (pCur == NULL){
     printf("\nnode tidak ditemukan");
     getch();
  }
  else if (pTemp == NULL){
     printf("\nalokasi memeori gagal");
     getch();
  }
  else{
     pTemp->data = bil;
     pTemp->next = NULL;
     insertNode(head, pCur, pTemp);
  }
}


//========================================================


void tranverse(node *head){
   //traverse linked list
        node *pWalker;


    system("cls");
        pWalker = head;
        while (pWalker != NULL){
           printf("%d->", pWalker -> data);
           pWalker = pWalker -> next;
        }
   printf("NULL");
}


//========================================================


void insertNode(node **head, node *pPre, node *pNew){
    if (pPre == NULL){
       //menambahkan diawal atau pada empty list
            pNew -> next = *head;
       *head = pNew;
    }
    else {
       //menambahkan node di tengah atau di akhir
       pNew -> next = pPre -> next;
       pPre -> next = pNew;
   }
}


//========================================================


void deleteNode(node **head, node *pPre, node *pCur)
{
        if (pPre == NULL)
           *head = pCur -> next;
        else
       pPre -> next = pCur -> next;
        free(pCur);
}


//========================================================


void hapusData(node **head)
{
  int pos;
  node *pCur, *pPre;


  //clrscr();
  system("cls");
  tranverse(*head);
  printf("\nData yang akan dihapus : ");
  fflush(stdin);
  scanf("%d", &pos);


  pPre = NULL;
  pCur = *head;
  //cari target value sampai ditemukan atau sampai pada akhir list
  while (pCur != NULL && pCur -> data != pos) {
    pPre = pCur;
    pCur = pCur -> next;
  }


  if (pCur == NULL){
     printf("\nnode tidak ditemukan");
     getch();
  }
  else
     deleteNode(head, pPre, pCur);
}


//========================================================


void deleteList(node *head){
  node *pTemp;




  while(head != NULL){
     pTemp = head;
     head = head->next;
     free(pTemp);
  }
}


void jumlahkan(node *head){
   //traverse linked list
    node *pWalker;
    int sum;
    system("cls");
    pWalker = head;
    while (pWalker != NULL){
        printf("%d + ", pWalker -> data);
        sum = sum + pWalker -> data;
        pWalker = pWalker -> next;
    }
   printf("NULL");
   printf("\nJumlah = %d",sum);
}

void hapusdataawal(node **head){
	node *pTemp;
	system("cls");
	if (*head != NULL){
		pTemp = *head;	
		*head = pTemp -> next;
		free(pTemp);
		printf("Sukses menghapus data awal");
	}
	else printf("NULL");
}

void hapusdataakhir(node **head){
	node *pTemp;
	node *pEkor;
	system("cls");
	if (*head != NULL){
		pEkor = *head;
		pTemp = NULL;
		while (pEkor -> next != NULL){
			pTemp = pEkor;	
			pEkor = pEkor -> next;
		}
		deleteNode(head, pTemp, pEkor);
		printf("Sukses menghapus data akhir");
	}
	else printf("NULL");
}
