#include <stdio.h>
#include <conio.h>

int topla(int a,int b);

main()
{
	int sayitoplam=0;
	sayitoplam=topla(5,10);
	printf("Ýki sayýnýn toplamý %d: ",sayitoplam);
	getch();
}

int topla(int a, int b)
{
	int toplam=a+b;
	return toplam;
}
