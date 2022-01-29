// NAME:SUDIPTA SOTRA DHAR , ID: 202169990264 , COUNTRY: BANGLADESH.
#include <iomanip>
#include <iostream>
using namespace std;

int main(int argc, const char *argv[]) {
    int toggle = 0;
    int limit = 1000;

    double pi = 4.0f;
    double divisor = 3.0f;

    cout << "Term" << setw(4) << "\tPI Approx" << endl;

    for (int i = 1; i <= limit; i++) {
        if (toggle == 0)
            pi -= (4.0f / divisor);
        else
            pi += (4.0f / divisor);

        
        toggle = (1 - toggle);

        divisor += 2;

        cout << i << setw(4) << "\t" << pi << endl;
    }
    return 0;
}