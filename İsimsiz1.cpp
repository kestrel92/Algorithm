#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
main(){
	int sayi=0;
	srand(time(NULL));// bu da bir kalıp yapıdır.
	sayi=5+rand()%100;//5 den başlıyor 105 e kadar ,105 dahil olmayacak şekilde rastgele sayı atıyacak
	//sayi=3+rand()%5; -- 3 den başlıyor 3 4 5 6 7 sayıları arasında rastgele atama yapıyor
	//sayi=A+rand()%B; şeklinde bir kalıptır -- A ile A+B arasında ama A+B dahil değildir ama A dahildir.
	printf("%d \n",sayi);
	getch();
}
