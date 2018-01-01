#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int matris[5][3],carp=1;
	srand(time(NULL));
	for(int i=0;i<5;i++)
	{
			matris[i][0]=5+rand()%10;
			printf("Bir sayý giriniz: ");
			scanf("%d",&matris[i][1]);
			carp=matris[i][0]*matris[i][1];
			matris[i][2]=carp;
	}
		for(int i=0;i<5;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",matris[i][j]);
		}
		printf("\n");
	}
}
