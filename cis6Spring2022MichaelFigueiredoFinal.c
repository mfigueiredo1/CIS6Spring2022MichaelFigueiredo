/**
 * Program Name:      cis6Spring2022MichaelFigueiredoFinal.c
 * Discussion:        Final Exam 
 * Written By:        Michael Figueiredo
 * Date:              05/26/2022
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void displayClassInfoMichaelF(void);
void runMenuFinalMichaelF(void);
void displaySomeDigitInfoMichaelF(int);
void digitQualityTestMichaelF(int);
void oddDigitCountMichaelF(int);
void displayOddDigitMichaelF(int);
void extractSmallestOddDigitMichaelF(int);

int main() {
    
    displayClassInfoMichaelF();
    
    runMenuFinalMichaelF();
    
    return 0;
}

void displayClassInfoMichaelF() {
    printf("CIS 6 - Introduction to Programming  (Using C)\n"
           "Laney College\n"
           "Michael Figueiredo\n"
           "\n"
           "Final Exam Information --\n"
           "  Implemented by: MichaelFigueiredo\n"
           "  Submitted Date: 2022/05/26");
}

void runMenuFinalMichaelF() {
    int optionMF;
    int usrInputMF;
    do {
        printf("\n"
               "\n ***********************************************"
               "\n *              Menu - Final Exam              *"
               "\n *  (1) Calling displaySomeDigitInfoMichaelF() *"
               "\n *  (2) Quit                                   *"
               "\n ***********************************************"
               "\n Enter an int for option + ENTER: ");
        
        scanf("%d", &optionMF);
        
        switch(optionMF) {
            
            case 1:
                printf("\n Enter an integer: ");
                scanf("%d", &usrInputMF);
                
                printf("\n Calling displaySomeDigitInfoMichaelF() with argument of %d --\n", usrInputMF);
                
                displaySomeDigitInfoMichaelF(usrInputMF);
                break;
                
            case 2:
                printf("\n Have fun!\n");
                
                break;
                
            default:
                printf("\n Wrong Option!");
        }
    } while (optionMF != 2);
}
void displaySomeDigitInfoMichaelF(int arg) {
    
    printf("\n   While displaySomeDigitInfoMichaelF() is running -\n");
    
    if (arg == 0){
        printf("\n   0 is an even integer!");
    }
    else {
        digitQualityTestMichaelF(arg);
    
    if (arg % 2 == 0) {
        
    } else {
        
        oddDigitCountMichaelF(arg);
        
        extractSmallestOddDigitMichaelF(arg);
        }
    }
}

void digitQualityTestMichaelF(int arg) {
    
    (arg < 0) ? printf("\n   %d is a negative", arg):

    printf("\n   %d is a positive", arg);
    
    if (arg % 2 == 0) {
        
        printf(" and even integer!");
    } else printf(" and odd integer.\n"
                 "   There must be at least ONE odd digit!\n");
}



void extractSmallestOddDigitMichaelF(int arg) {
    int absValueMF = (arg < 0) ? -arg : arg;
    int oddDigitCountMF = 0;
    int digitMF;
    int SmallestDigitMF = 9;
    
    do {
        digitMF = absValueMF % 10;
        
    if (digitMF % 2) {
            oddDigitCountMF++;
    if (SmallestDigitMF > digitMF) {
        SmallestDigitMF = digitMF;
    }
}
    absValueMF /= 10;
        
    } while (absValueMF);
    printf("\n     %d", SmallestDigitMF);
}
/**PROGRAM OUTPUT
 
 CIS 6 - Introduction to Programming  (Using C)
 Laney College
 Michael Figueiredo

 Final Exam Information --
   Implemented by: MichaelFigueiredo
   Submitted Date: 2022/05/26

  ***********************************************
  *              Menu - Final Exam              *
  *  (1) Calling displaySomeDigitInfoMichaelF() *
  *  (2) Quit                                   *
  ***********************************************
  Enter an int for option + ENTER: 6

  Wrong Option!

  ***********************************************
  *              Menu - Final Exam              *
  *  (1) Calling displaySomeDigitInfoMichaelF() *
  *  (2) Quit                                   *
  ***********************************************
  Enter an int for option + ENTER: -1

  Wrong Option!

  ***********************************************
  *              Menu - Final Exam              *
  *  (1) Calling displaySomeDigitInfoMichaelF() *
  *  (2) Quit                                   *
  ***********************************************
  Enter an int for option + ENTER: 1

  Enter an integer: -29

  Calling displaySomeDigitInfoMichaelF() with argument of -29 --

    While displaySomeDigitInfoMichaelF() is running -

    -29 is a negative and odd integer.
    There must be at least ONE odd digit!

    Actually, there is/are 1 odd digit(s).

    Since there are less than 2 odd digit(s), then
    the odd digit is
      9

  ***********************************************
  *              Menu - Final Exam              *
  *  (1) Calling displaySomeDigitInfoMichaelF() *
  *  (2) Quit                                   *
  ***********************************************
  Enter an int for option + ENTER: -219

  Wrong Option!

  ***********************************************
  *              Menu - Final Exam              *
  *  (1) Calling displaySomeDigitInfoMichaelF() *
  *  (2) Quit                                   *
  ***********************************************
  Enter an int for option + ENTER: 1

  Enter an integer: -1304540

  Calling displaySomeDigitInfoMichaelF() with argument of -1304540 --

    While displaySomeDigitInfoMichaelF() is running -

    -1304540 is a negative and even integer!

  ***********************************************
  *              Menu - Final Exam              *
  *  (1) Calling displaySomeDigitInfoMichaelF() *
  *  (2) Quit                                   *
  ***********************************************
  Enter an int for option + ENTER: 1

  Enter an integer: -299

  Calling displaySomeDigitInfoMichaelF() with argument of -299 --

    While displaySomeDigitInfoMichaelF() is running -

    -299 is a negative and odd integer.
    There must be at least ONE odd digit!

    Actually, there is/are 2 odd digit(s).

    Since there are 2 or more odd digit(s), then
    the smallest odd digit is
      9

  ***********************************************
  *              Menu - Final Exam              *
  *  (1) Calling displaySomeDigitInfoMichaelF() *
  *  (2) Quit                                   *
  ***********************************************
  Enter an int for option + ENTER: 1

  Enter an integer: 8031651

  Calling displaySomeDigitInfoMichaelF() with argument of 8031651 --

    While displaySomeDigitInfoMichaelF() is running -

    8031651 is a positive and odd integer.
    There must be at least ONE odd digit!

    Actually, there is/are 4 odd digit(s).

    Since there are 2 or more odd digit(s), then
    the smallest odd digit is
      1

  ***********************************************
  *              Menu - Final Exam              *
  *  (1) Calling displaySomeDigitInfoMichaelF() *
  *  (2) Quit                                   *
  ***********************************************
  Enter an int for option + ENTER: 1

  Enter an integer: -1354

  Calling displaySomeDigitInfoMichaelF() with argument of -1354 --

    While displaySomeDigitInfoMichaelF() is running -

    -1354 is a negative and even integer!

  ***********************************************
  *              Menu - Final Exam              *
  *  (1) Calling displaySomeDigitInfoMichaelF() *
  *  (2) Quit                                   *
  ***********************************************
  Enter an int for option + ENTER: 1

  Enter an integer: 13054

  Calling displaySomeDigitInfoMichaelF() with argument of 13054 --

    While displaySomeDigitInfoMichaelF() is running -

    13054 is a positive and even integer!

  ***********************************************
  *              Menu - Final Exam              *
  *  (1) Calling displaySomeDigitInfoMichaelF() *
  *  (2) Quit                                   *
  ***********************************************
  Enter an int for option + ENTER: 1

  Enter an integer: -130454

  Calling displaySomeDigitInfoMichaelF() with argument of -130454 --

    While displaySomeDigitInfoMichaelF() is running -

    -130454 is a negative and even integer!

  ***********************************************
  *              Menu - Final Exam              *
  *  (1) Calling displaySomeDigitInfoMichaelF() *
  *  (2) Quit                                   *
  ***********************************************
  Enter an int for option + ENTER: 1

  Enter an integer: 1305604

  Calling displaySomeDigitInfoMichaelF() with argument of 1305604 --

    While displaySomeDigitInfoMichaelF() is running -

    1305604 is a positive and even integer!

  ***********************************************
  *              Menu - Final Exam              *
  *  (1) Calling displaySomeDigitInfoMichaelF() *
  *  (2) Quit                                   *
  ***********************************************
  Enter an int for option + ENTER: 1

  Enter an integer: 0

  Calling displaySomeDigitInfoMichaelF() with argument of 0 --

    While displaySomeDigitInfoMichaelF() is running -

    0 is an even integer!

  ***********************************************
  *              Menu - Final Exam              *
  *  (1) Calling displaySomeDigitInfoMichaelF() *
  *  (2) Quit                                   *
  ***********************************************
  Enter an int for option + ENTER: 2

  Have fun!
 Program ended with exit code: 0
 */

/**LOGIC_CODE_OUTPUT Issues
 
    Some of formatting was lost in copy and pasting
    of output into PROGRAM OUTPUT comment block
 */


