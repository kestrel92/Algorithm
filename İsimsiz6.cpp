#include <stdio.h>
#include <conio.h>
main()
{
	int bosluk=1,adet=9;
	int bosluk1=5,adet1=1;
	for(int i=0;i<5;i++)
	{
		for(int i=0;i<bosluk;i++)
		{
			printf(" ");
		}
		for(int j=0;j<adet;j++)
		{
			printf("*");
		}
		adet-=2;
		bosluk++;
		printf("\n");
	}
	for(int i=0;i<5;i++)
	{
		for(int i=0;i<bosluk1;i++)
		{
			printf(" ");
		}
		for(int j=0;j<adet1;j++)
		{
			printf("*");
		}
		adet+=2;
		bosluk--;
		printf("\n");
	}
	getch();
}
