// NAME:SUDIPTA SOTRA DHAR , ID: 202169990264 , COUNTRY: BANGLADESH.
#include <iostream> 
#include <iomanip>
#include <cstdlib>
#include <ctime> 
 
 using namespace std;
const int SIZE = 8;
bool validMove( int, int, const int [][ SIZE ] );
void printBoard( const int [][ SIZE ] );


int main()
{
int currentRow, currentColumn, moveType, moveNumber = 0,
testRow, testColumn, board[ SIZE ][ SIZE ] = { 0 },
horizontal[ SIZE ] = { 2, 1, -1, -2, -2, -1, 1, 2 },vertical[ SIZE ] = { -1, -2, -2, -1, 1, 2, 2, 1 };
bool done, goodMove;
 srand( time( 0 ) );

currentRow = rand() % SIZE;
currentColumn = rand() % SIZE;
board[ currentRow ][ currentColumn ] = ++moveNumber;
done = false;

 while ( !done ) {
moveType = rand() % SIZE;
testRow = currentRow + vertical[ moveType ];
testColumn = currentColumn + horizontal[ moveType ];
goodMove = validMove( testRow, testColumn, board );

if ( goodMove ) {
currentRow = testRow;
currentColumn = testColumn;
board[ currentRow ][ currentColumn ] = ++moveNumber;
}
else {

for ( int count = 0; count < SIZE - 1 && !goodMove; ++count ) {
moveType = ++moveType % SIZE;
testRow = currentRow + vertical[ moveType ];
testColumn = currentColumn + horizontal[ moveType ];
goodMove = validMove( testRow, testColumn, board );
if ( goodMove ) {
currentRow = testRow;
currentColumn = testColumn;
board[ currentRow ][ currentColumn ] = ++moveNumber;
}
}

if ( !goodMove )
done = true;
}

if ( moveNumber == 64 )
done = true;
}

cout << "The tour has ended with " << moveNumber << " moves.\n";
 
if ( moveNumber == 64 )
cout << "This was a full tour!\n";
else
cout << "This was not a full tour.\n";
 
 cout << "The board for this random test was:\n\n";
printBoard( board );
 return 0;
}

 bool validMove( int row, int column, const int workBoard[][ SIZE ] )
 {
 // NOTE: This test stops as soon as it becomes false
return ( row >= 0 && row < SIZE && column >= 0 && column < SIZE
 && workBoard[ row ][ column ] == 0 );
 }

void printBoard( const int board[][ SIZE ] )
 {
 cout << " 0 1 2 3 4 5 6 7\n";

for ( int row = 0; row < SIZE; ++row ) {
cout << row;

for ( int col = 0; col < SIZE; ++col )
cout << setw( 3 ) << board[ row ][ col ];

cout << '\n';
} 
cout << endl;
}
