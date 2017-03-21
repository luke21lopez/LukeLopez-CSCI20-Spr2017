

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// This function will take in users in pute of velocity and temperature and use 
// the algorith given to provide a windchill, old version
double oldWindchill (double velocity, double tempf) {
    double result;
    result = 0.081 * (3.71 * sqrt(velocity) + 5.81 - 0.25 * velocity) * (tempf - 91.4) + 91.4;
    return result;
    
}
// This function will do the same as the first, but the algorithm is set
// to provide the new wind chill calculation
double newWindchill (double v, double t) {
    double newResult;
    newResult = 35.74 + 0.6215 * t - 35.75 * pow(v, 0.16) + 0.4275 * t * pow(v, 0.16);
    return newResult;
}
int main(){
    
    // These are the necessary variables to provide 
    // needed data
    double userWindspeed;
    double userTempf;
    double userOldspeed;
    double userNewspeed;
    double difference;
    
    // This will prompt user to input windspeed and temperature.
    cout << "Please enter the windspeed: ";
    cin >> userWindspeed;
    cout << "Please enter the temperature: ";
    cin >> userTempf;
    
    // this is setting our variable to get the result of the function used (new)
    userNewspeed = newWindchill(userWindspeed,userTempf);
    // this is setting our oldwind chill variable to use the old function
    userOldspeed = oldWindchill(userWindspeed,userTempf);
    // this is a boolean statement providing difference
    // betweent the two temperatures
    if (userNewspeed > userOldspeed) {
        difference = userNewspeed - userOldspeed;
    }
    else {
        difference = userOldspeed - userNewspeed;
    }
    
    
    // This will print the data calculated from the functions above with user info
    cout << "Wind Speed    Old Formula    New Formula    Difference" << endl;
    cout << "______________________________________________________" << endl;
    cout << "   " << userWindspeed << "mph          " << userOldspeed << "°       " << userNewspeed << "°       " << difference << "°";
    
    
    
    
    
    return 0;
}