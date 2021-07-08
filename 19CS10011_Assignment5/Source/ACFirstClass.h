// Name : Anish Sofat
// Roll No. : 19CS10011

#ifndef ACFIRSTCLASS_H
#define ACFIRSTCLASS_H

#include <iostream>
#include "BookingClasses.h"
using namespace std;

class ACFirstClass : public BookingClasses {
    bool isLuxury_;          
    const bool isAC_;       
    const int numberOfTiers_;      
    const bool hasSeat_;       
    //Constant pointer for the class     
    static ACFirstClass *myclass;       
    int minimumTatkalCharge_;
    int maximumTatkalCharge_;
    int minimumTatkalDistance_;
    int reservationCharges_;

    //Class Constructor
    ACFirstClass(string name = "AC First Class" , float loadfactor = 6.50f , bool seat = 0 , bool ac = 1 , int num_tiers = 2 , bool luxury = 1,int mintatkal = 400 , int maxtatkal = 500 , int mindistance = 500 , int reservationcharge = 60);

public:
    ~ACFirstClass();
    static const ACFirstClass& Type();      
    float GetLoadFactor() const;
    ACFirstClass(const ACFirstClass& other) = delete;
    
    //Deleting(removing) the copy constructor and assignment
    ACFirstClass& operator=(const ACFirstClass& other) = delete;
    string GetName() const;
    bool IsSitting() const;
    bool IsAC() const;          
    int GetNumberOfTiers() const;
    bool IsLuxury() const;
    
    //Function for unit testing
    static void UnitTestACFirstClass();
    
    //Friend function to output the details of the class easily
    friend ostream& operator<<(ostream& os , const ACFirstClass& acfirstClass);
    int GetMinimumTatkalCharge() const {return minimumTatkalCharge_;};
    int GetMaximumTatkalCharge() const {return maximumTatkalCharge_;};
    int GetMinimumTatkalDistance() const {return minimumTatkalDistance_;};
    int GetReservationCharge() const {return reservationCharges_;};
};


#endif