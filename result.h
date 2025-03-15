#ifndef REGISTRATION_RESULT_H
#define REGISTRATION_RESULT_H

#include "unit.h"
#include "date.h"
#include <iostream>

using namespace std;

/**
 * @class Result
 * @brief Class representing a registration result for a unit with a mark and date.
 *
 * This class stores the result of a registration, including the unit, mark, and the date the result was recorded.
 */
class Result {
public:
    /**
     * @brief Gets the unit associated with the result.
     * @return The unit of the result.
     */
    Unit GetUnit() const;

    /**
     * @brief Gets the mark associated with the result.
     * @return The mark for the result.
     */
    float GetMark() const;
    /**
     * @brief Gets the date when the result was recorded.
     * @return The date of the result.
     */
    Date GetDate() const;

    /**
     * @brief Sets the unit associated with the result.
     * @param newUnit The unit to set.
     */
    void SetUnit(Unit newUnit);
    /**
     * @brief Sets the mark associated with the result.
     * @param newMark The mark to set.
     */
    void SetMark(float newMark);
    /**
     * @brief Sets the date when the result was recorded.
     * @param newDate The date to set.
     */
    void SetDate(Date newDate);

    /**
     * @brief Overloaded output stream operator for printing the result.
     * @param os The output stream to print to.
     * @param R The result object to print.
     * @return The updated output stream.
     */
    friend ostream& operator << (ostream &os, const Result &R);
    /**
     * @brief Overloaded input stream operator for reading a result.
     * @param input The input stream to read from.
     * @param R The result object to populate with data.
     * @return The updated input stream.
     */
    friend istream& operator >> (istream &input, Result &R);

private:
    Unit unit; ///< The unit associated with the result.
    float mark; ///< The mark for the result.
    Date date; ///< The date the result was recorded.
};

istream& operator >> (istream &input, Result &R);

ostream& operator << (ostream &os, const Result &R);

#endif
