#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	char kelime[20];
	printf("Bir kelime giriniz ");
	gets(kelime);// gets metinsel ifadelerde boþluktan sorasýnýda alabilir ama scanf olarak kullanýlýrsa sadece kelime bazlý alýr
	printf("Girilen kelime= %s",kelime);
	getch();
}
