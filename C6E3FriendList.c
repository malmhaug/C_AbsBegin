/* Challanges Ch6E3 - friendList */

// By Jim-Kristian Malmhaug | Date: 17 September 2013

//Notes: Friend List, write up to five names with maximum 10 characters. Had to use string to get this done!

//References:

#include <stdio.h>

main() {
	
	char cList[10][5] = {{}}; 
	char string[10] = {};
	int iNum = 0;
	int iSelect = 0;
	int i = 0;
	int j = 0;
	int k = 0;


	do{
		printf("\n\n*** Friend List ***\n\nWhat will you do?\n\n1. Write a friends name in the list.\n2. Print out the names in the list.\n3. Quit\n---> ");
		scanf(" %d", &iSelect);
		switch(iSelect) {
			case 1:
	    		if (iNum < 5){
	    			printf("\nEnter name: ");
	    			scanf("%s", string);
	    		for(i = 0 ; i < 10 ; i++) {
	        		cList[i][iNum] = string[i];
	    		}
	    		iNum++;
	    	}
	    	else{
	    		printf("Friends list is full!");
	    	}
	    break;

			case 2:
				printf("\nNames stored in list:\n\n");
    			for(j = 0 ; j < iNum ; j++) {
        			for(k = 0 ; k < 10 ; k++) {
        	    		printf("%c", cList[k][j]);
        			}
        			printf("\n");
    			}
    		break;
		}
	}while(iSelect != 3);
}