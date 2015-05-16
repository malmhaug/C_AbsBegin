/* Challanges Ch7E4 - CryptogramV2 */

// By Jim-Kristian Malmhaug | Date: 8 October 2013

//Notes: This encrytption program uses the standard adding as given beforehand, and a new fliping of letter technique.

//References:

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void encrypt(char [], int); //function prototype for encryption
void decrypt(char [], int); //function prototype for decryption

main() {

        char myString[21] = {0};
        int iSelection = 0;
        int iRand;

        srand(time(NULL));

        iRand = ((rand() % 4) + 1); //random #, 1-4

        while(iSelection != 4) {

                system("clear");

                printf("\n\n*** CRYPTOGRAM V2 ***\n\nWhat will You do?\n\n1. Encrypt Clear Text\n2. Decrypt Cipher Text\n3. Generate New Key\n4. Quit\n\n---> ");
                scanf("%d", &iSelection);

                switch(iSelection) {

                        case 1:

                                printf("\nEnter one word as clear text to encrypt (less than 22 characters): ");
                                scanf("%s", myString);
                                encrypt(myString, iRand);
                                break;

                        case 2:

                                printf("\nEnter cipher text to decrypt: ");
                                scanf("%s", myString);
                                decrypt(myString, iRand);
                                break;

                        case 3:

                                iRand = ((rand() % 4) + 1); //random #, 1-4
                                printf("\nNew Key Generated\n");
                                sleep(2);
                                break;

                }

        }

} //End of main()-function

/*************************************************
                Function definition
                     encrypt()
*************************************************/

void encrypt(char sMessage[], int random) {

        int x = 0;
        char cTempChar = '\0';

//---------------------------------------------------encrypt the message by shifting each charcter ASCII value

        while(sMessage[x]) {

                sMessage[x] += random;
                x++;

        }

//---------------------------------------------------then the message is being flipped so that the last letter is the first letter

        cTempChar = sMessage[x-1];
        sMessage[x-1] = sMessage[0];
        sMessage[0] = cTempChar;

        x = 0;

        printf("\nEncrypted message is: ");

//---------------------------------------------------print the encrypted message

        while(sMessage[x]) {

                printf("%c", sMessage[x]);
                x++;

        }

}

/*************************************************
                Function definition
                     decrypt()
*************************************************/

void decrypt(char sMessage[], int random) {

        int x = 0;
        char cTempChar = '\0';

//----------------------------------------------------decrypt the message by shifting each character ASCII value

        while(sMessage[x]) {

                sMessage[x] = sMessage[x] - random;
                x++;

        }

//---------------------------------------------------then the message is being flipped so that the last letter is the first letter

        cTempChar = sMessage[x-1];
        sMessage[x-1] = sMessage[0];
        sMessage[0] = cTempChar;

        x = 0;

        printf("\nDecrypted message is: ");

//----------------------------------------------------print the decrypted message

        while(sMessage[x]) {

                printf("%c", sMessage[x]);
                x++;

        }

}
