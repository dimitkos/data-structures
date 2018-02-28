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

typedef struct student RECORD;										//Orismos sinonimou sto struct, me onoma RECORD
RECORD students[K];

int N;
void read_record();													//Sinartiri pou diavazi apo to xristi ta stixia
void print_record();												//Sinartiri pou ektiponi ston xristi ta stixia


void main()
{
	int choice;
	
	
	while(1)
    {
		system("cls");
		printf("1.Add Student\n");
		printf("2.Display Students\n");
		printf("3.Exit\n");
		printf("Enter your choice: ");
	
		do
		{
        	scanf("%d", &choice);
		}while (choice<1 || choice>4);

		switch(choice)
		{
			case 1:
				do
				{
				printf("dwse ton arithmo twn foithtwn:");
				scanf("%d",&N);
				}
				while(N<1 || N>50);
				read_record();
				break;
			case 2:
				print_record();
				break;
			case 3:
				exit(0);
				
			default:
				printf("Please try again and choose a valid number\n");
				break;
		}
			system("pause");
	}
}
void read_record()
{
	int i;
	for(i=0;i<N;i++)
	{
	printf("\nPress the AM: > ");
	scanf("%s",students[i].am);
	
	printf("Press the Name: > ");
	scanf("%s",students[i].name);
	
	printf("Press the Last Name: > ");
	scanf("%s",students[i].last_name);
	
	printf("Press the Fathers Name: > ");
	scanf("%s",students[i].fathers_name);
	
	printf("Press the Mothers Name: > ");
	scanf("%s",students[i].mothers_name);
	
	printf("Press the Adress: > ");
	scanf("%s",students[i].adress);
	
	printf("Press the Phone Number: > ");
	scanf("%s",students[i].phone_number);
	
	printf("Press the Mobile Number: > ");
	scanf("%s",students[i].mobile_number);
	
	do{
		//system("cls");
		printf("Press the Lesson: [0]Eidika_kefalaia_mathimatikwn [1]Diakrita_mathimatika [2]Logikos_programmatismos [3]Mathimatiki_Logiki \n >");
		scanf("%d",&students[i].lesson);
	}
	while (students[i].lesson<0 || students[i].lesson>3);
	printf("\n============================= \n");
	}
		
}

void print_record()
{
	int i;
	for (i=0; i<N; i++)
	printf("%s %s %s %s %s %s %s %s %d\n\n",students[i].am, students[i].name, students[i].last_name,students[i].fathers_name,students[i].mothers_name,students[i].adress,students[i].phone_number,students[i].mobile_number,students[i].lesson);
}
