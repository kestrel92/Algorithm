#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	char cumle[100];
	printf("Bir C�mle Giriniz: ");
	gets(cumle);
	int sayac=0;
	for(int i=0;i<strlen(cumle);i++)
	{
		printf("%c",cumle[i]);
		if(cumle[i]==' ')
		{
			printf("\n");
			sayac++;
		}
	}
	printf("\nC�mledeki bu  kadar kelime vard�r %i",sayac+1);
}
