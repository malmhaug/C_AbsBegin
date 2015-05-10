/* Challanges Ch3.2 - WesternZodiac */

// By Jim-Kristian Malmhaug | Date: 8 August 2013

//Notes: iSign = 1(Aries), 2(Taurus), 3(Gemini), 4(Cancer), 5(Leo), 6(Virgo), 7(Libra), 8(Scorpio), 9(Sagittarius), 10(Capricorn), 11(Aquarius), 12(Pisces), 99(error)

#include <stdio.h>
#include <ctype.h>

main() {

        int iMonth = 0;
        int iDay = 0;
        int iSign = 0;

        printf("\n\n*** The Western Zodiac ***\n\n");
        printf("\nEnter Your birth month (1-12):");
        scanf("%d", &iMonth);
        printf("Enter the day You were born in this month (1-31):");
        scanf("%d", &iDay);


        if((isdigit(iMonth) == 0) && (isdigit(iDay) == 0) && (iMonth >= 1) && (iMonth <= 12) && (iDay >= 1) && (iDay <= 31)) {

                //--------------------->The switch-function find the users rigth sign by the information typed in iMonth and iDay.<--------------------------

                switch (iMonth) {

                        case 1:
                                if(iDay <= 20) {
                                        iSign = 10;
                                }else if(iDay >= 21) {
                                        iSign = 11;
                                }
                                break;
                        case 2:
                                if(iDay <= 19) {
                                        iSign = 11;
                                }else if((iDay >= 20) && (iDay <= 28)) {
                                        iSign = 12;
                                }else {
                                        iSign = 99;
                                }
                                break;
                        case 3:
                                if(iDay <= 20)  {
                                        iSign = 12;
                                }else if(iDay >= 21) {
                                        iSign = 1;
                                }
                                break;
                        case 4:
                                if(iDay <= 20) {
                                        iSign = 1;
                                }else if((iDay >= 21) && (iDay <= 30)) {
                                        iSign = 2;
                                }else {
                                        iSign = 99;
                                }
                                break;
                        case 5:
                                if(iDay <= 21) {
                                        iSign = 2;
                                }else if(iDay >= 22) {
                                        iSign = 3;
                                }
                                break;
                        case 6:
                                if(iDay <= 21) {
                                        iSign = 3;
                                }else if((iDay >= 22) && (iDay <= 30)) {
                                        iSign = 4;
                                }else {
                                        iSign = 99;
                                }
                                break;
                        case 7:
                                if(iDay <= 22) {
                                        iSign = 4;
                                }else if(iDay >= 23) {
                                        iSign = 5;
                                }
                                break;
                        case 8:
                                if(iDay <= 22) {
                                        iSign = 5;
                                }else if(iDay >= 23) {
                                        iSign = 6;
                                }
                                break;
                        case 9:
                                if(iDay <= 22) {
                                        iSign = 6;
                                }else if((iDay >= 23) && (iDay <= 30)) {
                                        iSign = 7;
                                }else {
                                        iSign = 99;
                                }
                                break;
                        case 10:
                                if(iDay <= 22) {
                                        iSign = 7;
                                }else if(iDay >= 23) {
                                        iSign = 8;
                                }
                                break;
                        case 11:
                                if(iDay <= 22) {
                                        iSign = 8;
                                }else if((iDay >= 23) && (iDay <= 30)) {
                                        iSign = 9;
                                }else {
                                        iSign = 99;
                                }
                                break;
                        case 12:
                                if(iDay <= 21) {
                                        iSign = 9;
                                }else if(iDay >= 22) {
                                        iSign = 10;
                                }
                                break;
                }//--------------------------------------->End of finding the right sign.<-----------------------------------------------

                //-------------------------->The following if-functions is telling the user his forecast.<-------------------------------

                if(iSign == 1) {
                        printf("\nYou are born in the sign of the Aries. You will trough life have following traits:\n \nAdventurous \nEnergetic \nPioneering \nCourageous \nEnthusiastic \nConfident \nDynamic \nQuick-Witted");
                }else if(iSign == 2) {
                        printf("\nYou are born in the sign of the Taurus. You will trough life have following traits:\n \nPatient \nReliable \nWarmhearted \nLoving \nPersistent \nDetermined \nPlacid \nSecurity loving");
                }else if(iSign == 3) {
                        printf("\nYou are born in the sign of the Gemini. You will trough life have following traits:\n \nAdaptable \nVersatile \nCommunicative \nWitty \nIntellectual \nEloquent \nYouthful \nLively");
                }else if(iSign == 4) {
                        printf("\nYou are born in the sign of the Cancer. You will trough life have following traits:\n \nEmotional \nLoving \nIntuitiv \nImaginative \nShrewd \nCautious \nProtective \nSympathetic");
                }else if(iSign == 5) {
                        printf("\nYou are born in the sign of the Leo. You will trough life have following traits:\n \nGenerous \nWarmhearted \nCreative \nEnthusiastic \nBroad-minded\nExpansive \nFaithful \nLoving");
                }else if(iSign == 6) {
                        printf("\nYou are born in the sign of the Virgo. You will trough life have following traits:\n \nModest \nShy \nMeticulous \nReliable \nPractical \nDiligent \nIntelligent \nAnalytical");
                }else if(iSign == 7) {
                        printf("\nYou are born in the sign of the Libra. You will trough life have following traits:\n \nDiplomatic \nUrbane \nRomantic \nCharming \nEasygoing \nSociable \nIdealistic \nPeaceable");
                }else if(iSign == 8) {
                        printf("\nYou are born in the sign of the Scorpio. You will trough life have following traits:\n \nDetermined \nForceful \nEmotional \nIntuitive \nPowerful\nPassionate \nExciting \nMagnetic");
                }else if(iSign == 9) {
                        printf("\nYou are born in the sign of the Sagittarius. You will trough life have following traits:\n \nOptimistic \nFreedom-loving \nJovial \nGood-humored\nHonest \nStraightforward \nIntellectual \nPhilosophical");
                }else if(iSign == 10) {
                        printf("\nYou are born in the sign of the Capricorn. You will trough life have following traits:\n \nPractical \nPrudent \nAmbitious \nDisciplined\nHumorous \nReserved");
                }else if(iSign == 11) {
                        printf("\nYou are born in the sign of the Aquarius. You will trough life have following traits:\n \nFriendly \nHumanitarian \nHonest \nLoyal \nOriginal \nInventive \nIndependent \nIntellectual");
                }else if(iSign == 12) {
                        printf("\nYou are born in the sign of the Pisces. You will trough life have following traits:\n \nImaginative \nSensitive \nCompassionate \nKind \nSelfless\nUnworldly \nIntuitive \nSympathetic");
                }else if(iSign == 99) {
                        printf("\nThis day does not exist in this month!");
                }//------------------------------------------------->End of forecasting<-------------------------------------------------


        }else {

                printf("\nYou did not enter the correct date!\n");

        }//----------------------------------------------------->End of finding the right date<------------------------------------------

printf("\n\n");

}//----------------------------------------------------------------->End of main()-function<---------------------------------------------
