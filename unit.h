#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <string>

using namespace std;

class Unit {
public:
    Unit();
    Unit(const std::string &newName, const std::string &newID, unsigned newCredits);

    std::string GetName() const;
    void SetName(const std::string& newName);

    std::string GetID() const;
    void SetID(const std::string& newID);

    unsigned GetCredits() const;
    void SetCredits(unsigned newCredits);

    friend ostream& operator << (ostream &os, const Unit &U);
    friend istream& operator >> (istream &input, Unit &U);

private:
    std::string name;
    std::string id;
    int credits;
};

#endif
