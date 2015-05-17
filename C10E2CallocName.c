/* Challanges Ch10E2 - CallocName */
		
// By Jim-Kristian Malmhaug | Date: 9 August 2014
		
//Libraries:
#include <stdio.h>
#include <stdlib.h>
	
//Main function
int main() {
	    
    char *cName;
    int i = 0;
	    
    cName = (char *) calloc(80,sizeof(char)); //Allocate memory
	    
    if(cName == NULL){
        printf("\nFailed to allocate memory!");
        return -1;
    }else{
        printf("\nEnter a name --> ");
        scanf("%s", cName);
        
        while((cName[i] != '\0') && (i < 80)){ //Count characters
            i++;
        }
        
        printf("\nThe name %s has %d characters!\n\n", cName, i);
        free(cName); //Free memory used to store the name
    }
    
    return 0;
}