#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
main()
{            // bu program rastgele 10 tane say� atay�p bu say�lar i�inden en b�y�k �ift say�y� bulup bu say�n�n rakamlar�n� topluyor.
	setlocale(LC_ALL,"Turkish");
	int sayi=0,enbuyuk=0,r1=0,r2=0,r3=0,toplam=0;
	srand(time(NULL));
	for(int i=0;i<10;i++)
	{
		sayi=100+rand()%899;
		if(sayi%2==0)
		{
			if(sayi>enbuyuk)
			{
			enbuyuk=sayi;
			}
			else
			{
				printf("�ift say�: %d \n",sayi);
			}
		}
		else
		{
			printf("Tek say�: %d \n",sayi);
		}
	}
	    printf("�ift say�: %d \n",enbuyuk);
		r1=enbuyuk/100;
	    r3=enbuyuk%10;
	    r2=enbuyuk%100-r3;
	    r2=r2/10;
	    toplam=r1+r2+r3;
	    printf("En b�y�k �ift say� %d ve rakamlar� toplam�: %d \n",enbuyuk,toplam);
	    getch();
	}
