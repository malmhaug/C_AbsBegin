//File: ch12_main.c

/* Challenges Ch12E5 - Cryptogram */
		
// By Jim-Kristian Malmhaug | Date: 8 August 2015

#include <stdio.h>
#include <stdlib.h>
#include "ch12_cryptogram.h"

main(){

	char myString[21] = {0};
	int iSelection = 0;
	int iRand;

	srand(time(NULL));

	iRand = (rand() % 4) + 1; //random #. 1-4

	while(iSelection != 4){

		printf("\n\n1\tEncrypt Clear Text\n");
		printf("2\tDecrypt Cipher Text\n");
		printf("3\tGenerate New Key\n");
		printf("4\tQuit\n");
		printf("\nSelect a Cryptography Option: ");
		scanf("%d",&iSelection);

		switch(iSelection) {

			case 1:
				printf("\nEnter one word as clear text to encrypt: ");
				scanf("%s",myString);
				encrypt(myString, iRand);
				break;
			case 2:
				printf("\nEnter cipher text to decrypt: ");
				scanf("%s", myString);
				decrypt(myString, iRand);
				break;
			case 3:
				iRand = (rand() % 4) + 1; //random #, 1-4
				printf("\nNew Key Generated\n");
				break;
		} //end switch
	} //end loop
} //end main