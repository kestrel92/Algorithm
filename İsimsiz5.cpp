#include <stdio.h>
#include <conio.h>
#include <string.h>

main() // Soru girilen c�mle i�erisinde en uzun kelimeyi bulup yazd�racak
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
