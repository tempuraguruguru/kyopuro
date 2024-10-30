#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    vector<int> X(3), Y(3);
    for(int i = 0; i < 3; i++) cin >> X[i] >> Y[i];

    int a2 = (X[1] - X[0])*(X[1] - X[0]) + (Y[1] - Y[0])*(Y[1] - Y[0]);
    int b2 = (X[2] - X[1])*(X[2] - X[1]) + (Y[2] - Y[1])*(Y[2] - Y[1]);
    int c2 = (X[0] - X[2])*(X[0] - X[2]) + (Y[0] - Y[2])*(Y[0] - Y[2]);

    if(a2 + b2 == c2 || b2 + c2 == a2 || c2 + a2 == b2){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}