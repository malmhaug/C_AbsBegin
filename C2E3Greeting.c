/* Challanges Ch2.3 - Greeting */

// By Jim-Kristian Malmhaug | Date: 21 July 2013

//Notes: Better with strings. Could also have longer names.

#include <stdio.h>

main()
{
        char myName1 = '\0';
        char myName2 = '\0';
        char myName3 = '\0';
        char myName4 = '\0';
        char myName5 = '\0';

        printf("Write Your name here: \n");
        scanf("%c%c%c%c%c", &myName1, &myName2, &myName3, &myName4, &myName5);
        printf("\nWelcome, %c%c%c%c%c", myName1, myName2, myName3, myName4, myName5);
}