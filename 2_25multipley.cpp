// NAME:SUDIPTA SOTRA DHAR , ID: 202169990264 , COUNTRY: BANGLADESH.
#include <iostream>
 using namespace std;

 int main()
 {
 int number1;
 int number2;

cout << "Enter two integers: ";
 cin >> number1 >> number2;

 // using modulus operator
 if ( number1 % number2 == 0 )
 cout << number1 << " is a multiple of " << number2 << endl;

 if ( number1 % number2 != 0 )
 cout << number1 << " is not a multiple of " << number2 << endl;

 return 0;
 } 