#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	int s1,s2,s3,s4,s5;
	printf("1.say�y� giriniz: ");
	scanf("%d",&s1);
	printf("2.say�y� giriniz: ");
	scanf("%d",&s2);
	printf("3.say�y� giriniz: ");
	scanf("%d",&s3);
	printf("4.say�y� giriniz: ");
	scanf("%d",&s4);
	printf("5.say�y� giriniz: ");
	scanf("%d",&s5);
	if(s1>s2&&s1>s3&&s1>s4&&s1>s5)
	{
		printf("1.say� en b�y�kt�r.");
	}
	else if(s2>s1&&s2>s3&&s2>s4&&s2>s5)
	{
		printf("2.say� en b�y�kt�r.");
	}
	else if(s3>s1&&s3>s2&&s3>s4&&s3>s5)
	{
		printf("3.say� en b�y�kt�r.");
	}
	else if(s4>s1&&s4>s2&&s4>s3&&s4>s5)
	{
		printf("4.say� en b�y�kt�r.");
	}
	else
	{
		printf("5.say� en b�y�kt�r.");
	}
	getch();
}
