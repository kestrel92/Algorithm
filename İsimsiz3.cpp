#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	char cumle[100];
	printf("Bir c�mle giriniz: ");
	gets(cumle);
	int sayac=0;
	for(int i=0;i<strlen(cumle);i++)
	{
		if(cumle[i]=='a' || cumle[i]=='A')
		{
			sayac++;
		}
	}
	printf("\nGirilen c�mlede %i adet a harfi vard�r.",sayac);
	getch();
}
