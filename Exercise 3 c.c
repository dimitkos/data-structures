#include <stdio.h> 
#include <stdlib.h>

#define SIZE 80
#define K 100


struct student{													//kataskevi tou struct me ta stixia
	char am[SIZE];
	char name[SIZE];
	char last_name[SIZE];
	char fathers_name[SIZE];
	char mothers_name[SIZE];
	char adress[SIZE];
	char phone_number[SIZE];
	char mobile_number[SIZE];
	int lesson; 
};

typedef struct student RECORD;									//Orismos sinonimou sto struct, me onoma RECORD
RECORD students[K];

int N;
void read_record();											//Sinartiri pou diavazi apo to xristi ta stixia
void print_record();												//Sinartiri pou ektiponi ston xristi ta stixia
void mathimata();


void main()
{
	int choice;
	
	
	printf(" \n");
	printf(" | Data  Structure.  \n");
	printf(" | Project 3.c.  \n");
	printf(" | Pointer - Lessons.  \n");
	printf("  \n\n");
	
	while(1)
    {	
    	
		printf("      [  MENU  ]  \n\n");
		printf("  [1] Add Student\n");
		printf("  [2] Display Students\n");
		printf("  [3] Display Lessons\n");
		printf("  [4] Exit           \n");
		
		do
		{
        	printf("\n  Enter your choice: ");
			scanf("%d", &choice);
		}while (choice<1 || choice>4);

		switch(choice)
		{
			case 1:
				do
				{
				printf("\n  How many Student would you like to add?: ");
				scanf("%d",&N);
				}
				while(N<1 || N>50);
				read_record();
				break;
			case 2:
				print_record();
				break;
			case 3:
				mathimata();
				break;
			case 4:
				exit(0);
				
			default:
				printf("  Please try again and choose a valid number");
				break;
		}
		
		printf("\n");
		system("pause");
	}
}
void read_record()
{
	int i;
	printf("\n  |Students Informations| ");
	for(i=0;i<N;i++)
	{
	printf("\n\n  Press the AM: > ");
	scanf("%s",students[i].am);
	
	printf("\n  Press the Name: > ");
	scanf("%s",students[i].name);
	
	printf("\n  Press the Last Name: > ");
	scanf("%s",students[i].last_name);
	
	printf("\n Press the Fathers Name: > ");
	scanf("%s",students[i].fathers_name);
	
	printf("\n  Press the Mothers Name: > ");
	scanf("%s",students[i].mothers_name);
	
	printf("\n  Press the Adress: > ");
	scanf("%s",students[i].adress);
	
	printf("\n  Press the Phone Number: > ");
	scanf("%s",students[i].phone_number);
	
	printf("\n  Press the Mobile Number: > ");
	scanf("%s",students[i].mobile_number);
	
	do{
		//system("cls");
		printf("\n  [0]Math\n  [1]Data Structures\n  [2]C/C++ Programming\n  [3]Compilers \n");
		printf("\n  Choose a Lesson: ");
		scanf("%d",&students[i].lesson);
	}
	while (students[i].lesson<0 || students[i].lesson>3);
	}
		
}

void print_record()
{
	int i;
	for (i=0; i<N; i++)
	printf("\n  AM : %s \n  Name: %s \n  Last Name: %s \n  Father's Name: %s \n  Mother's Name: %s \n  Address: %s \n  Phone Number: %s \n  Mobile Number: %s  \n  Lesson: %d \n\n",students[i].am, students[i].name, students[i].last_name,students[i].fathers_name,students[i].mothers_name,students[i].adress,students[i].phone_number,students[i].mobile_number,students[i].lesson);
}

void mathimata()
{
	int i,mathima;
	int math[3];
	for (i=0; i<4; i++)
		math[i]=0;
	
	for (i=0; i<N; i++)
	{
		mathima=students[i].lesson;
		math[mathima]++;
	}
	
	printf("Math [%d]\n",math[0]);
	printf("Data Structures [%d]\n",math[1]);
	printf("C/C++ Programming [%d]",math[2]);
	printf("Compilers [%d]\n",math[3]);
}
