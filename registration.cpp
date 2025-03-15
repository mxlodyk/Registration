#include "registration.h"
#include "date.h"

#include <string>
#include <sstream>

// Default constructor for Registration class.
Registration::Registration() {
    count = 0;
}

// Getters for Registration class.
long Registration::GetStudentID() const {
    return studentID;
}

unsigned Registration::GetSemester() const {
    return semester;
}

unsigned Registration::GetUnitCount() const {
    return count;
}

float Registration::GetTotalMarks() const {
    float sum = 0;
    for(unsigned i = 0; i < count; i++)
        sum += results[i].GetMark();

    return sum;
}

// Setters for Registration class.
void Registration::SetStudentID(long newStudentID) {
    studentID = newStudentID;
}

void Registration::SetSemester(unsigned int newSemester) {
    semester = newSemester;
}

void Registration::SetUnitCount(unsigned int newUnitCount) {
    count = newUnitCount;
}

// >> Operator Overload for Registration class.
istream& operator>>(istream& input, Registration& R) {
    string line;

    // Read the first line.
    if (getline(input, line)) {
        stringstream firstLineStream(line);
        string studentIDString, semesterString, unitCountString;

        // Extract values from the first line.
        getline(firstLineStream, studentIDString, ',');
        getline(firstLineStream, semesterString, ',');
        getline(firstLineStream, unitCountString, ',');

        R.SetStudentID(stol(studentIDString));
        R.SetSemester(stoi(semesterString));
        R.SetUnitCount(stoi(unitCountString));
    }

    // Read each subsequent line and parse unit data.
    for (unsigned i = 0; i < R.GetUnitCount(); i++) {

        // Stop if there are no more lines.
        if (!getline(input, line)) break;

        stringstream lineStream(line);
        string unitNameString, unitIDString, creditsString, marksString, dateString;

        // Parse comma-delimited values.
        getline(lineStream, unitNameString, ',');
        getline(lineStream, unitIDString, ',');
        getline(lineStream, creditsString, ',');
        getline(lineStream, marksString, ',');
        getline(lineStream, dateString, ',');

        // Parse date.
        stringstream dateStream(dateString);
        string dayString, monthString, yearString;

        getline(dateStream, dayString, '/');
        getline(dateStream, monthString, '/');
        getline(dateStream, yearString);

        // Convert to appropriate types.
        unsigned credits = stoi(creditsString);
        float marks = stof(marksString);
        unsigned day = stoi(dayString);
        unsigned month = stoi(monthString);
        unsigned year = stoi(yearString);

        // Assign values to the Registration object.
        Unit unit;
        unit.SetName(unitNameString);
        unit.SetID(unitIDString);
        unit.SetCredits(credits);
        Date date;
        date.SetDay(day);
        date.SetMonth(month);
        date.SetYear(year);
        Result result;
        result.SetUnit(unit);
        result.SetMark(marks);
        result.SetDate(date);

        R.results[i] = result;

    }
    return input;
}

// << Operator Overload for Registration class.
ostream& operator <<(ostream & os, const Registration &R ) {
    os << "Student ID: " << R.GetStudentID() << '\n'
       << "Semester:   " << R.GetSemester() << '\n'
       << '\n';

    for(unsigned i = 0; i < R.GetUnitCount(); i++)
        os << R.results[i] << '\n';

    return os;
}