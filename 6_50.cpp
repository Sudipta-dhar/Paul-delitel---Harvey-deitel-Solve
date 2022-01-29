 // NAME:SUDIPTA SOTRA DHAR , ID: 202169990264 , COUNTRY: BANGLADESH
 #include <iostream>

 using  namespace std ;


int tripleByValue( int );
void tripleByReference( int & );

 int tripleByValue( int valueCopy )
 {
 return valueCopy *= 3;
 }

 void tripleByReference( int &aliasRef )
 {
 aliasRef *= 3;
 }
int main()
{
int value, &valueRef = value;

cout << "Enter an integer: ";
 cin >> value;

 cout << "\nValue before call to tripleByValue() is: "
 << value << "\nValue returned from tripleByValue() is: "
 << tripleByValue( value ) 
 << "\nValue (in main) after tripleByValue() is: " << value
 << "\n\nValue before call to tripleByReference() is: "
 << value << '\n';

 tripleByReference( valueRef );

 cout << "Value (in main) after call to tripleByReference() is: "
 << value << endl;

 return 0;
 }
