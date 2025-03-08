#ifndef REGISTRATION_H
#define REGISTRATION_H

#include "result.h"

#include <iostream>

using namespace std;

const unsigned MaxCourses = 10;

class Registration {
public:
    Registration();

    float GetMarks() const;
    unsigned GetCount() const;

    friend ostream & operator <<( ostream & os, const Registration & R);

    friend istream & operator >>( istream & input, Registration & R );

private:
    long studentId;
    unsigned semester;
    unsigned count;
    Result results[MaxCourses];
};

inline unsigned Registration::GetCount() const {
    return count;
}

#endif