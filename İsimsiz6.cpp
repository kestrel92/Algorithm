#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	float x=0,sonuc=1;
	printf("Fakt�riyeli al�nacak say�y� giriniz: ");
	scanf("%f",&x);
	for(int i=x;i>0;i--)
	{
	sonuc=sonuc*i;
    }
    printf("Fakt�riyel %f ! sonucu %f dir",x,sonuc);
    getch();
}

