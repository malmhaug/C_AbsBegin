/* Challenges Ch11E2 - ReadFriends */
		
// By Jim-Kristian Malmhaug | Date: 7 Juni 2015
		
//Libraries:
#include <stdio.h>
#include <stdlib.h>

//Main function
int main() {

	//Variable declerations
	char name[25];
	char surname[25];
	FILE *pRead;

	pRead = fopen("friends.dat", "r");

	if (pRead == NULL)
		goto ErrorHandler;
	else
		printf("\nFile opened\n");
		printf("\nFile friends.dat include names:\n");
		fscanf(pRead,"%s%s", name, surname);
		while(!feof(pRead)){
			printf("%s %s\n", name, surname);
			fscanf(pRead,"%s%s", name, surname);
		}
	fclose(pRead);
    printf("\nFile closed\n");
    exit(EXIT_SUCCESS); //Exit program normally

    ErrorHandler:
    	perror("The following error ocurred");
    	exit(EXIT_FAILURE);
}