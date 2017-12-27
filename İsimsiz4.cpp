#include <stdio.h>
#include <conio.h>
main()
{
	int bosluk=5,adet=1;
	for(int i=0;i<5;i++)
	{
		for(int a=bosluk;a>0;a--)
		{
			printf(" ");
		}
		for(int j=0;j<adet;j++)
		{
			printf("*");
		}
		adet+=2;
		bosluk--;
		printf("\n");
	}
	getch();
}
