#include "registration.h"

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream infile( "rinput.txt" );
    if(!infile) {
        cout << "Error: Could not open input file 'rinput.txt'" << endl;
        return -1;
    }

    Registration R;

    infile >> R;

    ofstream ofile( "routput.txt" );

    ofile << R
          << '\n'
          << "Number of units = " << R.GetCount() << '\n'
          << "Total marks     = " << R.GetMarks() << '\n';


    // Commented out as per the specification
    // Course aCourse( "MTH_3020", 'B', 2 );
    // aCourse.SetCredits( 5 );
    // cout << aCourse << endl; // the operator << for Course is called

    return 0;
}