// Name : Anish Sofat
// Roll No. : 19CS10011

#include <iostream>
#include <cmath>
#include "AC2Tier.h"
using namespace std;

//Initialisation of a singleton pointer
AC2Tier *AC2Tier::myclass = 0;

//Class Constructor
AC2Tier::AC2Tier(string name , float loadfactor, bool seat , bool ac, int num_tiers , bool luxury , int mintatkal, int maxtatkal, int mindistance, int reservationcharge): hasSeat_(seat) , isAC_(ac) , numberOfTiers_(num_tiers) {
    isLuxury_ = luxury;
    name_ = name;
    loadFactor_ = loadfactor;
    minimumTatkalCharge_ = mintatkal;
    maximumTatkalCharge_ = maxtatkal;
    reservationCharges_ = reservationcharge;
    minimumTatkalDistance_ = mindistance;
}

//Gives the pointer for the class
const AC2Tier& AC2Tier::Type() {
    if(!myclass) {
        myclass = new AC2Tier();            
    }
    return *myclass;
}

// Getting the load factor for cost calculation
float AC2Tier::GetLoadFactor() const{
    return this->loadFactor_;
}

//Gets name
string AC2Tier::GetName() const{
    return this->name_;
}

//Gets no of tiers
int AC2Tier::GetNumberOfTiers() const{
    return this->numberOfTiers_;
}

//Checks if Sitting Car or not
bool AC2Tier::IsSitting() const{
    return this->hasSeat_;
}

//Checks if AC
bool AC2Tier::IsAC() const{
    return this->isAC_;
}

//Checks if Luxury
bool AC2Tier::IsLuxury() const{
    return this->isLuxury_;
}

//Destructor
AC2Tier::~AC2Tier() {}

//Friend function to output the details of the class easily
ostream& operator<<(ostream& os , const AC2Tier& ac2Tier) {      
    os << "\nName : " << ac2Tier.name_ <<"\n"<<"Load Factor : " << ac2Tier.loadFactor_ <<"\n"<< "Is Sitting : " << ac2Tier.hasSeat_ <<"\n"<< "Is AC : " << ac2Tier.isAC_ <<"\n";
    os << "Is Luxury : " << ac2Tier.isLuxury_ <<"\n"<< "Number of Tiers : " << ac2Tier.numberOfTiers_ << "\n" << "\n";
    return os;
}

//Unit Testing to check the proper funtioning of the class
void AC2Tier::UnitTestAC2Tier() {            
    if(AC2Tier::Type().name_ != "AC 2 Tier") {
        cout << "Name of the AC2Tier class is wrong !";
        cout<<"\n";
    }
    if(fabs(AC2Tier::Type().loadFactor_ - 4.00f) > 0.01f) {
        cout << "Load Factor of the AC2Tier class is wrong !";
        cout<<"\n";
    }
    if(AC2Tier::Type().hasSeat_ != 0) {
        cout << "Has Seat of the AC2Tier class is wrong !";
        cout<<"\n";         
    }
    if(AC2Tier::Type().isAC_ != 1) {
        cout << "AC of the AC2Tier class is wrong !";
        cout<<"\n";
    }
    if(AC2Tier::Type().isLuxury_ != 0) {
        cout << "Luxury of the AC2Tier class is wrong !";
        cout<<"\n";
    }
    if(AC2Tier::Type().numberOfTiers_ != 2) {
        cout << "Number of Tiers of the AC2Tier class is wrong !";
        cout<<"\n"; 
    }
    if(AC2Tier::Type().GetName() != "AC 2 Tier") {
        cout << "Name function of the AC2Tier class is wrong !";
        cout<<"\n";  
    }
    if(AC2Tier::Type().GetLoadFactor() != 4.00f) {
        cout << "Load Factor function of the AC2Tier class is wrong !";
        cout<<"\n";
    }
    if(AC2Tier::Type().IsSitting() != 0) {
        cout << "IsSitting function of the AC2Tier class is wrong !";
        cout<<"\n";
    }
    if(AC2Tier::Type().IsAC() != 1) {
        cout << "IsAC function of the AC2Tier class is wrong !" << endl;
        cout<<"\n";
    }
    if(AC2Tier::Type().IsLuxury() != 0) {
        cout << "IsLuxury function of the AC2Tier class is wrong !" << endl;
        cout<<"\n";
    }
    if(AC2Tier::Type().GetNumberOfTiers() != 2) {
        cout << "GetNumberOfTiers function of the AC2Tier class is wrong !" << endl;   
        cout<<"\n";
    }
}