#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	int sayi1, sayi2;
	printf("Birinci say�y� giriniz: ");
	scanf("%d",&sayi1);
	printf("�kinci say�y� giriniz: ");
	scanf("%d",&sayi2);
	if(sayi1>sayi2)
	{
		printf("Birinci say� ikinci say�dan b�y�k");
	}
	else if(sayi2>sayi1)
	{
		printf("�kinci say� birinci say�dan b�y�k");
	}
	else
	{
		printf("Her iki say�da birbirine e�ittir.");
	}
	getch();
	
}
