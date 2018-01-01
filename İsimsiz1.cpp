#include <stdio.h>
#include <conio.h>
struct kayit
{
	char ad[10];
	int no;
	int sinif;
};
main()
{
	struct kayit ogrenci;
	printf("ogrenci Nosu : ");
	scanf("%i",&ogrenci.no);
	printf("Ogrenci adi : ");
	scanf("%i",&ogrenci.ad);
	printf("Ogrenci sinifi : ");
	scanf("%i",&ogrenci.sinif);
	printf("\nGirilen bilgiler /****");
	printf("\nNo  : %i",ogrenci.no);
	printf("\nAdi  : %i",ogrenci.ad);
	printf("\nSinif  : %i",ogrenci.sinif);
	
}
