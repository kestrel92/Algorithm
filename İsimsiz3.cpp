#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"Turkish");
	int sayi=0,ort=0,sayac=0,toplam=0;
	srand(time(NULL));
	for(int i=0;i<10;i++)
	{
		sayi=67+rand()%115;
		if(sayi%2==0)
		{
			printf("�ift say�: %d \n",sayi);
			sayac=sayac+1;
			toplam=toplam+sayi;
		}
		else
		{
			printf("Tek say�: %d \n",sayi);
		}
	}
		ort=toplam/sayac;
		printf("�ift say�lar�n ortalamas�: %d \n",ort);
}
