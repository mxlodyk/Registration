#include "unit.h"

Unit::Unit() : name(""), id(""), credits(0) {} // Default constructor using member initialiser list.

Unit::Unit(const std::string &newName, const std::string &newID, unsigned newCredits) {
    name = newName;
    id = newID;
    credits = newCredits;
}

void Unit::SetName(const std::string& newName) {
    name = newName;
}

std::string Unit::GetName() const {
    return name;
}

std::string Unit::GetID() const {
    return id;
}

void Unit::SetID(const std::string& newID) {
    id = newID;
}

unsigned Unit::GetCredits() const {
    return credits;
}

void Unit::SetCredits(unsigned newCredits) {
    credits = newCredits;
}

istream & operator >> (istream &input, Unit &U) {
    input >> U.name >> U.id >> U.credits;
    return input;
}
