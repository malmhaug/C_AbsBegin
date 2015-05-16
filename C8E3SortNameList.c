/* Challanges Ch8E3 - SortNameList */
		
	//By Jim-Kristian Malmhaug | Date: 25 February 2014
	//Notes: This program sort (city) names in alphabetical order.
	//References:
	
	#include <stdio.h>
	#include <string.h>
	
	//Function prototype
	void sort(char *[], int);
	
	//Main function
	int main() {
	    //Initiating variables
	    int iStrLength = 3; //Zero is counted as one.
	    char* cStrCity[4];
	    
	    cStrCity[0] = "Florida";
	    cStrCity[1] = "Oregon";
	    cStrCity[2] = "California";
	    cStrCity[3] = "Georgia";

	    //Run
	    sort(cStrCity, iStrLength);
	    
	    return 0;
	}
	
	/*****************************
	     Function definition
	           sort()
	 ****************************/
	void sort(char *cString[], int iStrLength){
	    //Initiating variables
	    int i = 0;
	    int k = 0;
	    int m = 0;
	    int p = 0;
	    int q = 0;
	    int result = 0;
	    int iSortArray[iStrLength];
	    char temp;
	    
	    //Run
	    
	    //Put strcmp values in list
	    for(i = 0 ; i <= iStrLength ; i++)
	        iSortArray[i] = strcmp(cString[i], "A");
	    
	    //Bubble sort
	    for(k = 0 ; k <= iStrLength ; k++){
	        for(m = 0 ; m <= iStrLength ; m++){
	            if(iSortArray[m] > iSortArray[m+1]){
	                temp = iSortArray[m];
	                iSortArray[m] = iSortArray[m+1];
	                iSortArray[m+1] = temp;
	            }
	        }
	    }
	    
	    //Print sorted list
	    for(p = 0 ; p <= iStrLength + 1 ; p++){
	        for(q = 0 ; q <= iStrLength ; q++){
	            if(strcmp(cString[q], "A") == iSortArray[p])
	                printf("\n%s\n", cString[q]);
	        }
	    } 
	}