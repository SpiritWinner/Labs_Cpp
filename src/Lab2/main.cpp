#include <iostream>
#include <string>

using namespace std;

class Figura
{
protected:
    string name;
public:
    Figura(string name)
    {
        this->name = name;
    }

    Figura()
    {}

    void print()
    {
        cout << "Figura ";
        cout << name << endl;
    }

    void input()
    {
        cout << "Enter name";
        cin >> name;
    }
};

class Rectangle : public Figura
{
protected:
    float width;
    float length;

public:
    Rectangle()
    {

    }

    Rectangle(string name, float width, float length)
            : Figura(name), width(width), length(length)
    {
    }

    float getArea()
    {
        return width * length;
    }

    void print()
    {
        cout << "Rectangle:" << name << endl;
        cout << "Width:" << width << endl;
        cout << "Length:" << length << endl;
        cout << "Area rectangle:" << getArea() << endl;
    }

    void input()
    {
        cout << "Enter width =";
        cin >> width;
        cout << "Enter length =";
        cin >> length;
    }

private:
    float area;
};

int main()
{
    Figura f;
    f.input();
    f.print();
    cout << "----------------------------------" << endl;
    Rectangle figur1;
    figur1.input();
    figur1.print();
}

