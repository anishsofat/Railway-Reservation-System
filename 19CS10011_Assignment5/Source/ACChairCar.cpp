// Name : Anish Sofat
// Roll No. : 19CS10011

#include <iostream>
#include "ACChairCar.h"
using namespace std;

//Initialisation of a singleton pointer
ACChairCar *ACChairCar::myclass = 0;   

//Class Constructor
ACChairCar::ACChairCar(string name , float loadfactor, bool seat , bool ac, int num_tiers , bool luxury,int mintatkal, int maxtatkal, int mindistance, int reservationcharge ): hasSeat_(seat) , isAC_(ac) , numberOfTiers_(num_tiers) {
    name_ = name;
    loadFactor_ = loadfactor;
    isLuxury_ = luxury;
    maximumTatkalCharge_ = maxtatkal;
    minimumTatkalCharge_ = mintatkal;
    reservationCharges_ = reservationcharge;
    minimumTatkalDistance_ = mindistance;
}

//Gives the pointer for the class
const ACChairCar& ACChairCar::Type() {
    if(!myclass) {
        myclass = new ACChairCar();         
    }
    return *myclass;
}

// Getting the load factor for cost calculation
float ACChairCar::GetLoadFactor() const{
    return this->loadFactor_;
}

//Gets name
string ACChairCar::GetName() const{
    return this->name_;
}

//Gets no of tiers
int ACChairCar::GetNumberOfTiers() const{
    return this->numberOfTiers_;
}

//Checks if Sitting Car or not
bool ACChairCar::IsSitting() const{
    return this->hasSeat_;
}

//Checks if AC
bool ACChairCar::IsAC() const{
    return this->isAC_;
}

//Checks if Luxury
bool ACChairCar::IsLuxury() const{
    return this->isLuxury_;
}

//Destructor
ACChairCar::~ACChairCar() {}

//Friend function to output the details of the class easily
ostream& operator<<(ostream& os , const ACChairCar& acchairCar) {     
    os << "\nName : " << acchairCar.name_ << "\n"<<"Load Factor : " << acchairCar.loadFactor_ << "\n"<< "Is Sitting : " << acchairCar.hasSeat_ << "\n";
    os << "Is AC : " << acchairCar.isAC_ << "\n"<< "Is Luxury : " << acchairCar.isLuxury_ << "\n"<< "Number of Tiers : " << acchairCar.numberOfTiers_ << "\n" << "\n";
    return os;
}

//Unit Testing to check the proper funtioning of the class
void ACChairCar::UnitTestACChairCar() {            
    if(ACChairCar::Type().name_ != "AC Chair Car") cout << "Name of the ACChairCar class is wrong !" << "\n"; 
    
    if(ACChairCar::Type().hasSeat_ != 1) cout << "Has Seat of the ACChairCar class is wrong !" << "\n";          
    
    if(ACChairCar::Type().isAC_ != 1) cout << "AC of the ACChairCar class is wrong !" << "\n";

    if(ACChairCar::Type().GetNumberOfTiers() != 0) cout << "GetNumberOfTiers function of the ACChairCar class is wrong !" << "\n";   
    
    if(ACChairCar::Type().GetLoadFactor() != 2.0f) cout << "Load Factor function of the ACChairCar class is wrong !" << "\n";         

    if(ACChairCar::Type().IsLuxury() != 0) cout << "IsLuxury function of the ACChairCar class is wrong !" << "\n";
    
    if(ACChairCar::Type().GetName() != "AC Chair Car") cout << "Name function of the ACChairCar class is wrong !" << "\n";   
    
    if(ACChairCar::Type().numberOfTiers_ != 0) cout << "Number of Tiers of the ACChairCar class is wrong !" << "\n"; 
    
    if(ACChairCar::Type().IsSitting() != 1) cout << "IsSitting function of the ACChairCar class is wrong !" << "\n";

    if(ACChairCar::Type().IsAC() != 1) cout << "IsAC function of the ACChairCar class is wrong !" << "\n";

    if(ACChairCar::Type().isLuxury_ != 0) cout << "Luxury of the ACChairCar class is wrong !" << "\n";

    if(ACChairCar::Type().loadFactor_ != 2.0f) cout << "Load Factor of the ACChairCar class is wrong !" << "\n";
}