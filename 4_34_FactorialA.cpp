// NAME:SUDIPTA SOTRA DHAR , ID: 202169990264 , COUNTRY: BANGLADESH.
#include <iostream>

using namespace std;

int main()
 {
 int n = 0, number;
  unsigned factorial = 1;

 do {
cout << "Enter a positive integer: ";
 cin >> number;
 }
 
  while ( number < 0 );

 while ( n++ < number )
 factorial *= n == 0 ? 1 : n;

 cout << number << "! is " << factorial << endl;

 return 0;
 }