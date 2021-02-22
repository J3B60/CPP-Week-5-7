#include <stdio.h>

int main(void) {
	char PN[100];/*Paint Name*/
	int PM[4];	/*Paint Minutes Input*/
	char PQ[100]; /*Paint Qualification*/
	int PNL;	/*Paint Name Length*/
	int PRH;	/*Paint Hours Reply*/
	int PRM;	/*Paint Minutes Reply*/
	while (1) {
		printf("---CPC Paint Inspection---\n\n"); /*Program Title*/
		printf("Paint Name: ");						/*User Input Question*/
		scanf("%[^\n]s", &PN);						/*Paint Name Input*/
		PNL = (unsigned)strlen(PN);					/*Paint Name Length Set*/
		if ( PNL >= 20) {							/*If name above company character limit*/
			printf("Name too long, please check spelling\n");	/*Response*/
			printf("Program Restart\n\n");						/*Return to line 12*/
		}
		else {
			printf("Minutes Taken 1st: ");			
			scanf("%i", &PM[0]); printf("\n");		/*Minutes Input 1*/
			printf("Minutes Taken 2st: ");
			scanf("%i", &PM[1]); printf("\n");		/*Minutes Input 2*/
			printf("Minutes Taken 3st: ");
			scanf("%i", &PM[2]); printf("\n");		/*Minutes Input 3*/
			PRH = ((PM[0] + PM[1] + PM[2]) / 3) / 60;		/*Mean assigned to total variable*/
			PRM = ((PM[0] + PM[1] + PM[2]) / 3) % 60;		/*Mean assigned to total variable*/
			if (PRH < 1) {							/*Paint Qualification Check*/
				strcpy(PQ, "meet 'Instant Drying'");			/*Instant Q*/
			}
			else {
				if (PRH < 2) {
					strcpy(PQ, "meet 'Fast Drying'");			/*Fast Q*/
				}
				else {
					if (PRH < 6) {
						strcpy(PQ, "meet 'Quick Drying'");		/*Quick Q*/
					}
					else {
						strcpy(PQ, "not meet any qualification");	/*No Q*/
					}
				}
			}
			}
			printf("'%s' does %s status, with a total time of %i hours, %i minutes\n", PN, PQ, PRH, PRM); /*Requested Output*/
			printf("-------------------------------------------\n\n"); /*End*/
		}
}
