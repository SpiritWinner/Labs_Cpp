#include "iostream"
using namespace std;
class Matrix;
/*class Matrix;

class Vector
{
private:
    int vector[3] = {3, 5, 8};
public:
    Vector(int vector[])
    {
        this->vector;
    }

    Vector()
    {
    }

    friend int* Multiplication(Vector &vec, Matrix &mat);

};

class Matrix
{
private:
    int matrix[3][3] = {{4, 5, 7}, {12, 7, 9}, {8, 5, 1}};
public:
    Matrix(int matrix[][3])
    {
        this->matrix;
    }

    Matrix()
    {
    }

    friend int* Multiplication(Vector &vec, Matrix &mat);
};

int* Multiplication(Vector &vec, Matrix &mat)
{
    int *out;
    for (int i = 0; i < sizeof(mat.matrix)/sizeof(mat.matrix[0]); i++)
    {
        out[i] = 0;
        for (int j = 0; j < sizeof(mat.matrix)/sizeof(mat.matrix[0]); j++)
           out[i] += mat.matrix[i][j] * vec.vector[j];
    }
    return out;
}


int main()
{
    Matrix matrix;
    Vector vector;
    for (auto number : Multiplication(vector, matrix))
        cout << number << ' ';
    return 0;
}*/

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
            cout << "Enter " << i+1 << "number" << endl;
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
    Matrix();

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


    for (int number = 0; number < vec.size; number++)
            cout << out[number] << " ";
}

int main()
{
    Vector vector(3);
    Matrix matrix(3, 3);
    vector.inout();
    matrix.inout();
    //vector.print();
    //matrix.print();
    Multiply(vector, matrix);
    return 0;
}