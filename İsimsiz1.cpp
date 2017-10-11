#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	string a;
	printf("100 kere yazýlmasýný istediðiniz kelimeyi giriniz:");
	scanf("%s",a);
	for (int i=0;i<=100;i++)
	{
		printf("%s \n",a);
	}
	getch();
}
