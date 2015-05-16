/* Challanges Ch7E3 - DiceRollingGame */

// By Jim-Kristian Malmhaug | Date: 8 October 2013

//Notes:

//References:

#include <stdio.h>
#include <unistd.h>

void TossDice(int *iPtr); //Function prototype the generates the random dice numbers.

int (*iPtr)[6];

main() {

        int iSelect = 0;
        int iDiceArray[6] = {0};
        iPtr = &iDiceArray;
        int i = 0;

        do{

        system("clear");

        printf("\n\n*** Dice Rolling Game ***\n\nWhat would You do?\n\n1. Roll six dices.\n2. View the addresses\n3. Quit\n\n----> ");
        scanf("%d", &iSelect);

                switch(iSelect) {

                        case 1:

                                TossDice(iDiceArray);

                                printf("\n\nMessage: Your dices are -->");

                                for(i = 0 ; i < 6 ; i++) {

                                        printf(" %d", iDiceArray[i]);

                                }

                                break;

                        case 2:

                                printf("\n\nFirst address of iPtr is %p and adress of iDiceArray[0] is %p\n", iPtr, &iDiceArray[0]);

                                sleep(3);

                                break;

                        case 3:

                                printf("\n\nThank You for playing!\n\n");
                                break;

                }

        } while(iSelect != 3);

} //End of main()-function

/*****************************************************
                FUNCTION DEFINITION
                     TossDice()
*****************************************************/

void TossDice(int *iPtr) {

        srand(time());
        int j = 0;

        for(j = 0 ; j < 6 ; j++) {

                iPtr[j] = ((rand() % 6) + 1);

        }

}
