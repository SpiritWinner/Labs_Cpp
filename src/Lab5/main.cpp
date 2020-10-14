#include "iostream"
using namespace std;
class Matrix;

class Vector
{
private:
    int vector[3] = {3, 5, 8};
public:
    Vector(int vector[])
    {
        this->vector;
    }

    friend int[] Multiplication(Vector &vec, Matrix &mat);

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

    friend int[] Multiplication(Vector &vec, Matrix &mat);
};

int[] Multiplication(Vector &vec, Matrix &mat)
{
    int out[100];
    for (int i = 0; i < sizeof(mat)/sizeof(int); i++)
    {
        out[i] = 0;
        for (int j = 0; j < sizeof(mat)/sizeof(int); j++)
           out[i] += mat.matrix[i][j] * vec.vector[j];
    }

}