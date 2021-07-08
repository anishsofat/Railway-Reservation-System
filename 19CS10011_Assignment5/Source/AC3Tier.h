// Name : Anish Sofat
// Roll No. : 19CS10011

#ifndef AC3TIER_H
#define AC3TIER_H

#include <iostream>
#include "BookingClasses.h"
using namespace std;

class AC3Tier : public BookingClasses {
    bool isLuxury_;           
    const bool isAC_;       
    const int numberOfTiers_;       
    const bool hasSeat_;     
    //Constant pointer for the class        
    static AC3Tier *myclass;      
    int minimumTatkalCharge_;
    int maximumTatkalCharge_;
    int minimumTatkalDistance_;
    int reservationCharges_;

    //Class Constructor
    AC3Tier(string name = "AC 3 Tier" , float loadfactor = 2.50f , bool seat = 0 , bool ac = 1 , int num_tiers = 3 , bool luxury = 0,int mintatkal = 300 , int maxtatkal = 400 , int mindistance = 500 , int reservationcharge = 40);

public:
    string GetName() const;
    AC3Tier(const AC3Tier& other) = delete;

    //Deleting(removing) the copy constructor and assignment
    AC3Tier& operator=(const AC3Tier& other) = delete;
    float GetLoadFactor() const;
    ~AC3Tier();
    bool IsLuxury() const;
    static const AC3Tier& Type();

    //Friend function to output the details of the class easily      
    friend ostream& operator<<(ostream& os , const AC3Tier& ac3Tier);
    bool IsAC() const;              
    int GetMinimumTatkalCharge() const {return minimumTatkalCharge_;};
    bool IsSitting() const;
    
    //Function for unit testing
    static void UnitTestAC3Tier();      
    int GetReservationCharge() const {return reservationCharges_;};
    int GetNumberOfTiers() const;
    int GetMinimumTatkalDistance() const {return minimumTatkalDistance_;};
    int GetMaximumTatkalCharge() const {return maximumTatkalCharge_;};
};


#endif