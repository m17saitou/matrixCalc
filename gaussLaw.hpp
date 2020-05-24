#ifndef GAUSSLAW_HPP
#define GAUSSLAW_HPP

#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <numeric>
using namespace std;

class GaussLawCalc{
    int col;
    int row;
    vector<vector<double>> calcingMatrix;
    vector<double> factorVec;
    vector<vector<vector<double>>> progressLogging;
    vector<double> factorVecLogging;
    GaussLawCalc(int cl, int rw){
        col = cl;
        row = rw;
        calcingMatrix.resize(rw);
        for(int i=0;i<rw;i++){
            calcingMatrix[i].resize(cl);
            for(int j : calcingMatrix[i])calcingMatrix[i][j] = 0;
        }
        progressLogging.push_back(calcingMatrix);
    }
};

#endif //GAUSSLAW_HPP