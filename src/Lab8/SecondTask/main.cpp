#include <iostream>
#include <cmath>

using namespace std;

void res(double x)
{
    double y;
    if (x <= 0.0)
    {
        throw x;
    }
    y = 14 * pow(log(x), 2) + pow(x, 2);
    cout << "Answer: " << y;
}

int main()
{
    try
    {
        res(0);
    }
    catch (const double ex)
    {
        cerr << "Your x = " << ex << ", x must be > 0";
    }
}