#include <stdio.h>
#include <conio.h>
#include <locale.h>
struct dogum_tarihi
{
	int gun,ay,yil;	
};
struct sahis_bilgileri{
	char isim[50];
	int boy;
	struct dogum_tarihi tarih;
}kisi[3];
main()
{
	setlocale(LC_ALL,"Turkish");
	printf("Ki�i bilgileri*** \n");
	for(int i=0;i<3;i++)
	{
		printf("\nKi�inin ad�: ");
		scanf("%s",&kisi[i].isim);
		printf("\nKi�inin boyu: ");
		scanf("%i",&kisi[i].boy);
		printf("\nKi�inin dogum tarihi/G�N: ");
		scanf("%i",&kisi[i].tarih.gun);
		printf("\nKi�inin dogum tarihi/AY: ");
		scanf("%i",&kisi[i].tarih.ay);
		printf("\nKi�inin dogum tarihi/YIL: ");
		scanf("%i",&kisi[i].tarih.yil);
	}
	for(int i=0;i<3;i++)
	{
		printf("%i . kisinin ad� %s , boyu %i, dogumtarihi %i/%i/%i 'dir.\n",i+1,kisi[i].isim,kisi[i].boy,kisi[i].tarih.gun,kisi[i].tarih.ay,kisi[i].tarih.yil);
	}
}

