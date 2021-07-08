// Name : Anish Sofat
// Roll No. : 19CS10011

#include<iostream>
#include<exception>
using namespace std;

//Classes implemented to throw errors if wrong data is entered
class BadDate : public exception {
    public:
        virtual const char* what() const throw()
        {
            return "Bad Date Created";
        }
};

class BadPassenger : public exception {
    public:
        virtual const char* what() const throw()
        {
            return "Bad Passenger Created";
        }
};

class BadRailways : public exception {
    public:
        virtual const char* what() const throw()
        {
            return "Bad Railways Created";
        }
};

class BadStation : public exception {
    public:
        virtual const char* what() const throw()
        {
            return "Bad Station Created";
        }
};

class BadBooking : public exception {
    public:
        virtual const char* what() const throw()
        {
            return "Bad Booking Created";
        }
};
