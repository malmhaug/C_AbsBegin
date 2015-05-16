/* Challanges Ch8E4 - WordFindGameModified */
		
	//By Jim-Kristian Malmhaug | Date: 06 May 2014
	//Notes: This game looks for word in a string, and gives points.
	//References:
	
	//Included library
	#include <stdio.h>
	#include <string.h>
	#include <ctype.h>
	#include <unistd.h>
	
	//Function prototype
	void presentString();
	int getDiff();
	void waitForStart(int);
	int wordLength(int);
	int checkWord(char *, int);
	
	//Global Variables
	char *strWords[5] = {"ADELANGUAGEFERVZOPIBMOU",
	                     "ZBPOINTERSKLMLOOPMNOCOT",
	                     "PODSTRINGGDIWHIEEICERLS",
	                     "YVCPROGRAMMERWQKNULTHMD",
	                     "UKUNIXFIMWXIZEQZINPUTEX"};
	
	//Main function
	int main() {
	    
	    int iDiffRes = 0; //Difficulty variable.
	    int iWordLength = 0; //Accepted length of word length variable.
	    char strAnsw[80]; //Answer variable.
	    char cMoreWords; //Answer on more words variable.
	    int iScore = 0; //Score variable.
	    
	    printf("\n*** WORD FIND GAME ***\n");
	    iDiffRes = getDiff(); //Gets the difficulty setting.
	    iWordLength = wordLength(iDiffRes); //Gets the minimum word length.
	    printf("\nLook for words in the five strings:\n\n");
	    presentString(); //Presents the string to be read.
	    waitForStart(iDiffRes); //Pause the game while reading string.
	    system("clear"); //Clearing screen. Did only work in cygwin.
	    while(cMoreWords != 'n'){
	        
	        printf("\n\nWhich word did You see?\n\n---> ");
	        scanf("%s", strAnsw); //Get user input.
	        iScore += checkWord(strAnsw, iWordLength); //Summarize score.
	        printf("\n\nYour Score = %d", iScore);
	        printf("\n\nDid You see any more word? (y or n): ");
	        scanf(" %c", &cMoreWords); //Get info about more words.
	        
	    }
	    
	    printf("\n\nYour score is %d. Thank You for playing!\n\n", iScore);
	    
	    return 0; //Everything went well.
	}
	
	
	/*****************************
	     Function definition
	          getDiff()
	 ****************************/
	int getDiff(){
	    
	    int result = 0; //
	    
	    printf("\nDifficulty:\n\n1. Beginner - Any word length, 7 seconds.");
	    printf("\n2. Intermediate - Words above 4 characters, 7 seconds.");
	    printf("\n3. Advanced - Words above 4 characters, 4 seconds.");
	    printf("\n\nChoose---> ");
	    
	    scanf("%d", &result); //Select difficulty 1-3.
	    
	    return result;
	    
	}
	
	/*****************************
	     Function definition
	       presentString()
	 ****************************/
	void presentString(){
	    
	    int i = 0; //Iterating variable for for-loop.
	        
	    for(i = 0 ; i < 5 ; i++){
	        printf("\n%s", strWords[i]);
	    }
	    
	}
	
	/*****************************
	     Function definition
	       wordLength(int)
	 ****************************/
	int wordLength(int iDiffRes){
	    
	    int result = 0;
	    
	    switch (iDiffRes){
	        
	        case 1:
	            result = 0; //0 characters or more.
	            break;
	        case 2:
	            result = 4; //4 characters or more.
	            break;
	        case 3:
	            result = 4; //4 characters or more.
	            break;
	    }
	    
	    return result;
	    
	}
	
	/*****************************
	     Function definition
	      waitForStart(int)
	 ****************************/
	void waitForStart(int iDiffRes){
	    
	    switch(iDiffRes){
	        case 1 || 2:
	            sleep(7); //Wait 7 seconds.
	            break;
	        case 3:
	            sleep(4); //Wait 4 seconds.
	            break;
	    }
	}
	
	/*****************************
	     Function definition
	    checkWord(char *, int)
	 ****************************/
	int checkWord(char *strAnsw, int iWordLength){
	    
	    int j = 0; //Iterating variable.
	    int k = 0; //Iterating variable.
	    int iFlag = 0; //Variable for # words found.
	    
	    for(k = 0 ; k < strlen(strAnsw) ; k++){
	        strAnsw[k] = toupper(strAnsw[k]); //Convert answer to upper case.
	    }
	    
	    for(j = 0 ; j < 5 ; j++){
	        if (strstr(strWords[j],strAnsw) != 0 && strlen(strAnsw) >= iWordLength){ //Check for word.
	            iFlag += 1;
	        }
	    }
	    
	    if(iFlag > 0){
	        printf("\n\nCorrect!");
	        return iFlag;
	    }
	    else{
	        printf("\n\nWrong!");
	        return -1;
	    }
	    
	}
