// NAME:SUDIPTA SOTRA DHAR , ID: 202169990264 , COUNTRY: BANGLADESH.
#include <iostream>
 using namespace std; 

 bool even( int );
int main()
{
 int x;
 
for ( int i = 1; i <= 3; ++i ) {
cout << "Enter an integer: ";
cin >> x;
 
if ( even( x ) )
cout << x << " is an even integer\n\n";
else
 cout << x << " is an odd integer\n\n";
}

 cout << endl;
 return 0;
 }
bool even( int a )
 {
return !( a % 2 );
 }

