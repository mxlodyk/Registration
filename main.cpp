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
          << "Number of courses = " << R.GetCount() << '\n'
          << "Total credits     = " << R.GetCredits() << '\n';


    //For Lab 3, you should comment out this line and the next 3 lines
    //Course aCourse( "MTH_3020", 'B', 2 );
    //aCourse.SetCredits( 5 );
    //cout << aCourse << endl; // the operator << for Course is called


    return 0;
}

