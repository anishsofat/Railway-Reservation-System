// Name : Anish Sofat
// Roll No. : 19CS10011

#ifndef FIRSTCLASS_H
#define FIRSTCLASS_H

#include <iostream>
#include "BookingClasses.h"
using namespace std;

class FirstClass : public BookingClasses {
    bool isLuxury_;          
    const bool isAC_;      
    const int numberOfTiers_;       
    const bool hasSeat_;           
    //Constant pointer for the class 
    static FirstClass *myclass;      
    int minTatkalCharge;
    int maxTatkalCharge;
    int minTatkalDistance;
    int reservationCharges;

    //Class Constructor
    FirstClass(string name = "First Class" , float loadfactor = 3.0f , bool seat = 0 , bool ac = 0 , int num_tiers = 2 , bool luxury = 1,int mintatkal = 400 , int maxtatkal = 500 , int mindistance = 500 , int reservationcharge = 50);

public:
    ~FirstClass();
    static const FirstClass& Type();            
    float GetLoadFactor() const;
    FirstClass(const FirstClass& other) = delete;

    //Deleting(removing) the copy constructor and assignment
    FirstClass& operator=(const FirstClass& other) = delete;
    string GetName() const;
    bool IsSitting() const;
    bool IsAC() const;                  
    int GetNumberOfTiers() const;
    bool IsLuxury() const;

    //Function for unit testing
    static void UnitTestFirstClass();   
    
    //Friend function to output the details of the class easily         
    friend ostream& operator<<(ostream& os , const FirstClass& firstClass);
    int GetMinimumTatkalCharge() const {return minTatkalCharge;};
    int GetMaximumTatkalCharge() const {return maxTatkalCharge;};
    int GetMinimumTatkalDistance() const {return minTatkalDistance;};
    int GetReservationCharge() const {return reservationCharges;};
};


#endif