#include <stdio.h>
#include <conio.h>
main()
{
	int bosluk=17,adet1=1;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<adet1;j++)
		{
			printf("*");
		}
			for(int a=0;a<bosluk;a++)
			{
				printf(" ");
			}
			for(int j=0;j<adet1;j++)
		    {
			printf("*");
			}
		adet1+=2;
		bosluk-=4;
		printf("\n");
	}
	getch();
}
