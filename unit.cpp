#include "unit.h"

#include <string.h>

Unit::Unit() {
    name[0] = '\0';
}

Unit::Unit(const char *nam, char idx, unsigned cred) {
    strncpy(name, nam, CourseNameSize);
    id = idx;
    credits = cred;
}

istream & operator >> (istream &input, Unit &C) {
    input >> C.name >> C.id >> C.credits;
    return input;
}

ostream & operator << (ostream &os, const Unit &C) {
    os << "  Course:  " << C.name << '\n'
       << "  Section: " << C.id << '\n'
       << "  Credits: " << C.credits << '\n';
    return os;
}
