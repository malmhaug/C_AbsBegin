//File: ch12_calulate.c

/* Challenges Ch12E4 - ModWizard */
		
// By Jim-Kristian Malmhaug | Date: 4 August 2015

#include <stdio.h>

void perimeter(float l,float w){
	printf("\nPerimeter is %.2f\n", (2*l)+(2*w));
}

void area(float l, float w){
	printf("\nArea is %.2f\n", l*w);
}

void volume(float l,float w,float h){
	printf("\nThe volume is %.2f\n", l*w*h);
}

void averageCost(float totalCost, float quantity) {
	printf("\nThe average cost is %2.f\n", totalCost/quantity);
}