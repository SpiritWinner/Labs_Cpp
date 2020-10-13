#include <iostream>

using namespace std;

class Student
{
    string fullName;
    int group;
    float marks[3]{};
public:
    Student()
    {
        fullName = "";
        group = 0;
        float marks[] = {0.0, 0.0, 0.0,};
    }

    Student(string studName, int studGroup, float studMarks[])
    {
        fullName = studName;
        group = studGroup;
        for (int i = 0; i < 3; i++)
        {
            marks[i] = studMarks[i];
        }
    }

    ~Student()
    {
        cout << "Distruction work" << endl;
    }

    void setFullName(string name)
    {
        fullName = name;
    }
    string getFullName()
    {
        return fullName;
    }

    void setGroup(int studGroup)
    {
        group = studGroup;
    }

    int getGroup()
    {
        return group;
    }

    void setMarks(float* mark)
    {
        for (int i = 0; i < 3; i++)
        {
            marks[i] = mark[i];
        }
    }

    void getMarks()
    {
        cout << " Mark:";
        for (int j = 0; j < 3; j++)
        {
            cout << marks[j];
            if (j != 2) cout << ", ";
        }
        cout << endl;
    }

    float getAvgMark()
    {
        float sum = 0.0;
        for (float mark : marks)
        {
            sum += mark;
        }
        return sum/3.0;
    }
};

void print(Student* st)
{
    cout << "FIO: " << st->getFullName();
    cout << " Group: " << st->getGroup();
    st->getMarks();
}

int main ()
{
    float mark[] = {4.0, 4.0, 5.0};
    Student* st1 = new Student("Markov", 13, mark);
    Student* st2 = new Student();
    st2->setFullName("Asdey");
    st2->setGroup(13);
    float mark2[] = {3.0, 3.0, 4.0};
    st2->setMarks(mark2);

    print(st1);
    print(st2);
    float avg = st1->getAvgMark();
    cout << "Student avg mark, more 4.0\n";
    if (avg > 4.0)
    {
        cout << "Student\t Number group\n";
        cout << st1->getFullName() << "\t\t" << st1->getGroup() << "\t";
        cout << endl;
    } else
    {
        cout << "There aren't any" << endl;
    }

    system("pause");
}
