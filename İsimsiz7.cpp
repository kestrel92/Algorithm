#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	int deger=0;
	printf("Bir say� giriniz: ");
	scanf("%d",&deger);
	if(deger%deger==0&&deger%2==0)
	{
		printf("Bu say� asal say�d�r.");
	}
	else
	{
		printf("Bu say� asal say� de�ildir.");
	}
	getch();
}
