// NAME:SUDIPTA SOTRA DHAR , ID: 202169990264 , COUNTRY: BANGLADESH.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

using std::setprecision; 
using std::setiosflags;



double hypotenuse( double, double );

int main()
{
double side1, side2;

cout << setiosflags( ios::fixed | ios::showpoint );

for ( int i = 1; i <= 3; ++i ) {
cout << "\nEnter 2 sides of right triangle: ";
cin >> side1 >> side2;
cout << "Hypotenuse: " << setprecision( 1 )
<< hypotenuse( side1, side2 ) << endl;
}

return 0;
}

double hypotenuse( double s1, double s2 )
{
return sqrt( s1 * s1 + s2 * s2 );
}

