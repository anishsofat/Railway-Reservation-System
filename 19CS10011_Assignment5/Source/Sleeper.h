// Name : Anish Sofat
// Roll No. : 19CS10011

#ifndef SLEEPER_H
#define SLEEPER_H

#include <iostream>
#include "BookingClasses.h"
using namespace std;

class Sleeper : public BookingClasses {
    bool isLuxury_;           
    const bool isAC_;       
    const int numberOfTiers_;    
    const bool hasSeat_;  
    //Constant pointer for the class            
    static Sleeper *myclass;      
    int minTatkalCharge;
    int maxTatkalCharge;
    int minTatkalDistance;
    int reservationCharges;

    //Class Constructor
    Sleeper(string name = "Sleeper" , float loadfactor = 1.0f , bool seat = 0 , bool ac = 0 , int num_tiers = 3 , bool luxury = 0,int mintatkal = 100 , int maxtatkal = 200 , int mindistance = 500 , int reservationcharge = 20); 

public:
    ~Sleeper();
    static const Sleeper& Type();    
    float GetLoadFactor() const;
    string GetName() const;
    bool IsSitting() const;
    Sleeper(const Sleeper& other) = delete;

    //Deleting(removing) the copy constructor and assignment
    Sleeper& operator=(const Sleeper& other) = delete;
    bool IsAC() const;               
    int GetNumberOfTiers() const;
    bool IsLuxury() const;

    //Function for unit testing
    static void UnitTestSleeper();   

    //Friend function to output the details of the class easily 
    friend ostream& operator<<(ostream& os , const Sleeper& sleeper);
    int GetMinimumTatkalCharge() const {return minTatkalCharge;};
    int GetMaximumTatkalCharge() const {return maxTatkalCharge;};
    int GetMinimumTatkalDistance() const {return minTatkalDistance;};
    int GetReservationCharge() const {return reservationCharges;};
};


#endif