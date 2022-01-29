// NAME:SUDIPTA SOTRA DHAR , ID: 202169990264 , COUNTRY: BANGLADESH
#include <iostream>

 using std::cout; 
 using std::endl; 

 int MAX=40;
 int fibonacci( int );

 int main()
 {
 for ( int loop = 0; loop <= MAX; ++loop )
 cout << "fibonacci(" << loop << ") = " << fibonacci( loop )
 << "\n";

 cout << endl;
 return 0;
}

 int fibonacci( int n )
 {
 int fib[ 23 ];

 fib[ 0 ] = 0;
 fib[ 1 ] = 1;

for ( int j = 2; j <= n; ++j )
 fib[ j ] = fib[ j - 1 ] + fib[ j - 2 ];

 return fib[ n ];
}
