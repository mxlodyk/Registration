/**
 * @file Registration.h
 * @brief Defines the Registration class for managing student course registrations.
 */

#ifndef REGISTRATION_H
#define REGISTRATION_H

#include "result.h"

#include <iostream>

using namespace std;

/**
 * @brief Maximum number of courses a student can register for.
 */
const unsigned MaxCourses = 10;

/**
 * @class Registration
 * @brief Manages student course registration and results.
 */
class Registration {
public:
    /**
     * @brief Array of results for the registered courses.
     * @note This should ideally be private, but is currently public.
     */
    Result results[MaxCourses]; // This shouldn't be public.

    /**
     * @brief Default constructor initializing the registration.
     */
    Registration();

    /**
     * @brief Gets the student ID.
     * @return The student ID as a long integer.
     */
    long GetStudentID() const;
    /**
     * @brief Gets the semester number.
     * @return The semester as an unsigned integer.
     */
    unsigned GetSemester() const;
    /**
     * @brief Gets the number of registered units.
     * @return The unit count as an unsigned integer.
     */
    unsigned GetUnitCount() const;
    /**
     * @brief Calculates the total marks obtained across registered courses.
     * @return The total marks as a float.
     */
    float GetTotalMarks() const;
    /**
     * @brief Sets the student ID.
     * @param newStudentID The new student ID.
     */
    void SetStudentID(long newStudentID);
    /**
     * @brief Sets the semester number.
     * @param newSemester The new semester value.
     */
    void SetSemester(unsigned newSemester);
    /**
     * @brief Sets the number of registered units.
     * @param newUnitCount The new unit count.
     */
    void SetUnitCount(unsigned newUnitCount);

private:
    long studentID; ///< The unique student ID.
    unsigned semester; ///< The current semester of the student.
    unsigned count; ///< The number of registered units.
};

/**
 * @brief Overloaded output stream operator for Registration class.
 * @param os The output stream.
 * @param R The Registration object to be output.
 * @return The modified output stream.
 */
ostream& operator <<(ostream& os, const Registration& R);
/**
 * @brief Overloaded input stream operator for Registration class.
 * @param input The input stream.
 * @param R The Registration object to be filled.
 * @return The modified input stream.
 */
istream& operator >>(istream& input, Registration& R);

#endif