#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
main()
{            // bu program rastgele 10 tane sayý atayýp bu sayýlar içinden en büyük çift sayýyý bulup bu sayýnýn rakamlarýný topluyor.
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
				printf("Çift sayý: %d \n",sayi);
			}
		}
		else
		{
			printf("Tek sayý: %d \n",sayi);
		}
	}
	    printf("Çift sayý: %d \n",enbuyuk);
		r1=enbuyuk/100;
	    r3=enbuyuk%10;
	    r2=enbuyuk%100-r3;
	    r2=r2/10;
	    toplam=r1+r2+r3;
	    printf("En büyük çift sayý %d ve rakamlarý toplamý: %d \n",enbuyuk,toplam);
	    getch();
	}
