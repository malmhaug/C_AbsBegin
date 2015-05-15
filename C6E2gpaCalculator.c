/* Challanges Ch6E2 - gpaCalculator */

// By Jim-Kristian Malmhaug | Date: 17 September 2013

//Notes: Calculate up to 30 average GPAs.

//References:

#include <stdio.h>

main() {

        int iSelect = 0;
        float fStoreGPA[30] = { 0 };
        int iNumGPA = 0;
        int i = 0;
        int j = 0;
        float fSumGPA = 0;
        float fAverageGPA = 0;

        do {

                system("clear");

                printf("\n\n*** Calculate GPA ***\n\n");
                printf("1. Enter a new GPA\n2. Calculate GPA average\n3. Exit\n\n----> ");
                scanf("%d", &iSelect);

                if (iSelect == 1 && iNumGPA != 30) {


                        printf("\n\nEnter Your GPA for subject %d ---> ", (iNumGPA + 1));

                        scanf("%f", &fStoreGPA[iNumGPA]);

                        iNumGPA++;

                }

                else if(iSelect == 1 && iNumGPA == 30)

                        printf("\n\nYou can not enter more than 30 GPAs\n\n");


                else if(iSelect == 2) {

                                for(i = 0 ; i <= iNumGPA ; i++) {

                                        fSumGPA += fStoreGPA[i];

                                }

                                fAverageGPA = (fSumGPA / iNumGPA);

                                printf("\n\nAverage GPA is %.2f\n\n", fAverageGPA);

                }


        } while(iSelect != 3 && iSelect != 2);

} //End of main()-function