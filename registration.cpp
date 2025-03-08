#include "registration.h"

Registration::Registration() {
    count = 0;
}

float Registration::GetMarks() const {
    float sum = 0;
    for(unsigned i = 0; i < count; i++)
        sum += results[i].GetMark();

    return sum;
}

istream & operator >>( istream & input, Registration & R ) {
    input >> R.studentId >> R.semester >> R.count;

    for(unsigned i = 0; i < R.count; i++) {
        Unit unit;
        float mark;

        input >> unit >> mark;

        R.results[i].SetUnit(unit);
        R.results[i].SetMark(mark);
    }
    return input;
}

ostream & operator <<( ostream & os, const Registration & R ) {
    os << "Student ID: " << R.studentId << '\n'
       << "Semester:   " << R.semester << '\n'
       << '\n';

    for(unsigned i = 0; i < R.count; i++)
        os << R.results[i] << '\n';

    return os;
}