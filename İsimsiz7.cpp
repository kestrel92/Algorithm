#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	int s1,s2,secim,s;
	printf("Birinci say�y� giriniz: ");
	scanf("%d",&s1);
	printf("�kinci say�y� giriniz: ");
	scanf("%d",&s2);
    printf("[1] TOPLAMA\n");
    printf("[2] �IKARMA\n");
    printf("[3] �ARPMA\n");
    printf("[4] B�LME\n");
    scanf("%d",&secim);
    switch(secim)
    {
    	case 1:
    		s=s1+s2;
    		printf("%d",s);break;
    		case 2:
    			s=s1-s2;
    			printf("%d",s);break;
    			case 3:
    				s=s1*s2;
    				printf("%d",s);break;
    				case 4:
    					s=s1/s2;
    					printf("%d",s);break;
    					default:
    					printf("Se�iminizde hata var.");break;
	}
	getch();
}
