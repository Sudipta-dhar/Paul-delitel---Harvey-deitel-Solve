// NAME:SUDIPTA SOTRA DHAR , ID: 202169990264 , COUNTRY: BANGLADESH.
#include<iostream>
using namespace std;
int main()
{
//declare
int x;
int a;
int b;
int l;
int m;
//ask
cout << "Please enter the 5 digit number: ";
cin >> x;
//calculate digits
a = x / 10000;
b = x % 10;
l = (x / 1000) %10;
m = (x % 100) /10;


if ( (a == b) && (l == m) )
 
cout << "Entered number is palindrome! " ;

else

    cout << "Entered number is NOT palindrome! " ;
cout << "\n";

system("PAUSE");
return main() ;
}