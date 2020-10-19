#include<iostream>
using namespace std;

const int N = 3;

template <typename Y>
void trans(Y A[N][N]){
    Y s;
    for(int i = 0; i < N; i++)
        for(int j = i + 1; j < N; j++)
        {
            s = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = s;
        }
}

template <typename T>
void show(T A[N][N])
{
    for(int i=0; i < N; i++)
    {
        for(int j=0; j < N; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int in[N][N] =
            {
                    { 1, 2, 3 },
                    { 6, 7, 8 },
                    { 11, 12, 13 }
            };

    double du[N][N] =
            {
                    { 3.5, 3.8, 6.9 },
                    { 1.4, 1.6, 4.1 },
                    { 61.2, 21.2, 14.1 }
            };

    char ch[N][N] =
            {
                    { 's', 'd', 'd' },
                    { 'o', 'o', 'i' },
                    { 's', 'g', 'e' }
            };

    show(ch);
    trans(ch);
    cout << "res:" << endl;
    show(ch);

    show(du);
    trans(du);
    cout << "res:" << endl;
    show(du);

    show(in);
    trans(in);
    cout << "res:" << endl;
    show(in);
    return 0;
}
