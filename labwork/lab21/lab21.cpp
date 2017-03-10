

#include <iostream>
#include <string>
#include <cmath>
using namespace std;


double oldWindchill (double velocity, double tempf) {
    double result;
    result = 0.081 * (3.71 * sqrt(velocity) + 5.81 - 0.25 * velocity) * (tempf - 91.4) + 91.4;
    return result;
    
}
double newWindchill (double v, double t) {
    double newResult;
    newResult = 35.74 + 0.6215 * t - 35.75 * pow(v, 0.16) + 0.4275 * t * pow(v, 0.16);
    return newResult;
}
int main(){
    
    double userWindspeed;
    double userTempf;
    double userOldspeed;
    double userNewspeed;
    double difference;
    
    cout << "Please enter the windspeed: ";
    cin >> userWindspeed;
    cout << "Please enter the temperature: ";
    cin >> userTempf;
    
    userNewspeed = newWindchill(userWindspeed,userTempf);
    
    userOldspeed = oldWindchill(userWindspeed,userTempf);
    
    if (userNewspeed > userOldspeed) {
        difference = userNewspeed - userOldspeed;
    }
    else {
        difference = userOldspeed - userNewspeed;
    }
    
    cout << "Wind Speed    Old Formula    New Formula    Difference" << endl;
    cout << "______________________________________________________" << endl;
    cout << "   " << userWindspeed << "mph          " << userOldspeed << "°       " << userNewspeed << "°       " << difference << "°";
    
    
    
    
    
    return 0;
}