// Name : Anish Sofat
// Roll No. : 19CS10011

#ifndef SECOND_SITTING_H
#define SECOND_SITTING_H

#include <iostream>
#include "BookingClasses.h"
using namespace std;

class SecondSitting : public BookingClasses {
    bool isLuxury_;           
    const bool isAC_;      
    const int numberOfTiers_;       
    const bool hasSeat_;      
    //Constant pointer for the class       
    static SecondSitting *myclass;       
    int minTatkalCharge;
    int maxTatkalCharge;
    int minTatkalDistance;
    int reservationCharges;

    //Class Constructor
    SecondSitting(string name = "Second Sitting" , float loadfactor = 0.6f , bool seat = 1 , bool ac = 0 , int num_tiers = 0 , bool luxury = 0,int mintatkal = 10 , int maxtatkal = 15, int mindistance = 100 , int reservationcharge = 15);

public:
    ~SecondSitting();
    static const SecondSitting& Type();     
    float GetLoadFactor() const;
    string GetName() const;
    SecondSitting(const SecondSitting& other) = delete;

    //Deleting(removing) the copy constructor and assignment
    SecondSitting& operator=(const SecondSitting& other) = delete;
    bool IsSitting() const;
    bool IsAC() const;                  
    int GetNumberOfTiers() const;
    bool IsLuxury() const;

    //Function for unit testing
    static void UnitTestSecondSitting(); 
    
    //Friend function to output the details of the class easily          
    friend ostream& operator<<(ostream& os , const SecondSitting& secondSitting);
    int GetMinimumTatkalCharge() const {return minTatkalCharge;};
    int GetMaximumTatkalCharge() const {return maxTatkalCharge;};
    int GetMinimumTatkalDistance() const {return minTatkalDistance;};
    int GetReservationCharge() const {return reservationCharges;};
};


#endif