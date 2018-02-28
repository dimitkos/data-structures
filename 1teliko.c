/*askhsh 1.srand*/

#include<stdio.h>
#include <stdlib.h>
#include<time.h>

#define SIZE 10

void retrieve();
void update();

 float a[SIZE],b[SIZE],c[SIZE];
 int i;
 float x1,x2;

void main()
{

 	
	printf(" \n");
	printf(" | Data  Structure.  \n");
	printf(" | Project 1.  \n");
	printf(" | Tables Retrieve - Update.  \n");
	printf("  \n\n");
	
	retrieve();
	update();
	
	printf("\n");
} 	
	 
	
 
void retrieve(){
		
		
 printf("\n1: Element of the table B:\n\n");
 
 srand (time(NULL));
 
 //symplirvsh pikana b me tyxaious arithmous
 
 for(i=0; i<SIZE; i++)
 {
	b[i]=rand()%100;
 }

//ektypvsh pinaka b
	printf("[");
	for (i=0; i<SIZE-1; i++)
		printf("%.2f, ",b[i]);
	printf("%.2f]",b[SIZE-1]);

 printf("\n");
 
 printf("\n2: Elements of the table C:\n\n");
 
 //symplirvsh pinaka c me tyxaious arithmous
 
 for(i=0; i<SIZE; i++)
 {
	c[i]=rand()%100;
 }
 
 //ektypvsh pinaka c 
 
	printf("[");
	for (i=0; i<SIZE-1; i++)
		printf("%.2f, ",c[i]);
	printf("%.2f]",c[SIZE-1]);
}

void update(){
		
printf("\n");
 printf("\n3: Elements of the table A (Sum B,C):\n\n");
 
 //prosthesi tvn 2 pianakvn se enan pinaka a
 
 for(i=0; i<SIZE; i++)
 {
	a[i] = b[i] + c[i];
 }
 
 printf("[");
	for (i=0; i<SIZE-1; i++)
		printf("%.2f, ",a[i]);
	printf("%.2f]",a[SIZE-1]);
}


