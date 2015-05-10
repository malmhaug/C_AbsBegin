/* Challanges Ch3.1 - GuessNumber */

// By Jim-Kristian Malmhaug | Date: 8 August 2013

//Notes:

#include <stdio.h>
#include <ctype.h>

main()
{
        int iGuessNum = 0;
        int iRandomNum = 0;
		iRandomNum = ((rand() % 10) + 1);
		srand(time());
        
        printf("*** GUESSING GAME! ***\n");

        printf("\nGuess a number between 1 - 10:");
        scanf(" %d", &iGuessNum);

        if((iGuessNum >= 1) && (iGuessNum <= 10) && (isdigit(iGuessNum) == 0)) {

                if(iGuessNum == iRandomNum) {

                        printf("\nYou guessed right! The right number is %d", iRandomNum);

                }else {

                        printf("\nYour answer is wrong! The right number is %d", iRandomNum);

                        }

        }else {

                printf("\nYou did not enter a digit between 1-10!");

                }

printf("\n\n");

}