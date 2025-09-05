#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<int> > Matrix;
typedef vector<int> Vector;

/**
 * @brief Multiplies two matrices.
 *
 * This function takes two matrices, `a` and `b`, and returns their product.
 * The number of columns in matrix `a` must be equal to the number of rows
 * in matrix `b`.
 *
 * @param a The first matrix (left-hand side).
 * @param b The second matrix (right-hand side).
 * @return Matrix The resulting matrix product.
 */
Matrix mult(Matrix a, Matrix b){
    Matrix c(a.size(), Vector (b[0].size()));
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