#include "unit.h"

#include <string.h>

Unit::Unit() {
    name[0] = '\0';
}

Unit::Unit(const char *nam, char sect, unsigned cred) {
    strncpy(name, nam, CourseNameSize);
    section = sect;
    credits = cred;
}

istream & operator >> (istream &input, Unit &C) {
    input >> C.name >> C.section >> C.credits;
    return input;
}

ostream & operator << (ostream &os, const Unit &C) {
    os << "  Course:  " << C.name << '\n'
       << "  Section: " << C.section << '\n'
       << "  Credits: " << C.credits << '\n';
    return os;
}
