/* Name: Luke Lopez
 * Prof: April Brown
 * Assn: lab 4.2
 
 * This program mimics an online shopping cart.  You are the proprietor of an online shop
   and have to keep track of inventory, price and the user’s shopping cart.  Create a menu of
   at least 10 items for the user to choose from.  Identify your starting inventory and price.  
   As the user purchases an item, you should remove that item from inventory (subtract 1) and add
   the price to a total.  When the user is done adding items to their cart, you should output a 
   statement of what they have ordered and the total cost of their purchases.  Do not allow you inventory to go below 0.
   
 */
 
#include <iostream>
#include <cstring>
using namespace std;


 
 
void printMenu(int,char,double,int);
 
 
 int main(){
     
    const int NUMBER_OF_ITEMS = 10;
    char name_of_item[NUMBER_OF_ITEMS];
    double price_of_item[NUMBER_OF_ITEMS];
    int num_of_inv[NUMBER_OF_ITEMS];
    int user_choice = 0;
    
    bool found_choice = false;
    int userpick;
    int i = 0;
    int total;
    char choice;
    
    name_of_item[i] = "Shorts";     price_of_item[i] = 5.00;    num_of_inv[i] = 5; ++i;
    name_of_item[i] = "Pants";      price_of_item[i] = 10.00;   num_of_inv[i] = 5; ++i;
    name_of_item[i] = "Shirts";     price_of_item[i] = 7.00;    num_of_inv[i] = 5; ++i;
    name_of_item[i] = "Shoes";      price_of_item[i] = 25.00;   num_of_inv[i] = 3; ++i;
    name_of_item[i] = "Socks";      price_of_item[i] = 3.00;    num_of_inv[i] = 5; ++i;
    name_of_item[i] = "Hats";       price_of_item[i] = 8.00;    num_of_inv[i] = 5; ++i;
    name_of_item[i] = "Hoodies";    price_of_item[i] = 20.00;   num_of_inv[i] = 6; ++i;
    name_of_item[i] = "Gloves";     price_of_item[i] = 5.00;    num_of_inv[i] = 5; ++i;    
    name_of_item[i] = "Undies";     price_of_item[i] = 8.00;    num_of_inv[i] = 1; ++i;
    name_of_item[i] = "Glasses";    price_of_item[i] = 15.00;   num_of_inv[i] = 5; ++i;     

    printMenu(NUMBER_OF_ITEMS,name_of_item[i],price_of_item[i],num_of_inv[i]); 
    cin >>  userpick;
    cout << "You have purchased " << name_of_item[userpick] << " for $" << price_of_item[userpick] << ".00 dollars. " << endl;
    total =price_of_item[userpick];
   
    cout << "Would you like any other items? y or n"; 
    cin >> choice;
     
    
    
 }
 
 
void printMenu(int NUMBER_OF_ITEMs,char name_of_item[],double price_of_item[],int num_of_inv[]){
    cout << "What would you like to buy today? " << endl;
    for (int i = 0; i < NUMBER_OF_ITEMs; i++) {
        cout << i << ": " 
             << name_of_item[i] << " "
             << "$" << price_of_item[i] << " "
             << "items left: " << num_of_inv[i] << endl;
        
    }
    return;
} 