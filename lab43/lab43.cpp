/* Name: Luke Lopez
   Prof: April Brown
   Assignment: lab 4.3
   Date: April 18 2017
   
   About this program: 
   This program mimics an online shopping cart.  You are the proprieter of an online shop and have to keep track 
   of inventory, price and the user’s shopping cart. Create a class to hold the object name, price, and current 
   inventory.  The program outputs all of the object names for your user to choose what they want.  As the user 
   purchases an item, you should remove that item from inventory (subtract 1) and add the price to a total.  When the 
   user is done adding items to their cart, you should output a statement of what they have ordered and the total cost of 
   their purchases.  The program does not let inventory go below 0. 
   
 */ 





#include <iostream>
#include <cstring>
using namespace std;



// This is the class that holds everything within the shop
class ClothesShop{
    public:
    ClothesShop(int nameofitems[],double itemArray[],int numItems[],int arraySize){ // This is the class constructor that holds of our arrays
        array_size_ = arraySize;
        int i = 0;
        for (i = 0; i < array_size_; i++){
            item_number_[i] = nameofitems[i];  // this is assigning our private arrays there values
            price_of_items_[i] = itemArray[i];  
            num_of_items_[i] = numItems[i];
        }
    }

    void printMenu(){ // This function will print out all of the store's products. 
        int i = 0;
          name_of_items_[i] = "Shorts"; i++;  // I was unable to pass string in through the default constructor or
          name_of_items_[i] = "Pants";  i++;  // in an class for that manner due to lack of knowledge
          name_of_items_[i] = "Shirts"; i++;   
          name_of_items_[i] = "Shoes";  i++;    
          name_of_items_[i] = "Socks";  i++;   
          name_of_items_[i] = "Hats";   i++;    
          name_of_items_[i] = "Hoody";i++;  
          name_of_items_[i] = "Gloves"; i++;    
          name_of_items_[i] = "Undies"; i++;   
          name_of_items_[i] = "Glasses";i++;  
          
        cout << "Welcome to the clothes store, Here are our products. "  << endl; 
        cout <<"------------------------------------------------------" << endl;
        cout <<"Item# " <<" Name   " << "Price   "<< "Left in Stock" << endl;
        
        for (int i = 0; i < array_size_; i++){

            cout << item_number_[i] << "     "<< name_of_items_[i] << "   $"<< price_of_items_[i] << ".00     #" << num_of_items_[i] << endl;
        }
        return;
    }
    void set_yourCart(int userChoice){  // this function sets the values of "total cost, number of items, and count of items"
        customer_choice_ = userChoice;  // this sets the user's choice into the class
        int countofitems = 0;  // this variable keeps count of how many items you have purchased
        
        for  (int i = 0; i < array_size_; i++){
            if ((item_number_[i] == userChoice) && (num_of_items_[i] > 0)){ // this condition is making sure we have enough in inventory
                 total_cost_ = total_cost_ + price_of_items_[i]; // this is adding what is already in the variable to the price of the item. holding current total
                 num_of_items_[i] = num_of_items_[i] - 1;
                 countofItems_++; // this increments the amount of items everytime the loop is ran
            }else if(num_of_items_[i] == 0){  // this else if condition tells the customer that there are no more of that item available
                cout << "We are out of stock!" << endl;
            }
        }
        
        return;
    }
    void get_Cart(){ // this will give you the total of your purchases
       
        cout << "You have purchased # "<< countofItems_ << " item/s that equal $"<< total_cost_ << ".00 "<< endl;
        cout << "Thank you for shopping with ClothesShop" << endl;
    
    }
    
    
    private:
    int item_number_[99]; // private array Item identification number
    int num_of_items_[99]; // number of of items in inventory array
    int countofItems_ = 0; // this counts how many items our customer has
    double price_of_items_[99]; // this holds all the prices in an array
    string name_of_items_[99]; // this holds all the names in an array
    int customer_choice_; // this holds the customer's choice wich correlates with item number
    double total_cost_; // this holds the total amount of customer's items
    int array_size_; // this will bring over the size of how many items we sell
};


int main(){
    const int MENU_ITEMS = 10;
    int num_of_inv[MENU_ITEMS];  // array that holds inventory
    double price_of_item[MENU_ITEMS]; // an array that holds the prices 
    int name_of_item[MENU_ITEMS]; // an array to hold id number of items
    int i = 0;
    int userChoice = 0; // this will be used to store customer choice 
    char decision =' ';// this is for the boolean condition on line 133
    bool done = true; // a boolean to use in the loop below
    // here is where I inputted the values of the array as requested
    name_of_item[i] = 0;     price_of_item[i] = 5.00;    num_of_inv[i] = 5; ++i;
    name_of_item[i] = 1;      price_of_item[i] = 10.00;   num_of_inv[i] = 5; ++i;
    name_of_item[i] = 2;     price_of_item[i] = 7.00;    num_of_inv[i] = 5; ++i;
    name_of_item[i] = 3;      price_of_item[i] = 25.00;   num_of_inv[i] = 3; ++i;
    name_of_item[i] = 4;      price_of_item[i] = 3.00;    num_of_inv[i] = 5; ++i;
    name_of_item[i] = 5;       price_of_item[i] = 8.00;    num_of_inv[i] = 5; ++i;
    name_of_item[i] = 6;    price_of_item[i] = 20.00;   num_of_inv[i] = 6; ++i;
    name_of_item[i] = 7;     price_of_item[i] = 5.00;    num_of_inv[i] = 5; ++i;    
    name_of_item[i] = 8;     price_of_item[i] = 8.00;    num_of_inv[i] = 1; ++i;
    name_of_item[i] = 9;    price_of_item[i] = 15.00;   num_of_inv[i] = 5; ++i;    
    
    for (i = 0; i < MENU_ITEMS; i++){ // this loop sets the arrays up 
        name_of_item[i] = name_of_item[i];
        price_of_item[i] = price_of_item[i];
        num_of_inv[i] = num_of_inv[i];
    }
    
    
    
    
    ClothesShop _customerOne(name_of_item,price_of_item,num_of_inv,MENU_ITEMS); // this is calling our constructor

    
    
    
    while ( done == true ){ // this condition is boolean and states that if done is true it will continue to do what is in braces
    _customerOne.printMenu(); // calls for the menu to print. 
    cout << "Please choose the item number of the Product would you like to buy? ";
    cin >> userChoice;
    _customerOne.set_yourCart(userChoice); // makes sure to track our customer's decisions 
    cout << "Would you like anything else? y or n : "; 
    cin >> decision; // this variable holds the customer decision to keep shopping or not
    
    if (decision == 'n'){ // this condition makes sure if customer says no to no more shopping . the program will close
        done = false;
    }
    }
    
    _customerOne.get_Cart(); // this is calling the function to give our customer there total
    
    
    
    
    return 0;
}







