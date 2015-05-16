/* Challanges Ch9E1 - CarStruct */

// By Jim-Kristian Malmhaug | Date: 3 November 2013

//Notes:

//References:

#include <stdio.h>

//Making the struct
struct car {

        char *make;
        char *model;
        int year;
        int miles;

}

main() {

        //Making the instance
        struct car myCar = {0,0,0,0};

        //Assigning data to members
        myCar.make = "Subaru";
        myCar.model = "Impreza";
        myCar.year = 1999;
        myCar.miles = 15000;

        //Printing the members on-screen
        printf("\n\nYou have entered that Your car is:\n\nMake %s\nModel %s\nYear %d\nMiles %d\n\nHave a nice day!\n\n", myCar.make, myCar.model, myCar.year, myCar.miles);

} //end of main()
