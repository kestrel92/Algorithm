#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	int sayi1,sayi2,a,s;
	printf("Birinci say�y� giriniz: ");
	scanf("%d",&sayi1);
	printf("�kinci say�y� giriniz: ");
	scanf("%d",&sayi2);
	printf("1-TOPLAMA\n");
	printf("2-�IKARMA\n");
	printf("��lemi se�iniz: ");
	scanf("%d",&a);
	if(a==1)
	{
		s=sayi1+sayi2;
		printf("Sonucunuz %d",s);
	}
	else if(a==2)
	{
		s=sayi1-sayi2;
		printf("Sonucunuz %d",s);
	}
	else
	{
		printf("Do�ru se�im yapmad�n�z.");
	}
	getch();
	
	
}
