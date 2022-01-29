// NAME:SUDIPTA SOTRA DHAR , ID: 202169990264 , COUNTRY: BANGLADESH.
#include <iostream>
using namespace std;

int main()
{
  int paycode = 0;
	double weeklySalary;
	double hourlySalary;
	int hours;
	double grossSales;
	double payPerItem;
	int items;
	double totalPay;
	
	cout << "Enter paycode for next employee (-1 for exit): ";
	cin >> paycode;
	
	while (paycode != -1)
	{
		switch (paycode)
		{
			case 1:
				cout << "Enter weekly salary for this manager: ";
				cin >> weeklySalary;
				totalPay = weeklySalary;
				break;
			case 2:
				cout << "Enter hourly salary for this hourly worker: ";
				cin >> hourlySalary;
				cout << "Enter number of hours worked: ";
				cin >> hours;
				if (hours <= 40)
					totalPay = hours * hourlySalary;
				else
					totalPay = 40 * hourlySalary + (hours - 40) * hourlySalary * 1.5;
				break;
			case 3:
				cout << "Enter gross sales for this comission worker: ";
				cin >> grossSales;
				totalPay = 250 + grossSales * 0.057;
				break;
			case 4:
				cout << "Enter number of produced items for this pieceworker: ";
				cin >> items;
				cout << "Enter pay for each item: ";
				cin >> payPerItem;
				totalPay = items * payPerItem;
				break;
			default:
				cout << "Wrong input!" << endl;
				totalPay = 0;
				break;				
		}
		cout << "Total weekly pay is: " << totalPay << endl << endl;
		cout << "Enter paycode for next employee (-1 for exit): ";
		cin >> paycode;
	}
}