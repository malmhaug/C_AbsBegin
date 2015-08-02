/* Challenges Ch12E1 - Macro */
		
// By Jim-Kristian Malmhaug | Date: 2 August 2015
		
#include <stdio.h>
#include <stdlib.h>

#define CIRCLEAREA(fRad) (3.14 * fRad * fRad)

main() {

	float fRad = 0;

	printf("\nCalculate area of a circle\n\n");
	printf("Enter radius --> ");
	scanf("%f", &fRad);

	printf("\nArea of circle is %.2f\n", CIRCLEAREA(fRad));

} //end main