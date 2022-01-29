// NAME:SUDIPTA SOTRA DHAR , ID: 202169990264 , COUNTRY: BANGLADESH.
#include <iostream>
 #include <iomanip>
 using namespace std;

 int main()
 {

 int x = 6; 
 int y;

 cout << boolalpha << "PART A" << endl << endl;

 do
 {
 x--; 
 y = 5; 
 
 do
 {
 y++; 
 
 cout << "!( x < 5 ): " << !( x < 5 ) << endl;
 cout << "!( y >= 7 ): " << !( y >= 7 ) << endl;

 // test for validity
 if ( ( !( x < 5 ) && !( y >= 7 ) ) ==
 ( !( ( x < 5 ) || ( y >= 7 ) ) ) )
 cout << "!(x < 5) && !(y >= 7) is equivalent to"
 << " !((x < 5) || (y >= 7))" << endl;
 else
 cout << "!(x < 5) && !(y >= 7) is not equivalent to"
 << " !((x < 5) || (y >= 7))" << endl;

 cout << endl;
 } while ( !( y >= 7 ) ); 

 } while ( !( x < 5 ) ); 

 cout << endl << endl;

 
 int a = 3; 
 int b = 5; 
int g; 
 cout << "PART B" << endl << endl;

 
 do
 {
 a++; 
 g = 4;

 
 do
 {
 g++; 
 
 cout << "!( a == b): " << !( a == b ) << endl;
 cout << "!( g != 5): " << !( g != 5 ) << endl;

 // test for validity
 if ( ( !( a == b ) || !( g != 5 ) ) ==
 ( !( ( a == b ) && ( g != 5 ) ) ) )
 cout << "!(a == b) || !(g != 5) is equivalent to"
 << " !((a == b) && (g != 5))" << endl;
 else
 cout << "!(a == b) || !(g != 5) is not equivalent to"
 << " !((a == b) && (g != 5))" << endl;

 cout << endl;
 } while ( !( g != 5 ) ); 

 } while ( !( a == b ) ); 

 cout << endl << endl;

 
 x = 7; 
 cout << "PART C" << endl << endl;

 
 do
 {
 x++; 
 y = 6; 


 do
 {
 y--; 

 
 cout << "( x <= 8 ): " << ( x <= 8 ) << endl;
cout << "( y > 4 ): " << ( y > 4 ) << endl;

 
 if ( !( ( x <= 8 ) && ( y > 4 ) ) ==
 ( !( x <= 8 ) || !( y > 4 ) ) )
 cout << "!((x <= 8) && (y > 4)) is equivalent to"
 << " !(x <= 8) || !(y > 4)" << endl;
 else
 cout << "!((x <= 8) && (y > 4)) is not equivalent to"
 << " !(x <= 8) || !(y > 4)" << endl;

 cout << endl;
 } while ( ( y > 4 ) ); 

 } while ( ( x <= 8 ) );

 cout << endl << endl;


 int i = 6;
 int j; 
 cout << "PART D" << endl << endl;

 
 do
 {
 i--; 
 j = 5; 

 
 do
 {
 j++; 

 // display current assignments
 cout << "( i > 4 ): " << ( i > 4 ) << endl;
 cout << "( j <= 6 ): " << ( j <= 6 ) << endl;

 // test for validity
 if ( !( ( i > 4 ) || ( j <= 6 ) ) ==
 ( !( i > 4 ) && !( j <= 6 ) ) )
 cout << "!((i > 4) || (j <= 6)) is equivalent to"
 << " !(i > 4) && !(j <= 6)" << endl;
 else
 cout << "!((i > 4) || (j <= 6)) is not equivalent to"
 << " !(i > 4) && !(j <= 6)" << endl;
 cout << endl;
 } while ( ( j <= 6 ) ); 

 } while ( ( i > 4 ) ); 
 } 