#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	char harf;
	printf("L�tfen bir harf giri�i yap�n�z: ");
	scanf("%d",&harf);
	switch(harf)
	{
		case'a':
			printf("a harfine bast�n�z\n");
			break;
			case'b':
				printf("b harfine bast�n�z\n");
				break;
				case'c':
					printf("c harfine bast�n�z\n");
					break;
					case'd':
						printf("d harfine bast�n�z\n");
						break;
						default:
							printf("a,b,c,d  harflerinin d���nda bir harfe bast�n�z\n");
							break;
	}
	getch();
}
