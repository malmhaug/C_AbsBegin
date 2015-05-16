/* Challanges Ch9E3 - PhoneBook */
		
	// By Jim-Kristian Malmhaug | Date: 6 August 2014
		
	//Libraries:
	#include <stdio.h>
	#include <string.h>
	
	//Structure:
	typedef struct phoneBook {
	    
	    char cName[25];
	    int iNumber;
	    
	} pBook;
	
	//Function prototypes
	int showMenu(); //Shows user options.
	void addToBook(pBook *); //Function which let You add person to phone book.
	
	//Main function
	int main() {
	    pBook pB[5] = {"A",0};
	    int iOpt = 0;
	    
	    do{
	        int j = 0;
	        iOpt = showMenu();
	        
	        switch(iOpt) {
	            case 1:
	                for(j = 0 ; j < 5 ; j++){
	                    if(pB[j].iNumber != 0){
	                        printf("\n------------------------");
	                        printf("\nName: %s", pB[j].cName);
	                        printf("\nNumber: %d", pB[j].iNumber);
	                    }
	                }
	                break;
	            case 2:
	                addToBook(pB);
	                break;    
	        }
	    }while(iOpt != 3);
	
	    return 0;
	}
	
	//---------------------------------------------------------
	
	//Function definition - showMenu()
	int showMenu(){
	    int iOpt = 0;
	    
	    printf("\n\nWelcome to Your Phone Book!");
	    printf("\nChoose an option:\n\n1.Print Book\n2.Add person\n3.Quit!");
	    printf("\n---> ");
	    scanf("%d", &iOpt);
	    
	    return iOpt;
	    
	}
	
	//---------------------------------------------------------
	
	//Function definition - addToBook(pBook * p)
	void addToBook(pBook * p){
	    int i = 0;
	    
	    for (i = 0 ; i < 5 ; i++){
	        if(p[i].iNumber == 0){
	            printf("\n\nEnter name: ");
	            scanf("%s", p[i].cName);
	            printf("\nEnter number: ");
	            scanf("%d", &p[i].iNumber);
	            
	            break;  
	        }
	        if(i == 4 && p[i].iNumber != 0){
	            printf("\nBook is full!\n");
	            
	            break;
	        }
	    }
	}
