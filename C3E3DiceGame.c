/* Challanges Ch3.3 - DiceGame */

// By Jim-Kristian Malmhaug | Date: 11 August 2013

//Notes: Your lucky number is 7 and 11. Roll for winning!

//References:

#include <stdio.h>

main() {

        char cPressEnter = '\0';
        int iDiceNum_1 = 0;
        int iDiceNum_2 = 0;
        int iSumDices = 0;

        printf("\n*** THE DICE GAME ***\n\nPlay the game! Your lucky number is 7 and 11. Press enter to roll the dice.");
        scanf("%c", &cPressEnter);

        srand(time());
        iDiceNum_1 = ((rand() % 6) + 1);
        iDiceNum_2 = ((rand() % 6) + 1);
        iSumDices = iDiceNum_1 + iDiceNum_2;

        printf("\n\nDice 1 --> %d \n\nDice 2 --> %d\n\n", iDiceNum_1, iDiceNum_2);

        if((iSumDices == 7) || (iSumDices == 11)) {
                printf("CONGRATULATION!!! YOU WON THE GAME! Dice 1 is %d, dice 2 is %d and the sum is %d", iDiceNum_1, iDiceNum_2, iSumDices);
        }else {
                printf("Sorry, You lost! Dice 1 is %d, dice 2 is %d and the sum is %d", iDiceNum_1, iDiceNum_2, iSumDices);
        }

printf("\n\n");

} //End of main()-function

