#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()// bu program program7 nin for d�ng�s� ile yap�l���d�r:(daha do�ru)
{
	setlocale(LC_ALL,"Turkish");
	int deger=0,sayac=0;
	printf("Bir say� giriniz: ");
	scanf("%d",&deger);
	for(int i=2;i<deger;i++)
	{
		if(deger%i==0)
		{
			sayac++;
		}
	}
	if(sayac==0)
	{
		printf("Girilen say� asald�r");
	}
	else
	{
		printf("Girilen say� asal de�ildir");
	}
}
