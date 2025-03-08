#ifndef UNIT_H
#define UNIT_H

#include <iostream>

using namespace std;

const unsigned CourseNameSize = 10;

class Unit {
public:
    Unit();
    Unit(const char *nam, char idx, unsigned cred);

    const char* GetName() const;
    void SetName(const char* newName);

    char GetID() const;
    void SetID(char newID);

    unsigned GetCredits() const;
    void SetCredits(unsigned cred);

    friend ostream& operator << (ostream &os, const Unit &C);
    friend istream& operator >> (istream &input, Unit &C);

private:
    char name[CourseNameSize];
    char id;
    int  credits;
};

inline void Unit::SetName(const char* newName) {
    strncpy(name, newName, CourseNameSize - 1);

}

inline const char* Unit::GetName() const {
    return name;
}

inline char Unit::GetID() const {
    return id;
}

inline void Unit::SetID(char newID) {
    id = newID;
}

inline unsigned Unit::GetCredits() const {
    return credits;
}

inline void Unit::SetCredits(unsigned cred) {
    credits = cred;
}

#endif
