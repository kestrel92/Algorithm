#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int matris[10][10];
	int sayi=1,ktoplam=0,stoplam=0,toplam,sayac=0;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			matris[i][j]=sayi;
			sayi++;
		}
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			printf("%d\t",matris[i][j]);
		}
		printf("\n");
	}
	for(int t=0;t<=9;t++)
	{
		ktoplam=matris[t][t]+ktoplam;
	}
	for(int s=9;s>=0;s--)
	{
		stoplam=matris[sayac][s]+stoplam;
		sayac++;
	}
	toplam=stoplam+ktoplam;
	printf("%d kosegenlerin toplami",toplam);
	getch();
}
