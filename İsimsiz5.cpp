#include <stdio.h>
#include <conio.h>
#include <locale.h>
		struct ders{
			int saat;
			char gun[20];
		};
		struct ogretim_elemanlari{
		char ders_adi[20];
		char ders_hocasi[20];
		};
		struct universite
{
	char fakulte_adi[100];
	char bolum_adi[20];
	struct ders dbilgileri;
	struct ogretim_elemanlari ebilgileri;
}uni[2];
main(){
	setlocale(LC_ALL,"Turkish");
	for(int i=0;i<2;i++)
	{
		printf("Fak�lte Ad�n� Giriniz: \n");
		scanf("%s",&uni[i].fakulte_adi);
		printf("B�l�m Ad�n� Giriniz: \n");
		scanf("%s",&uni[i].bolum_adi);
		printf("Dersin Ad�n� Giriniz: \n");
		scanf("%c",uni[i].ebilgileri.ders_adi);
		printf("Dersin hocas�n�n ad�n� giriniz: \n");
		scanf("%c",uni[i].ebilgileri.ders_hocasi);
		printf("Dersin g�n�n� giriniz: \n");
		scanf("%c",uni[i].dbilgileri.gun);
		printf("Dersin saatini giriniz: \n");
		scanf("%d",&uni[i].dbilgileri.saat);
	}
	for(int i=0;i<2;i++)
	{
		printf("%c fak�ltesindeki;\n %c b�l�m�n�n %c dersine %c hocas� %c g�n� %d saat girmektedir.",uni[i].fakulte_adi,uni[i].bolum_adi,uni[i].ebilgileri.ders_adi,uni[i].ebilgileri.ders_hocasi,uni[i].dbilgileri.gun,uni[i].dbilgileri.saat);
	}
}
