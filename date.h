#ifndef REGISTRATION_DATE_H
#define REGISTRATION_DATE_H

#include <string>

class Date {
public:
    unsigned GetDay() const;
    unsigned GetMonth() const;
    unsigned GetYear() const;
    std::string GetDateAsString() const;

    void SetDay(unsigned newDay);
    void SetMonth(unsigned newMonth);
    void SetYear(unsigned newYear);

private:
    unsigned day;
    unsigned month;
    unsigned year;
};

#endif
