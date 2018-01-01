#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	FILE *dosya;
	char ad[10];
	int no, notu;
	dosya=fopen("ogrenci.txt","w");
	puts("3 ogrenciye ait bilgileri girin; \n");
	fprintf(dosya,"No\tAd\tNotu\n");
	for(int i=0;i<3;i++)
	{
		printf("%i. ogrencinin numarasi: ",i+1);scanf("%i",&no);
		printf("%i. ogrencinin adi     : ",i+1);scanf("%s",&ad);
		printf("%i. ogrencinin notu    : ",i+1);scanf("%i",&notu);
		printf("\n");
		fprintf(dosya,"%i\t%s\t%i\n",no,ad,notu);
		
	}
	fclose(dosya);
	puts("Bilgiler kaydedildi");
}
