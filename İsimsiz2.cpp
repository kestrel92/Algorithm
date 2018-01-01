//1den 100 e kadar olan sayýlarýn ortalamasýný bulacak
#include <stdio.h>
#include <conio.h>

int ort();

main()
{
	int ortalama=0;
	ortalama = ort();
	printf("Sayilarýn ortalamasý: %d",ort);
}

int ort()
{
	int toplam=0;
	int ortalamasi=0;
	for(int i=0;i<100;i++)
	{
		toplam+=i;
	}
	ortalamasi=toplam/100;
	return ortalamasi;
	
}
