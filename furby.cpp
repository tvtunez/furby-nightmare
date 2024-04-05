/*
    Title: Nightmare of the Furby
    Author: Morgan P.
    Date: 02.21.24
    Purpose: My furby is coming to get you! Try to survive!
*/

//Libraries:
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cctype>
using namespace std;
//Specific library for sleep (wait);
#include "../../../../../../mingw64/include/c++/13.2.0/parallel/compatibility.h"


int main(){
    //Variable dec.:
    int totalP;
    int proceed;
    int choice;
    int guess;
    int actual;
    int damage;
    int compEnd = 0;
    char playAgain = 'y';

    //Main Loop - Do-While
    do {
        //Set up points:
        totalP = 100;
        cout << endl;
        cout << endl;
        cout << endl;
    cout << "***************************************************************************************************";
    //ASCII ART                                                                                          
                        cout << "\n       OQQQ                                ";
                        cout << "\n      OOONNNOQQQ                          QQQQ       ";
                        cout << "\n      OOO|  |NNNNOOQQ              QQQQQQQQQQQ  ";
                        cout << "\n      OOOOO----NNOONNNO     LLNOONN QQQ|  |OO    ";
                        cout << "\n       OOO|_____|NNOQQONLLLLLNOONN------OOOOO"  ;
                        cout << "\n       OOOONLLNLLNNNLLLLLLLNNLLLN|_____|OOOOO ";
                        cout << "\n        NNLLJLNNLLJJJJLLNOONLLNOOOOOOOOQQQQ   ";
                        cout << "\n         LLLLLLJLLLLJJJJJLNONLLLNNOONNOQQO      ";
                        cout << "\n         NLJJJLLLLLLLJJJJLLLLLJLNNLLLNN          ";
                        cout << "\n        LNLLJJLL|   |NLLL|    |LLLLLLNNON         ";
                        cout << "\n        LNNOLJL|   o  |L|  o   |LLLLNOONN         ";
                        cout << "\n        NLLNNJLL______NLN______LLLLNNNNNN         ";
                        cout << "\n        NNLLLJJJLLLLLN___NOONLLJJJLJLNNNN         ";
                        cout << "\n        NNNNNJJLLLJN|     |LLLLLJLNNOONN         ";
                        cout << "\n         NOOOOLLNNLJNN___JJNOOONONNNLNNN         ";
                        cout << "\n          NNLLLJJNNLLNNLLLLJLNLLLJJLNQO        ";
                        cout << "\n          NNNNLJJLLLJJNNLNOONLNOOOONOO          ";
                        cout << "\n           NLNONLLNNJJLLLLNNNLLNNNLLLN           ";
                        cout << "\n            QNNNNNOONLNNNLLLLNNLLLNOO            ";
                        cout << "\n             QOQONLJLLLLLNOONNNOOONN              ";
                        cout << "\n           (__(___(__)     (__)___)__)             ";
                                                                                 
                                                                                          
        cout << endl;
    cout << "***************************************************************************************************";
    //Introduction:
    cout << endl << "\nA furby is standing in your doorway. You wonder how it got there.";
    cout << endl;
    Sleep(2000);
    cout << "\nYou feel a dark aura coming from it. Now is your chance! You...";
    //Main action menu:
    Sleep(3000);
        cout << "\n1. Fight." << setw(30) << right << "2. Act." ;
        cout << "\n3. Pet." << setw(30) << right << "4. Accept your fate.";
        cout << "\n5. Play.";
        cout << endl;
    cout << "\nPress a number 1-5 to make your decision.";
    //User input:
         cout << endl;
         cin >> choice;
    cout << "\n***************************************************************************************************";
    cout <<"\nYou start with 100 points!";
    //Menu options:
        switch (choice) {
            case 1:
            //1: Fight
                cout << "\nYou chose fight! You kick the furby!";
                    //Randomizes damage: 1-5
                    srand(time(0));
                    damage = (rand()%(5) +1);

                    if (damage == 5){
                        Sleep (2000);
                        cout << "\nYou did the max damage of 5! The furby went flying!";
                        cout <<"\n+20 points!";
                        //Total point change...
                            totalP = totalP + 20;
                        Sleep (3000);
                        cout << endl;
                        cout << endl;
                        cout << endl;
                        cout << "GAME OVER! YOU UNLOCKED THE 1ST GOOD ENDING!";
                        //Reused play again prompt, used for Do-While:
                        cout << "\nPlay again? (y/n) ";

                    } else if ((damage >= 1) && (damage <= 4)){
                        Sleep (2000);
                        cout << endl;
                        cout << "\nYou drive your foot into the furby. It feels like you kicked a cinderblock.";
                        Sleep (2000);
                        cout << endl;
                        cout << "\nYou did a damage of " << damage << "." << " It stares at you menacingly." << " That was ineffective!";
                        Sleep (2000);
                        cout <<"\n-20 points!";
                         totalP = totalP - 20;
                        cout << endl;
                        cout << "\nIt begins to sing. Your vision fades to black...";
                        Sleep (3000);
                        cout << endl;
                        cout << endl;
                        cout << endl;
                        cout << "GAME OVER! YOU UNLOCKED THE 1ST BAD ENDING!";
                        
                        cout << "\nPlay again? (y/n) ";
                        
                    }
                break;
            case 2:
            //2: Act
                    cout << "\nYou chose act! You shut the door!";
                    Sleep(2000);
                    cout << "\nYou're glad that's over. You get into bed to go to sleep.";
                    Sleep(1000);
                    cout << "\n...";
                    Sleep(2000);
                    cout << "\n....";
                    Sleep(2000);
                    cout << "\n.....";
                    Sleep(3000);
                    cout << "\n*BANG BANG BANG*";
                    Sleep(2000);
                    cout << "\nYou awaken to hear banging on your door, then silence.";
                    Sleep(2000);
                    cout << "\nTo your horror, the furby is sitting at your feet.";
                    Sleep(2000);
                    cout << "\nIt begins to sing. Your vision fades to black...";
                    cout << "\nYou lost all your points!";
                    totalP = totalP - 100;
                    Sleep (3000);
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << "GAME OVER! YOU UNLOCKED THE 2ND BAD ENDING!";
                      
                    cout << "\nPlay again? (y/n) ";
                    
                break;
            case 3:
            //3: Pet
                    cout << "\nYou chose pet! You stretch your hand!";
                    Sleep(1000);
                    cout << "\n...";
                    Sleep(2000);
                    cout << "\n....";
                    Sleep(2000);
                    cout << "\n.....";
                    Sleep(3000);
                    cout << "\nIn a blink of the eye, the furby dodges your hand and bites down on it.";
                    Sleep(2000);
                    cout << endl;
                    cout << "\nYou let out a bloodcurling scream.";
                    Sleep(2000);
                    cout << "\nIt begins to sing, and blood trickles down your arm. Your vision fades to black...";
                    cout << endl;
                    cout << "\nYou lost all your points!";
                    totalP = totalP - 100;
                    Sleep (3000);
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << "GAME OVER! YOU UNLOCKED THE 3RD BAD ENDING!";
                      
                    cout << "\nPlay again? (y/n) ";
           
                break;
            case 4:
            //4: Accept your fate
                cout << "\nYou accepted your fate! You close your eyes and wait for the worst.";
                Sleep(4000);
                cout << endl;
                Sleep(2000);
                cout << "\n\"There you are! You can't just run off like that!\"";
                Sleep(2000);
                cout << "\nYou open your eyes. Morgan is standing in front of you, she has picked up the furby and is now holding it like a baby.";
                Sleep(2000);
                cout << "\n\"So sorry about that,\" she says. \"It just likes its 3AM strolls!\"";
                Sleep(2000);
                cout << "\nYou frown, wish her goodnight, and close the door.";
                Sleep(1000);
                cout << "\n...";
                Sleep(2000);
                cout << "\n....";
                Sleep(2000);
                cout << "\n.....";
                Sleep(3000);
                cout << endl;
                cout << "\n+100 Points!";
                    totalP = totalP + 100;
                cout << endl;
                cout << endl;
                cout << "GAME OVER! YOU UNLOCKED THE 2ND GOOD ENDING!";
                
                cout << "\nPlay again? (y/n) ";
        
                break;
            case 5: 
            //5: Play
                cout << "\nYou chose play! Guess a number between 1 - 3!";
                //Randomizes actual number: 1 - 3
                    srand(time(0));
                    actual = (rand()%(3)+1);
                //Ask for player guess:
                cout << endl;
                cin >> guess;

                //While Loop - Validate
                 while (guess > 3 || guess < 1){
                    cout << "\nThat's not an option. You're out of time.";
                    break;
                    }
                
                if (guess != actual){
                    cout << "\nAnd... you guessed wrong! Oh no...";
                    cout << "\nThe right number was " << actual << ".";
                    Sleep(3000);
                    cout << endl;
                    cout << "\n-20 Points!";
                    totalP = totalP -20;
                    cout << endl;
                    cout << endl;
                    cout << "GAME OVER! YOU UNLOCKED THE 4TH BAD ENDING!";
                    Sleep(1000);

                    cout << "\nPlay again? (y/n) ";

                } else {
                    cout << "\nYou guessed right! You win!";
                    Sleep(3000);
                    cout << endl;
                    cout << "\n+1000 Points!";
                    totalP = totalP +1000;
                    Sleep (3000);
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << "GAME OVER! YOU UNLOCKED THE BEST ENDING!";
                    Sleep(1000);

                    cout << "\nPlay again? (y/n) ";

                }
            
                
                break;

        default:
        //If user does not select 1-5.
            cout << "\nThat's not an option. You're out of time. GAME OVER.";

            cout << "\nPlay again? (y/n) ";
            compEnd = 1;
         break;
        }
         cin >> playAgain;
        //Fix text display order:
        if (compEnd == 0){
         cout << "\nYou finished with..." << totalP << " points!";
        }
     //Character functions:
    } while (static_cast<char>(tolower (playAgain)) == 'y');
    
    return 0;

}