/* Challanges Ch10E3 - PhoneBook V001 */
		
// By Jim-Kristian Malmhaug | Date: 3 Juni 2015
		
//Libraries:
#include <stdio.h>
#include <stdlib.h>

//Function prototypes
int showMenu(); //Shows user options

//Main function
int main() {

	//Variable declerations
	int i = 0;
	int iOption = 0;
	int iContacts = 0;
	int iModifyUser = 0;
	char *cPhoneBook_name;
	int *iPhoneBook_nr;

	cPhoneBook_name = (char *) calloc(1, 80 * sizeof(char));
	iPhoneBook_nr = (int *) calloc(1, sizeof(int));

	do {

		//Memory check
		if(cPhoneBook_name == NULL || iPhoneBook_nr == NULL){
			printf("\nOut of Memory!\n");
			return;
		}

		//Show menu
		iOption = showMenu();

		switch (iOption) {
			case 1: //Add contact
				printf("\nEnter name:\n");
				scanf("%s", &cPhoneBook_name[80*iContacts]);
				printf("\nEnter number:\n");
				scanf("%d", &iPhoneBook_nr[iContacts]);
				cPhoneBook_name = realloc(cPhoneBook_name, (iContacts+1) * 80 * sizeof(char));
				iPhoneBook_nr = realloc(iPhoneBook_nr, (iContacts+1) * 	 sizeof(int));
				iContacts += 1;
				break;
			case 2: //Modify contact
				printf("\nEnter contact number to change: \n");
				scanf("%d", &iModifyUser);
				printf("\nEnter name:\n");
				scanf("%s", &cPhoneBook_name[80*(iModifyUser-1)]);
				printf("\nEnter number:\n");
				scanf("%d", &iPhoneBook_nr[iModifyUser-1]);
				break;
			case 3: //Show contacts
				for(i = 0 ; i < iContacts ; i++) {
					printf("\n%d. %s %d\n", i+1, &cPhoneBook_name[i*80], iPhoneBook_nr[i]);
				}
				break;
		}
	}while(iOption != 4);//Exit if iOption is 5;

	free(cPhoneBook_name);//Free memory
	free(iPhoneBook_nr);//Free memory
    system("clear");
    return 0;
}


//Function definition - showMenu()
int showMenu() {

	int iOption = 0;

	//system("clear");

	printf("\n   Phone book   \n");
	printf("------------------------\n");
	printf("1. Add new contact.\n");
	printf("2. Edit existing contact\n");
	printf("3. Show contact(s)\n");
	printf("4. Exit\n");
	printf("------------------------\n");
	printf("Option --> ");
	scanf("%d", &iOption);

	return iOption;
}
//---------------------------------------------------------