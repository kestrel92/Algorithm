#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	for(int i=0;i<100;i++)
	if(i%5==0&&i%2!=0)
	{
		printf("Sayý %d \n",i);
	}
	getch();
}
