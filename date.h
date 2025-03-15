/**
 * @file Date.h
 * @brief Defines the Date class for managing date-related operations.
 */

#ifndef REGISTRATION_DATE_H
#define REGISTRATION_DATE_H

#include <string>

/**
 * @class Date
 * @brief Represents a date with day, month, and year components.
 */
class Date {
public:
    /**
     * @brief Gets the day of the date.
     * @return The day as an unsigned integer.
     */
    unsigned GetDay() const;
    /**
     * @brief Gets the month of the date.
     * @return The month as an unsigned integer.
     */
    unsigned GetMonth() const;
    /**
     * @brief Gets the year of the date.
     * @return The year as an unsigned integer.
     */
    unsigned GetYear() const;

    /**
     * @brief Gets the date as a formatted string in the format DD/MM/YYYY.
     * @return A string representation of the date.
     */
    std::string GetDateAsString() const;

    /**
     * @brief Sets the day of the date.
     * @param newDay The new day value.
     */
    void SetDay(unsigned newDay);
    /**
     * @brief Sets the month of the date.
     * @param newMonth The new month value.
     */
    void SetMonth(unsigned newMonth);
    /**
     * @brief Sets the year of the date.
     * @param newYear The new year value.
     */
    void SetYear(unsigned newYear);

private:
    unsigned day; ///< The day component of the date.
    unsigned month; ///< The month component of the date.
    unsigned year; ///< The year component of the date.
};

#endif
