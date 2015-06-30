/* Challenges Ch11E4 - PhoneBook */
		
// Rev. by Jim-Kristian Malmhaug | Date: 27 June 2015
		
#include <stdio.h>
#include <stdlib.h>

main() {
	int response;
	
	char lName[20] = {0};
	char fName[20] = {0};
	char number[20] = {0};

	FILE *pWrite;
	FILE *pRead;
	
	do{
		printf("\n\tPhone Book\n");
		printf("\n1\tAdd phone book entry\n");
		printf("2\tPrint phone book\n");
		printf("3\tExit\n\n");
		printf("Select an option: ");
		scanf("%d", &response);

		if ( response == 1 ) {
			/* user is adding a new phone book entry – get the info */
			printf("\nEnter first name: ");
			scanf("%s", fName);
			printf("\nEnter last name: ");
			scanf("%s", lName);
			printf("\nEnter phone number: ");
			scanf("%s", number);

			pWrite = fopen("phone_book.dat", "a");
		
			if ( pWrite != NULL ) {	
				fprintf(pWrite, "%s %s %s\n", fName, lName, number);
				fclose(pWrite);
			}
			else
				goto ErrorHandler; //there is a file i/o error
		}
		else if ( response == 2 ) {
			/* user wants to print the phone book */
			pRead = fopen("phone_book.dat", "r");
		
			if ( pRead != NULL ) {
				printf("\nPhone Book Entries\n");

				while ( !feof(pRead) ) {
					fscanf(pRead, "%s %s %s", fName, lName, number);

					if ( !feof(pRead) )
						printf("\n%s %s\t%s", fName, lName, number);
				} //end loop

				printf("\n");
			}

			else
				goto ErrorHandler; //there is a file i/o error
		}
	}while(response != 3);
	exit(EXIT_SUCCESS); //exit program normally

	ErrorHandler:
		perror("The following error occurred");
		exit(EXIT_FAILURE); //exit program with error
} //end main