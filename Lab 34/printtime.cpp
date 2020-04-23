// printtime.cpp  INCOMPLETE
// Glenn G. Chappell
// 20 Apr 2018
//
// For CS 201 Spring 2018
// Time of Day Class & Program
//
// Modified 4/23/20 for CS 201 Spring
// Chris Hartman

#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::cin;
using std::setfill;
using std::setw;


// Class Time
// Holds a time of day: hours, minutes, seconds. Can print its stored
// time in a nice format.
class Time {
public:
    Time() {
        _hr = 2;
        _min = 28;
        _sec = 30;
    }

    Time(int hr, int min, int sec) {
        _hr = hr;
        _min = min;
        _sec = sec;
    }

// ***** Time: constructors *****

    // TODO: Put something here!

// ***** Time: general public member functions *****

    void print() const {
        cout << std::setfill('0') << std::setw(2) << _hr << ":" << setw(2) << _min << ":" << setw(2) << _sec;
    }


// ***** Time: data members *****
private:

    int _hr;   // Hours past midnight
    int _min;  // Minutes past the hour
    int _sec;  // Seconds past the minute

};  // End class Time


int main()
{
    // Print header
    cout << "Here are some times:" << endl;
    cout << endl;

    // Make a Time object; print it
    Time t1;
    cout << "Time #1: [";
    t1.print();
    cout << "]" << endl;
    cout << endl;

    // Make a Time object; print it
    Time t2{9, 39, 23};
    cout << "Time #2: [";
    t2.print();
    cout << "]" << endl;
    cout << endl;

    // Wait for user
    cout << "PRESS ENTER to quit ";
    while (cin.get() != '\n') ;
}

