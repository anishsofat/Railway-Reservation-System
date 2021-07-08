// Name : Anish Sofat
// Roll No. : 19CS10011

#ifndef ACCHAIRCAR_H
#define ACCHAIRCAR_H

#include <iostream>
#include "BookingClasses.h"
using namespace std;

class ACChairCar : public BookingClasses {
    bool isLuxury_;           
    const bool isAC_;       
    const int numberOfTiers_;       
    const bool hasSeat_;    
    //Constant pointer for the class            
    static ACChairCar *myclass;      
    int minimumTatkalCharge_;
    int maximumTatkalCharge_;
    int minimumTatkalDistance_;
    int reservationCharges_;
 
    //Class Constructor
    ACChairCar(string name = "AC Chair Car" , float loadfactor = 2.00f , bool seat = 1 , bool ac = 1 , int num_tiers = 0 , bool luxury = 0,int mintatkal = 125 , int maxtatkal = 225 , int mindistance = 250 , int reservationcharge = 40);

public:
    ~ACChairCar();
    static const ACChairCar& Type();        
    float GetLoadFactor() const;
    ACChairCar(const ACChairCar& other) = delete;
    
    //Deleting(removing) the copy constructor and assignment
    ACChairCar& operator=(const ACChairCar& other) = delete;
    string GetName() const;
    bool IsSitting() const;
    bool IsAC() const;          
    int GetNumberOfTiers() const;
    bool IsLuxury() const;

    //Function for unit testing
    static void UnitTestACChairCar();  

    //Friend function to output the details of the class easily      
    friend ostream& operator<<(ostream& os , const ACChairCar& acchairCar);
    int GetMinimumTatkalCharge() const {return minimumTatkalCharge_;};
    int GetMaximumTatkalCharge() const {return maximumTatkalCharge_;};
    int GetMinimumTatkalDistance() const {return minimumTatkalDistance_;};
    int GetReservationCharge() const {return reservationCharges_;};
};


#endif