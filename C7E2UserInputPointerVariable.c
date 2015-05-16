/* Challanges Ch7E2 - UserInputPointerVariable */

// By Jim-Kristian Malmhaug | Date: 2 October 2013

//Notes:

//References:

#include <stdio.h>

int menuSelection(void); //Function prototype for showing the menu.

main() {

        int iSelect = 0;
        int iValue = 0;
        int *iPtr;

        while(iSelect != 5) {

                system("clear");

                iSelect = menuSelection();

                switch(iSelect) {

                        case 1:

                                printf("\nEnter the new integer value: ");
                                scanf("%d", &iValue);
                                break;

                        case 2:

                                iPtr = &iValue;
                                printf("\nMessage: The address of the pointer is: %p", iPtr);
                                break;

                        case 3:

                                printf("\nMessage: The address of the integer value is: %p", &iValue);
                                break;

                        case 4:

                                printf("\nMessage: The integer value is %d.", iValue);
                                break;

                }

        }
} //End of main()-function

/***************************************************
                FUNCTION DEFINITION
                  menuSelection()
***************************************************/

int menuSelection(void) {

        int iSelect = 0;

        system("clear");
        printf("\n\n1. Enter New Integer Vaule\n2. Print Pointer Address\n3. Print Integer Address\n4. Print Integer Value\n5. Quit\n\n----> ");
        scanf("%d", &iSelect);
        return iSelect;

}
