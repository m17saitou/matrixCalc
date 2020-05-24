#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <numeric>
#include "matrix.hpp"
using namespace std;

int main (){
    int columnCount,rowCount;
    cin >> rowCount;
    cin >> columnCount;
    Matrix firstMatrix(rowCount,columnCount);
    firstMatrix.inputMatrix();
    cin >> rowCount;
    cin >> columnCount;
    Matrix secondMatrix(rowCount,columnCount);
    secondMatrix.inputMatrix();
    Matrix answerMatrix(firstMatrix.row,secondMatrix.col);
    answerMatrix.calcMatrix = Matrix::multiplication(firstMatrix,secondMatrix);
    answerMatrix.consoleOut();
}

/*
input file format

row column
matrix0-0 matrix0-1 ...
matrix1-0 matrix1-1 ...
...

*/