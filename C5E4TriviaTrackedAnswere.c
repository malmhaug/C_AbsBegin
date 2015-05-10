/* Challanges Ch5E4 - TriviaTrackedAnswer */

// By Jim-Kristian Malmhaug | Date: 10 September 2013

//Notes: The original Trivia with two extra categories and tracking of correct/incorrect answers.

//References:

#include <stdio.h>

/*****************************************************
FUNCTION PROTOTYPES
*****************************************************/

int sportsQuestion(void);
int geographyQuestion(void);
int astronomyQuestion(void);
int mathQuestion(void);
void pause(int);

/****************************************************/

/*****************************************************
GLOBAL VARIABLE
*****************************************************/
int giResponse = 0;
int giCorrectAnsw = 0;
int giIncorrectAnsw = 0;
int giNumQuestions = 0;
/****************************************************/

main() {

        do {

                system("clear");
                printf("\n\tTHE TRIVIA GAME\n\n");
                printf("1\tSports\n");
                printf("2\tGeography\n");
                printf("3\tAstronomy\n");
                printf("4\tMath\n");
                printf("5\tQuit\n");
                printf("\n\nEnter your selection: ");
                scanf("%d", &giResponse);

                switch(giResponse) {

                        case 1:
                                if(sportsQuestion() == 4) {
                                        printf("\nCorrect!\n");
                                        giCorrectAnsw++;
                                } else {
                                        printf("\nIncorrect\n");
                                        giIncorrectAnsw++;
                                }
                                giNumQuestions++;
                                pause(2);
                                break;

                        case 2:
                                if(geographyQuestion() == 2) {
                                        printf("\nCorrect!\n");
                                        giCorrectAnsw++;
                                } else {
                                        printf("\nIncorrect!\n");
                                        giIncorrectAnsw++;
                                }
                                giNumQuestions++;
                                pause(2);
                                break;

                        case 3:
                                if(astronomyQuestion() == 3) {
                                        printf("\nCorrect!\n");
                                        giCorrectAnsw++;
                                } else {
                                        printf("\nIncorrect!\n");
                                        giIncorrectAnsw++;
                                }
                                giNumQuestions++;
                                pause(2);
                                break;

                        case 4:
                                if(mathQuestion() == 4) {
                                        printf("\nCorrect!\n");
                                        giCorrectAnsw++;
                                } else {
                                        printf("\nIncorrect!\n");
                                        giIncorrectAnsw++;
                                }
                                giNumQuestions++;
                                pause(2);
                                break;

                } //end switch

        } while(giResponse != 5);

        printf("\n\nYou answered %d correct questions and %d incorrect questions out of %d questions.\n\n", giCorrectAnsw, giIncorrectAnsw, giNumQuestions);

} //end main function

/*********************************************************************************
FUNCTION DEFINITION
*********************************************************************************/

int sportsQuestion(void) {

        int iAnswer = 0;

        system("clear");
        printf("\tSports Question\n");
        printf("\nWhat University did NFL star Deon Sanders attend? ");
        printf("\n\n1\tUniversity of Miami\n");
        printf("2\tCalifornia State University\n");
        printf("3\tIndiana University\n");
        printf("4\tFlorida State University\n");
        printf("\nEnter your selection: ");
        scanf("%d", &iAnswer);

        return iAnswer;

} //end SportsQuestion function

/*********************************************************************************
FUNCTION DEFINITION
*********************************************************************************/

int geographyQuestion(void) {

        int iAnswer = 0;

        system("clear");
        printf("\tGeography Question\n");
        printf("\nWhat is the state capitol of Florida? ");
        printf("\n\n1\tPenescola\n");
        printf("2\tTallahassee\n");
        printf("3\tJacksonville\n");
        printf("4\tMiami\n");
        printf("\nEnter your selection: ");
        scanf("%d", &iAnswer);

        return iAnswer;

} //end geographyQuestion function

/*********************************************************************************
FUNCTION DEFINITION
*********************************************************************************/

int astronomyQuestion(void) {

        int iAnswer = 0;

        system("clear");
        printf("\tAstronomy Question\n");
        printf("\nWhat is the other name for Earth? ");
        printf("\n\n1\tQuphar\n");
        printf("2\tTargus\n");
        printf("3\tTellus\n");
        printf("4\tTrellus\n");
        printf("\nEnter your selection: ");
        scanf("%d", &iAnswer);

        return iAnswer;

}

/*********************************************************************************
FUNCTION DEFINITION
*********************************************************************************/

int mathQuestion(void) {

        int iAnswer = 0;

        system("clear");
        printf("\tMath Question\n");
        printf("\nWhat is Newtons first name? ");
        printf("\n\n1\tFrodo\n");
        printf("2\tCristopher\n");
        printf("3\tCollin\n");
        printf("4\tIsaac\n");
        printf("\nEnter your selection: ");
        scanf("%d", &iAnswer);

        return iAnswer;

}

/*********************************************************************************
FUNCTION DEFINITION
*********************************************************************************/

void pause(int inNum) {

        int iCurrentTime = 0;
        int iElapsedTime = 0;

        iCurrentTime = time(NULL);

        do {

                iElapsedTime = time(NULL);

        } while ((iElapsedTime - iCurrentTime) < inNum);

} //end pause function