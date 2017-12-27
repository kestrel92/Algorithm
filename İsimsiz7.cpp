#include <stdio.h>
#include <conio.h>
main()
{
	int son=5;
	for(int i=0;i<5;i++)
	{
		for(int a=1;a<=son;a++)
		{
			printf("%d",a);
		}
		son--;
		printf("\n");
	}
	getch();
}
