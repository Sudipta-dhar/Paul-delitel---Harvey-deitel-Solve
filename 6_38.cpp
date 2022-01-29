// NAME:SUDIPTA SOTRA DHAR , ID: 202169990264 , COUNTRY: BANGLADESH
#include <iostream>

using namespace std;

void towers( int, int, int, int );

int main()
 {
int nDisks;
 
cout << "Enter the starting number of disks: ";
cin >> nDisks;
towers( nDisks, 1, 3, 2 );

return 0;
} 
void towers( int disks, int start, int end, int temp )
{
 if ( disks == 1 ) {
 cout << start << " --> " << end << '\n';
return;
 } 

// move disks - 1 disks from start to temp
towers( disks - 1, start, temp, end );
// move last disk from start to end
 cout << start << " --> " << end << '\n';
 // move disks - 1 disks from temp to end
towers( disks - 1, temp, end, start );
} 
