 // NAME:SUDIPTA SOTRA DHAR , ID: 202169990264 , COUNTRY: BANGLADESH.
 #include <iostream>
 using  namespace std;

int main()
{
int side = 8, row;

while ( side-- > 0 ) {
row = 8;

if ( side % 2 == 0 )
cout << ' ';

 while ( row-- > 0 )
 cout << "* ";

 cout << '\n';
 }

cout << endl;

return 0;
}