#include <stdio.h>
#include <conio.h>

main()
{
	int sayi[10];
	for(int i=0;i<10;i++)
	{
		sayi[i]=i+10;//SAYÝ[0]
	}
	for(int i=0;i<10;i++)
	{
		printf("%i .indeks elemaninin degeri = %i \n",i,sayi[i]);
		
	}
	getch();
}
