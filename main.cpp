#include "registration.h"

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream infile("rinput.txt");

    Registration R;

    infile >> R;

    Date testDate;
    testDate.SetYear(2025);
    testDate.SetMonth(2);
    testDate.SetDay(20);

    cout << testDate.GetDateAsString();


    ofstream ofile( "routput.txt" );

    ofile << R
          << '\n'
          << "Number of units = " << R.GetUnitCount() << '\n'
          << "Total marks     = " << R.GetTotalMarks() << '\n';

    // Sample run.
    cout << R;

    // Commented out as per the specification
    // Course aCourse( "MTH_3020", 'B', 2 );
    // aCourse.SetCredits( 5 );
    // cout << aCourse << endl; // the operator << for Course is called

    return 0;
}