#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
main(){
	int sayi=0;
	srand(time(NULL));// bu da bir kal�p yap�d�r.
	sayi=5+rand()%100;//5 den ba�l�yor 105 e kadar ,105 dahil olmayacak �ekilde rastgele say� at�yacak
	//sayi=3+rand()%5; -- 3 den ba�l�yor 3 4 5 6 7 say�lar� aras�nda rastgele atama yap�yor
	//sayi=A+rand()%B; �eklinde bir kal�pt�r -- A ile A+B aras�nda ama A+B dahil de�ildir ama A dahildir.
	printf("%d \n",sayi);
	getch();
}
