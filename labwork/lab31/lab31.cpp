


#include <iostream>
#include <string>
using namespace std;





int main(){
    
    int deviceCharge = 0;
    int monthlyCharge = 30;
    int unlimitedData = 75;
    double payPerDataCharge = 0;
    string deviceOne;
    string deviceTwo;
    string deviceThree;
    string deviceFour;
    double gigaBytes;
    bool corpDiscount;
    double discount;
    double total;
    int devices;
    char corporate;
    int numOfSmartPhones;
    int numOfDumbPhones;
    int numOfTablets;
    
    cout << "How many devices do you have: ";
    cin >> devices;
    
    if (devices == 1){
        cout << "What type of device do you have: ";
        cin >> deviceOne;
    } else if (devices == 2) {
        cout << "type of your first device: ";
        cin >> deviceOne;
        cout << "type of your second device: ";
        cin >> deviceTwo;
    } else if (devices == 3) {
        cout << "type of your first device: ";
        cin >> deviceOne;
        cout << "type of your second device: ";
        cin >> deviceTwo;
        cout << "type of your third device: ";
        cin >> deviceThree;
    } else if (devices == 4) {
        cout << "type of your first device: ";
        cin >> deviceOne;
        cout << "type of your second device: ";
        cin >> deviceTwo;
        cout << "type of your third device: ";
        cin >> deviceThree;
        cout << "type of your fourth device: ";
        cin >> deviceFour;
    }
    
    
    
    if (deviceOne == "smartphone") {
        deviceCharge = 5;
    } else if (deviceOne == "tablet") {
        deviceCharge = 10;
    } else if (deviceOne == "dumbphone") {
        deviceCharge = 0;
    }
    
        if (deviceTwo == "smartphone") {
        deviceCharge = 5;
    } else if (deviceTwo == "tablet") {
        deviceCharge = 10;
    } else if (deviceTwo == "dumbphone") {
        deviceCharge = 0;
    }
    
        if (deviceThree == "smartphone") {
        deviceCharge = 5;
    } else if (deviceThree == "tablet") {
        deviceCharge = 10;
    } else if (deviceThree == "dumbphone") {
        deviceCharge = 0;
    }
    
        if (deviceFour == "smartphone") {
        deviceCharge = 5;
    } else if (deviceFour == "tablet") {
        deviceCharge = 10;
    } else if (deviceFour == "dumbphone") {
        deviceCharge = 0;
    } 
    
    cout << "How many gigaBytes do you use? ";
    cin >> gigaBytes;
   
    
    
    if (gigaBytes <= 1) {
        payPerDataCharge = 5;
    } else if ((gigaBytes > 1) && (gigaBytes <= 5)){
        payPerDataCharge = 5 + (.75 * (gigaBytes - 1));
    } else if ((gigaBytes > 5) && (gigaBytes <= 10)) {
        payPerDataCharge = unlimitedData;
    }
    
    
    cout << "Do you have a corporate discount? y or n: ";
    cin >> corporate;
    
    if (corporate == 'y') {
        corpDiscount = 1;
    } else {
        corpDiscount = 0;
    }
    
    if (corpDiscount) {
        discount = total * .10;
    } else {
        discount = 0;
    }
    
    
   
    
    
    
    return 0;
}