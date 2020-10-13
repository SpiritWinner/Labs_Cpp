#include <iostream>
#include <string>

using namespace std;

struct STUDENT
{
    string sName;
    int group;
    int mark[3];
};

void input(STUDENT* st, int N)
{
    for (int i = 0; i < N; i++)
    {
        cout <<"Enter full name:";
        cin >> st[i].sName;
        cout <<"Enter number group:";
        cin >> st[i].group;
        cout <<"Enter marks:\n";
        for(int j = 0; j < 3; j++)
        {
            cout << j + 1 << ":";
            cin >> st[i].mark[j];
        }
        cout << endl;
    }
    cout << endl;
}

void avgMark(STUDENT* st, int N) {
    double sum = 0;
    int count = 0;
    cout << "Student avg mark, more 4.0\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
            sum += st[i].mark[j];
        if (sum / 3.0 > 4.0)
        {
            cout << "Student\t Number group\n";
            cout << st[i].sName << "\t\t" << st[i].group << "\t";
            cout << endl;
        }
        else
            count++;
        sum = 0;
    }
    if (count == N)
        cout << "There aren't any" << endl;

}

void print(STUDENT* st, int N)
{
    for (int i(0); i < N; ++i)
    {
        cout <<"FIO:" << st[i].sName;
        cout <<" Group:" << st[i].group;
        cout <<" Mark:";
        for (int j(0); j < 3; ++j)
        {
            cout << st[i].mark[j];
            if (j != 2) cout << ", ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Number student:";
    cin >> n;

    STUDENT* st = new STUDENT[n];
    input(st, n);
    print(st, n);
    avgMark(st, n);
    system("pause");
    return 0;
}