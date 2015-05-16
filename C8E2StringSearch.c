/* Challanges Ch8E2 - StringSearch */

// By Jim-Kristian Malmhaug | Date: 2 November 2013

//Notes:

//References:

#include <stdio.h>
#include <string.h>

main() {

        int i = 0;
        int j = 0;
        char *stringSearch[3] = {0};
        stringSearch[0] = "Going";
        stringSearch[1] = "tou";
        stringSearch[2] = "ay put!";
        char *goThroughString = {0};
        goThroughString = "When the going gets tough, the tough stay put!";
        int iFoundList[3] = {0};

        system("clear");

        printf("\n\n*** Search for words in a string ***\n\nThe words that this program search for is \"Going\", \"tou\" and \"ay put!\" ");
        printf("\n\nThe string is \"When the going gets tough, the tough stay put!\"\n\nSearching...\n\n");

        for(i = 0 ; i < 3 ; i++){

                if((strstr(goThroughString, stringSearch[i])) != NULL) {
                        iFoundList[i] += 1;
                }

        }

        printf("\nThe following words were found:\n");

        for(j = 0 ; j < 3 ; j++) {

                printf("\n--> %s was found (at least) %i time in the string.", stringSearch[j], iFoundList[j]);

        }

        printf("\n\nThank You for searching! ;-)\n\n");

} //end of main()
