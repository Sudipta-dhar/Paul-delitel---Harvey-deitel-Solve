// NAME:SUDIPTA SOTRA DHAR , ID: 202169990264 , COUNTRY: BANGLADESH.
#include <iostream>
#include <string>
using namespace std;

struct birthday{ 
       int month;
       int day;
       int year;
};

struct H_record{ //Struct to store the record of a patient
       string F_name;
       string L_name;
       string Gender;
       float height;
       float weight;
       birthday br;
};
void getData(H_record &);
int ageInYears(int); 
void heartRate(H_record, int &, int &, int &, float &, int); 
void print(H_record, int, int, int, int, float); 
void BMI_Chart(); 
void getData(H_record &p) 
{
       char s;
       cout << "****HEALTH PROFILE****" << endl;
       cout << "Enter your first name :";
       getline(cin, p.F_name);

       cout << "Enter your Last name :";
       getline(cin, p.L_name);
       cout << "Enter your Date of Birth (d /m /y) :";
       cin >> p.br.day >> s >> p.br.month >> s >> p.br.year;
       if ((p.br.day <0 || p.br.day >31) && (p.br.month <0 || p.br.month >12))
       {
              cout << "Invalid Date of Birth Entered" << endl << "Again Enter your Date of Birth (d /m /y) :";
              cin >> p.br.day >> s >> p.br.month >> s >> p.br.year;
       }
       cout << "Enter your Height (Inches) :";
       cin >> p.height;
       cout << "Enter your Weight (Pounds) :";
       cin >> p.weight;


}
int ageInYears(int y) 
{
       int c_y, age;

       cout << "Enter the current year :";
       cin >> c_y;

       age = (c_y - y);
       return age;

}
void heartRate(H_record p, int & M, int & T1, int & T2, float & bmi, int ag)
{
       M = 220 - ag; 
       T1 = M*0.50; 
       T2 = M*0.85; 
       bmi = ((p.weight) * 703) / ((p.height)*(p.height)); //calculatesthe BMI
}
void print(H_record p, int age, int max, int t1, int t2, float bmi) //printing the record of a patient
{
       cout << endl << "First Name :" << p.F_name << endl;
       cout << "Last Name :" << p.L_name << endl;
       cout << "Age :" << age << endl;
       cout << "Weight :" << p.weight << endl;
       cout << "Height :" << p.height << endl;
       cout << "Date :" << p.br.day << "/" << p.br.day << "/" << p.br.year << endl;
       cout << "BMI :" << bmi << endl;
       cout << " Maximum  heart  rate :" << max << endl;
       cout << "Target-heart-rate range :" << t1 << " to " << t2 << endl;
}
void BMI_Chart()
{
       cout << endl << "Welcome to Computerize Health Care" << endl;
       cout << "BMI Values" << endl;
       cout << "Under Weight : " << "less than 18.5" << endl;
       cout << "Normal :       " << "between 18.5 and 24.9" << endl;
       cout << "Overweight :   " << "between 25 and 29.9" << endl;
       cout << "Obese :        " << "30 or greater" << endl;
       cout << "##################################################" << endl;

}
int main()

{
       int age, M_h, T_h1, T_h2;
       float BMI;
       H_record p1;
       getData(p1);
       age = ageInYears(p1.br.year);
       heartRate(p1, M_h, T_h1, T_h2, BMI, age); 
       print(p1, age, M_h, T_h1, T_h2, BMI);
       BMI_Chart();
       system("pause");
       return 0;
}
