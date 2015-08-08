/*File: ch12_encrypt.c

Challenges Ch12E5 - Encrypt

Encrypt the message by shifting each characters ASCII value
*/

// By Jim-Kristian Malmhaug | Date: 8 August 2015

#include <stdio.h>

void encrypt(char sMessage[],int random){

	int x = 0;

	while(sMessage[x]){
		sMessage[x] += random;
		x++;
	} //end loop

	x = 0;
	printf("\nEncrypted message is: ");

//print the encrypted message
	while(sMessage[x]){
		printf("%c", sMessage[x]);
		x++;
	} //end loop
} //end encrypt function