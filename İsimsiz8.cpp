#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	srand(time(NULL));
	int dizi[5];
	for(int i=0;i<5;i++)
	{
		if(i==0)
		{
		    dizi[0]=100+rand()%899;
		}
		else
		{	
		dizi[i]=dizi[i-1]+rand()%(1000-dizi[i-1]);
	    }  
		printf("\n%i",dizi[i]);
	}
	getch();
}
