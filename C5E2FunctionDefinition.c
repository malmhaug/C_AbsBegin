/* Challanges Ch5E2 - FunctionDefinition */

// By Jim-Kristian Malmhaug | Date: 06 September 2013

//Notes: Running prototypes and their definitions

//References:

#include <stdio.h>

        int iGetRemainder(int, int);                    //Function prototype that divides two numbers and return the remainder
        int iGetLargestNumber(int, int);                //Function prototype that returns the largest number of two numbers
        void vPrintATMmenu(void);                       //Function prototype that prints the ATM menu on screen, recives and returns no number

main() {

        int iSelect = 0;
        int iNumerator = 0;
        int iDenumerator = 0;
        int iResultRem = 0;
        int iFirstNum = 0;
        int iSecondNum = 0;
        int iBigNum = 0;

        do {

                printf("\n********* Choose from the Menu *********\n");
                printf("\n\n1. Show ATM menu\n\n2. Find remainder from to numbers\n\n3. Find the largest number of two numbers (Yeah, I know it's pretty easy!)\n\n4. Exit!\n\n");
                printf("Choose: ");
                scanf("%d", &iSelect);

                switch (iSelect) {

                        case 1 :

                                vPrintATMmenu();

                                break;

                        case 2 :

                                printf("\nEnter Your numerator here: ");
                                scanf("%d", &iNumerator);
                                printf("\nEnter Your denumerator here: ");
                                scanf("%d", &iDenumerator);

                                iResultRem = iGetRemainder(iNumerator, iDenumerator);

                                printf("\nThe remainder is %d\n", iResultRem);

                                break;

                        case 3:

                                printf("\nEnter first number: ");
                                scanf("%d", &iFirstNum);
                                printf("\nEnter second number: ");
                                scanf("%d", &iSecondNum);

                                iBigNum = iGetLargestNumber(iFirstNum, iSecondNum);

                                printf("\nThe largest number You entered is %d\n", iBigNum);

                                break;
                }

        } while (iSelect != 4);

} //End of main()-function


/******************************************************
                FUNCTION DEFINITION
                   iGetRemainder
******************************************************/

int iGetRemainder(int iNumerator, int iDenominator) {

        return (iNumerator % iDenominator);

}

/******************************************************
                FUNCTION DEFINITION
                 iGetLargestNumber
******************************************************/

int iGetLargestNumber(int iNumOne, int iNumTwo) {

        if(iNumOne < iNumTwo)

                return iNumTwo;

        else if(iNumOne > iNumTwo)

                return iNumOne;

        else if(iNumOne == iNumTwo) {

                printf("You have entered two equal numbers!");
                return iNumOne;
        }
}

/******************************************************
                FUNCTION DEFINITION
                  vPritntATMmenu
******************************************************/
void vPrintATMmenu(void) {

        int i = 0;

        printf("\f******************** ATM ********************");
        printf("\n*                                           *");
        printf("\n*                  Welcome                  *");
        printf("\n*                                           *");
        printf("\n*              BANK OF EUTOPIA              *");

        for( i = 0 ; i < 8 ; i++) {

                printf("\n*                                           *");

        }

        printf("\n*   Please insert Your Credit Card here --->*");
        printf("\n*                                           *");
        printf("\n*********************************************");
}
