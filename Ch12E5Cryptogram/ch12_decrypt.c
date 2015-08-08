/*File: ch12_decrypt.c

Challenges Ch12E5 - Decrypt

Decrypt the message by shifting each characters ASCII value
*/

// By Jim-Kristian Malmhaug | Date: 8 August 2015

#include <stdio.h>

void decrypt(char sMessage[],int random){

	int x = 0;

	while(sMessage[x]){
		sMessage[x] -= random;
		x++;
	} //end loop

	x = 0;
	printf("\nDecrypted message is: ");

//print the encrypted message
	while(sMessage[x]){
		printf("%c", sMessage[x]);
		x++;
	} //end loop
} //end encrypt function