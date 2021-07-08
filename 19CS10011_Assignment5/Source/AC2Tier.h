// Name : Anish Sofat
// Roll No. : 19CS10011

#ifndef AC2TIER_H
#define AC2TIER_H

#include <iostream>
#include "BookingClasses.h"
using namespace std;

class AC2Tier : public BookingClasses {
    bool isLuxury_;           
    const bool isAC_;       
    const int numberOfTiers_;       
    const bool hasSeat_;
    //Constant pointer for the class          
    static AC2Tier *myclass;       
    int minimumTatkalCharge_;
    int maximumTatkalCharge_;
    int minimumTatkalDistance_;
    int reservationCharges_;
    
    //Class Constructor
    AC2Tier(string name = "AC 2 Tier" , float loadfactor = 4.0f , bool seat = 0 , bool ac = 1 , int num_tiers = 2 , bool luxury = 0 , int mintatkal = 400 , int maxtatkal = 500 , int mindistance = 500 , int reservationcharge = 50);

public:
    ~AC2Tier();
    static const AC2Tier& Type();       
    float GetLoadFactor() const;
    AC2Tier(const AC2Tier& other) = delete;

    //Deleting(removing) the copy constructor and assignment
    AC2Tier& operator=(const AC2Tier& other) = delete;
    string GetName() const;
    bool IsSitting() const;
    bool IsAC() const;              
    int GetNumberOfTiers() const;
    bool IsLuxury() const;
    
    //Function for unit testing
    static void UnitTestAC2Tier();

    //Friend function to output the details of the class easily      
    friend ostream& operator<<(ostream& os , const AC2Tier& ac2Tier);
    int GetMinimumTatkalCharge() const {return minimumTatkalCharge_;};
    int GetMaximumTatkalCharge() const {return maximumTatkalCharge_;};
    int GetMinimumTatkalDistance() const {return minimumTatkalDistance_;};
    int GetReservationCharge() const {return reservationCharges_;};
};


#endif