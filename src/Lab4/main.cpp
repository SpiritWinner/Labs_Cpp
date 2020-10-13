#include <iostream>
using namespace std;

class Youth
{
protected:
    string fullName;
    string yearBorn;

public:
    Youth(string fullName, string yearBorn)
        : fullName(fullName), yearBorn(yearBorn)
    {
    }

    void print()
    {
        cout << "Full Name: " << fullName << endl;
        cout << "Year Born: " << yearBorn << endl;
    }

    string getFullName() { return fullName; }
    string getYearBorn() { return yearBorn; }
};

class Learner
{
protected:
    int numberZ;
    int course;
    float avgMark;

public:
    Learner(int number, int course, float avgMark)
        : numberZ(number), course(course), avgMark(avgMark)
    {
    }

    void print()
    {
        cout << "Number gradeBook: " << numberZ << endl;
        cout << "Course: " << course << endl;
        cout << "Average score: " << avgMark << endl;
    }


    int getNumberZ() { return numberZ; }
    int getCourse() { return course; }
    float getAvgMark() { return avgMark; }
};

class Student: public Youth, public Learner
{
public:
    Student(string fullName, string yearBorn, int number, int course, float avgMark)
        : Youth(fullName, yearBorn), Learner(number, course, avgMark)
    {
    }
    void print();
};

void Student::print()
{
    Youth::print();
    Learner::print();
}

int main()
{
   auto* std = new Student("Sadriev.A.H.", "17.12.2001", 23451, 2, 74.3);
   std->print();
   delete std;
   return 0;
}
