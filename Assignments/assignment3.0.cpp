#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

/* This game is an extended version of rock paper scissors. with lizard and spock included. 
 * it works just like the game regular game. where depends on which you choose. The computer
 * will randomly generate its own decision. They will compare and a score will be kept. 
 * You will have an option to choose best out of 3,5,7 games. Once either the player or the computer
 * has won sufficient amount of games. the game will close. 
 */

// This class is to hold the computers random choice. 
class Computer{
  public: 
  void set_computerChoice();
  int get_computerChoice();
  
  private:
  int randomChoice_; // the variable will hold the random number. 
};




int playGame(int,int); // play game will hold all the conditions to which decision wins
int get_playersChoice(); // this will request a choice from the user. by numbers
void numOfGames(int); // this will choose the number of games and keep count of score

int main(){
    
    int numOfGames_main;// this is the only variable needed in main to perform function
    
    cout << "Welcome to Rock, Paper, Scissors, Lizard, and Spock Game!: \n";
    cout << "Would you like to play the best our of 3, 5, 7? \n";
    cin >> numOfGames_main;
    
    
    numOfGames(numOfGames_main); // this is going to call the function that chooses the number of games
    cout << endl;
    
    
    
    return 0;
}

// this is providing us with what decision the computer chose
void Computer::set_computerChoice(){
    
        randomChoice_ = get_computerChoice();
    
        switch (randomChoice_){  // switch statement will assign a name to the integer randomly chosen
        case 1:
        cout << "Computer chose Rock! " << endl;
        break;
        case 2:
        cout << "Computer chose Paper! " << endl;
        break;
        case 3:
        cout << "Computer chose Scissors! " << endl;
        break;
        case 4:
        cout << "Computer chose Lizard! " << endl;
        break;
        case 5:
        cout << "Computer chose Spock! " << endl;
        break;
        default:
        cout << "Not a valid option! ";
        break;
    };
    cout << endl;
    
       return;
}

int Computer::get_computerChoice(){
    srand(time(0)); // this seeds a random number
    randomChoice_ = rand() % 5 + 1; // this is what will hold the random number to that variable

    return randomChoice_;
}


// this function will prompt the user to pick one of the five options
int get_playersChoice(){
    int userChoice;
    
    cout << "Please choose 1 -rock, 2 -paper, 3 -scissors, 4 -lizard, 5 -spock" << endl;
    cin >> userChoice;
    switch (userChoice){ // switch statement to print out the choice of the user
        case 1:
        cout << "Player chose Rock! " << endl;
        break;
        case 2:
        cout << "Player chose Paper! " << endl;
        break;
        case 3:
        cout << "Player chose Scissors! " << endl;
        break;
        case 4:
        cout << "Player chose Lizard! " << endl;
        break;
        case 5:
        cout << "Player chose Spock! " << endl;
        break;
        default:
        cout << "Not a valid option! " << endl;
        break;
    };
    
    return userChoice;
}

