#include <stdio.h>
#include <stdlib.h>

// diloseis

#define N 50      //Megethos pinaka stoivas

typedef int element;         // typos dedomenwn stoivas, sinonimo gia ton akeraio

struct STOIVA{
   element pinakas[N];      // pinakas stoixeiwn
   int top;                 // koryfi tis stoivas
};

typedef struct STOIVA STOIVA;  // Sinwnimo tis stoivas 


// prototypa synartisewn
void stoiva_init(STOIVA *s);
int stoiva_empty(STOIVA s);
int stoiva_full(STOIVA s);
int stoiva_push(STOIVA *s, element x);
int stoiva_pop(STOIVA *s, element *x);

main()
{
	
	int element,i,x,y,z,w;
	STOIVA st; //metavliti tou struct STOIVA
	
	stoiva_init(&st); // arxikopoihsh ths stoivas gia na parei to top tin katallili timi 
	
	//ektypwsh minimatos ston xrhsth poia parastash ua ypologistei
	
	printf("\tYpologismos ths parastashs [(10+2)*(8-3)]+2:\n");
	printf("------------------------------------------------------\n");
	
	//ginetai push(10) sthn stoiva kai ektypwsh tou periexomenou ths stoivas
	
	stoiva_push(&st,10);
	
	printf("  Stack: I have  %d elements: \n", st.top+1);
		for (i=0; i<=st.top; i++)
		{
			printf("  [%3d ]",st.pinakas[i]);
		}
	
	//ginetai push(2) sthn stoiva kai ektypwsh tou periexomenou ths stoivas
	
	stoiva_push(&st,2);
	
	printf("\n  Stack: I have  %d elements: \n", st.top+1);
		for (i=0; i<=st.top; i++)
		{
			printf("  [%3d ]",st.pinakas[i]);
		}
	
	//ginetai pop() tou teleftaiou stoixeiou ths stoivas kai ektypwsh tou periexomenou ths stoivas
	
	stoiva_pop(&st,&element);
	
	printf("\n  Stack: I have  %d elements: \n", st.top+1);
		for (i=0; i<=st.top; i++)
		{
			printf("  [%3d ]",st.pinakas[i]);
		}
	
	//ginetai pop() tou teleftaiou stoixeiou ths stoivas kai ektypwsh tou periexomenou ths stoivas
	
	stoiva_pop(&st,&element);
	
	printf("\n  Stack: I have  %d elements: \n", st.top+1);
		for (i=0; i<=st.top; i++)
		{
			printf("  [%3d ]",st.pinakas[i]);
		}
	
	//prosthesi twn dyo teleftaiwn stoixeiwn ths stoivas poy vgikan mesw ths leitourgias pop()
	
	x=10+2;
	
	//ginetai push(12) sthn stoiva (to apotelesma tis parapanw prakshs) kai ektypwsh tou periexomenou ths stoivas
	
	stoiva_push(&st,x);
	
	printf("\n  Stack: I have  %d elements: \n", st.top+1);
		for (i=0; i<=st.top; i++)
		{
			printf("  [%3d ]",st.pinakas[i]);
		}
	
	//ginetai push(3) sthn stoiva kai ektypwsh tou periexomenou ths stoivas
	
	stoiva_push(&st,3);
	
	printf("\n  Stack: I have  %d elements: \n", st.top+1);
		for (i=0; i<=st.top; i++)
		{
			printf("  [%3d ]",st.pinakas[i]);
		}
	
	//ginetai push(8) sthn stoiva kai ektypwsh tou periexomenou ths stoivas
	
	stoiva_push(&st,8);
	
	printf("\n  Stack: I have  %d elements: \n", st.top+1);
		for (i=0; i<=st.top; i++)
		{
			printf("  [%3d ]",st.pinakas[i]);
		}
	
	//ginetai pop() tou teleftaiou stoixeiou ths stoivas kai ektypwsh tou periexomenou ths stoivas
	
	stoiva_pop(&st,&element);
	
	printf("\n  Stack: I have  %d elements: \n", st.top+1);
		for (i=0; i<=st.top; i++)
		{
			printf("  [%3d ]",st.pinakas[i]);
		}
		
	//ginetai pop() tou teleftaiou stoixeiou ths stoivas kai ektypwsh tou periexomenou ths stoivas
		
	stoiva_pop(&st,&element);
	
	printf("\n  Stack: I have  %d elements: \n", st.top+1);
		for (i=0; i<=st.top; i++)
		{
			printf("  [%3d ]",st.pinakas[i]);
		}
	
	//aferesi twn dyo teleftaiwn stoixeiwn ths stoivas poy vgikan mesw ths leitourgias pop()
	
	y=8-3;
	
	//ginetai push(5) sthn stoiva (to apotelesma tis parapanw prakshs) kai ektypwsh tou periexomenou ths stoivas
	
	stoiva_push(&st,y);
	
	printf("\n  Stack: I have  %d elements: \n", st.top+1);
		for (i=0; i<=st.top; i++)
		{
			printf("  [%3d ]",st.pinakas[i]);
		}
	
	//ginetai pop() tou teleftaiou stoixeiou ths stoivas kai ektypwsh tou periexomenou ths stoivas
	
	stoiva_pop(&st,&element);
	
	printf("\n  Stack: I have  %d elements: \n", st.top+1);
		for (i=0; i<=st.top; i++)
		{
			printf("  [%3d ]",st.pinakas[i]);
		}
	
	//ginetai pop() tou teleftaiou stoixeiou ths stoivas kai ektypwsh tou periexomenou ths stoivas
	
	stoiva_pop(&st,&element);
	
	printf("\n  Stack: I have  %d elements: \n", st.top+1);
		for (i=0; i<=st.top; i++)
		{
			printf("  [%3d ]",st.pinakas[i]);
		}
	
	//polaplasiasmos twn dyo teleftaiwn stoixeiwn ths stoivas poy vgikan mesw ths leitourgias pop()
	
	z=5*12;
	
	//ginetai push(60) sthn stoiva (to apotelesma tis parapanw prakshs) kai ektypwsh tou periexomenou ths stoivas
	
	stoiva_push(&st,z);
	
	printf("\n  Stack: I have  %d elements: \n", st.top+1);
		for (i=0; i<=st.top; i++)
		{
			printf("  [%3d ]",st.pinakas[i]);
		}
	
	//ginetai push(2) sthn stoiva kai ektypwsh tou periexomenou ths stoivas
	
	stoiva_push(&st,2);
	
	printf("\n  Stack: I have  %d elements: \n", st.top+1);
		for (i=0; i<=st.top; i++)
		{
			printf("  [%3d ]",st.pinakas[i]);
		}
	
	//ginetai pop() tou teleftaiou stoixeiou ths stoivas kai ektypwsh tou periexomenou ths stoivas
	
	stoiva_pop(&st,&element);
	
	printf("\n  Stack: I have  %d elements: \n", st.top+1);
		for (i=0; i<=st.top; i++)
		{
			printf("  [%3d ]",st.pinakas[i]);
		}
	
	//ginetai pop() tou teleftaiou stoixeiou ths stoivas kai ektypwsh tou periexomenou ths stoivas
	
	stoiva_pop(&st,&element);
	
	printf("\n  Stack: I have  %d elements: \n", st.top+1);
		for (i=0; i<=st.top; i++)
		{
			printf("  [%3d ]",st.pinakas[i]);
		}
		
	//prosthesi twn dyo teleftaiwn stoixeiwn ths stoivas poy vgikan mesw ths leitourgias pop()
		
	w=60+2;
	
	//ginetai push(62) sthn stoiva (to apotelesma tis parapanw prakshs) kai ektypwsh tou periexomenou ths stoivas
	
	stoiva_push(&st,w);
	
	printf("\n  Stack: I have  %d elements: \n", st.top+1);
		for (i=0; i<=st.top; i++)
		{
			printf("  [%3d ]",st.pinakas[i]);
		}
	
	
	//ektypwsh minimatos ston xrhsth to aotelesma ths parastashs
	printf("\n\n-----------------------------------------\n");
	printf("  To apotelesma ths parastashs einai:%d\n",w);
	printf("-----------------------------------------\n");
}

