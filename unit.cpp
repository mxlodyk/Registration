#include "unit.h"

#include <string.h>

Unit::Unit() {
    name[0] = '\0';
}

Unit::Unit(const char *newName, const char *newID, unsigned newCredits) {
    strncpy(name, newName, CourseNameSize);
    strncpy(id, newID, UnitIDSize);
    credits = newCredits;
}

istream & operator >> (istream &input, Unit &U) {
    input >> U.name >> U.id >> U.credits;
    return input;
}
