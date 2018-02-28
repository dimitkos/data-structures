#include <stdio.h> 
#include <stdlib.h>

#define SIZE 80
//kataskevi tou struct me ta stixia

struct student{													
	char am[SIZE];
	char name[SIZE];
	char last_name[SIZE];
	char fathers_name[SIZE];
	char mothers_name[SIZE];
	char adress[SIZE];
	char phone_number[SIZE];
	char mobile_number[SIZE];
	char lesson[SIZE]; 
};

//Orismos sinonimou sto struct, me onoma RECORD

typedef struct student RECORD;									

void read_record(RECORD *p);									//Sinartiri pou diavazi apo to xristi ta stixia
void print_record(RECORD x);									//Sinartiri pou ektiponi ston xristi ta stixia

void main()
{
	RECORD s;
	int choice;
	

	
	while(1)
	{
		system("cls");
	
		printf(" \n");
		printf(" | Data  Structure.  \n");
		printf(" | Project 3a.  \n");
		printf(" | Registry student app.  \n");
		printf("  \n\n");
			
		printf("      [  MENU  ]  \n\n");
		
			
		printf("  [1] Registry the student\n");
		printf("  [2] Print the registration\n");
		printf("  [3] Exit\n\n");
	
		
		
		do
		{
			printf(" Hey user! please choose a number: ");
			scanf("%d",&choice);
		} 
		while (choice<1 || choice>3);
		
		
		switch(choice) // switch gia tis epiloges toy xristi
		{
			case 1:
					read_record(&s);
					break;
			case 2:
					print_record(s);
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

//Sinartiri pou diavazi apo to xristi ta stixia tou foithth

void read_record(RECORD *p)											
{
	printf("\nPress the AM: ");
	scanf("%s",p->am);
	
	printf("Press the Name: ");
	scanf("%s",p->name);
	
	printf("Press the Last Name: ");
	scanf("%s",p->last_name);
	
	printf("Press the Fathers Name: ");
	scanf("%s",p->fathers_name);
	
	printf("Press the Mothers Name: ");
	scanf("%s",p->mothers_name);
	
	printf("Press the Adress: ");
	scanf("%s",p->adress);
	
	
	printf("Press the Phone Number: ");
	scanf("%s",p->phone_number);
	
	printf("Press the Mobile Number: ");
	scanf("%s",p->mobile_number);
	
	printf("Press the Lesson: ");
	scanf("%s",p->lesson);
	
	printf("\n================================ \n");
}

//Sinartisi pou ektiponi ta stixia ston xristi

void print_record(RECORD x)
{
	printf("\n================================ \n");
	printf("\n\n");
	printf("%s %s %s %s %s %s %s %s %s\n\n",x.am, x.name, x.last_name, x.fathers_name,x.mothers_name, x.adress, x.phone_number, x.mobile_number, x.lesson);
	printf("\n================================ \n");
}
