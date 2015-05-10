/* Challanges Ch4.1 - Counting */

// By Jim-Kristian Malmhaug | Date: 22 August 2013

//Notes: Counts from 1 to 100 by increments of 5.

//References:

#include <stdio.h>

main() {

        char cEnterKey = '\0';
        int iCounter = 5;

        printf("\n*** Counting Game ***\n\nCounter = 1. Press Enter");
        scanf("%c", &cEnterKey);

        do {

                printf("\nCounter = %d. Press Enter", iCounter);
                scanf("%c", &cEnterKey);

                iCounter += 5;

        } while (iCounter < 100);

        printf("\nCounter = 100\n\nThank You for counting!\n\n");

} //End of main()-function
