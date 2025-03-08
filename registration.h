#ifndef REGIST_H
#define REGIST_H

#include "unit.h"

#include <iostream>

using namespace std;

const unsigned MaxCourses = 10;

class Registration {
public:
    Registration();

    unsigned GetCredits() const;
    unsigned GetCount() const;

    friend ostream & operator <<( ostream & os, const Registration & R);

    friend istream & operator >>( istream & input, Registration & R );

private:
    long studentId;
    unsigned semester;
    unsigned count;
    Unit courses[MaxCourses];
};

inline unsigned Registration::GetCount() const {
    return count;
}

#endif

