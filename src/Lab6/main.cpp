#include "iostream"
using namespace std;

class MyInt
{
private:
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

    bool operator ! ()
    {
        return (value % 2 == 0);
    }

    MyInt& operator + (int num)
    {
        this->value += num;
        return *this;
    }

    friend MyInt& operator -- (MyInt &myInt);
    friend bool operator == (MyInt &myInt1, MyInt &myInt2);
};

bool operator == (MyInt &myInt1, MyInt &myInt2)
{
    return myInt1.value == myInt2.value;
}

MyInt& operator -- (MyInt &myInt)
{
    myInt.value -= 3;
    return myInt;
}

int main()
{
    MyInt myInt(22);
    cout << !myInt << endl;
    MyInt myInt2 = --myInt;
    myInt.print();
    MyInt myInt1 = myInt + 7;
    myInt.print();
    cout << (myInt == myInt2) << endl;
    return 0;
}
