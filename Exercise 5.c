#include <stdio.h>
#include <stdlib.h>

struct node{			   /* Typos komvou listas */
   int data; 			   /* dedomena */
   struct node *next;      /* diktis p deixnei ston epomeno */
   
}; 			
#include <stdio.h>
#include <stdlib.h>

struct node{			   /* Typos komvou listas */
   int data; 			   /* dedomena */
   struct node *next;      /* diktis p deixnei ston epomeno */
   
}; 			

struct node *top,*top1,*temp; // Dilosi stigiotypwn ths domis

void push(int element);                               // Function eisagosgis stoixeiou
void pop();											  // Function eksagogis stoixeioy
void display();										  // print th stoiva
void init();                                          // arxikopoihsh stoivas pou dexnei NULL


void main()
{
	int element,choice,e;
	
		
	init();	

	while(1)
	{
		system("cls");
		printf(" \n");
		printf(" | Data  Structure.  \n");
		printf(" | Project 5.  \n");
		printf(" | Stack - Linked List Memory app.  \n");
		printf("  \n\n");
			
		printf("      [  MENU  ]  \n\n");
	//	printf("  ____________________\n");
		printf("  [1] Push an Element\n");
		printf("  [2] Pop an Element \n");
		printf("  [3] Print The Stack\n");
		printf("  [4] Exit           \n");
	//	printf("  ____________________\n");
	
        do
		{
			printf("\n  Enter choice : ");
        	scanf("%d", &choice);
		}while (choice<1 || choice>8);
        	
        switch(choice) // switch gia tis epiloges toy xristi
		{
			case 1:
				printf("\n  Push an element: ");
				scanf("%d", &element); 
				push(element);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				system("pause");
				break;
				
			case 4:
				exit(0);
				
				
			default:
				printf("\n  pls try again and choose 1-4!!");
				break;
		}
		
	}
}

//dhmioyrgia adeias soivas
void init()
{
	top=NULL;
}		

void push(int element) 
{
	if(top == NULL)                                      //an den yparxei stoixeio sth lista
	{
		top=(struct node*)malloc(sizeof(struct node));   // an to top einai NULL kanei dinamiki desmeysi mnimis gia to stoixeio
		top->next=NULL;                                    // O dektis tou top deixnei sto NULL
		top->data=element;                                   // Sth metavliti top apothikeyete to data dhladh to stoixeio p eisagei o xristis
	}
	
	else
	{
		temp=(struct node*)malloc(sizeof(struct node));   // Se periptwsi p den einai null desmeyei xwro se mia mevlatiti temp(prosorini)
		temp->next=top;                                      // O deiktis tis temp deixnei sto top 
		temp->data=element;                                     // Sth metavliti temp apothikeyete to data pou eisagei o xristis
		top=temp;                                                  // ara sth metavliti top apothikeyete to stoixeio temp
	}
	
}

void display()
{
	top1=top;
	
   	if(top1 == NULL)
   	{
   		printf("\n is Empty!\n");
      	return;
   	}
      
	while(top1!=NULL)
	{
		printf("  [%3d ]\n", top1->data);
		top1=top1->next;
	}
      
}    

void pop()
{
 	top1=top;                                 // h top apthikeyete se mia alli metavliti top1
	
	if (top1 == NULL)                             // an h top einai NULL kanei print to error
	{
		printf("\n  Error stack is empty");
		return;
	}
			
	else
	{
		top1=top1->next;                                    // H top1 deixnei sto prohgoumeno stoixeio
		printf("\n  Popped Element: %d", top->data);    
		free(top);                                             // apodesmeysi mnimis
		top=top1;                                                // top1 apothikeyeei to prohgoumeno stoixeio
	}
}

struct node *top,*top1,*temp; // Dilosi stigiotypwn ths domis

int topelement();                                     // Function pou deixnei to top stoixeio ths stoivas
void push(int element);                               // Function eisagosgis stoixeiou
void pop();											  // Function eksagogis stoixeioy
void display();										  // print th stoiva
void init();                                          // arxikopoihsh stoivas pou dexnei NULL


void main()
{
	int element,choice,e;
	
		
	init();	 //arxikopoihsh stoivas	

	while(1)
	{
		system("cls");
		printf(" \n");
		printf(" | Data  Structure.  \n");
		printf(" | Project 5.  \n");
		printf(" | Stack - Linked List Memory app.  \n");
		printf("  \n\n");
			
		printf("      [  MENU  ]  \n\n");
	//	printf("  ____________________\n");
		printf("  [1] Push an Element\n");
		printf("  [2] Pop an Element \n");
		printf("  [3] Print The Stack\n");
		printf("  [4] Exit           \n");
	//	printf("  ____________________\n");
	
        do
		{
			printf("\n  Enter choice : ");
        	scanf("%d", &choice);
		}while (choice<1 || choice>8);
        	
        switch(choice) // switch gia tis epiloges toy xristi
		{
			case 1:
				printf("\n  Push an element: ");
				scanf("%d", &element); 
				push(element);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				system("pause");
				break;
				
			case 4:
				exit(0);
				
				
			default:
				printf("\n  pls try again and choose 1-4!!");
				break;
		}
		
	}	//system("pause");
}

	//dhmioyrgia adeias soivas
void init()
{
	top=NULL;
}		

void push(int element) 
{
	if(top == NULL)     //an den yparxei stoixeio sth lista
	{
		top=(struct node*)malloc(sizeof(struct node));   // an to top einai NULL kanei dinamiki desmeysi mnimis gia to stoixeio
		top->next=NULL;                                    // O dektis tou top deixnei sto NULL
		top->data=element;                                   // Sth metavliti top apothikeyete to data dhladh to stoixeio p eisagei o xristis
	}
	
	else
	{
		temp=(struct node*)malloc(sizeof(struct node));   //Se periptwsi p den einai null desmeyei xwro se mia mevlatiti temp(prosorini)
		temp->next=top;                                      // O deiktis tis temp deixnei sto top 
		temp->data=element;                                     // Sth metavliti temp apothikeyete to data pou eisagei o xristis
		top=temp;                                                  //ara sth metavliti top apothikeyete to stoixeio temp
	}
	
}

void display()
{
	top1=top;
	
   	if(top1 == NULL)
   	{
   		printf("\n is Empty!\n");
      	return;
   	}
      
	while(top1!=NULL)
	{
		printf("  [%3d ]\n", top1->data);
		top1=top1->next;
	}
      
}    

void pop()
{
 	top1=top;                                 // h top apthikeyete se mia alli metavliti top1
	
	if (top1 == NULL)                             // an h top einai NULL kanei print to error
	{
		printf("\n  Error stack is empty");
		return;
	}
			
	else
	{
		top1=top1->next;                             // sto top1 apothikeyte o deiktis tou top o opoios deixni sto NULL 
		printf("\n  Popped Element: %d", top->data);       // ektypwsi tou stoy xeixeiou sth thesi top
		free(top);                                       // apodesmeysi dinamikis  mnimis
		top=top1;                                           // top1 apothikeyetai sto top
	}
		
}
