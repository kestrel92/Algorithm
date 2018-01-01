#include <stdio.h>
#include <conio.h>
struct kayitlar{
	char ad[10];
	int yas;
	int notu;
}ogrenciler[5];
main()
{
	for(int i=0;i<5;i++)
	{
		printf("\n %d . ogrencinin bilgileri\n",i+1);
		printf("Ogrenci adi : ");
		scanf("%s",&ogrenciler[i].ad);
		printf("Ogrenci yasi : ");
		scanf("%i",&ogrenciler[i].yas);
		printf("Ogrenci notu : ");
		scanf("%i",&ogrenciler[i].notu);
	}
	for(int i=0;i<5;i++)
	{
		printf("%i . ogrenci %s, %i yasindadir ve notu %i'dir.\n",i+1,ogrenciler[i].ad,ogrenciler[i].yas,ogrenciler[i].notu);
	}
}
