#include <stdio.h> 

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

	read_record(&s);
	
	print_record(s);

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
	
	printf("\n================================ \n\n");
}

//Sinartisi pou ektiponi ta stixia ston xristi

void print_record(RECORD x)
{
	
	printf("%s %s %s %s %s %s %s %s %s\n\n",x.am, x.name, x.last_name, x.fathers_name,x.mothers_name, x.adress, x.phone_number, x.mobile_number, x.lesson);
	printf("\n================================ \n\n");
}
