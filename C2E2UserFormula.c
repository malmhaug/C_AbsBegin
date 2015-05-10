/* Challanges Ch2.2 - UserFormula */

// By Jim-Kristian Malmhaug | Date: 21 July 2013

#include <stdio.h>

main()
{
        int iA = 0;
        int iB = 0;
        int iX = 0;
        int iY = 0;
        int iF = 0;

        printf("\nf = (a-b)(x-y)\n");
        printf("\nEnter value for a: ");
        scanf("%i", &iA);
        printf("\nEnter value for b: ");
        scanf("%i", &iB);
        printf("\nEnter value for x: ");
        scanf("%i", &iX);
        printf("\nEnter value for y: ");
        scanf("%i", &iY);

        printf("\na = %i, b = %i, x = %i and y = %i. Then f = (a - b)(x - y) = %i\n", iA, iB, iX, iY, iF = (iA-iB)*(iX-iY));
}
