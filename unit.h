#ifndef UNIT_H
#define UNIT_H

#include <iostream>

using namespace std;

const unsigned CourseNameSize = 10;

class Unit {
public:
    Unit();
    Unit(const char *nam, char sect, unsigned cred);

    unsigned GetCredits() const;
    void SetCredits(unsigned cred);

    friend ostream& operator << (ostream &os, const Unit &C);
    friend istream& operator >> (istream &input, Unit &C);

private:
    char name[CourseNameSize];
    char section;
    int  credits;
};

inline unsigned Unit::GetCredits() const {
    return credits;
}

inline void Unit::SetCredits(unsigned cred) {
    credits = cred;
}

#endif
