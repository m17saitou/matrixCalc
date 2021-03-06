#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <numeric>
using namespace std;

class Matrix{
    public :
    vector<vector<int>> calcMatrix;
    unsigned int col;
    unsigned int row;
    Matrix(int ro,int co){
        Matrix::col = co;
        Matrix::row = ro;
        calcMatrix.resize(row);
        for(int i=0;i<ro;i++){
            calcMatrix.at(i).resize(col);
            for(int j=0;j<co;j++){
                calcMatrix[i][j]=0;
            }
        }
    }
    void inputMatrix(){
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cin >> calcMatrix[i][j];
            }
        }
    }
    void consoleOut(){
        for(int itr=0;itr<row;itr++){
            for(int secitr=0;secitr<col;secitr++){
                printf("%8d",calcMatrix[itr][secitr]);
            }
            cout << "\n\n";
        }
    }
    static vector<vector<int>> multiplication(Matrix first,Matrix second){
        if(first.row != second.col)throw runtime_error("Not correct matrix type!!");
        vector<vector<int>> tmpVector;
        tmpVector.resize(first.row);
        int cnt = first.col;
        for(int i=0;i<first.row;i++){
            tmpVector.at(i).resize(second.col);
            for(int j=0;j<second.col;j++){
                tmpVector[i][j]=Matrix::multiplicationElement(i,j,cnt,first,second);
            }
        }
        return tmpVector;
    }
    static int multiplicationElement(int ro, int co, int count, Matrix fir, Matrix sec){
        vector<int> addtion;
        for(int i=0;i<count;i++){
            addtion.push_back(fir.calcMatrix[ro][i]*sec.calcMatrix[i][co]);
        }
        return accumulate(addtion.begin(),addtion.end(),0);
    }

    ~Matrix(){
        calcMatrix.clear();
    }
};

#endif //MATRIX_HPP