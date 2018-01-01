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
		printf("Fakülte Adýný Giriniz: \n");
		scanf("%s",&uni[i].fakulte_adi);
		printf("Bölüm Adýný Giriniz: \n");
		scanf("%s",&uni[i].bolum_adi);
		printf("Dersin Adýný Giriniz: \n");
		scanf("%c",uni[i].ebilgileri.ders_adi);
		printf("Dersin hocasýnýn adýný giriniz: \n");
		scanf("%c",uni[i].ebilgileri.ders_hocasi);
		printf("Dersin gününü giriniz: \n");
		scanf("%c",uni[i].dbilgileri.gun);
		printf("Dersin saatini giriniz: \n");
		scanf("%d",&uni[i].dbilgileri.saat);
	}
	for(int i=0;i<2;i++)
	{
		printf("%c fakültesindeki;\n %c bölümünün %c dersine %c hocasý %c günü %d saat girmektedir.",uni[i].fakulte_adi,uni[i].bolum_adi,uni[i].ebilgileri.ders_adi,uni[i].ebilgileri.ders_hocasi,uni[i].dbilgileri.gun,uni[i].dbilgileri.saat);
	}
}
