#ifndef REGISTRATION_RESULT_H
#define REGISTRATION_RESULT_H

#include "unit.h"
#include <iostream>

using namespace std;

class Result {
public:
    const Unit GetUnit() const;
    void SetUnit(Unit newUnit);

    const float GetMark() const;
    void SetMark(float newMark);

    friend ostream& operator << (ostream &os, const Result &R);
    friend istream& operator >> (istream &input, Result &R);

private:
    Unit unit;
    float mark;
};

inline const Unit Result::GetUnit() const {
    return unit;
}

inline void Result::SetUnit(Unit newUnit) {
    unit = newUnit;
}

inline const float Result::GetMark() const {
    return mark;
}

inline void Result::SetMark(float newMark) {
    mark = newMark;
}

#endif
