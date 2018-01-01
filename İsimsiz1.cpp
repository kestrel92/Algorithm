#include <stdio.h>
#include <conio.h>
#include <string.h>

main()
{
	char *str1="Bilgisayar Programi";//*str1 olunca maksimum alabileceði karakter sayýsý kadar bellekten yer ayýrýyor( * ) iþareti yüzünden str1 deðiþken isimi 
	char str2[50]="Bilgisyar Programi";//bellekten 50 karakterlik alan almýþ oluyor
	printf("%i",strlen(str1));
	printf("\n%i",strlen(str2));
	getch();
}
