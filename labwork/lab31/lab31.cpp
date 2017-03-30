


#include <iostream>
#include <string>
using namespace std;

/*Device charge – free for dumb phone, $5 for smart phone, $10 tablet
Monthly charge – $30 for unlimited talk and text
Unlimited data – $75 for unlimited talk, text and data (up to 10 GB and $1.50 for each GB after that)
Pay per data charge - $5 for the first GB of data and $0.75 for each GB or portion there of up to 5 GB. $1.50 for each GB or portion there of up to 15 GB.  $3 for each GB after that.
Corporate Discount – 10% discount for corporate customers
Family Plan Discount - $3 per phone line over 2.
*/

int deviceCharge(string);
void monthlyCharge(string,int);

int main(){
    string device;
    int gbUsed;
    

    
    return 0;
}

int deviceCharge(string device_){
    int deviceCost;
    if (device_ == "smart") {
        deviceCost = 5;
    } else if (device_ == "tablet") {
        deviceCost = 10;
    } else {
        deviceCost = 0;
    }
    
    return deviceCost;
}

void monthlyCharge(string device,int gigaBytes){
    int monthCharge;
    int deviceCost = deviceCharge(device);
    
    if (gigaBytes == 0) {
        monthCharge = 30;
    } else if (gigaBytes)
    
    
    
    
    
    
}