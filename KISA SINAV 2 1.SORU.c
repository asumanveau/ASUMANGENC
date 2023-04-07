#include <stdio.h>
#include <stdlib.h>


/* ADALAR DEN�Z� : 1'LER VE 0'LARDAN OLU�AN B�R HAR�TAYI TEMS�L EDEN 2B MATR�S
VER�LD���NDE ADA SAYISINI D�ND�RME.*/

#define Sat�r 5
#define Sutun 5
  // 2 Boyutlu bir matris dizisi tan�mlan�p haritay� 1ler ve 0 larla doldurulur.
  int mat[Sat�r][Sutun]={{1,1,0,0,1},
	                    {1,0,1,1,0},
						{1,1,1,0,1},
						{0,0,1,1,0},
						{1,0,0,1,0}
						};
 // Daha sonra a�a��da kullan�lacak kontrol dizisi tan�mlan�r.
 int  kontrol[Sat�r][Sutun];

						
						
	// Haritada ki 1 leri kontrol ederken k�s�tlamalar belirlenir.
void k�s�tlama(int y,int d){
	 
	
	 	
	 	if(( y<0 ||y>=Sat�r)||(d<0 || d>= Sutun)||( kontrol [y][d]==1 || mat[y][d]==0)){
	 		return;
		 }
	 	/* K�s�tlamalar belirlendikten sonra 1 sat�r ve sutunun sa��n� solunu 
	 	kontrol edip 1 e e�itmi diye bak�l�r.*/
	 		kontrol [y][d]=1;
	 	
	 	k�s�tlama(y-1,d);
	 		k�s�tlama(y+1,d);
k�s�tlama(y,d-1);
k�s�tlama(y,d+1);
	
	 	
	 
}

//  1 leri bulup sorudaki gibi ada say�lar�n� sayan fonksiyon yaz�l�r.

int ada_say�s�(){
	int sayac=0;
	// 
	for(int y=0;y<Sat�r;y++){
		for(int d=0;d<Sutun;d++){
			if(mat[y][d]==1&&kontrol[y][d]!=1){
			
				sayac++;
					k�s�tlama(y,d);
			}
		}
		}
		return sayac;
		
}




int main() {
  printf("ADALAR DEN�Z� : 1'LER VE 0'LARDAN OLU�AN B�R HAR�TAYI TEMS�L EDEN 2B MATR�S
VER�LD���NDE ADA SAYISINI D�ND�RME.\n");
  //  Matris grafi�i ��kt� olarak yazd�r�l�r.
	printf("matris grafigi:{{1,1,0,0,1},
	                    {1,0,1,1,0},
						{1,1,1,0,1},
						{0,0,1,1,0},
						{1,0,0,1,0}
                    	};

      ");
	// Son olarakda sayd���m�z ada say�lar� yazd�r�l�r.
int sayac=	ada_say�s�();
	
	
	printf("ada say�s�:%d",sayac);


	return 0;
}




