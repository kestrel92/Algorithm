#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	int sayi1;
	printf("sayýyý girin: ");
	scanf("%d",sayi1);
	if(sayi1%2==0)
	{
		printf("SAYI çift");
	}
	else
	{
		printf("SAYI tek");
	}
	getch();
}
