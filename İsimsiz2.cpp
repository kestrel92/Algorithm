#include <stdio.h>
#include <conio.h>
main()
{
	int deger=7;
	for(int i=7;i>=0;i--)
	{
		for(int j=deger;j>=0;j--)
		{
			printf("*");
		}
		printf("\n");
		deger--;
	}
	getch();
}
