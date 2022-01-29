// NAME:SUDIPTA SOTRA DHAR , ID: 202169990264 , COUNTRY: BANGLADESH.
#include <iostream> 
#include <cstdlib>
#include <ctime>
#include <iomanip> 

using namespace std;
int main()
{
const long ROLLS = 36000;
const int SIZE = 13;
// array exepected contains counts for the expected
// number of times each sum occurs in 36 rolls of the dice 
int expected[ SIZE ] = { 0, 0, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1 };
int x, y, sum[ SIZE ] = { 0 };
srand( time( 0 ) );
 
for ( long i = 1; i <= ROLLS; ++i ) {
x = 1 + rand() % 6;
y = 1 + rand() % 6;
++sum[ x + y ]; }

cout << setw( 10 ) << "Sum" << setw( 10 ) << "Total" << setw( 10 )
 << "Expected" << setw( 10 ) << "Actual\n" 
<< setiosflags( ios::fixed | ios::showpoint );
for ( int j = 2; j < SIZE; ++j )
cout << setw( 10 ) << j << setw( 10 ) << sum[ j ] << setprecision( 3 )
<< setw( 9 ) << 100.0 * expected[ j ] / 36 << "%" << setprecision(3)
<< setw( 9 ) << 100.0 * sum[ j ] / 36000 << "%\n";

return 0;
}
