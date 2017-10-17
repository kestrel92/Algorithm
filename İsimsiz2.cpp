#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
main(){   // program 25 ile 250 arasýnda rastgele 20 sayý ürettirip þarta baðlaaycaðýz
int sayi=0;
srand(time(NULL));// burasý döngülerden önce kullanýlýr eðer içinde kullanýlýrsa her zaman ayný sayýyý atama yaparmýþ
for(int i=0;i<20;i++)
{
	sayi=25+rand()%225;
	if(sayi>100&&sayi<175)
	{
		if(sayi%2==0)
		{
			printf("\n sayi:%d",sayi);
		}
	}
}
getch();
	
}
