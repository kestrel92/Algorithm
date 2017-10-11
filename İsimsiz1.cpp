#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	int sayi1, sayi2;
	printf("Birinci sayýyý giriniz: ");
	scanf("%d",&sayi1);
	printf("Ýkinci sayýyý giriniz: ");
	scanf("%d",&sayi2);
	if(sayi1>sayi2)
	{
		printf("Birinci sayý ikinci sayýdan büyük");
	}
	else if(sayi2>sayi1)
	{
		printf("Ýkinci sayý birinci sayýdan büyük");
	}
	else
	{
		printf("Her iki sayýda birbirine eþittir.");
	}
	getch();
	
}
