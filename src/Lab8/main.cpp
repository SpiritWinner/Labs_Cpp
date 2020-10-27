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

    ofstream outf("../src/Lab8/Res.txt");

    if (!outf)
    {
        cout << "Could not ve opened fail" << endl;
        exit(1);
    }
    outf.fill('@');
    outf << setw(15) << fixed << setprecision(3) << res << endl;
    outf.close();
    return 0;
}