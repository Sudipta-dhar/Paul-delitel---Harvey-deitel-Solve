// NAME:SUDIPTA SOTRA DHAR , ID: 202169990264 , COUNTRY: BANGLADESH.
#include <iostream>
#include <string>
using namespace std;
class Date
{
public:
    Date(int, int, int);
    void setday(int);
    int getday();
    void setmonth(int);
    int getmonth();
    void setyear(int);
    int getyear();
    void displaydate();
private:
    int day, month, year;
};
Date::Date(int d, int m, int y)
{
    day = d;
    year = y;
    if (m >= 1 && m <= 12)
        month = m;
    else
    {
        month = 1;
    }
}
void Date::setday(int d)
{
    day = d;
}
void Date::setmonth(int m)
{
    if (m >= 1 && m <= 12)
        month = m;
    else
        month = 1;
}
void Date::setyear(int y)
{
    year = y;
}

int Date::getday()
{
    return day;
}

int Date::getmonth()
{
    return month;

}
int Date::getyear()
{
    return year;
}

void Date::displaydate()
{
    cout << day << "/" << month << "/" << year;
}



int main()
{
    Date d1(9, 10, 2021);
    Date d2(9, 24, 2021);
    cout << "\nthe date1 is";
    d1.displaydate();
    cout << "\nthe date2 is";
    d2.displaydate();
}
