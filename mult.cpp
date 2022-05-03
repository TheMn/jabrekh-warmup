#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<int> > Matrix;
typedef vector<int> Vector;

Matrix mult(Matrix a, Matrix b){
    Matrix c(a.size(), Vector (b[0].size()));
    // c.resize(a.size()*b[0].size());
    if(a[0].size() == b.size())
        for(int k=0; k<a[0].size(); k++){
            for(int i=0; i<a.size(); i++){
                for(int j=0; j<b[0].size(); j++){
                    c[i][j] += a[i][k]*b[k][j];
                }
            }
        } 
    return c;
}

int main(){
    Matrix a = {{1,2,3},{4,5,6}};
    Matrix b = {{1},{0},{0}};
    Matrix res = mult(a, b);
    for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[0].size(); j++)
            cout << res[i][j] << ' ';
        cout << endl;
    }
}