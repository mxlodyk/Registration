#ifndef REGISTRATION_RESULT_H
#define REGISTRATION_RESULT_H

#include "unit.h"
#include "date.h"
#include <iostream>

using namespace std;

class Result {
public:

    Unit GetUnit() const;
    float GetMark() const;
    Date GetDate() const;

    void SetUnit(Unit newUnit);
    void SetMark(float newMark);
    void SetDate(Date newDate);

    friend ostream& operator << (ostream &os, const Result &R);
    friend istream& operator >> (istream &input, Result &R);

private:
    Unit unit;
    float mark;
    Date date;
};

#endif
