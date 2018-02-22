/*askhsh 1.srand*/

#include<stdio.h>
#include <stdlib.h>
#include<time.h>

#define SIZE 10

void main()
{
 	float a[SIZE],b[SIZE],c[SIZE];
 	int i;
 	float x1,x2;
 	
 printf(" \n");
	printf(" | Data  Structure.  \n");
	printf(" | Project 1.  \n");
	printf(" | Tables Retrieve - Update.  \n");
	printf("  \n\n");
			
 	
	 
	printf("   [1] Table B:\n\n");
 
 	srand (time(NULL));
 	
	for(i=0; i<10; i++)
 	{
		b[i]=rand()%10;
		printf("\t[%.2f]  ",b[i]);
		//printf("position %d:\t", i+1);
		//scanf("%f", &b[i]);
 	}

 	printf("\n");
 	printf("   [2] Table C:\n\n");
 	
	 for(i=0; i<10; i++)
 	{
		c[i]=rand()%10;
		printf("\t[%.2f]  ",c[i]);
		//printf("position %d:\t", i+1);
		//scanf("%f", &c[i]);
 }

 	printf("\n");
 	printf("   [3] Table A (Sum B,C):\n\n");
 
 	for(i=0; i<10; i++)
 	{
		a[i] = b[i] + c[i];
		printf("\t[%.2f]  ", a[i]);
 	}
}