// this hold the conditions and determines winner or loser of the game. 
int playGame(int userChoice, int computerChoice){
    int rock = 1;
    int paper = 2;
    int scissors = 3;
    int lizard = 4;
    int spock = 5;
    
    int playerScore = 0;
    int computerScore = 0;
    
    int winner = 0;

    while ((computerScore < 1) || (playerScore < 1)){ // if computer score or player score is less than one this game iwll play
        if (userChoice == computerChoice) {
        cout << "Its a tie!" << endl;
        break;
    }
   // this if else branch will be able to determine the winner of any two decisions
    else if (userChoice == rock) 
    {
        if (computerChoice == paper) 
        {
          cout << "You lose! Paper covers Rock! " << endl;
          ++computerScore;
          break;
        }
       else if (computerChoice == scissors) 
       {
          cout << "You win! Rock smashes Scissors! " << endl;
          ++playerScore;
          break;
       }
       else if (computerChoice == lizard) 
       {
          cout << "You win! Rock Smashes Lizard! " << endl;
         ++playerScore;
         break;
       }
       else if (computerChoice == spock) 
       {
          cout << "You lose! Spock vaporizes Rock! " << endl;
          ++computerScore;
          break;
       }
     }  
    else if (userChoice == paper) 
    {
      if (computerChoice == rock)
      {
          cout << "You win! Paper cover Rock! " << endl;
            ++playerScore;
            break;
      }
      else if (computerChoice == scissors)
      {
          cout << "You lose! Scissors cut Paper! " << endl;
            ++computerScore;
            break;
      }
      else if (computerChoice == lizard)
      {
          cout << "You lose! Lizard eats paper"<< endl;
            ++computerScore;
            break;
      }
      else if (computerChoice == spock)
      {
          cout << "You win! Paper disproves Spock! " << endl;
            ++playerScore;
            break;
      }
    } 
    else if (userChoice == scissors) 
    {
      if (computerChoice == rock)
      {
          cout << "You lose! Rock breaks Scissors! " << endl;
            ++computerScore;
            break;
      }
      else if (computerChoice == paper) 
      {
          cout << "You win! Scissors cut Paper! " << endl;
            ++playerScore;
            break;
      }
      else if (computerChoice == lizard)
      {
          cout << "You win! Scissors decapitate Lizard! "<< endl;
            ++playerScore;
            break;
      }
      else if (computerChoice == spock) 
      {
          cout << "You lose! Spock vaporizes Scissors! " << endl;
            ++computerScore;
            break;
      }
     }    
    else if (userChoice == lizard) 
    {
      if (computerChoice == rock)
      {
          cout << "You lose! Rock smashes Lizard! " << endl;
            ++computerScore;
            break;
      }
      else if (computerChoice == paper) 
      {
          cout << "You win! Lizard eats Paper! " << endl;
            ++playerScore;
            break;
      }
      else if (computerChoice == scissors)
      {
          cout << "You lose! scissors decapitate lizard! "<< endl;
            ++computerScore;
            break;
      }
      else if (computerChoice == spock) 
      {
          cout << "You win! lizard poisons spock! " << endl;
            ++playerScore;
            break;
      }
     }   
    else if (userChoice == spock) 
    {
      if (computerChoice == rock)
      {
          cout << "You win! Spock vaporizes Rock! " << endl;
            ++playerScore;
            break;
      }
      else if (computerChoice == scissors) 
      {
          cout << "You win! Spock smashes scissors! " << endl;
            ++playerScore;
            break;
      }
      else if (computerChoice == lizard)
      {
          cout << "You lose! Lizard poisons Spock"<< endl;
            ++computerScore;
            break;
      }
      else if (computerChoice == paper) 
      {
          cout << "You lose! Paper disproves Spock! " << endl;
            ++computerScore;
            break;
      }
     } 
      
    }
      
     if (playerScore == 1) { // this will let us know who is assigned a point 
         winner = 1;
     }  else if (computerScore == 1) {
         winner = 2;
     
     }

      return winner; // when this function is called , an integer will be returned to give the outcome of that one game


}

// this game take in the number of games selected in main.
// it will then call computer and player choice.

void numOfGames(int numberOfGames) {
   int counter = 0;
   int playerScore = 0;
   int computerScore = 0;
   int playersChoice = 0;
   int computersChoice = 0;
   Computer computerChoice_;
   
    if (numberOfGames == 3){ // if player chooses best out of three
        while((playerScore < 2) && (computerScore < 2)){ // whoever gets to 2 first wins
          playersChoice = get_playersChoice();
          computerChoice_.set_computerChoice(); // calling all players choices
          computersChoice = computerChoice_.get_computerChoice();
            counter = playGame(playersChoice,computersChoice); // calling the game funciton
            if (counter == 1) {
            ++playerScore;// this will add 1 point to player 
            }
            else if(counter == 2){
            ++computerScore;  // this will add 1 point to computer
            cout << endl;
            } else {
              cout << "No points allocated."<< endl;
            }
            cout << "Player Score: " << playerScore << endl;
            cout << "Computer Score: " << computerScore << endl;
            
        } 
        cout << "Game is over" << endl;
    } else if (numberOfGames == 5){ // best of 5
        while((playerScore < 3) && (computerScore < 3)){ 
          playersChoice = get_playersChoice();
          computerChoice_.set_computerChoice();
          computersChoice = computerChoice_.get_computerChoice();
            counter = playGame(playersChoice,computersChoice);
            if (counter == 1) {
            ++playerScore;
            }
            else if(counter == 2){
            ++computerScore;
            cout << endl;
            } else {
              cout << "No points allocated."<< endl;
            }
            cout << "Player Score: " << playerScore << endl;
            cout << "Computer Score: " << computerScore << endl;
            
        } 
        cout << "Game is over" << endl;
    } else if (numberOfGames == 7){ // best of 7
        while((playerScore < 4) && (computerScore < 4)){ 
          playersChoice = get_playersChoice();
          computerChoice_.set_computerChoice();
          computersChoice = computerChoice_.get_computerChoice();
            counter = playGame(playersChoice,computersChoice);
            if (counter == 1) {
            ++playerScore;
            }
            else if(counter == 2){
            ++computerScore;
            cout << endl;
            } else {
              cout << "No points allocated."<< endl;
            }
            cout << "Player Score: " << playerScore << endl;
            cout << "Computer Score: " << computerScore << endl;
            
        } 
        cout << "Game is over" << endl;
        
    }
    if (playerScore > computerScore){ // This will print out who one
          cout << "You won!";
        } else if (computerScore > playerScore){
          cout << "You lost!";
        }
            return;
}