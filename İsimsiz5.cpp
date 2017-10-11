#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	int x,sayac=0;
	printf("Ýstenilen deðeri giriniz: ");
	scanf("%d",&x);
	for(int i=50;i<200;i++)
	{
		if(i%x==0)
		{
			sayac=sayac+1;
		}
	}
	printf("kalansýz bölünen sayý miktarý %d \n",sayac);
	getch();
}
