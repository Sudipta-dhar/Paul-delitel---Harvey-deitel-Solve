// NAME:SUDIPTA SOTRA DHAR , ID: 202169990264 , COUNTRY: BANGLADESH.
#include <iostream>
using namespace std;

int integerPower( int, int );

 int main()
{
int exp, base;

cout << "Enter base and exponent: ";
cin >> base >> exp;
cout << base << " to the power " << exp << " is: "
<< integerPower( base, exp ) << endl;

 return 0;
 }

int integerPower( int b, int e )
{
int product = 1;

for ( int i = 1; i <= e; ++i )
product *= b;

return product;
}

