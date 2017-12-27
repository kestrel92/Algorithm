#include <stdio.h>
#include <conio.h>
main()
{
	int deger=1;
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<deger;j++)
		{
			printf("*");
		}
		printf("\n");
		deger++;
	}
	getch();
}
