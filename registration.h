#ifndef REGISTRATION_H
#define REGISTRATION_H

#include "result.h"

#include <iostream>

using namespace std;

const unsigned MaxCourses = 10;

class Registration {
public:
    Result results[MaxCourses]; // I know this shouldn't be public.
    Registration();

    long GetStudentID() const;
    unsigned GetSemester() const;
    unsigned GetUnitCount() const;
    std::array<Result, MaxCourses> GetResults() const;
    float GetTotalMarks() const;

    void SetStudentID(long newStudentID);
    void SetSemester(unsigned newSemester);
    void SetUnitCount(unsigned newUnitCount);

    bool AddResult(const Result& result);

private:
    long studentID;
    unsigned semester;
    unsigned count;
};

ostream& operator <<(ostream& os, const Registration& R);
istream& operator >>(istream& input, Registration& R);

#endif