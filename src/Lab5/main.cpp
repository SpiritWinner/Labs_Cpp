#include "iostream"
using namespace std;
class Matrix;

class Vector
{
private:
    int size;
    int *vec;
public:
    Vector (int size)
    {
        this->size = size;
    }

    void inout()
    {
        vec = new int[size];
        for (int i = 0; i < size; i++)
        {
            cout << "Enter " << i+1 << " number";
            cin >> vec[i];
        }
    }

    void print()
    {
        for (int number = 0; number < size; number++)
            cout << vec[number] << " ";
    }

    friend void Multiply(Vector &vec, Matrix &mat);
};

class Matrix
{
private:
    int **arr;
    int rows;
    int columns;
public:
    Matrix(int rows, int columns)
    {
        this->rows = rows;
        this->columns = columns;
    }

    void inout()
    {
        arr = new int*[rows];
        for (int i = 0; i < rows; i++)
        {
            arr[i]  = new int[columns];
        }

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                cout << "Enter A[" << i << ' ' << j << "]:";
                cin >> arr[i][j];
            }
        }
    }

    void print()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
    }

    friend void Multiply(Vector &vec, Matrix &mat);
};

void  Multiply(Vector &vec, Matrix &mat)
{
    int out[vec.size];
    for (int i = 0; i < vec.size; i++)
    {
        int temp = 0;
        for (int j = 0; j < mat.rows; j++) {
            temp += mat.arr[i][j] * vec.vec[j];
        }
        out[i] = temp;
    }

    cout << "Result: " << endl;
    for (int number = 0; number < vec.size; number++)
            cout << out[number] << " ";
}

int main()
{
    Vector vector(3);
    Matrix matrix(3, 3);
    vector.inout();
    matrix.inout();
    Multiply(vector, matrix);
    return 0;
}