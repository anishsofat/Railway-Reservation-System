// Name : Anish Sofat
// Roll No. : 19CS10011

#include <iostream>
#include "SecondSitting.h"
using namespace std;

//Initialisation of a singleton pointer
SecondSitting *SecondSitting::myclass = 0;          

//Class Constructor
SecondSitting::SecondSitting(string name , float loadfactor , bool seat , bool ac  , int num_tiers  , bool luxury ,int mintatkal, int maxtatkal, int mindistance, int reservationcharge) : hasSeat_(seat) , isAC_(ac) , numberOfTiers_(num_tiers) {
    name_ = name;
    loadFactor_ = loadfactor;
    isLuxury_ = luxury;
    minTatkalCharge = mintatkal;
    maxTatkalCharge = maxtatkal;
    reservationCharges = reservationcharge;
    minTatkalDistance = mindistance;
}

//Gives the pointer for the class
const SecondSitting& SecondSitting::Type() {
    if(!myclass) {
        myclass = new SecondSitting();         
    }
    return *myclass;
}

// Getting the load factor for cost calculation
float SecondSitting::GetLoadFactor() const{
    return this->loadFactor_;
}

//Gets name
string SecondSitting::GetName() const{
    return this->name_;
}

//Gets no of tiers
int SecondSitting::GetNumberOfTiers() const{
    return this->numberOfTiers_;
}

//Checks if Sitting Car or not
bool SecondSitting::IsSitting() const{
    return this->hasSeat_;
}

//Checks if AC
bool SecondSitting::IsAC() const{
    return this->isAC_;
}

//Checks if Luxury
bool SecondSitting::IsLuxury() const{
    return this->isLuxury_;
}

//Destructor
SecondSitting::~SecondSitting() {}

//Friend function to output the details of the class easily
ostream& operator<<(ostream& os , const SecondSitting& secondSitting) {      
    os << "\nName : " << secondSitting.name_ <<"\n";
    os << "Load Factor : " << secondSitting.loadFactor_ <<"\n";
    os << "Is Sitting : " << secondSitting.hasSeat_ <<"\n";
    os << "Is AC : " << secondSitting.isAC_ <<"\n";
    os << "Is Luxury : " << secondSitting.isLuxury_ <<"\n";
    os << "Number of Tiers : " << secondSitting.numberOfTiers_ << "\n" <<"\n";
    return os;
}

void SecondSitting::UnitTestSecondSitting() {           
    if(SecondSitting::Type().name_ != "Second Sitting") {
        cout << "Name of the SecondSitting class is wrong !" <<"\n"; 
    }
    if(SecondSitting::Type().loadFactor_ != 0.60f) {
        cout << "Load Factor of the SecondSitting class is wrong !" <<"\n";
    }
    if(SecondSitting::Type().hasSeat_ != 1) {
        cout << "Has Seat of the SecondSitting class is wrong !" <<"\n";          
    }
    if(SecondSitting::Type().isAC_ != 0) {
        cout << "AC of the SecondSitting class is wrong !" <<"\n";
    }
    if(SecondSitting::Type().isLuxury_ != 0) {
        cout << "Luxury of the SecondSitting class is wrong !" <<"\n";
    }
    if(SecondSitting::Type().numberOfTiers_ != 0) {
        cout << "Number of Tiers of the SecondSitting class is wrong !" <<"\n"; 
    }
    if(SecondSitting::Type().GetName() != "Second Sitting") {
        cout << "Name function of the SecondSitting class is wrong !" <<"\n";   
    }
    if(SecondSitting::Type().GetLoadFactor() != 0.60f) {
        cout << "Load Factor function of the SecondSitting class is wrong !" <<"\n";         
    }
    if(SecondSitting::Type().IsSitting() != 1) {
        cout << "IsSitting function of the SecondSitting class is wrong !" <<"\n";
    }
    if(SecondSitting::Type().IsAC() != 0) {
        cout << "IsAC function of the SecondSitting class is wrong !" <<"\n";
    }
    if(SecondSitting::Type().IsLuxury() != 0) {
        cout << "IsLuxury function of the SecondSitting class is wrong !" <<"\n";
    }
    if(SecondSitting::Type().GetNumberOfTiers() != 0) {
        cout << "GetNumberOfTiers function of the SecondSitting class is wrong !" <<"\n";   
    }
}