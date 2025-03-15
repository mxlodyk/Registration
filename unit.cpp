#include "unit.h"

// Constructors for the Unit class.
Unit::Unit() : name(""), id(""), credits(0) {} // Default constructor using member initialiser list.

Unit::Unit(const std::string &newName, const std::string &newID, unsigned newCredits) {
    name = newName;
    id = newID;
    credits = newCredits;
}
// Getters for the Unit class.
std::string Unit::GetName() const {
    return name;
}

std::string Unit::GetID() const {
    return id;
}

unsigned Unit::GetCredits() const {
    return credits;
}

// Setters for the Unit class.
void Unit::SetName(const std::string& newName) {
    name = newName;
}

void Unit::SetID(const std::string& newID) {
    id = newID;
}

void Unit::SetCredits(unsigned newCredits) {
    credits = newCredits;
}

// >> Operator Overload for Unit class.
istream & operator >> (istream &input, Unit &U) {
    input >> U.name >> U.id >> U.credits;
    return input;
}
