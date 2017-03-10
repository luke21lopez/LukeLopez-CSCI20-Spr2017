/*
 * Name : Luke Lopez
 * Class: CSCI 20
 * Prof:  A. Brown
 * Assignment: Monster labels.
 * This program will label and identify types of monsters and there attributes. It will have
 * input by the user and then output those monsters.
 */

#include <iostream>
#include <string> 
using namespace std;


struct Monster {
    string head;
    string ears;
    string eyes;
    string nose;
    string mouth;
    
};

int main() {
    
    // This is creating the first object/monster
    Monster monsterOne;
    Monster monsterTwo;
    Monster monsterThree;
    Monster monsterFour;
    // This will identify the monsterOne's features
    monsterOne.head = "Zombus";
    monsterOne.ears = "Vegitas";
    monsterOne.eyes = "Spritem"; 
    monsterOne.nose = "None";
    monsterOne.mouth = "Wackus";
    // This will identify the monsterFour's features
    monsterFour.head = "Happy";
    monsterFour.ears = "Vegitas";
    monsterFour.eyes = "Vegitas"; 
    monsterFour.nose = "Spritem";
    monsterFour.mouth = "Wackus";
    
    


    // Ask for input of the monster two's feature then input commands
    cout << "What type of head does your monsterTwo have? \n";
    cin >> monsterTwo.head;
    cout << "What type of ears does your monsterTwo have? \n";
    cin >> monsterTwo.ears;
    cout << "What type of eyes does your monsterTwo have? \n";
    cin >> monsterTwo.eyes;
    cout << "What type of nose does your monsterTwo have? \n";
    cin >> monsterTwo.nose;
    cout << "What type of mouth does your monsterTwo have? \n";
    cin >> monsterTwo.mouth;
    
    cout << "What type of head does your monsterThree have? \n";
    cin >> monsterThree.head;
    cout << "What type of ears does your monsterThree have? \n";
    cin >> monsterThree.ears;
    cout << "What type of eyes does your monsterThree have? \n";
    cin >> monsterThree.eyes;
    cout << "What type of nose does your monsterThree have? \n";
    cin >> monsterThree.nose;
    cout << "What type of mouth does your monsterThree have? \n";
    cin >> monsterThree.mouth;
    
    cout << "          Monster One | Monster Two \n"
         << "          _________________________ \n"
         << " Head:         "<< monsterOne.head << "    "<< monsterTwo.head << "    \n"
         << " Ears:         "<< monsterOne.ears << "    "<< monsterTwo.ears << "    \n"
         << " Eyes:         "<< monsterOne.eyes << "    "<< monsterTwo.eyes << "    \n"
         << " Nose:         "<< monsterOne.nose << "       "<< monsterTwo.nose << "    \n"
         << " Mouth:        "<< monsterOne.mouth<< "    "<< monsterTwo.mouth<< "    "<< endl;
    cout << "          Monster Three | Monster Four \n"
         << "          _________________________ \n"
         << " Head:         "<< monsterThree.head << "    "<< monsterFour.head << "    \n"
         << " Ears:         "<< monsterThree.ears << "    "<< monsterFour.ears << "    \n"
         << " Eyes:         "<< monsterThree.eyes << "    "<< monsterFour.eyes << "    \n"
         << " Nose:         "<< monsterThree.nose << "    "<< monsterFour.nose << "    \n"
         << " Mouth:        "<< monsterThree.mouth<< "    "<< monsterFour.mouth<< "    "<< endl;
    
    
    
    return 0;
}