// arxikopoihsh tis listas, thetoyme -1 thn korifi ths listas
void stoiva_init(STOIVA *s) // h synartisi epireazei ta dedomena giayto pername by reference
{
	s->top=-1; // exw prosbasi sth top me to -> / ara -1 deixnei oti h stoiva einai adeia 
}

// epistrefei 1/0 (TRUE/FALSE), analoga me to an h stoiva einai adeia
int stoiva_empty(STOIVA s) // pairnei san orisma by value giati den ephreazei ta dedomena 
{
	if (s.top==-1)
			return 1;
		else if(s.top!=-1)
			return 0;
}

// epistrefei 1/0 analoga me to an h stoiva einai gemati */
int stoiva_full(STOIVA s) 
{
	if (s.top==N-1)
			return 1;
		else if(s.top!=N-1)
			return 0;
}

// πηση to x sti stoiva s
// epistrefei TRUE: se periptwsi epitixias
// FALSE: se periptwsi apotixias
int stoiva_push(STOIVA *s, element x) // orisma by reference gia to top epireazei ta dedomena kai element x to deytero stoixeio pou tha eisagw
{
	// kanw elegxo an h stoiva einai gemati, olh h stoiva einai to *s
	// pernaw san orisisma sth stoiva_full to *s (eperne by value thn timi)
	// epeidi perasasme dikti sti synarti stoiva_push opote gia na perasw by value tin timi sto stoiva_full  tha valw *s
	if (stoiva_full(*s)) 
		return 0;
	else
	{
		s->top++; // ayksisi tis top kata 1
		s->pinakas[s->top]=x; // [igene sti thesi toy pinaka top kai apothikeyse to stoixeio  x.
		return 1;
	}
}

// Kanei pop to stoixeio pou einai stin korifi tis stoivas
// retern 1 : se periptwsi epitixias
// return 0 : se periptwsi apotixias
int stoiva_pop(STOIVA *s, element *x) // to deytero orisma by reference prokeimeniy na epistrafei to stoixeio p egine pop
{
	if (stoiva_empty(*s))
		return 0;
	else
	{
		*x=s->pinakas[s->top];  // apothikesys toy stoixeiou einai sto top ths stoivas 
		s->top--;
		return 1;
	}
}
