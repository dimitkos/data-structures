#include<stdio.h>
#include <stdlib.h>
#include<time.h>

#define SIZE 10

// dhmiourgia 2 synartisewn 
void retrieve();                  // gemisma 2 pinakwn me tyxeous arithmous
void update();						// dhmiourgia pinaka c opou prosthetei ta stoixeia ton pinakwn a,b

 float a[SIZE],b[SIZE],c[SIZE];         // dhlosi pinakwn me stathero megethis SIZE
 int i;

void main()
{

 int choice;    // dilosi metavlitis epilogis gia to menu
	

	// dhmiourgia MENU me while
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
	
	// Periorismos sthn eisodo toy xristi prokeimenou na epileksei tis epiloges toy MENU
	do
		{
			printf(" Enter your choice: ");
			scanf("%d",&choice);
		} 
	while (choice<1 || choice>3);  // sinthiki
	
	switch(choice)                                         // switch gia tis epiloges toy xristi
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
		system("pause");    // paramenei to termatiko anoixto
	}
	
	

} 	
	 
	
//gemisma dyo pinakwn B kai C
void retrieve(){
		
		
 printf("\n1: Element of the table B:\n\n");
 
 srand (time(NULL));                                // synartisi poy gemizei toys pinakes B, C apo 0 ews 100
 
 //symplirvsh pikana b me tyxaious arithmous
 
 for(i=0; i<SIZE; i++)
 {
	b[i]=rand()%100;                                  // me rand gemizei kathe stoixeio toy pinaka apo 0 ews 100
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
	c[i]=rand()%100;                                   //  // me rand gemizei kathe stoixeio toy pinaka apo 0 ews 100
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
 
 //prosthesi twn 2 pianakvn se enan pinaka A
 
 for(i=0; i<SIZE; i++)
 {
	a[i] = b[i] + c[i];
 }
 
 printf("[");
	for (i=0; i<SIZE-1; i++)
		printf("%.2f, ",a[i]);
	printf("%.2f]",a[SIZE-1]);
}
