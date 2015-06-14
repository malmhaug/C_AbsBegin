/* Challenges Ch11E3 - StudentInfo */
		
// By Jim-Kristian Malmhaug | Date: 13 Juni 2015
		
//Libraries:
#include <stdio.h>
#include <stdlib.h>

//Main function
int main() {

	//Variable declerations
	char cName[25] = "\0";
	char cSurname[25] = "\0";
	int iSelection = 0;
	int iJump = 0;
	float fGpa;
	FILE *pWrite;
	FILE *pRead;

	do {
		iSelection = showMenu();
		switch(iSelection){
			case 1:
				pWrite = fopen("student.dat", "a");
				if (pWrite == NULL)
					goto ErrorHandler;
				else
					printf("\nEnter Name Surname GPA. With space between each: ");
					scanf("%s%s%f", cName, cSurname, &fGpa);
					fprintf(pWrite, "%s\t%s\t%.2f\n", cName, cSurname, fGpa);
					//printf("\nYou wrote %s\t%s\t%.2f\n", cName, cSurname, fGpa);
				fclose(pWrite);
				break;
			case 2:
				iJump = 0;
				pRead = fopen("student.dat", "r");
				if (pRead == NULL)
					goto ErrorHandler;
				else
					printf("\n");
					while(!feof(pRead)){
						if(iJump > 0)
							printf("%s %s %.2f\n", cName, cSurname, fGpa);
						fscanf(pRead,"%s%s%f", cName, cSurname, &fGpa);
						iJump += 1;
					}
				fclose(pRead);
				break;
		}
	}while(iSelection != 3);
	exit(EXIT_SUCCESS); //Exit program normally

    ErrorHandler:
    	perror("The following error ocurred");
    	exit(EXIT_FAILURE); //Exit program failed
}

int showMenu() {
	
	int iSelection;

	printf("\n Menu \n------\n");
	printf("1. Enter student info\n");
	printf("2. Print student info\n");
	printf("3. Quit\n");
	printf("--->  ");
	scanf("%d", &iSelection);

	return iSelection;
}