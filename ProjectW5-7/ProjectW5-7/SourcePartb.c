#include <stdio.h>

int main(void) {
	char PN[100];/*Paint Name*/
	int PM1;	/*Paint Minutes Input*/
	int PM2;	/*Paint Minutes Input 2*/
	int PM3;	/*Paint Minutes Input 3*/
	int PNL;	/*Paint Name Length*/
	int PRH;	/*Paint Hours Reply*/
	int PRM;	/*Paint Minutes Reply*/
	while (1) {
		printf("---CPC Paint Inspection---\n\n"); /*Program Title*/
		printf("Paint Name: ");						/*User Input Question*/
		scanf("%s", &PN);							/*Paint Name Input*/
		PNL = (unsigned)strlen(PN);					/*Paint Name Length Set*/
		if ( PNL >= 20) {							/*If name above company character limit*/
			printf("Name too long, please check spelling\n");	/*Response*/
			printf("Program Restart\n\n");						/*Return to line 12*/
		}
		else {
			printf("Minutes Taken 1st: ");			
			scanf("%i", &PM1); printf("\n");		/*Minutes Input 1*/
			printf("Minutes Taken 2st: ");
			scanf("%i", &PM2); printf("\n");		/*Minutes Input 2*/
			printf("Minutes Taken 3st: ");
			scanf("%i", &PM3); printf("\n");		/*Minutes Input 3*/
			PRH = ((PM1 + PM2 + PM3) / 3) / 60;		/*Mean assigned to total variable*/
			PRM = ((PM1 + PM2 + PM3) / 3) % 60;		/*Mean assigned to total variable*/
			printf("%s finished in %i hours, %i minutes\n", PN, PRH, PRM); /*Requested Output*/
			printf("-------------------------------------------\n\n"); /*End*/
		}

	}
	

}