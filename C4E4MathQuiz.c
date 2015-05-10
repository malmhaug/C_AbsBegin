/* Challanges Ch4.4 - MathQuiz */

// By Jim-Kristian Malmhaug | Date: 27 August 2013

//Notes: Randomized math quiz with track of correct/wrong answeres. Important to use space before %d in scanf(" %d", &iAnswere), or it will not work!

//References:

#include <stdio.h>

main() {

        int iNumQuestion = 0;
        int iInc = 1;
        int iRandomNum_1 = 0;
        int iRandomNum_2 = 0;
        int iCorrectAnsw = 0;
        int iAnswere = 0;
        int iCalc = 0;

        srand(time(NULL));

        printf("\n*** MATH QUIZ ***\n\nCreate Your own randomized math quiz!\n\nHow many questions would You like to answere? Enter here: ");
        scanf("%d", &iNumQuestion);

        while(iInc <= iNumQuestion) {

                int iRandomNum_1 = (rand() % 10);
                int iRandomNum_2 = (rand() % 10);
                iCalc = (iRandomNum_1 * iRandomNum_2);
                printf("\nQuestion %d: What is %d * %d = ?. Answer: ", iInc, iRandomNum_1, iRandomNum_2);
                scanf(" %d", &iAnswere);

                if(iAnswere == iCalc) {

                        printf("Correct!\n");
                        iCorrectAnsw++;

                }
                else {

                        printf("Wrong!\n");

                }

                iInc++;

        }

        printf ( "\n\nYou answered %d correct answers out of %d questions!\n\n", iCorrectAnsw, iNumQuestion);

} //End of main()-function