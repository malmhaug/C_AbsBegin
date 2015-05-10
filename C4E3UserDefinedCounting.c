/* Challanges Ch4.3 - UserDefinedCounting */

// By Jim-Kristian Malmhaug | Date: 26 August 2013

//Notes: Automatic counting.

//References:

#include <stdio.h>

main() {

        int iBeginNumber = 0;
        int iEndNumber = 0;
        int iIncrement = 0;
        int x = 0;
        int y = 0;
        char cEnter = '\0';

        printf("\n*** Counting v3.0 ***\n\nCount from some number to another with userdefined incrementation.\n\nFrom which number will You start to count? Enter start number here:\n");
        scanf("%d", &iBeginNumber);
        printf("\nTo which number will You start to count? Enter end number here: \n");
        scanf("%d", &iEndNumber);
        printf("\nWhat is Your increment? Enter here: \n");
        scanf("%d", &iIncrement);
        printf("\n\nYour start number is %d, stop number %d and increments %d.\n", iBeginNumber, iEndNumber, iIncrement);

        if (iBeginNumber < iEndNumber) {

                for( x = iBeginNumber ; x < iEndNumber ; x += iIncrement) {

                        iBeginNumber += iIncrement;
                        if (iBeginNumber > iEndNumber) {
                                printf("\nCan't increment last number.\nEnd number: %d", iEndNumber);
                                break;
                        }
                        printf("\nCounter: %d", iBeginNumber);

                }

        } else if ( iBeginNumber > iEndNumber) {

                for ( y = iBeginNumber ; y > iEndNumber ; y -= iIncrement) {

                        iBeginNumber -= iIncrement;
                        if (iBeginNumber < iEndNumber) {
                                printf("\nCan't increment last number.\nEnd number: %d", iEndNumber);
                                break;
                        }
                        printf("\nCounter: %d", iBeginNumber);

                }

        } else if ( iBeginNumber == iEndNumber) {

                printf("\n\nNo counting needed!");

        }
        printf("\n\nThank You for Counting!\n\n");

} //End of main()-function
