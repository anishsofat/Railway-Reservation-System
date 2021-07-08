// Name : Anish Sofat
// Roll No. : 19CS10011

#include <iostream>
#include <cmath>
#include "ExecutiveChairCar.h"
using namespace std;

//Initialisation of a singleton pointer
ExecutiveChairCar *ExecutiveChairCar::myclass = 0;      

//Class Constructor
ExecutiveChairCar::ExecutiveChairCar(string name , float loadfactor, bool seat , bool ac, int num_tiers , bool luxury , int mintatkal, int maxtatkal, int mindistance, int reservationcharge): hasSeat_(seat) , isAC_(ac) , numberOfTiers_(num_tiers) {
    name_ = name;
    loadFactor_ = loadfactor;
    isLuxury_ = luxury;
    minTatkalCharge = mintatkal;
    maxTatkalCharge = maxtatkal;
    reservationCharges = reservationcharge;
    minTatkalDistance = mindistance;
}

//Gives the pointer for the class
const ExecutiveChairCar& ExecutiveChairCar::Type() {
    if(!myclass) {
        myclass = new ExecutiveChairCar();            
    }
    return *myclass;
}

// Getting the load factor for cost calculation
float ExecutiveChairCar::GetLoadFactor() const{
    return this->loadFactor_;
}

//Gets name
string ExecutiveChairCar::GetName() const{
    return this->name_;
}

//Gets no of tiers
int ExecutiveChairCar::GetNumberOfTiers() const{
    return this->numberOfTiers_;
}

//Checks if Sitting Car or not
bool ExecutiveChairCar::IsSitting() const{
    return this->hasSeat_;
}

//Checks if AC
bool ExecutiveChairCar::IsAC() const{
    return this->isAC_;
}

//Checks if Luxury
bool ExecutiveChairCar::IsLuxury() const{
    return this->isLuxury_;
}

//Destructor
ExecutiveChairCar::~ExecutiveChairCar() {}

//Friend function to output the details of the class easily
ostream& operator<<(ostream& os , const ExecutiveChairCar& ExecutiveChairCar) {      
    os << "\nName : " << ExecutiveChairCar.name_ << "\n";
    os << "Load Factor : " << ExecutiveChairCar.loadFactor_ << "\n";
    os << "Is Sitting : " << ExecutiveChairCar.hasSeat_ << "\n";
    os << "Is AC : " << ExecutiveChairCar.isAC_ << "\n";
    os << "Is Luxury : " << ExecutiveChairCar.isLuxury_ << "\n";
    os << "Number of Tiers : " << ExecutiveChairCar.numberOfTiers_ << "\n" << "\n";
    return os;
}

//Unit Testing to check the proper funtioning of the class
void ExecutiveChairCar::UnitTestExecutiveChairCar() {            
    if(ExecutiveChairCar::Type().name_ != "Executive Chair Car") {
        cout << "Name of the ExecutiveChairCar class is wrong !" << "\n"; 
    }
    if(fabs(ExecutiveChairCar::Type().loadFactor_ - 5.00f) > 0.01f) {
        cout << "Load Factor of the ExecutiveChairCar class is wrong !" << "\n";
    }
    if(ExecutiveChairCar::Type().hasSeat_ != 1) {
        cout << "Has Seat of the ExecutiveChairCar class is wrong !" << "\n";          
    }
    if(ExecutiveChairCar::Type().isAC_ != 1) {
        cout << "AC of the ExecutiveChairCar class is wrong !" << "\n";
    }
    if(ExecutiveChairCar::Type().isLuxury_ != 1) {
        cout << "Luxury of the ExecutiveChairCar class is wrong !" << "\n";
    }
    if(ExecutiveChairCar::Type().numberOfTiers_ != 0) {
        cout << "Number of Tiers of the ExecutiveChairCar class is wrong !" << "\n"; 
    }
    if(ExecutiveChairCar::Type().GetName() != "Executive Chair Car") {
        cout << "Name function of the ExecutiveChairCar class is wrong !" << "\n";   
    }
    if(ExecutiveChairCar::Type().GetLoadFactor() != 5.00f) {
        cout << "Load Factor function of the ExecutiveChairCar class is wrong !" << "\n";         
    }
    if(ExecutiveChairCar::Type().IsSitting() != 1) {
        cout << "IsSitting function of the ExecutiveChairCar class is wrong !" << "\n";
    }
    if(ExecutiveChairCar::Type().IsAC() != 1) {
        cout << "IsAC function of the ExecutiveChairCar class is wrong !" << "\n";
    }
    if(ExecutiveChairCar::Type().IsLuxury() != 1) {
        cout << "IsLuxury function of the ExecutiveChairCar class is wrong !" << "\n";
    }
    if(ExecutiveChairCar::Type().GetNumberOfTiers() != 0) {
        cout << "GetNumberOfTiers function of the ExecutiveChairCar class is wrong !" << "\n";   
    }
}