// Name : Anish Sofat
// Roll No. : 19CS10011

#include <iostream>
#include "ACFirstClass.h"
using namespace std;

//Initialisation of a singleton pointer
ACFirstClass *ACFirstClass::myclass = 0;    

//Class Constructor
ACFirstClass::ACFirstClass(string name , float loadfactor, bool seat , bool ac, int num_tiers , bool luxury,int mintatkal, int maxtatkal, int mindistance, int reservationcharge ): hasSeat_(seat) , isAC_(ac) , numberOfTiers_(num_tiers) {
    name_ = name;
    loadFactor_ = loadfactor;
    isLuxury_ = luxury;
    minimumTatkalCharge_ = mintatkal;
    maximumTatkalCharge_ = maxtatkal;
    reservationCharges_ = reservationcharge;
    minimumTatkalDistance_ = mindistance;
}

//Gives the pointer for the class
const ACFirstClass& ACFirstClass::Type() {
    if(!myclass) {
        myclass = new ACFirstClass();       
    }
    return *myclass;
}

// Getting the load factor for cost calculation
float ACFirstClass::GetLoadFactor() const{
    return this->loadFactor_;
}

//Gets name
string ACFirstClass::GetName() const{
    return this->name_;
}

//Gets no of tiers
int ACFirstClass::GetNumberOfTiers() const{
    return this->numberOfTiers_;
}

//Checks if Sitting Car or not
bool ACFirstClass::IsSitting() const{
    return this->hasSeat_;
}

//Checks if AC
bool ACFirstClass::IsAC() const{
    return this->isAC_;
}

//Checks if Luxury
bool ACFirstClass::IsLuxury() const{
    return this->isLuxury_;
}

//Destructor
ACFirstClass::~ACFirstClass() {}

//Friend function to output the details of the class easily
ostream& operator<<(ostream& os , const ACFirstClass& acfirstClass) {      
    os << "\nName : " << acfirstClass.name_ <<"\n"<< "Load Factor : " << acfirstClass.loadFactor_ <<"\n"<< "Is Sitting : " << acfirstClass.hasSeat_ <<"\n";
    os << "Is AC : " << acfirstClass.isAC_ <<"\n"<< "Is Luxury : " << acfirstClass.isLuxury_ <<"\n"<<"Number of Tiers : " << acfirstClass.numberOfTiers_ << "\n" <<"\n";
    return os;
}

//Unit Testing to check the proper funtioning of the class
void ACFirstClass::UnitTestACFirstClass() {            
    if(ACFirstClass::Type().name_ != "AC First Class") cout << "Name of the ACFirstClass class is wrong !" <<"\n"; 

    if(ACFirstClass::Type().loadFactor_ != 6.50f) cout << "Load Factor of the ACFirstClass class is wrong !" <<"\n";

    if(ACFirstClass::Type().hasSeat_ != 0) cout << "Has Seat of the ACFirstClass class is wrong !" <<"\n";         

    if(ACFirstClass::Type().isAC_ != 1) cout << "AC of the ACFirstClass class is wrong !" <<"\n";

    if(ACFirstClass::Type().isLuxury_ != 1) cout << "Luxury of the ACFirstClass class is wrong !" <<"\n";

    if(ACFirstClass::Type().numberOfTiers_ != 2) cout << "Number of Tiers of the ACFirstClass class is wrong !" <<"\n"; 

    if(ACFirstClass::Type().GetName() != "AC First Class") cout << "Name function of the ACFirstClass class is wrong !" <<"\n";   

    if(ACFirstClass::Type().GetLoadFactor() != 6.50f) cout << "Load Factor function of the ACFirstClass class is wrong !" <<"\n";        

    if(ACFirstClass::Type().IsSitting() != 0) cout << "IsSitting function of the ACFirstClass class is wrong !" <<"\n";

    if(ACFirstClass::Type().IsAC() != 1) cout << "IsAC function of the ACFirstClass class is wrong !" <<"\n";

    if(ACFirstClass::Type().IsLuxury() != 1) cout << "IsLuxury function of the ACFirstClass class is wrong !" <<"\n";

    if(ACFirstClass::Type().GetNumberOfTiers() != 2) cout << "GetNumberOfTiers function of the ACFirstClass class is wrong !" <<"\n";   

}