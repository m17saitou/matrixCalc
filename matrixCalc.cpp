#include <bits/stdc++.h>
using namespace std;
class Matrix{
    public :
    vector<vector<int>> calcMatrix;
    unsigned int col;
    unsigned int row;
    Matrix(int co,int ro){
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
    void makeMatrix(){

    }
};
int columnCount,rowCount;
int main (){
    cin >> columnCount;
    cin >> rowCount;
    Matrix firstMatrix(columnCount,rowCount), secondMatrix(columnCount,rowCount), answerMatrix(columnCount,rowCount);
    for(int itr=0;itr<rowCount;itr++){
        for(int secitr=0;secitr<columnCount;secitr++){
            printf("%6d",answerMatrix.calcMatrix[itr][secitr]);
        }
        cout << "\n\n";
    }
}

