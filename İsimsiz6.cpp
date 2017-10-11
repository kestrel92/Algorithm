#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	float x=0,sonuc=1;
	printf("Faktöriyeli alýnacak sayýyý giriniz: ");
	scanf("%f",&x);
	for(int i=x;i>0;i--)
	{
	sonuc=sonuc*i;
    }
    printf("Faktöriyel %f ! sonucu %f dir",x,sonuc);
    getch();
}

