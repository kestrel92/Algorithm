#include <stdio.h>
#include <conio.h>
#include <string.h>

main()
{
	char *str1="Bilgisayar Programi";//*str1 olunca maksimum alabilece�i karakter say�s� kadar bellekten yer ay�r�yor( * ) i�areti y�z�nden str1 de�i�ken isimi 
	char str2[50]="Bilgisyar Programi";//bellekten 50 karakterlik alan alm�� oluyor
	printf("%i",strlen(str1));
	printf("\n%i",strlen(str2));
	getch();
}
