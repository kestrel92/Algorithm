#include <stdio.h>
#include <conio.h>
void goster(int a,int b);
main()
{
	int x,y;
	printf("Birinci say�y� giriniz: ");
	scanf("%i",&x);
	printf("�kinci say�y� giriniz: ");
	scanf("%i",&y);
	goster(x,y);
}
void goster(int a,int b)
{
	if(a>b)
	{
		printf("Birinci sayi ikinci say�dan daha b�y�k %i",a);
		
	}
	else
	{
		printf("�kici sayi birinci say�dan daha b�y�k %i",b);	
	}
	
}
