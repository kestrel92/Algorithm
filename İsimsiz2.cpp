//1den 100 e kadar olan say�lar�n ortalamas�n� bulacak
#include <stdio.h>
#include <conio.h>

int ort();

main()
{
	int ortalama=0;
	ortalama = ort();
	printf("Sayilar�n ortalamas�: %d",ort);
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
