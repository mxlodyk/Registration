#include "result.h"

ostream& operator << (ostream &os, const Result &R) {

    const Unit& unitObj = R.GetUnit();

    os << "  Unit ID: " << unitObj.GetID() << '\n'
       << "  Unit Name: " << unitObj.GetName() << '\n'
       << "  Credits: " << unitObj.GetCredits() << '\n'
       << "  Mark: " << R.mark << '\n';

    return os;
}

istream& operator >> (istream &input, Result &R) {

    return input;
}