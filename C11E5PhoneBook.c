/* Challenges Ch11E5 - PhoneBook */
		
// Rev. by Jim-Kristian Malmhaug | Date: 12 July 2015
		
#include <stdio.h>
#include <stdlib.h>

int addEntry(); //Function prototype for adding entry to phone book
int printEntries(); //Function prototype for printing entries in phone book
int editEntries(); //Function prototype for editing phone book
int deleteEntries(); //Function prototype for deleting entries

main() {
	int response;
	signed int iStatus = 0;

	FILE *pWrite;
	FILE *pRead;
	
	do{
		printf("\n\tPhone Book\n");
		printf("\n1\tAdd phone book entry\n");
		printf("2\tPrint phone book\n");
		printf("3\tEdit phone book\n");
		printf("4\tDelete entry in phone book\n");
		printf("5\tExit\n\n");
		printf("Select an option: ");
		scanf("%d", &response);

		if ( response == 1 ) {
			addEntry();
		}		
		else if ( response == 2 ) {
			printEntries();
		}
		else if ( response == 3 ) {
			editEntries();
		}
		else if ( response == 4 ) {
			deleteEntries();
		}
		else if (iStatus == -1 ) {
			goto ErrorHandler;
		}
	}while(response != 5);
	system("clear");
	exit(EXIT_SUCCESS); //exit program normally

	ErrorHandler:
		perror("The following error occurred");
		exit(EXIT_FAILURE); //exit program with error
} //end main


//----------------------------------------------------------------
//----------------------FUNCTION DEFINITIONS----------------------
//----------------------------------------------------------------

/*----------Add new phone book entry----------*/
int addEntry(){

	char lName[20] = {0};
	char fName[20] = {0};
	char number[20] = {0};

	FILE *pWrite;
	
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
		fclose(pWrite);
		return -1; //there is a file i/o error
}

/*----------Print phone book entries----------*/
int printEntries(){

	char lName[20] = {0};
	char fName[20] = {0};
	char number[20] = {0};

	int iEntryNr = 0;

	FILE *pRead;
	
	pRead = fopen("phone_book.dat", "r");
		
	if ( pRead != NULL ) {
		printf("\nPhone Book Entries\n");
		while ( !feof(pRead) ) {
			iEntryNr += 1;
			fscanf(pRead, "%s %s %s", fName, lName, number);
			if ( !feof(pRead) )
				printf("\n%d. %s %s\t%s", iEntryNr, fName, lName, number);
		} //end loop
			printf("\n");
	}
	else
		fclose(pRead);
		return -1; //there is a file i/o error
}

/*----------Edit phone book entries----------*/
int editEntries() {

	int iSelect = 0;
	int iCount = 0;

	char lName_2[20] = {0};
	char fName_2[20] = {0};
	char number_2[20] = {0};

	char cStoreRecord[70] = {0};

	FILE *pRead;
	FILE *pWriteTemp;
	pRead = fopen("phone_book.dat", "r");
	pWriteTemp = fopen("temp.dat", "a");
	
	system("clear");
	printEntries();

	printf("\n\nWhich entry would you like to change?");
	printf("\nEdit nr ---> ");
	scanf("%d", &iSelect);

	printf("\nEnter first name: ");
	scanf("%s", fName_2);
	printf("\nEnter last name: ");
	scanf("%s", lName_2);
	printf("\nEnter phone number: ");
	scanf("%s", number_2);

	if ( pWriteTemp != NULL || pRead != NULL) {
		while( !feof(pRead) ) {
			if (iCount == iSelect) {
				fprintf(pWriteTemp, "%s %s %s\n", fName_2, lName_2, number_2);
			}
			else
				fprintf(pWriteTemp, "%s", cStoreRecord);
			iCount += 1;
			fgets(cStoreRecord, 70, pRead);
		}
	}
	else{
		fclose(pRead);
		fclose(pWriteTemp);
		return -1; //there is a file i/o error
	}
	fclose(pRead);
	fclose(pWriteTemp);
	remove("phone_book.dat");
	rename("temp.dat","phone_book.dat");
}

/*----------Delete phone book entries----------*/
int deleteEntries() {
	
	int iSelect = 0;
	int iCount = 0;

	char cStoreRecord[70] = {0};

	FILE *pRead;
	FILE *pWriteTemp;
	pRead = fopen("phone_book.dat", "r");
	pWriteTemp = fopen("temp.dat", "a");
	
	system("clear");
	printEntries();

	printf("\n\nWhich entry would you like to delete?");
	printf("\nDelete nr ---> ");
	scanf("%d", &iSelect);

	if ( pWriteTemp != NULL || pRead != NULL) {
		while( !feof(pRead) ) {
			if (iCount != iSelect)
				fprintf(pWriteTemp, "%s", cStoreRecord);
			iCount += 1;
			fgets(cStoreRecord, 70, pRead);
		}
	}
	else{
		fclose(pRead);
		fclose(pWriteTemp);
		return -1; //there is a file i/o error
	}
	fclose(pRead);
	fclose(pWriteTemp);
	remove("phone_book.dat");
	rename("temp.dat","phone_book.dat");
}