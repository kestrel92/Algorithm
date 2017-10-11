#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	int deger=0;
	printf("Bir sayý giriniz: ");
	scanf("%d",&deger);
	if(deger%deger==0&&deger%2==0)
	{
		printf("Bu sayý asal sayýdýr.");
	}
	else
	{
		printf("Bu sayý asal sayý deðildir.");
	}
	getch();
}
