#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	int sayi=0;
	printf("Haftan�n g�n say�s�n� girin: ");
	scanf("%d",&sayi);
	switch(sayi)
	{
		case 1:
			printf("Pazartesi");break;
			case 2:
				printf("Sal�");break;
				case 3:
					printf("�ar�amba");break;
					case 4:
						printf("Per�embe");break;
						case 5:
							printf("Cuma");break;
							case 6:
								printf("Cumartesi");break;
								case 7:
									printf("Pazar");break;
									
	}
	getch();
}
