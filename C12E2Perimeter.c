/* Challenges Ch12E2 - Perimeter */
		
// By Jim-Kristian Malmhaug | Date: 2 August 2015
		
#include <stdio.h>
#include <stdlib.h>

#define PERIMETER(fLength,fWidth) ((2 * fLength) + (2 * fWidth))

main() {

	float fLength = 0;
	float fWidth = 0;

	printf("\nCalculate perimeter of a rectangle\n\n");
	printf("Enter length --> ");
	scanf("%f", &fLength);
	printf("Enter width --> ");
	scanf("%f", &fWidth);

	printf("\nPerimeter of rectangle is %.2f\n", PERIMETER(fLength,fWidth));

} //end main