// Name : Anish Sofat
// Roll No. : 19CS10011

#include <iostream>
#include "Sleeper.h"
using namespace std;

//Initialisation of a singleton pointer
Sleeper *Sleeper::myclass = 0;        

//Class Constructor
Sleeper::Sleeper(string name , float loadfactor, bool seat , bool ac, int num_tiers , bool luxury,int mintatkal, int maxtatkal, int mindistance, int reservationcharge ): hasSeat_(seat) , isAC_(ac) , numberOfTiers_(num_tiers) {
    name_ = name;
    loadFactor_ = loadfactor;
    isLuxury_ = luxury;
    minTatkalCharge = mintatkal;
    maxTatkalCharge = maxtatkal;
    reservationCharges = reservationcharge;
    minTatkalDistance = mindistance;
}

//Gives the pointer for the class
const Sleeper& Sleeper::Type() {
    if(!myclass) {
        myclass = new Sleeper();       
    }
    return *myclass;
}

// Getting the load factor for cost calculation
float Sleeper::GetLoadFactor() const{
    return this->loadFactor_;
}

//Gets name
string Sleeper::GetName() const{
    return this->name_;
}

//Gets no of tiers
int Sleeper::GetNumberOfTiers() const{
    return this->numberOfTiers_;
}

//Checks if Sitting Car or not
bool Sleeper::IsSitting() const{
    return this->hasSeat_;
}

//Checks if AC
bool Sleeper::IsAC() const{
    return this->isAC_;
}

//Checks if Luxury
bool Sleeper::IsLuxury() const{
    return this->isLuxury_;
}

//Destructor
Sleeper::~Sleeper() {}

//Friend function to output the details of the class easily
ostream& operator<<(ostream& os , const Sleeper& sleeper) {      
    os << "\nName : " << sleeper.name_ <<"\n";
    os << "Load Factor : " << sleeper.loadFactor_ <<"\n";
    os << "Is Sitting : " << sleeper.hasSeat_ <<"\n";
    os << "Is AC : " << sleeper.isAC_ <<"\n";
    os << "Is Luxury : " << sleeper.isLuxury_ <<"\n";
    os << "Number of Tiers : " << sleeper.numberOfTiers_ << "\n" <<"\n";
    return os;
}

//Unit Testing to check the proper funtioning of the class
void Sleeper::UnitTestSleeper() {           
    if(Sleeper::Type().name_ != "Sleeper") {
        cout << "Name of the sleeper class is wrong !" <<"\n"; 
    }
    if(Sleeper::Type().loadFactor_ != 1.0f) {
        cout << "Load Factor of the sleeper class is wrong !" <<"\n";
    }
    if(Sleeper::Type().hasSeat_ != 0) {
        cout << "Has Seat of the sleeper class is wrong !" <<"\n";          
    }
    if(Sleeper::Type().isAC_ != 0) {
        cout << "AC of the sleeper class is wrong !" <<"\n";
    }
    if(Sleeper::Type().isLuxury_ != 0) {
        cout << "Luxury of the sleeper class is wrong !" <<"\n";
    }
    if(Sleeper::Type().numberOfTiers_ != 3) {
        cout << "Number of Tiers of the sleeper class is wrong !" <<"\n"; 
    }
    if(Sleeper::Type().GetName() != "Sleeper") {
        cout << "Name function of the sleeper class is wrong !" <<"\n";  
    }
    if(Sleeper::Type().GetLoadFactor() != 1.0f) {
        cout << "Load Factor function of the sleeper class is wrong !" <<"\n";         
    }
    if(Sleeper::Type().IsSitting() != 0) {
        cout << "IsSitting function of the sleeper class is wrong !" <<"\n";
    }
    if(Sleeper::Type().IsAC() != 0) {
        cout << "IsAC function of the sleeper class is wrong !" <<"\n";
    }
    if(Sleeper::Type().IsLuxury() != 0) {
        cout << "IsLuxury function of the sleeper class is wrong !" <<"\n";
    }
    if(Sleeper::Type().GetNumberOfTiers() != 3) {
        cout << "GetNumberOfTiers function of the sleeper class is wrong !" <<"\n";   
    }
}