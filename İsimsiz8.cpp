#include <stdio.h>
#include <conio.h>
main()
{
	int bosluk=1,son=5;
	for(int i=0;i<5;i++)
	{
		for(int b=0;b<bosluk;b++)
		{
			printf(" ");
		}
		for(int t=son;t>=1;t--)
		{
			printf("%d",t);
		}
		for(int s=1;s<=son;s++)
		{
			printf("%d",s);
		}
		son--;
		bosluk++;
		printf("\n");
	}
	getch();
}
