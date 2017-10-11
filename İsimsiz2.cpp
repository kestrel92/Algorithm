#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
		setlocale(LC_ALL,"Turkish");
	    int toplam=0;
		for (int i=1;i<=10;i++)
		{
			toplam++;
		}
		printf("Toplam=%d \n",toplam);
		getch();
}

	
