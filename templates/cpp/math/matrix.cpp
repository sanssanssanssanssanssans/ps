#include <vector>
using namespace std;

const int mod = 1000000007;
struct matrix {
    int n,m;
    vector<vector<int>> arr;
    matrix(int n, int m, int val = 0) : n(n), m(m), arr(n, vector<int>(m, val)) {}
    static matrix identity(int n) {
        matrix I(n, n);
        for (int i=0; i<n; i++) I.arr[i][i] = 1;
        return I;
    }
    vector<int>&operator[](int i){return arr[i];}
    const vector<int>&operator[](int i)const{return arr[i];}
    matrix operator* (const matrix&o) const {
        matrix result(n, o.m);
        for(int i=0; i<n; i++) for (int k=0; k<m; k++) if(arr[i][k]) for (int j=0; j<o.m; j++) result.arr[i][j] = (result.arr[i][j] + arr[i][k] * o.arr[k][j]) % mod;
        return result;
    }
    matrix pow(int exp) {
        matrix base = *this, result = identity(n);
        while(exp) {
            if (exp & 1) result = result * base;
            base = base * base;
            exp >>= 1;
        }
        return result;
    }
};