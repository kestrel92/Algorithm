#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	FILE *ogrencinotlar;
	char ad[10];
	char isim1[20];
	int notu=0,nosu=0,enbuyuk=0,enkucuk=100,sayac=0,ort=0,top=0;
	int notu1[4];
	ogrencinotlar=fopen("ogrencinotlar.txt","r");
	while(!feof(ogrencinotlar))
	{
		fscanf(ogrencinotlar,"%i\t%s\t%i\n",&nosu,&ad,&notu);
		top+=notu;
	    if(enbuyuk<notu)
	    {
	    	enbuyuk=notu;
	    	strcpy(isim1,ad);
		}
		
		if(enkucuk>=notu)
		{
			enkucuk=notu;
		}
		sayac++;
    }
	ort=top/sayac;
	printf("En y�ksek not: %i\n En d���k not: %i\n Not ortalamas�: %i\n",enbuyuk,enkucuk,ort);
	printf("En y�ksek notu alan ki�i = %s",isim1);
	fclose(ogrencinotlar);
	getch();
}
