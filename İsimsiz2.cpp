#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
main(){   // program 25 ile 250 aras�nda rastgele 20 say� �rettirip �arta ba�laayca��z
int sayi=0;
srand(time(NULL));// buras� d�ng�lerden �nce kullan�l�r e�er i�inde kullan�l�rsa her zaman ayn� say�y� atama yaparm��
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
