#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	char harf;
	printf("Lütfen bir harf giriþi yapýnýz: ");
	scanf("%d",&harf);
	switch(harf)
	{
		case'a':
			printf("a harfine bastýnýz\n");
			break;
			case'b':
				printf("b harfine bastýnýz\n");
				break;
				case'c':
					printf("c harfine bastýnýz\n");
					break;
					case'd':
						printf("d harfine bastýnýz\n");
						break;
						default:
							printf("a,b,c,d  harflerinin dýþýnda bir harfe bastýnýz\n");
							break;
	}
	getch();
}
