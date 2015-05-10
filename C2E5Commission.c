/* Challanges Ch2.5 - Commission */

// By Jim-Kristian Malmhaug | Date: 21 July 2013

//Notes:

#include <stdio.h>

main()
{		
		printf("Commission\n");
        float fRate = 0;
        float fSalesPrice = 0;
        float fCost = 0;
        float fCommission = 0;

        printf("\nWrite in the rate: ");
        scanf("%f", &fRate);
        printf("\nWrite in sales price: ");
        scanf("%f", &fSalesPrice);
        printf("\nWrite in the cost: ");
        scanf("%f", &fCost);

        printf("\nCommission is %.2f\n\n", fCommission = fRate*(fSalesPrice - fCost));
}
