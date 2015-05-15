/* Challanges Ch6E5 - 2DTicTacToe1Player */
		
	//By Jim-Kristian Malmhaug | Date: 23 February 2014
	//Notes: With 1 player Tic Tac Toe against randomized AI.
	//References:
	
	#include <stdio.h>
	#include <stdlib.h>
	
	/* Function prototypes */
	void printBoard2D();
	int checkForWinner();
	int checkForDraw();
	/* Global variables */
	char board2D[3][3] = {{'1','4','7'},{'2','5','8'},{'3','6','9'}};
	char cNextPlayer = 'X';
	/* Main function */
	int main() {
	    
	    int iNextPlayer = 0; //Variable used to switch between players.
	    int result = 0; //Variable used for finding winners.
	    int positionX, positionY; //Variable for the board.
	    int nextPlayerOK = 0; //Variable used for checking square selection.
	    int freeSquare = 0;
	    int nrPlayers = 0; //Variable for number of players.
	    
	    printf("\nEnter 1 for two players, and 1 for one player:\nSelection--> ");
	    scanf("%d", &nrPlayers);
	    
	    printBoard2D(); //Prints the 2D board.
	    srand(time()); //Creates randomized number for the machine (1 player).
	    
	    while(result != 1){
	        
	        nextPlayerOK = 0;
	        iNextPlayer %= 2; //Next Player selection via modulus, 0 = X, 1 = O.
	        if(iNextPlayer == 0){ //Sets the player.
	            printf("\nPlayer X turn! Choose Your position.");
	            cNextPlayer = 'X';
	        }
	        else {
	            printf("\nPlayer O turn! Choose Your position.");
	            cNextPlayer = 'O';
	        }
	        if ((nrPlayers == 1) || ((nrPlayers == 2) && (iNextPlayer == 0))){
	            printf("\nColumn (X-position): ");
	            scanf("%d", &positionX); //Player sets the x-position for its mark.
	            printf("\nRow (Y-position): ");
	            scanf("%d", &positionY); //Player sets the y.position for its mark.
	        }
	        if ((nrPlayers == 2) && (iNextPlayer == 1)){//The machine sets position.
	            positionX = rand() % 3 + 1;
	            positionY = rand() % 3 + 1;
	        }
	        if(board2D[positionX-1][positionY-1] != 'X' && board2D
	        [positionX-1][positionY-1] != 'O'){ //Check for open square.
	            board2D[positionX-1][positionY-1]=cNextPlayer; //Sets mark.
	            result = checkForWinner(); //Checks for winner.
	        }
	        else{ //Player selected an taken square.
	            printf("\nPlace taken!");
	            nextPlayerOK = 1; //Sets an flag for wrong selection.
	        }
	        
	        freeSquare = checkForDraw(); //Search for free square.
	        
	        if(result == 1){ //The game has a winner.
	            printBoard2D();
	            printf("\nWinner is %c!\n", cNextPlayer);
	            break;
	        }
	        
	        else if((result == 0) && (freeSquare == 9)){ //The game is a draw.
	            printBoard2D();
	            printf("\nDraw!\n");
	            break;
	        }
	        
	        printBoard2D();
	        if(nextPlayerOK == 0)
	            iNextPlayer++; //Sets the next player.
	    }
	    return 0; //Return 0 if no winner is found.
	}
	
	/* Function definition - printBoard2D()*/
	void printBoard2D(){
	    
	    int i,j;
	    
	    printf("\nSquare\tX Y");
	    printf("\n  1\t1 1");
	    printf("\n  2\t2 1");
	    printf("\n  3\t3 1");
	    printf("\n  4\t1 2");
	    printf("\n  5\t2 2");
	    printf("\n  6\t3 2");
	    printf("\n  7\t1 3");
	    printf("\n  8\t2 3");
	    printf("\n  9\t3 3");
	    printf("\n-----------");
	    
	    for(i = 0; i < 3; i++){ //Prints the board on screen.
	        printf("\n  |");
	        for(j = 0; j < 3; j++){
	            printf("%c|", board2D[j][i]);
	        }
	    }
	}
	/* Function definition - checkForWinner()*/
	int checkForWinner(){ //This function searches for three in a row.
	    
	    if (board2D[0][0] == cNextPlayer && board2D[0][1] == cNextPlayer &&
	    board2D[0][2] == cNextPlayer)
	        return 1;
	    else if (board2D[0][0] == cNextPlayer && board2D[1][0] == cNextPlayer &&
	    board2D[2][0] == cNextPlayer)
	        return 1;
	    else if (board2D[1][0] == cNextPlayer && board2D[1][1] == cNextPlayer &&
	    board2D[1][2] == cNextPlayer)
	        return 1;
	    else if (board2D[2][0] == cNextPlayer && board2D[2][1] == cNextPlayer &&
	    board2D[2][2] == cNextPlayer)
	        return 1;
	    else if (board2D[0][1] == cNextPlayer && board2D[1][1] == cNextPlayer &&
	    board2D[2][1] == cNextPlayer)
	        return 1;
	    else if (board2D[0][2] == cNextPlayer && board2D[1][2] == cNextPlayer &&
	    board2D[2][2] == cNextPlayer)
	        return 1;
	    else if (board2D[0][0] == cNextPlayer && board2D[1][1] == cNextPlayer &&
	    board2D[2][2] == cNextPlayer)
	        return 1;
	    else if (board2D[0][2] == cNextPlayer && board2D[1][1] == cNextPlayer &&
	    board2D[2][0] == cNextPlayer)
	        return 1;  
	    else
	        return 0;
	}
	/* Function definition - checkForDraw()*/
	int checkForDraw(){ //This function searches for draw.
	    
	    int k,m;
	    int squareTaken = 0;
	    
	    for(k = 0; k < 3; k++){
	        for(m = 0; m < 3; m++){
	            if(board2D[m][k] == 'X' || board2D[m][k] == 'O'){
	                squareTaken++;
	            }
	        }
	    }
	    
	    return squareTaken;
	    
	}
