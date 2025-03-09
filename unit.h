#ifndef UNIT_H
#define UNIT_H

#include <iostream>

using namespace std;

const unsigned CourseNameSize = 50;
const unsigned UnitIDSize = 10;

class Unit {
public:
    Unit();
    Unit(const char *newName, const char *newID, unsigned newCredits);

    const char* GetName() const;
    void SetName(const char* newName);

    const char* GetID() const;
    void SetID(const char* newID);

    unsigned GetCredits() const;
    void SetCredits(unsigned newCredits);

    friend ostream& operator << (ostream &os, const Unit &U);
    friend istream& operator >> (istream &input, Unit &U);

private:
    char name[CourseNameSize];
    char id[UnitIDSize];
    int  credits;
};

inline void Unit::SetName(const char* newName) {
    strncpy(name, newName, CourseNameSize - 1);

}

inline const char* Unit::GetName() const {
    return name;
}

inline const char* Unit::GetID() const {
    return id;
}

inline void Unit::SetID(const char* newID) {
    strncpy(id, newID, UnitIDSize - 1);
}

inline unsigned Unit::GetCredits() const {
    return credits;
}

inline void Unit::SetCredits(unsigned newCredits) {
    credits = newCredits;
}

#endif
