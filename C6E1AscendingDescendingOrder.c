/* Challanges Ch6E1 - AscendingDescendingOrder */

// By Jim-Kristian Malmhaug | Date: 15 September 2013

//Notes: Sorting numbers.

//References:

#include <stdio.h>

int giArray[10] = {-1};

void showNumbers(int);          //Function prototype which shows the sorted array
void ascendingOrder(void);      //Function prototype which sort the numbers in an ascending order.

main() {

        int i = 0;
        int j = 0;
        int iSelect = 0;

        printf("\n\n*** Ascendig & descending numbers ***\n\n");
        printf("Please enter 10 numbers\n\n");

        for(i = 0 ; i < 10 ; i++) {

                printf("Enter %d number: ", (i+1));
                scanf("%d", &giArray[i]);

        }

        printf("\n\nYou entered the numbers:\n\n");

        for(j = 0 ; j < 10 ; j++) {

                printf("%d\n", giArray[j]);

        }

        printf("\n\nWhat will You do with Your numbers?\n\n");
        printf("1. Sort them in an ascending order\n\n2. Sort them in an descending order\n\n");
        printf("\n\n---> ");
        scanf("%d", &iSelect);

        switch(iSelect) {

                case 1:

                        printf("\n\nAscending Order\n\n");

                        ascendingOrder();

                        showNumbers(1);

                        break;

                case 2:

                        printf("\n\nDescending Order:\n\n");

                        ascendingOrder();

                        showNumbers(2);

                        break;

        }


} //End of main()

/************************************
          Function Definition
             ascendingOrder
************************************/

void ascendingOrder(void) {

        int k = 0;
        int iTempNum = 0;
        int iNumSeen = 0;

        do {

                for(k = 0 ; k < 9 ; k++) {

                        if(giArray[k] > giArray[k+1]) {

                                iTempNum = giArray[k];
                                giArray[k] = giArray[k+1];
                                giArray[k+1] = iTempNum;

                        }


                }

                iNumSeen++;

        } while (iNumSeen != 9);

        printf("\n\n\n");

}

/************************************
          Function Definition
              showNumbers
************************************/

void showNumbers(int iSelect) {

        int l = 0;
        int m = 9;

        if(iSelect == 1) {

                for(l = 0 ; l < 10 ; l++) {

                        printf("%d\n", giArray[l]);

                }

        }

        else {

                for(m = 9 ; m >= 0 ; m--) {

                        printf("%d\n", giArray[m]);

                }

        }

}