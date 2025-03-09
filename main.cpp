#include "registration.h"

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream infile("rinput.txt");

    Registration R;

    infile >> R;

//    Unit newUnit = Unit("Data_Structures_And_Abstractions", "ICT283", 3);
//    newUnit.SetCredits(10);
//    Result result1 = Result();
//    result1.SetMark(100);
//    Result result2 = Result();
//    result2.SetMark(100);
//    Registration registration = Registration();
    //registration.
    //cout << "Marks: " << newResult.GetMark();


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