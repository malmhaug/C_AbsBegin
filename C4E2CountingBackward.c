/* Challanges Ch4.2 - CountingBackward */

// By Jim-Kristian Malmhaug | Date: 22 August 2013

//Notes: Counts from 1oo to 1 by increments of 10.

//References:

#include <stdio.h>

main() {

        char cEnterKey = '\0';
        int iCounter = 90;

        printf("\n*** Counting Game v2.0 ***\n\nCounter = 100. Press Enter");
        scanf("%c", &cEnterKey);

        do {

                printf("\nCounter = %d. Press Enter", iCounter);
                scanf("%c", &cEnterKey);

                iCounter -= 10;

        } while (iCounter > 1);

        printf("\nCounter = 1\n\nThank You for counting backward!\n\n");

} //End of main()-function
