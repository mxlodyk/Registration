#ifndef REGISTRATION_H
#define REGISTRATION_H

#include "result.h"

#include <iostream>

using namespace std;

const unsigned MaxCourses = 10;

class Registration {
public:
    Registration();

//    long GetStudentID() const;
//    unsigned GetSemester() const;
//    unsigned GetCount() const;

    Result GetResultByUnitName(const char* unitName) const;
    //Result GetResultByUnitCode(const char*)

    float GetTotalMarks() const;
    unsigned GetUnitCount() const;

    friend ostream & operator <<(ostream & os, const Registration & R);

    friend istream & operator >>(istream & input, Registration & R);

private:
    long studentID;
    unsigned semester;
    unsigned count;
    Result results[MaxCourses];
};

#endif