// Name : Anish Sofat
// Roll No. : 19CS10011

#include <iostream>
#include "FirstClass.h"
using namespace std;

//Initialisation of a singleton pointer
FirstClass *FirstClass::myclass = 0;        

//Class Constructor
FirstClass::FirstClass(string name , float loadfactor, bool seat , bool ac, int num_tiers , bool luxury,int mintatkal, int maxtatkal, int mindistance, int reservationcharge ) : hasSeat_(seat) , isAC_(ac) , numberOfTiers_(num_tiers){
    name_ = name;
    loadFactor_ = loadfactor;
    isLuxury_ = luxury;
    minTatkalCharge = mintatkal;
    maxTatkalCharge = maxtatkal;
    reservationCharges = reservationcharge;
    minTatkalDistance = mindistance;
}

//Gives the pointer for the class
const FirstClass& FirstClass::Type() {
    if(!myclass) {
        myclass = new FirstClass();     
    }
    return *myclass;
}

// Getting the load factor for cost calculation
float FirstClass::GetLoadFactor() const{
    return this->loadFactor_;
}

//Gets name
string FirstClass::GetName() const{
    return this->name_;
}

//Gets no of tiers
int FirstClass::GetNumberOfTiers() const{
    return this->numberOfTiers_;
}

//Checks if Sitting Car or not
bool FirstClass::IsSitting() const{
    return this->hasSeat_;
}

//Checks if AC
bool FirstClass::IsAC() const{
    return this->isAC_;
}

//Checks if Luxury
bool FirstClass::IsLuxury() const{
    return this->isLuxury_;
}

//Destructor
FirstClass::~FirstClass() {}

//Friend function to output the details of the class easily
ostream& operator<<(ostream& os , const FirstClass& firstClass) {    
    os << "\nName : " << firstClass.name_ <<"\n";
    os << "Load Factor : " << firstClass.loadFactor_ <<"\n";
    os << "Is Sitting : " << firstClass.hasSeat_ <<"\n";
    os << "Is AC : " << firstClass.isAC_ <<"\n";
    os << "Is Luxury : " << firstClass.isLuxury_ <<"\n";
    os << "Number of Tiers : " << firstClass.numberOfTiers_ << "\n" <<"\n";
    return os;
}

//Unit Testing to check the proper funtioning of the class
void FirstClass::UnitTestFirstClass() {           
    if(FirstClass::Type().name_ != "First Class") {
        cout << "Name of the FirstClass class is wrong !" <<"\n"; 
    }
    if(FirstClass::Type().loadFactor_ != 3.0f) {
        cout << "Load Factor of the FirstClass class is wrong !" <<"\n";
    }
    if(FirstClass::Type().hasSeat_ != 0) {
        cout << "Has Seat of the FirstClass class is wrong !" <<"\n";         
    }
    if(FirstClass::Type().isAC_ != 0) {
        cout << "AC of the FirstClass class is wrong !" <<"\n";
    }
    if(FirstClass::Type().isLuxury_ != 1) {
        cout << "Luxury of the FirstClass class is wrong !" <<"\n";
    }
    if(FirstClass::Type().numberOfTiers_ != 2) {
        cout << "Number of Tiers of the FirstClass class is wrong !" <<"\n"; 
    }
    if(FirstClass::Type().GetName() != "First Class") {
        cout << "Name function of the FirstClass class is wrong !" <<"\n";   
    }
    if(FirstClass::Type().GetLoadFactor() != 3.0f) {
        cout << "Load Factor function of the FirstClass class is wrong !" <<"\n";        
    }
    if(FirstClass::Type().IsSitting() != 0) {
        cout << "IsSitting function of the FirstClass class is wrong !" <<"\n";
    }
    if(FirstClass::Type().IsAC() != 0) {
        cout << "IsAC function of the FirstClass class is wrong !" <<"\n";
    }
    if(FirstClass::Type().IsLuxury() != 1) {
        cout << "IsLuxury function of the FirstClass class is wrong !" <<"\n";
    }
    if(FirstClass::Type().GetNumberOfTiers() != 2) {
        cout << "GetNumberOfTiers function of the FirstClass class is wrong !" <<"\n";   
    }
}