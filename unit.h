#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <string>

using namespace std;

/**
 * @class Unit
 * @brief Class representing a unit in an academic context.
 *
 * This class encapsulates the details of a unit, including its name, ID, and the number of credits it carries.
 */
class Unit {
public:
    /**
     * @brief Default constructor for creating a Unit object.
     */
    Unit();
    /**
     * @brief Parameterized constructor for creating a Unit object with a given name, ID, and credits.
     * @param newName The name of the unit.
     * @param newID The ID of the unit.
     * @param newCredits The number of credits the unit carries.
     */
    Unit(const std::string &newName, const std::string &newID, unsigned newCredits);

    /**
    * @brief Gets the name of the unit.
    * @return The name of the unit.
    */
    std::string GetName() const;
    /**
     * @brief Sets the name of the unit.
     * @param newName The name to set.
     */
    void SetName(const std::string& newName);

    /**
     * @brief Gets the ID of the unit.
     * @return The ID of the unit.
     */
    std::string GetID() const;
    /**
     * @brief Sets the ID of the unit.
     * @param newID The ID to set.
     */
    void SetID(const std::string& newID);

    /**
     * @brief Gets the number of credits associated with the unit.
     * @return The number of credits the unit carries.
     */
    unsigned GetCredits() const;
    /**
     * @brief Sets the number of credits associated with the unit.
     * @param newCredits The number of credits to set.
     */
    void SetCredits(unsigned newCredits);

    /**
     * @brief Overloaded output stream operator for printing the unit.
     * @param os The output stream to print to.
     * @param U The unit object to print.
     * @return The updated output stream.
     */
    friend ostream& operator << (ostream &os, const Unit &U);
    /**
     * @brief Overloaded input stream operator for reading a unit.
     * @param input The input stream to read from.
     * @param U The unit object to populate with data.
     * @return The updated input stream.
     */
    friend istream& operator >> (istream &input, Unit &U);

private:
    std::string name; ///< The name of the unit.
    std::string id; ///< The ID of the unit.
    int credits; ///< The number of credits the unit carries.
};

#endif
