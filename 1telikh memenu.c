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

 int choice;
	

	
	while(1)
	{
		system("cls");
	
		printf(" \n");
		printf(" | Data  Structure.  \n");
		printf(" | Project 1.  \n");
		printf(" | Retrieve and Update app.  \n");
		printf("  \n\n");
			
		printf("      [  MENU  ]  \n\n");
		
			
		printf("  [1] Fill the arrays with random elements and print them\n");
		printf("  [2] Sum the arrays and print the result\n");
		printf("  [3] Exit\n\n");
	
	
	do
		{
			printf(" Enter your choice: ");
			scanf("%d",&choice);
		} 
	while (choice<1 || choice>3);
	
	switch(choice) // switch gia tis epiloges toy xristi
		{
			case 1:
					retrieve();
					break;
			case 2:
					update();
					break;
			case 3:
					printf("thank you, see you later!");
					exit(0);
					
			default:
					printf(" pls try again and choose 1-3!!");
		}
		
		printf("\n");
		system("pause");
	}
	
	

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
