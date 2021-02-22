#include <stdio.h>

int main(void) {
	char PN[100] [100];/*Paint Name*/
	int PM[100];	/*Paint Minutes Input*/
	char PQ[100] [100]; /*Paint Qualification*/
	int PNL;	/*Paint Name Length*/
	int PRH[100];	/*Paint Hours Reply*/
	int PRM[100];	/*Paint Minutes Reply*/
	int i = 0;		/*Loop Counter*/
	int NP;			/*Number of paints Var*/
	printf("---CPC Paint Inspection---\n\n"); /*Program Title*/
	printf("Number of paints (1-10): ");					/*Number of Paints Question*/
	scanf("%i", &NP);							/*Number of Paints Input*/
	if (NP > 10){
		printf("NP is too Large");
	}
	else{
		if (NP < 1){
		printf("NP is too Small");
		}
		else{
			while (i != NP) {							/*Loop up to NP of Paints*/
		printf("Paint Name: ");						/*User Input Question*/
		scanf("%s", &PN[i]);						/*Paint Name Input*/
		PNL = (unsigned)strlen(PN[i]);					/*Paint Name Length Set*/
		if (PNL >= 20) {							/*If name above company character limit*/
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
			PRH[i] = ((PM[0] + PM[1] + PM[2]) / 3) / 60;		/*Mean assigned to total variable*/
			PRM[i] = ((PM[0] + PM[1] + PM[2]) / 3) % 60;		/*Mean assigned to total variable*/
			if (PRH[i] < 1) {							/*Paint Qualification Check*/
				strcpy(PQ[i], "meet 'Instant Drying'");			/*Instant Q*/
			}
			else {
				if (PRH[i] < 2) {
					strcpy(PQ[i], "meet 'Fast Drying'");			/*Fast Q*/
				}
				else {
					if (PRH[i] < 6) {
						strcpy(PQ[i], "meet 'Quick Drying'");		/*Quick Q*/
					}
					else {
						strcpy(PQ[i], "not meet any qualification");	/*No Q*/
					}
				}
			}
		} 
		i++;
		}
	if (i = NP) {
		i = 0;
		while (i != NP) {
			printf("'%s' does %s status, with a total time of %i hours, %i minutes\n", PN[i], PQ[i], PRH[i], PRM[i]); /*Requested Output*/
			printf("-------------------------------------------\n\n"); /*End*/
			i++;
		}
	}
	return 0;
		}
	}
	
}
