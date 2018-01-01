#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	FILE *yaz ;
	int x,y;
	yaz=fopen("deneme.txt","w");
	printf("1. sayýyý girin: ");
	scanf("%i",&x);
	printf("2.sayýyý girin: ");
	scanf("%i",&y);
	fputs("iki sayýnýn toplamý \n",yaz);
	fprintf(yaz,"%i + %i = %i \n",x,y,x+y);
	fclose(yaz);
	printf("Bilgiler kaydedildi");
}
