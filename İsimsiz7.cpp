#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	int s1,s2,secim,s;
	printf("Birinci sayýyý giriniz: ");
	scanf("%d",&s1);
	printf("Ýkinci sayýyý giriniz: ");
	scanf("%d",&s2);
    printf("[1] TOPLAMA\n");
    printf("[2] ÇIKARMA\n");
    printf("[3] ÇARPMA\n");
    printf("[4] BÖLME\n");
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
    					printf("Seçiminizde hata var.");break;
	}
	getch();
}
