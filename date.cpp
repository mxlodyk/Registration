#include "date.h"

#include <sstream>

unsigned Date::GetDay() const {
    return day;
}

unsigned Date::GetMonth() const {
    return month;
}

unsigned Date::GetYear() const {
    return year;
}

std::string Date::GetDateAsString() const {
    std::stringstream dateStream;

    // Format the date as a string.
    dateStream << day << "/" << month << "/" << year;

    // Return the resulting string.
    return dateStream.str();
}

void Date::SetDay(unsigned newDay) {
    day = newDay;
}

void Date::SetMonth(unsigned newMonth) {
    month = newMonth;
}

void Date::SetYear(unsigned newYear) {
    year = newYear;
}