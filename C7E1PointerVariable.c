/* Challanges Ch7E1 - PointerVariable */

// By Jim-Kristian Malmhaug | Date: 2 October 2013

//Notes:

//References:

#include <stdio.h>

main() {

        int *iPtr;
        char *cPtr;
        float *fFloat;
        int iNumber = 100;
        float fNumber = 0.001;
        char cCharacter = 'J';

        iPtr = &iNumber; //iPtr points to iNumber-adress.
        cPtr = &cCharacter; //cPtr points to cChar-adress.
        fFloat = &fNumber; //fFloat points to fNumber-adress.

        printf("\n\nThe value of iNumber, fNumber and cCharacter is %d, %f and %c\n\n", iNumber, fNumber, cCharacter);
        printf("\n\nThe value of iPtr, fFloat and cPtr is %d, %f and %c\n\n", *iPtr, *fFloat, *cPtr);
        printf("\n\nThe adress of iNumber, fNumber and cCharacter is %p, %p and %p\n\n", &iNumber, &fNumber, &cCharacter);
        printf("\n\nThe adress of iPtr, fFloat and cPtr is %p, %p and %p\n\n", iPtr, fFloat, cPtr);

} //End of main()-function