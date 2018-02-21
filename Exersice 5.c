#include <stdio.h>
#include <stdlib.h>

//typedef int element;          // typos dedomenwn listas. synonimo ston int

struct node{			   /* Typos komvou listas */
   int info; 			   /* dedomena */
   struct node *ptr;      /* epomenos */
}*top,*top1,*temp;


int topelement();
void push(int data);
void pop();
void empty();
void display();
//void destroy();
void stack_count();
void create();

int count = 0;

void main()
{
	int no,choice,e;
	
	
	printf("\n---------------------------------\n");
	printf("\tSTACK MEMORY APP: ");
	printf("\n---------------------------------\n");
			
	printf("  [1] Push an Element|\n");
	printf("  [2] Pop an Element |\n");
	printf("  [3] top Element    |\n");
	printf("  [4] Print The Stack|\n");
	printf("  [5] stack count    |\n");
	printf("  [6] Exit           |\n");
	printf("  ____________________\n");
		
	create();		

	while(1)
	{
	
        do
		{
			printf("\n  ~Stack: Enter choice : ");
        	scanf("%d", &choice);
		}while (choice<1 || choice>8);
        	
        switch(choice) // switch gia tis epiloges toy xristi
		{
			case 1:
				printf("  ~Stack: Push an element: ");
				scanf("%d", &no); 
				push(no);
				break;
			case 2:
				pop();
				break;
			case 3:
				if (top == NULL)
					printf("Stack: No elements in stack");
				else
				{
					e = topelement();
					printf("Top element: %d",e);
				}
				break;
			/*case 4:
				empty();
				break;*/
				
			case 4:
				exit(0);
				
			case 5:
				display();
				break;
				
			case 6:
				stack_count();
				break;
				
			default:
				printf("  pls try again and choose 1-4!!");
				break;
		}
		//printf("\n\n");
	}	//system("pause");
}

	//dhmioyrgia adeias soivas
void create()
{
	top=NULL;
}		

	//* Count stack elements */
void stack_count()
{
    printf("\n No. of elements in stack : %d", count);
}

void push(int data) 
{
	if(top == NULL)
	{
		top=(struct node*)malloc(sizeof(struct node));
		top->ptr=NULL;
		top->info=data;
	}
	
	else
	{
		temp=(struct node*)malloc(sizeof(struct node));
		temp->ptr=top;
		temp->info=data;
		top=temp;
	}
	
	count++;
}

void display()
{
	top1=top;
	
   	if(top1 == NULL)
   	{
   		printf("\nStack is Empty!!!\n");
      	return;
   	}
      
	while(top1!=NULL)
	{
		printf("[%d]", top1->info);
		top1=top1->ptr;
	}
      
}    

void pop()
{
	top1=top;
	
	if (top1 == NULL)
	{
		printf("Error stack is empty");
		return;
	}
			
	else
	{
		top1=top1->ptr;
		printf("Popped Element: %d", top->info);
		free(top);
		top=top1;
		count--;
	}
		
}
	
/* Return top element */
int topelement()
	{
    	return(top->info);
	}
	


