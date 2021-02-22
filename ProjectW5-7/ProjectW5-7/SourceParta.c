#include <stdio.h>

int main(void) {
	char PN[100];/*Paint Name*/
	int PM;	/*Paint Minutes Input*/
	int PNL;
	int PRH;
	int PRM;
	int E = 0;	/*Error Variable*/
	int Q = 0;	/*Terminate Program*/
	while (Q == 0) {
		E = 0;
		printf("---CPC Paint Inspection--- \n \n");
		printf("Paint Name: ");
		scanf("%s", &PN);
		PNL = (unsigned)strlen(PN);		
		if ( PNL >= 20) {
			printf("Name too long, please check spelling \n");
			printf("Program Restart\n\n");
			E = 1;
		}
		if (E == 0) {
			printf("Minutes Taken: ");
			scanf("%i", &PM); printf("\n ");
			PRH = PM / 60;
			PRM = PM % 60;
			printf("%s finished in %i hours, %i minutes \n", PN, PRH, PRM);
			printf("------------------------------------------- \n \n");
		}

	}
	

}