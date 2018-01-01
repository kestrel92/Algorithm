#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	srand(time(NULL));
	int dizi[15],sayac=0,toplam=0;
	for(int i=0;i<15;i++)
	{
		dizi[i]=10+rand()%250;
	}
	for(int a=2;a<dizi[i];a++)
	{
		for(dizi[i]%a==0)
		{
			sayac++;
		}
		if(sayac==0)
		{
			printf("%i\n",dizi[i]);
			
		}
		sayac=0;
	}
	print("Asal sayilarin toplami = %i",toplam);
	getch();
}
