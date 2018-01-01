#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	FILE *ogrencinotlar;
	char ad[10];
	int notu=0,nosu=0;
	ogrencinotlar=fopen("ogrencinotlar.txt","r");
	while(!feof(ogrencinotlar))
	{
		fscanf(ogrencinotlar,"%i\t%s\t%i\n",&nosu,&ad,&notu);
		printf("%i\t%s\t%i\n",nosu,ad,notu);
		
	}
	fclose(ogrencinotlar);
	getch();
}
