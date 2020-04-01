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
    void inputMatrix(){
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cin >> calcMatrix[i][j];
            }
        }
        cout << "input success\n";
    }
    void consoleOut(){
        for(int itr=0;itr<row;itr++){
            for(int secitr=0;secitr<col;secitr++){
                printf("%6d",calcMatrix[itr][secitr]);
            }
            cout << "\n\n";
        }
    }
};
int columnCount,rowCount;
int main (){
    cin >> columnCount;
    cin >> rowCount;
    Matrix firstMatrix(columnCount,rowCount), secondMatrix(columnCount,rowCount), answerMatrix(columnCount,rowCount);
    firstMatrix.inputMatrix();
    secondMatrix.inputMatrix();
    answerMatrix.consoleOut();
}

