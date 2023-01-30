#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Matrix
{
    public:
    vector<vector<int>> a;
    Matrix()
    {}
    Matrix operator+(const  Matrix &o)
    {
        for(int i=0;i<a.size();++i)
        {
            for(int j=0;j<a[i].size();++j)
            {
                a[i][j] += o.a[i][j];
            }
        }
        return *this;
    }
};

