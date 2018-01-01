#include <stdio.h>
#include <conio.h>
void goster(int a,int b);
main()
{
	int x,y;
	printf("Birinci sayýyý giriniz: ");
	scanf("%i",&x);
	printf("Ýkinci sayýyý giriniz: ");
	scanf("%i",&y);
	goster(x,y);
}
void goster(int a,int b)
{
	if(a>b)
	{
		printf("Birinci sayi ikinci sayýdan daha büyük %i",a);
		
	}
	else
	{
		printf("Ýkici sayi birinci sayýdan daha büyük %i",b);	
	}
	
}
