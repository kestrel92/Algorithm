#include <stdio.h>
#include <conio.h>
#include <string.h>

main() // Soru girilen cümle içerisinde en uzun kelimeyi bulup yazdýracak
{
	char cumle[100],enuzunkelime[30];
	printf("Bir cumle giriniz: ");
	gets(cumle);
	int sayac=0,uzunluk=0,enuzun=0,kelime;
	for(int i=0;i<strlen(cumle);i++)
	{
		if(cumle[i]==' ');
		{
			sayac++;
			kelime=cumle[i];
		}
		if(kelime>uzunluk)
		{
			enuzun=kelime;
		}
	}
}
