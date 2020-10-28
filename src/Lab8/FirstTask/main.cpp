#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    double number, rate;

    cout << "Enter number:";
    cin >> number;
    if (!cin)
    {
        cout << "Incorrect input" << endl;
        cin.clear();
    }
    cin.ignore(100, '\n');

    cout << "Enter rate:";
    cin >> rate;
    if (!cin)
    {
        cout << "Incorrect input" << endl;
        cin.clear();
    }
    cin.ignore(100, '\n');
    double res = pow(number, rate);

    ofstream fOut;
    fOut.open("../src/Lab8/FirstTask/Res.txt");

    if (!fOut)
    {
        cout << "Could not be opened fail" << endl;
        exit(1);
    }
    fOut.fill('@');
    fOut << setw(15) << fixed << setprecision(3) << res << endl;
    fOut.close();
    return 0;
}