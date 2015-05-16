/* Challanges Ch9E2 - CarStructArray */
		
	// By Jim-Kristian Malmhaug | Date: 24 July 2014
		
	//Notes:
		
	//References:
		
	#include <stdio.h>
	#include <string.h>
		
	//Making the  car struct.
	
	typedef struct car {
	    
	    char make[20];
	    char model[20];
	    int year;
	    int miles;
	    
	} cars;
		
	int main() {
	    
	    cars myCars[3] = {{"Subaru","Impreza",1998,120000},
	                     {"Ford","Escort",1987,295000},
	                     {"Mazda","626",1997,179000}};
	    int x = 0;
	    
	    for (x = 0 ; x < 3 ; x++){
	        
	        printf("\nThe Car is a:\n");
	        printf("\nMake: %s", myCars[x].make);
	        printf("\nModel: %s", myCars[x].model);
	        printf("\nYear: %d", myCars[x].year);
	        printf("\nMiles: %d", myCars[x].miles);
	        printf("\n-----------------\n");
	        
	    }
	    
	    return (0);
	
	}