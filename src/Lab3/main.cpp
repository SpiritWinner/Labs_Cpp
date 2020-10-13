#include <iostream>
using namespace std;

class Figures
{
public:
    virtual void print() = 0;
    virtual float getArea() = 0;
};

class Rectangle : public Figures
{
protected:
    float width;
    float length;

public:
    Rectangle(float width, float length)
            : width(width), length(length)
    {
    }

    float getArea() override
    {
        return width * length;
    }

    void print() override
    {
        cout << "Rectangle:" << endl;
        cout << "Width:" << width << endl;
        cout << "Length:" << length << endl;
        cout << "Area:" << getArea() << endl;
    }
};

class Circle : public Figures
{
protected:
    float radius;
public:
    Circle(float radius)
            : radius(radius)
    {
    }

    void print() override
    {
        cout << "Circle:" << endl;
        cout << "Radius:" << radius << endl;
        cout << "Area:" << getArea() << endl;
    }

    float getArea() override
    {
        return  3.14 * radius * radius;
    }
};

class Draw
{
public:
    void print(Figures *figures)
    {
        figures->print();
    }
};

int main()
{
    Draw draw;
    Circle circle(8);
    Rectangle rectangle(12,14);

    draw.print(&rectangle);
    draw.print(&circle);
    return 0;
}


