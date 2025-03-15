#include "result.h"

// Getters for the Result class.
Unit Result::GetUnit() const {
    return unit;
}

void Result::SetUnit(Unit newUnit) {
    unit = newUnit;
}

float Result::GetMark() const {
    return mark;
}

// Setters for the Result class.
void Result::SetMark(float newMark) {
    mark = newMark;
}

Date Result::GetDate() const {
    return date;
}

void Result::SetDate(Date newDate) {
    date = newDate;
}

// << Operator Overload for Result class.
ostream& operator << (ostream &os, const Result &R) {

    const Unit& unitObj = R.GetUnit();

    // Output to routput.txt.
    os << "  Unit ID: " << unitObj.GetID() << '\n'
       << "  Unit Name: " << unitObj.GetName() << '\n'
       << "  Credits: " << unitObj.GetCredits() << '\n'
       << "  Mark: " << R.GetMark() << '\n'
       << "  Date: " << R.GetDate().GetDateAsString();

    return os;
}

// >> Operator Overload for Result class.
istream& operator >> (istream &input, Result &R) {
    return input;
}