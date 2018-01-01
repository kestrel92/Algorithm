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
	printf("Kiþi bilgileri*** \n");
	for(int i=0;i<3;i++)
	{
		printf("\nKiþinin adý: ");
		scanf("%s",&kisi[i].isim);
		printf("\nKiþinin boyu: ");
		scanf("%i",&kisi[i].boy);
		printf("\nKiþinin dogum tarihi/GÜN: ");
		scanf("%i",&kisi[i].tarih.gun);
		printf("\nKiþinin dogum tarihi/AY: ");
		scanf("%i",&kisi[i].tarih.ay);
		printf("\nKiþinin dogum tarihi/YIL: ");
		scanf("%i",&kisi[i].tarih.yil);
	}
	for(int i=0;i<3;i++)
	{
		printf("%i . kisinin adý %s , boyu %i, dogumtarihi %i/%i/%i 'dir.\n",i+1,kisi[i].isim,kisi[i].boy,kisi[i].tarih.gun,kisi[i].tarih.ay,kisi[i].tarih.yil);
	}
}

