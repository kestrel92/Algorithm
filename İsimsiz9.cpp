#include <stdio.h>
#include <conio.h>
main()
{
	int son=5,bosluk=1,bas=5,bosluk1=5;
	for(int i=0;i<5;i++)
	{
		for(int b=0;b<bosluk;b++)
		{
			printf(" ");
		}
		for(int s=1;s<=son;s++)
		{
			printf("%d",s);
		}
		son--;
		bosluk++;
		printf("\n");
	}
	for(int d=0;d<5;d++)
	{
		for(int i=0;i<bosluk1;i++)
		{
			printf(" ");
		}
		for(int s1=bas;s1<=5;s1++)
		{
			printf("%d",s1);
		}
		bas--;
		bosluk1--;
		printf("\n");
	}
	getch();
}
