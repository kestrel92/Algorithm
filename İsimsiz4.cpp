#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	char kelime[20]="";
	int d=0;
	printf("bir kelime girin: ");
	scanf("%s",kelime);
	printf("döngünün tekrar sayýsýný girin: ");
	scanf("%d",&d);
	for(int i=0;i<d;i++)
	{
		printf("%s \n",kelime);
	}
	getch();
}
