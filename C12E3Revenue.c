/* Challenges Ch12E3 - Revenue */
		
// By Jim-Kristian Malmhaug | Date: 2 August 2015
		
#include <stdio.h>
#include <stdlib.h>

#define REVENUE(fPrice,fQuantity) (fPrice * fQuantity)

main() {

	float fPrice = 0;
	float fQuantity = 0;

	printf("\nCalculate total revenue\n\n");
	printf("Enter price --> ");
	scanf("%f", &fPrice);
	printf("Enter quantity --> ");
	scanf("%f", &fQuantity);

	printf("\nTotal revenue is %.2f\n", REVENUE(fPrice,fQuantity));

} //end main