#include "registration.h"

Registration::Registration() {
    count = 0;
}

unsigned Registration::GetUnitCount() const {
    return count;
}

Result Registration::GetResultByUnitName(const char *unitName) const {
    for (unsigned i = 0; i < count; i ++) {
        Unit currentUnit = results[i].GetUnit();
        if (strcmp(currentUnit.GetName(), unitName) == 0) {
            return results[i];
        }
    }
    return Result(); // return empty result if none found
}

float Registration::GetTotalMarks() const {
    float sum = 0;
    for(unsigned i = 0; i < count; i++)
        sum += results[i].GetMark();

    return sum;
}

istream & operator >>( istream & input, Registration & R ) {
    input >> R.studentID >> R.semester >> R.count;

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
    os << "Student ID: " << R.studentID << '\n'
       << "Semester:   " << R.semester << '\n'
       << '\n';

    for(unsigned i = 0; i < R.count; i++)
        os << R.results[i] << '\n';

    return os;
}