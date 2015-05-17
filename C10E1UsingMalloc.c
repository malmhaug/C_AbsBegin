/* Challanges Ch10E1 - UsingMalloc */
	
// By Jim-Kristian Malmhaug | Date: 5 November 2013
	
//Notes: If You get "Core dumped"-error, then You have entered a too long name for the movie.
	
//References:
	
#include <stdio.h>
#include <stdlib.h>
	
main() {
	
char *cFavMovie;
	
//Using malloc to allocate a chunk of memory to hold a string not larger than 80 characters.
cFavMovie = (char *) malloc(80 * sizeof(char));
	
//Memory check, if ok, then get user-input
if (cFavMovie == NULL) {
	
        printf("\n\nOut of memory!\n\n");
	
}else {
	
        printf("\n\nMemory allocated...\n\nPlease enter Your favorite movie: ");
	
        scanf("%s", cFavMovie);
	
        printf("\n\nYour favorite movie is %s\n\n", cFavMovie);
	
}
	
//Freeing the memory
free(cFavMovie);
	
} //end of main()