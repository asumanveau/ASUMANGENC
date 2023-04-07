#include <stdio.h>
#include <stdlib.h>


/* ADALAR DENÝZÝ : 1'LER VE 0'LARDAN OLUÞAN BÝR HARÝTAYI TEMSÝL EDEN 2B MATRÝS
VERÝLDÝÐÝNDE ADA SAYISINI DÖNDÜRME.*/

#define Satýr 5
#define Sutun 5
  // 2 Boyutlu bir matris dizisi tanýmlanýp haritayý 1ler ve 0 larla doldurulur.
  int mat[Satýr][Sutun]={{1,1,0,0,1},
	                    {1,0,1,1,0},
						{1,1,1,0,1},
						{0,0,1,1,0},
						{1,0,0,1,0}
						};
 // Daha sonra aþaðýda kullanýlacak kontrol dizisi tanýmlanýr.
 int  kontrol[Satýr][Sutun];

						
						
	// Haritada ki 1 leri kontrol ederken kýsýtlamalar belirlenir.
void kýsýtlama(int y,int d){
	 
	
	 	
	 	if(( y<0 ||y>=Satýr)||(d<0 || d>= Sutun)||( kontrol [y][d]==1 || mat[y][d]==0)){
	 		return;
		 }
	 	/* Kýsýtlamalar belirlendikten sonra 1 satýr ve sutunun saðýný solunu 
	 	kontrol edip 1 e eþitmi diye bakýlýr.*/
	 		kontrol [y][d]=1;
	 	
	 	kýsýtlama(y-1,d);
	 		kýsýtlama(y+1,d);
kýsýtlama(y,d-1);
kýsýtlama(y,d+1);
	
	 	
	 
}

//  1 leri bulup sorudaki gibi ada sayýlarýný sayan fonksiyon yazýlýr.

int ada_sayýsý(){
	int sayac=0;
	// 
	for(int y=0;y<Satýr;y++){
		for(int d=0;d<Sutun;d++){
			if(mat[y][d]==1&&kontrol[y][d]!=1){
			
				sayac++;
					kýsýtlama(y,d);
			}
		}
		}
		return sayac;
		
}




int main() {
  printf("ADALAR DENÝZÝ : 1'LER VE 0'LARDAN OLUÞAN BÝR HARÝTAYI TEMSÝL EDEN 2B MATRÝS
VERÝLDÝÐÝNDE ADA SAYISINI DÖNDÜRME.\n");
  //  Matris grafiði çýktý olarak yazdýrýlýr.
	printf("matris grafigi:{{1,1,0,0,1},
	                    {1,0,1,1,0},
						{1,1,1,0,1},
						{0,0,1,1,0},
						{1,0,0,1,0}
                    	};

      ");
	// Son olarakda saydýðýmýz ada sayýlarý yazdýrýlýr.
int sayac=	ada_sayýsý();
	
	
	printf("ada sayýsý:%d",sayac);


	return 0;
}




