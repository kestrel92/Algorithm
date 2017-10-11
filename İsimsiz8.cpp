#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()// bu program program7 nin for döngüsü ile yapýlýþýdýr:(daha doðru)
{
	setlocale(LC_ALL,"Turkish");
	int deger=0,sayac=0;
	printf("Bir sayý giriniz: ");
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
		printf("Girilen sayý asaldýr");
	}
	else
	{
		printf("Girilen sayý asal deðildir");
	}
}
