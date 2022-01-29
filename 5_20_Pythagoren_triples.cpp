// NAME:SUDIPTA SOTRA DHAR , ID: 202169990264 , COUNTRY: BANGLADESH.
#include <iostream>
#include <math.h>
using namespace std;


int main(int argc, char ** argv)
{
	cout << "pythagorean triples" << endl;
	
	for(int side1 = 1; side1 < 500; side1 ++)
	{
		for(int side2 = 1; side2 < 500; side2 ++)
		{
			for(int hypotenuse = 1; hypotenuse < 500; hypotenuse ++)
			{
				
				if(pow(side1,2) + pow(side2,2) == pow(hypotenuse,2) && pow(hypotenuse,2) <= 500)
				{
					cout << side1 << " + " << side2  << " = "  << hypotenuse << endl;

				}
			}
		}	
	}	
	return 0;
}