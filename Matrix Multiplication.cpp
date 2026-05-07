#include <iostream>
using namespace std;
void GetValue(int a[3][3]) {
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++) cin >> a[i][j];
}
void ComputeAxA(int a[3][3], int b[3][3], int res[3][3]) {
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++) {
            res[i][j] = 0;
            for(int k=0; k<3; k++) res[i][j] += a[i][k] * b[k][j];
        }
}
void PrintArray(int res[3][3]) {
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) cout << res[i][j] << " ";
        cout << endl;
    }
}
int main() {
    int m1[3][3], m2[3][3], res[3][3];
    GetValue(m1); GetValue(m2);
    ComputeAxA(m1, m2, res);
    PrintArray(res);
    return 0;
}
