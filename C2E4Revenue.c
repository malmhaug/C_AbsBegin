/* Challanges Ch2.4 - Revenue */

// By Jim-Kristian Malmhaug | Date: 21 July 2013

//Notes:

#include <stdio.h>

main()
{		
		printf("\nDo a revenue:\n");
        int iQuantity = 0;
        float fPrice = 0;
        float fTotalRevenue = 0;

        printf("\nWrite in the price per piece: ");
        scanf("%f", &fPrice);
        printf("\nWrite in quantity: ");
        scanf("%i", &iQuantity);

        printf("\nTotal revenue is %.2f\n\n", fTotalRevenue = iQuantity * fPrice);
}
