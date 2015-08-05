//File: ch12_main.c

/* Challenges Ch12E4 - ModWizard */
		
// By Jim-Kristian Malmhaug | Date: 4 August 2015

#include <stdio.h>
#include "ch12_calculate.h"

main(){
	
	int selection = 0;
	float l,w,h;
	float totalCost, quantity;

	printf("\nThe Function Wizard\n");
	printf("\n1\tDetermine perimeter of a rectangle\n");
	printf("2\tDetermine area of a rectangle\n");
	printf("3\tDetermine volume of a rectangle\n");
	printf("4\tDetermine the average cost\n");
	printf("\nEnter selection: ");

	scanf("%d", &selection);

	switch(selection) {

		case 1:
			printf("\nEnter length: ");
			scanf("%f", &l);
			printf("\nEnter width: ");
			scanf("%f", &w);
			perimeter(l,w);
			break;
		case 2:
			printf("\nEnter length: ");
			scanf("%f", &l);
			printf("\nEnter width: ");
			scanf("%f", &w);
			area(l,w);
			break;
		case 3:
			printf("\nEnter length: ");
			scanf("%f", &l);
			printf("\nEnter width: ");
			scanf("%f", &w);
			printf("\nEnter height: ");
			scanf("%f", &h);
			volume(l,w,h);
			break;
		case 4:
			printf("\nEnter total cost: ");
			scanf("%f", &totalCost);
			printf("\nEnter quantity: ");
			scanf("%f", &quantity);
			averageCost(totalCost,quantity);
			break;
	} //end switch
} //end main