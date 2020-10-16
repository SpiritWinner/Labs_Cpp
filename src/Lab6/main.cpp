#include "iostream"

using namespace std;

class MyInt
{
public:
    int value;
public:
    MyInt(int val)
    {
        this->value = val;
    }

    void print()
    {
        cout << value << endl;
    }

    bool operator! ()
    {
        return (value % 2 == 0);
    }

    friend int operator -- (MyInt &myInt);
    friend bool operator == (MyInt &myInt1, MyInt &myInt2);
};

bool operator == (MyInt &myInt1, MyInt &myInt2)
{
    return myInt1.value == myInt2.value;
}

MyInt operator + (MyInt &myInt, int num)
{
    return MyInt(myInt.value + num);
}

int operator -- (MyInt &myInt)
{
    return (myInt.value - 3);
}

int main()
{
    MyInt myInt(22);
    cout << !myInt << endl;
    cout << --myInt << endl;
    MyInt myInt1 = myInt + 7;
    myInt1.print();
    cout << (myInt == myInt1) << endl;

    return 0;
}
