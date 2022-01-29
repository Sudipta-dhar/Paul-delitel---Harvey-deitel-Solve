// NAME:SUDIPTA SOTRA DHAR , ID: 202169990264 , COUNTRY: BANGLADESH.
#include <iostream>
#include <iomanip>
using namespace std; 
 

int main()
{
int n = 0, accuracy = 15, x = 3.0, times = 0, count;
double e = 1.0, exp = 0.0, fact = 1.0;
 while ( n++ <= accuracy ) {
count = n;
fact *= n == 0 ? 1.0 : n;

while ( times < count ) {

if ( times == 0 )
 exp = 1.0;

exp *= x;
 ++times;
}

e += exp / fact;
 }

cout << setiosflags( ios::fixed | ios::showpoint )
<< "e raised to the " << x << " power is "
<< setprecision( 4 ) << e << endl;

return 0;
 }
