#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
main()
{            
    //bu program rastgele 10 tane say� atay�p bu say�lar i�inden rakamlar� toplam� en b�y�k �ift say�y� bulup rakamlar� top. yaz�yor.
	setlocale(LC_ALL,"Turkish");
	int sayi=0,enbuyuk=0,r1=0,r2=0,r3=0,toplam=0,toplam1=0;
	srand(time(NULL));
	for(int i=0;i<10;i++)
	{
		sayi=100+rand()%899;
		r1=sayi/100;
	    r3=sayi%10;
	    r2=sayi%100-r3;
	    r2=r2/10;
	    toplam=r1+r2+r3;
	    printf("%d \n",sayi);
		if(toplam%2==0)
		{
			if(enbuyuk<sayi)
			{
			enbuyuk=sayi;
			toplam1=toplam;
			}
	}
}
	    printf("Rakamlar� toplam� �ift en b�y�k say�: %d ",enbuyuk);
	    printf(" rakamlar� toplam�: %d \n",toplam1);
	    getch();
}
