// NAME:SUDIPTA SOTRA DHAR , ID: 202169990264 , COUNTRY: BANGLADESH.
#include<iostream>
#include <string>
using namespace std;

class Invoice
{
public:
	Invoice(string, string, int, int);
	void setPartNumber(string);
	string getPartNumber();
	void setPartDescription(string);
	string getPartDescription();
	void setItemQuantity(int);
	int getItemQuantity();
	void setItemPrice(int);
	int getItemPrice();
	int getInvoiceAmount();
private:
	string partNumber;
	string partDescription;
	int itemQuantity;
	int itemPrice;
};
Invoice::Invoice(string number, string description, int quantity, int price)
{
	partNumber = number;
	partDescription = description;
	if (quantity > 0)
		itemQuantity = quantity;
	else
	{
		itemQuantity = 0;
		cout << "Initial quantity was invalid." << endl;
	}
	if (price > 0)
		itemPrice = price;
	else
	{
		itemPrice = 0;
		cout << "Initial price was invalid." << endl;
	}
}
void Invoice::setPartNumber(string number)
{

	partNumber = number;


}

void Invoice::setPartDescription(string description)
{
	partDescription = description;
}
void Invoice::setItemQuantity(int quantity)
{
	if (quantity > 0)
		itemQuantity = quantity;
	else
	{
		itemQuantity = 0;
		cout << "Initial quantity was invalid." << endl;
	}
}
void Invoice::setItemPrice(int price)
{
	if (price > 0)
		itemPrice = price;
	else
	{
		itemPrice = 0;
		cout << "Initial price was invalid." << endl;
	}
}
string Invoice::getPartNumber()
{
	return partNumber;
}
string Invoice::getPartDescription()
{
	return partDescription;
}
int Invoice::getItemQuantity()
{
	return itemQuantity;
}
int Invoice::getItemPrice()
{
	return itemPrice;
}
int Invoice::getInvoiceAmount()
{
	return itemQuantity * itemPrice;
}
int main()
{
	Invoice I1("A15", "Toshiba", 100, 500);
	Invoice I2("B80", "Lenovo", 20, 400);
	cout << "Invoice1's initial part number is: " << I1.getPartNumber() << "\nand part description is: " << I1.getPartDescription() << endl;
	cout << "quantity per item is: " << I1.getItemQuantity() << "\nprice per item is: " << I1.getItemPrice() << endl;
	cout << "Invoice1's total amount is: " << I1.getInvoiceAmount() << endl << endl;
	cout << "Invoice2's initial part number is: " << I2.getPartNumber() << "\nand part description is: " << I2.getPartDescription() << endl;
	cout << "quantity per item is: " << I2.getItemQuantity() << "\nprice per item is: " << I2.getItemPrice() << endl;
	cout << "Invoice2's total amount is: " << I2.getInvoiceAmount() << endl;
}