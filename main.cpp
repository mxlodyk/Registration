#include "registration.h"

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream infile( "rinput.txt" );

    Registration registration1 = Registration();

    infile >> registration1;

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

    ofile << registration1
          << '\n'
          << "Number of units = " << registration1.GetUnitCount() << '\n'
          << "Total marks     = " << registration1.GetTotalMarks() << '\n';


    // Commented out as per the specification
    // Course aCourse( "MTH_3020", 'B', 2 );
    // aCourse.SetCredits( 5 );
    // cout << aCourse << endl; // the operator << for Course is called

    return 0;
}