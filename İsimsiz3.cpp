#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	char cumle[100];
	printf("Bir cümle giriniz: ");
	gets(cumle);
	int sayac=0;
	for(int i=0;i<strlen(cumle);i++)
	{
		if(cumle[i]=='a' || cumle[i]=='A')
		{
			sayac++;
		}
	}
	printf("\nGirilen cümlede %i adet a harfi vardýr.",sayac);
	getch();
}
