#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
void ekran(int adet);
int tahmin(int tahmin);
int rastgele();
main()
{
	int sayi=0,adet=0;
	sayi=rastgele();
	adet=tahmin(sayi);
	ekran(adet);
	getch();
}
int rastgele()
{
	srand(time(NULL));
	int rastgele1;
	rastgele1=1+rand()%99;
	return rastgele1;
}
int tahmin(int)
{
	
}
