#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	char kelime[20];
	printf("Bir kelime giriniz ");
	gets(kelime);// gets metinsel ifadelerde bo�luktan soras�n�da alabilir ama scanf olarak kullan�l�rsa sadece kelime bazl� al�r
	printf("Girilen kelime= %s",kelime);
	getch();
}
