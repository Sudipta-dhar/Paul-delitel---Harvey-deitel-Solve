// NAME:SUDIPTA SOTRA DHAR , ID: 202169990264 , COUNTRY: BANGLADESH.
#include <iostream> 
 using namespace std;

 int main()
 {
 int number1;
 int number2;
 int number3;
 int number4; 
 int number5; 
 int smallest; 
 int largest; 

 cout << "Enter five integers: "; 
 cin >> number1 >> number2 >> number3 >> number4 >> number5;

 largest = number1; 
 smallest = number1;

 if ( number2 > largest )
 largest = number2;

 if ( number3 > largest )
 largest = number3;

 if ( number4 > largest ) 
 largest = number4;

 if ( number5 > largest )
 largest = number5;

 if ( number2 < smallest )
 smallest = number2;
if ( number3 < smallest )
 smallest = number3;

 if ( number4 < smallest )
 smallest = number4;

 if ( number5 < smallest ) 
 smallest = number5; 

 cout << "Largest is " << largest
 << "\nSmallest is " << smallest << endl;
 } 