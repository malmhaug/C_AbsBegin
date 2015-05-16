/* Challanges Ch8E1 - NameInfo */

// By Jim-Kristian Malmhaug | Date: 14 October 2013

//Notes: The characters æ, ø and å will not work in this program.

//References:

#include <stdio.h>
#include <string.h>
#include <ctype.h>

main() {

        char nameArray[30] = {'\0'};
        int iNameLength = 0;
        int i = 0;

        system("clear");

        printf("\n\n*** Your name! ***\n\nThis program finds the length of your name, and prints it in big characters. :-) \n\nWrite Your name ---> ");

        scanf("%s", nameArray);

        iNameLength = strlen(nameArray);

        printf("\n\nYour name is %s, and it has %d characters.", nameArray, iNameLength);

        printf("\n\nYour name in big characters is: ");

        for(i = 0 ; i <= strlen(nameArray) ; i++) {

                nameArray[i] = toupper(nameArray[i]);

        } //End of the for-loop that converts the name to big characters.

        printf("%s\n\n", nameArray);

}