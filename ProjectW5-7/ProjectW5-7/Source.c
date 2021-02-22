#include <stdio.h>

int main(void) {
<<<<<<< HEAD
	char PN[100][100];/*Paint Name*/
	int PM[100];	/*Paint Minutes Input*/
	char PQ[100][100]; /*Paint Qualification*/
	int PNL;	/*Paint Name Length*/
	int PRH[100];	/*Paint Hours Reply*/
	int PRM[100];	/*Paint Minutes Reply*/
	int i = 0;		/*Loop Counter*/
	int NP;			/*Number of paints Var*/
	char PHO[100][100];	/*Grammatical Correction for Hours*/
	char PMO[100][100]; /*Grammatical Correction for Minutes*/
	while (1) {
		printf("---CPC Paint Inspection---\n\n"); /*Program Title*/
		printf("Number of paints (1-100): ");					/*Number of Paints Question*/
		scanf("%i", &NP);							/*Number of Paints Input*/
		while (i != NP) {							/*Loop up to NP of Paints*/
			printf("____________________\n");
			printf("Paint Name: ");						/*User Input Question*/
			scanf("%s", &PN[i]);						/*Paint Name Input*/
			PNL = (unsigned)strlen(PN[i]);					/*Paint Name Length Set*/
=======
	int PM[4];	/*Paint Minutes Input*/
	char PQ[100]; /*Paint Qualification*/
	int PNL;	/*Paint Name Length*/
	int NP;		/*Number of Paints*/
	printf("---CPC Paint Inspection---\n\n"); /*Program Title*/
	printf("4 paints:");
	NP = 4 + 1;
	char PN[NP][100];/*Paint Name + Array of NP*/
	int PRH[NP];	/*Paint Hours Reply*/
	int PRM[NP];	/*Paint Minutes Reply*/
	while (1) {
		while (NP != 1) {
			NP--;
			printf("Paint Name: ");						/*User Input Question*/
			scanf("%[^\n]s", &PN);						/*Paint Name Input*/
			PNL = (unsigned)strlen(PN);					/*Paint Name Length Set*/
>>>>>>> 52d402d8686947271410afd7210350add7f78a11
			if (PNL >= 20) {							/*If name above company character limit*/
				printf("Name too long, please check spelling\n");	/*Response*/
				printf("Program Restart\n\n");						/*Return to line 12*/
			}
			else {
				printf("Minutes Taken 1st: ");
<<<<<<< HEAD
				scanf("%i", &PM[0]);		/*Minutes Input 1*/
				printf("Minutes Taken 2st: ");
				scanf("%i", &PM[1]);		/*Minutes Input 2*/
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
				if (PRH[i] == 0) {
					strcpy(PHO[i], "\0");
				}
				else {
					if (PRH[i] == 1) {
						sprintf(PHO[i], "%i", PRH[i]);
						strcat(PHO[i], " hour", PRM[i]);
					}
					else {
						sprintf(PHO[i], "%i", PRH[i]);
						strcat(PHO[i], " hours", PRH[i]);
					}
				}

				if (PRM[i] == 0) {
					strcpy(PMO[i], "\0");
				}
				else {
					if (PRM[i] == 1) {
						sprintf(PMO[i], "%i", PRM[i]);
						strcat(PMO[i], " minute", PRM[i]);
					}
					else {
						sprintf(PMO[i], "%i", PRM[i]);
						strcat(PMO[i], " minutes", PRM[i]);
=======
				scanf("%i", &PM[0]);					/*Minutes Input 1*/
				printf("Minutes Taken 2st: ");
				scanf("%i", &PM[1]);					/*Minutes Input 2*/
				printf("Minutes Taken 3st: ");
				scanf("%i", &PM[2]);					/*Minutes Input 3*/
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
>>>>>>> 52d402d8686947271410afd7210350add7f78a11
					}
				}
				if (PRM[i] == 0 && PRH[i] == 0) {
					strcpy(PHO[i], "...Instant??");
					strcpy(PMO[i], " *Please Check your input, Seconds are not use (ERROR1)");
				}
			}
<<<<<<< HEAD
			i++;
		}
		if (i = NP) {
			i = 0;
			while (i != NP) {
				printf("'%s' does %s status, with a total time of %s %s\n", PN[i], PQ[i], PHO[i], PMO[i]); /*Requested Output*/
				printf("-------------------------------------------\n\n"); /*End*/
				i++;
			}
		}
	}
=======
		}
			
			printf("'%s' does %s status, with a total time of %i hours, %i minutes\n", PN, PQ, PRH, PRM); /*Requested Output*/
			printf("-------------------------------------------\n\n"); /*End*/
			NP = 4;
		}
>>>>>>> 52d402d8686947271410afd7210350add7f78a11
}
