 // NAME:SUDIPTA SOTRA DHAR , ID: 202169990264 , COUNTRY: BANGLADESH.
 #include <iostream>

using std::cout; 
using std::endl; 
using std::cin; 

long power( long, long );
    
 long power( long base, long exponent )
 {
 return exponent == 1 ? base : base * power( base, exponent - 1 );
 }
 int main()
 {
 long b, e;

     cout << "Enter a base and an exponent: ";
    cin >> b >> e;
    cout << b << " raised to the " << e << " is "
     << power( b, e ) << endl;
 return 0;
  }

